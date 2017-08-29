//
//  ByteBuffer.cpp
//  CPPSocket2Lua
//
//  Created by 孙少磊 on 13-2-27.
//
//

#include "ByteBuffer.h"

using namespace std;

ByteBuffer::ByteBuffer(){
	this->pos = 0;
}

ByteBuffer::~ByteBuffer(){
}


bool ByteBuffer::writeByte(unsigned int data){
    int dataLen = sizeof(char);
    if (this->pos + dataLen > BUFF_SIZE) return false;
    
    char* pbuff = (char*)(this->buff + this->pos);
    *(char*)pbuff = (char)data;
    this->pos += sizeof(char);
    return true;
}

bool ByteBuffer::writeShort(unsigned int data){
    int dataLen = sizeof(short);
    if (this->pos + dataLen > BUFF_SIZE) return false;
    
    char* pbuff = (char*)(this->buff + this->pos);
    *(short*)pbuff = ntohs((short)data);
    this->pos += sizeof(short);
    return true;
}

bool ByteBuffer::writeInt(unsigned int data){
    int dataLen = sizeof(int);
    if (this->pos + dataLen > BUFF_SIZE) return false;
    
    char* pbuff = (char*)(this->buff + this->pos);
    *(int*)pbuff = ntohl(data);
    this->pos += sizeof(int);
    return true;
}

bool ByteBuffer::writeLong(unsigned long long data){
    int dataLen = sizeof(long long);
    if (this->pos + dataLen > BUFF_SIZE) return false;
    
    char swbuffer[64] = {0};
    char* pbuff = (char*)(this->buff + this->pos);
    
    *(long long*)swbuffer = data;
    *(int*)pbuff = ntohl(*(int*)(swbuffer + sizeof(int)));
    *(int*)(pbuff + sizeof(int)) = ntohl(*(int*)(swbuffer));
    
    this->pos += sizeof(long long);
    
    return true;
}

bool ByteBuffer::writeUTF(char* data){
    short len = strlen(data);
    int dataLen = len + 2;
    if (this->pos + dataLen > BUFF_SIZE) return false;
    
    this->writeShort(len);     //写入长度
    
    char* pbuff = (char*)(this->buff + this->pos);
    memcpy(pbuff, data, len);
    this->pos += len;
    
    return true;
}

bool ByteBuffer::writeBytes(ByteBuffer *byteBuffer){
    int dataLen = byteBuffer->pos;
    char* pbuff = (char*)(this->buff + this->pos);
    memcpy(pbuff, byteBuffer->buff, dataLen);
    
    this->pos += dataLen;
    delete byteBuffer;
    return true;
}

