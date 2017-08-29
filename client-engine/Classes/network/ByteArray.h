//
//  ByteArray.h
//  CPPSocket2Lua
//
//  Created by 孙少磊 on 13-2-27.
//
//

#ifndef __CPPSocket2Lua__ByteArray__
#define __CPPSocket2Lua__ByteArray__

extern "C"{
#include "xxtea.h"
}
#include <iostream>
#include "Common.h"
#include "ByteBuffer.h"
#include "GoddessSocket.h"

#define SOCKET_INBUFF_SIZE 1024*1024*2
#define ONE_INBUFF_SIZE 1024*512
#define OUTBUFF_SIZE 1024*512


class ByteArray{
public:
    char inbuff[SOCKET_INBUFF_SIZE];
    char oneInbuff[ONE_INBUFF_SIZE];
    char outbuff[OUTBUFF_SIZE];
    

public:
    static ByteArray* getInstance();
    ~ByteArray();
    
    int getDataFrom(GoddessSocket* goddessSocket);
    bool flush(GoddessSocket* goddessSocket, int step);
    int getRemaindLength();

    bool writeByte(unsigned int data);
    bool writeShort(unsigned int data);
    bool writeInt(unsigned int data);
	bool writeLong(unsigned long long data);
	bool writeUTF(char* data);
    bool writeBytes(ByteBuffer *byteBuffer);

    unsigned char readByte();
    unsigned short readShort();
    unsigned int readInt();
	unsigned long long readLong();
	string readUTF();
    
private:
    ByteArray();
    char* getBytes(int num);
    char* getBytesOnly(int num);
    bool buildCryto(int step);
    
private:
    int inRpos;
    int inWpos;
    
    int outPos ;
};

#endif /* defined(__CPPSocket2Lua__ByteArray__) */
