//
//  ByteArray.cpp
//  CPPSocket2Lua
//
//  Created by 孙少磊 on 13-2-27.
//
//

#include "ByteArray.h"

using namespace std;

static ByteArray* _instance;

ByteArray::ByteArray(){
	this->inRpos = 0;
	this->inWpos = 0;
	outPos = sizeof(int);
    memset(inbuff, 0, SOCKET_INBUFF_SIZE);
    memset(oneInbuff, 0, ONE_INBUFF_SIZE);
    memset(outbuff, 0, OUTBUFF_SIZE);
}

ByteArray::~ByteArray(){
}

int ByteArray::getDataFrom(GoddessSocket* goddessSocket){
    
    memset(this->oneInbuff, 0, sizeof(this->oneInbuff));
    int freeBackLen = SOCKET_INBUFF_SIZE - this->inWpos;     // 计算循环buff后面闲置的空间
    int freeFrontLen = this->inRpos;     // 计算循环buff前面闲置的空间
    int freeLen = freeBackLen + freeFrontLen;     //计算循环buff中的空余空间
    int recvNum = ONE_INBUFF_SIZE>freeLen?freeLen:ONE_INBUFF_SIZE;//std::min(ONE_INBUFF_SIZE, freeLen);     //应该接收的数据大小
    if (recvNum <= 0) return -1;     //buff满了
    int num = goddessSocket->sockRecv(this->oneInbuff, recvNum);     //接收到oneInbuff里面  临时buff
    
    if(num <=0) return num;
    
    if(num <= freeBackLen){                      //如果buff后面的空间够用,直接存上去
        memcpy(this->inbuff + this->inWpos, this->oneInbuff, num);
        this->inWpos += num;
    }else{                                       //如果后面不够用，存完后面拐个弯存前面，前面一定够用，为啥够用?(看了前面的代码你就懂了)
        memcpy(this->inbuff + this->inWpos, this->oneInbuff, freeBackLen);
        memcpy(this->inbuff, this->oneInbuff + freeBackLen, num - freeBackLen);
        this->inWpos = num - freeBackLen;
    }
    
    return num;
}

bool ByteArray::flush(GoddessSocket* goddessSocket, int step){
    
    if(this->outPos == sizeof(int)) return false;
    
    buildCryto(step);     // 发送前数据加密
    
    char* pbuff = (char*)(this->outbuff);
    *(int*)pbuff = ntohl(this->outPos-sizeof(int));     //给数据包头部增加长度
    
    bool tag = goddessSocket->sockSend(this->outbuff, this->outPos);
    memset(this->outbuff, 0, sizeof(this->outbuff));
    this->outPos = sizeof(int);
    
    return tag;
}

//-- 判断是不是一个完整的数据包，是返回大于0，否则返回   , lua调用

int ByteArray::getRemaindLength(){
    
    int remaind = this->inWpos - this->inRpos;
    int realRemaind = (remaind >= 0)? remaind : (SOCKET_INBUFF_SIZE - this->inRpos + this->inWpos);       //剩余的可用字节数
    
    int headLen = sizeof(int);
    char* buff = this->getBytesOnly(headLen);     //读取协议长度，不偏移pos
    if(buff == NULL) return 0;
    int protocolLen = ntohl(*(int*) buff);
    delete[] buff;
    
    if (protocolLen+headLen <= realRemaind) {     //如果剩余的足够一个完整的协议
        return 1;
    }else{
        return 0;
    }
}

ByteArray* ByteArray::getInstance(){
    if(_instance == NULL){
        _instance = new ByteArray();
    }
    return _instance;
}

bool ByteArray::writeByte(unsigned int data){
    int dataLen = sizeof(char);
    if (this->outPos + dataLen > OUTBUFF_SIZE) return false;
    
    char* pbuff = (char*)(this->outbuff + this->outPos);
    *(char*)pbuff = (char)data;
    this->outPos += sizeof(char);
    return true;
}

bool ByteArray::writeShort(unsigned int data){
    int dataLen = sizeof(short);
    if (this->outPos + dataLen > OUTBUFF_SIZE) return false;
    
    char* pbuff = (char*)(this->outbuff + this->outPos);
    *(short*)pbuff = ntohs((short)data);
    this->outPos += sizeof(short);
    return true;
}

bool ByteArray::writeInt(unsigned int data){
    int dataLen = sizeof(int);
    if (this->outPos + dataLen > OUTBUFF_SIZE) return false;
    
    char* pbuff = (char*)(this->outbuff + this->outPos);
    *(int*)pbuff = ntohl(data);
    this->outPos += sizeof(int);
    return true;
}

bool ByteArray::writeLong(unsigned long long data){
    int dataLen = sizeof(long long);
    if (this->outPos + dataLen > OUTBUFF_SIZE) return false;
    
    char swbuffer[64] = {0};
    char* pbuff = (char*)(this->outbuff + this->outPos);
    
    *(long long*)swbuffer = data;
    *(int*)pbuff = ntohl(*(int*)(swbuffer + sizeof(int)));
    *(int*)(pbuff + sizeof(int)) = ntohl(*(int*)(swbuffer));
    
    this->outPos += sizeof(long long);
    
    return true;
}

bool ByteArray::writeUTF(char* data){
    short len = strlen(data);
    int dataLen = len + 2;
    if (this->outPos + dataLen > OUTBUFF_SIZE) return false;
    
    this->writeShort(len);     //写入长度
    
    char* pbuff = (char*)(this->outbuff + this->outPos);
    memcpy(pbuff, data, len);
    this->outPos += len;
    
    return true;
}

bool ByteArray::writeBytes(ByteBuffer *byteBuffer){
    int dataLen = byteBuffer->pos;
    if (this->outPos + dataLen > OUTBUFF_SIZE) return false;
    
    char* pbuff = (char*)(this->outbuff + this->outPos);
    
    memcpy(pbuff, byteBuffer->buff, dataLen);
    
    this->outPos += dataLen;
    delete byteBuffer;
    return true;
}

bool ByteArray::buildCryto(int step){
    
    char tmp[64];
    sprintf(tmp, "%s%d", PROTOCOL_KEY, step);
    
    unsigned char *data = (unsigned char*)this->outbuff;
    unsigned char *key = (unsigned char*)tmp;
    unsigned int keyLen = strlen(tmp);
    unsigned int resultLen = 0;
    unsigned char *result = NULL;
    
    result = xxtea_encrypt(data+4, this->outPos-4, key, keyLen, &resultLen);
    memcpy(this->outbuff + 4, result, resultLen);
    this->outPos = resultLen + 4;
    free(result);
    
    return true;
}

char* ByteArray::getBytes(int num){
    
    char* tmpBuff;
    
    int dataLen = this->inWpos - this->inRpos;
    if(dataLen >= 0){
        if(dataLen < num) return NULL;
        
        tmpBuff = new char[num];
        memcpy(tmpBuff, this->inbuff+this->inRpos, num);
        this->inRpos += num;
        return tmpBuff;
    }else{                //if(dataLen < 0)
        
        if(this->inRpos + num <= SOCKET_INBUFF_SIZE){
            tmpBuff = new char[num];
            memcpy(tmpBuff, this->inbuff+this->inRpos, num);
            this->inRpos += num;
            return tmpBuff;
        }
        
        int backLen = SOCKET_INBUFF_SIZE - this->inRpos;
        int frontLen = this->inWpos;
        int realLen = backLen + frontLen;
        
        if(realLen < num) return NULL;
        
        tmpBuff = new char[num];
        memcpy(tmpBuff, this->inbuff + this->inRpos, backLen);
        memcpy(tmpBuff+backLen, this->inbuff, num-backLen);
        this->inRpos = num-backLen;
        return tmpBuff;
    }
    
}

char* ByteArray::getBytesOnly(int num){
    
    char* tmpBuff;
    
    int dataLen = this->inWpos - this->inRpos;
    if(dataLen >= 0){
        if(dataLen < num) return NULL;
        
        tmpBuff = new char[num];
        memcpy(tmpBuff, this->inbuff+this->inRpos, num);
        
        return tmpBuff;
    }else{
        if(this->inRpos + num <= SOCKET_INBUFF_SIZE){
            tmpBuff = new char[num];
            memcpy(tmpBuff, this->inbuff+this->inRpos, num);
            return tmpBuff;
        }
        
        int backLen = SOCKET_INBUFF_SIZE - this->inRpos;
        int frontLen = this->inWpos;
        int realLen = backLen + frontLen;
        
        if(realLen < num) return NULL;
        
        tmpBuff = new char[num];
        memcpy(tmpBuff, this->inbuff + this->inRpos, backLen);
        memcpy(tmpBuff+backLen, this->inbuff, num-backLen);
        
        return tmpBuff;
    }
}

unsigned char ByteArray::readByte(){
    int needLen = sizeof(char);
    char* buff = this->getBytes(needLen);
    if(buff == NULL) return NULL;
    
    char data;
    data = *(unsigned char*) buff;
    delete[] buff;
    return data;
}

unsigned short ByteArray::readShort(){
    int needLen = sizeof(short);
    char* buff = this->getBytes(needLen);
    if(buff == NULL) return NULL;
    
    short data;
    data = ntohs(*(short*) buff);
    delete[] buff;
    return data;
}
unsigned int ByteArray::readInt(){
    int needLen = sizeof(int);
    char* buff = this->getBytes(needLen);
    if(buff == NULL) return NULL;
    
    int data;
    data = ntohl(*(int*) buff);
    delete[] buff;
    return data;
}
unsigned long long ByteArray::readLong(){
    
    int needLen = sizeof(long long);
    char* buff = this->getBytes(needLen);
    if(buff == NULL) return NULL;
    
    char sbuffer[8] = {0};
    char* psbuff = (char*)sbuffer;
    
    *(int*)psbuff = ntohl(*(int*)((char*)buff + sizeof(int)));
    *(int*)(psbuff + sizeof(int)) = ntohl(*(int*)(buff));
    
    delete[] buff;
    return *(long long*)(sbuffer);
}

string ByteArray::readUTF(){
    int headLen = sizeof(short);
    char* headBuff = this->getBytesOnly(headLen);
    if(headBuff == NULL) return NULL;
    
    short needLen;
    needLen = ntohs(*(short*) headBuff);
    char* buff = this->getBytes(needLen + headLen);
    if(buff == NULL) return NULL;
    
    char data[needLen+1];
    memcpy(data, buff+2, needLen);// (buff+2, 0, needLen);
    data[needLen] = 0;
    delete[] headBuff;
    delete[] buff;
    return string(data);
}