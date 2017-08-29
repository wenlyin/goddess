//
//  LuaSocket.h
//  CPPSocket2Lua
//
//  Created by 孙少磊 on 13-2-27.
//
//
#ifndef __CPPSocket2Lua__LuaSocket__
#define __CPPSocket2Lua__LuaSocket__
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <arpa/inet.h>
#include <errno.h>
#include <netinet/in.h>
#include <netinet/tcp.h>

class GoddessSocket{
public:
	GoddessSocket(char* host, int port);
	~GoddessSocket();

	bool sockConnect(int timeOut);
	bool sockConnectNoBlock();
	bool sockClose();
	bool getSocketState();
	int  sockRecv(char* inbuff, int count);
	bool sockSend(char* outbuff, int count);

private:
	int _socket;
	int port;
	char* host;
};

#endif /* defined(__CPPSocket2Lua__LuaSocket__) */