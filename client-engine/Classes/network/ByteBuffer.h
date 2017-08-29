//
//  ByteArray.h
//  CPPSocket2Lua
//
//  Created by 孙少磊 on 13-2-27.
//
//

#ifndef __CPPSocket2Lua__ByteBuffer__
#define __CPPSocket2Lua__ByteBuffer__

#include <iostream>
#include <netinet/in.h>

#define BUFF_SIZE 1024*128

using namespace std;

class ByteBuffer{
public:
    ByteBuffer();
    ~ByteBuffer();
    
    bool writeByte(unsigned int data);
    bool writeShort(unsigned int data);
    bool writeInt(unsigned int data);
	bool writeLong(unsigned long long data);
	bool writeUTF(char* data);
    bool writeBytes(ByteBuffer *byteBuffer);
    
public:
    char buff[BUFF_SIZE];
    int pos;
};

#endif /* defined(__CPPSocket2Lua__ByteBuffer__) */
