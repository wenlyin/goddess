//
//  LuaSocket.cpp
//  CPPSocket2Lua
//
//  Created by 孙少磊 on 13-2-27.
//
//
#include "GoddessSocket.h"

GoddessSocket::GoddessSocket(char* host, int port){
    this->host = host;
    this->port = port;
}
GoddessSocket::~GoddessSocket(){
    
}

bool GoddessSocket::sockClose(){
    close(this->_socket);
    return true;
}

int GoddessSocket::sockRecv(char* inbuff, int count){
    
	int nrecv = recv(this->_socket, inbuff, count, 0);
    
	if ( nrecv == -1 )
	{
		switch ( errno )
		{ 
            case EWOULDBLOCK :
                return 0;
            case ECONNRESET :
            case EPIPE :  
            case EBADF :
            case ENOTCONN :
            case ENOTSOCK :
            case EINTR :
            case EFAULT :
            default :
			{
                printf("SOCKET RECV ERROR");
				break;
			}
		}
	}else if ( nrecv == 0 ){}
    
	return nrecv;
  
}

bool GoddessSocket::sockSend(char* outbuff, int count){
  
	int nSent;
    
	try {
        nSent = send(this->_socket, outbuff, count, 0);
      
        if ( nSent == -1 ) {

            switch ( errno ) {    
                case EWOULDBLOCK :
                    return false;
                case ECONNRESET :
                case EPIPE : 
                case EBADF :
                case ENOTSOCK :
                case EFAULT :
                case EMSGSIZE :
                case ENOBUFS :
                default :
                {
                    printf("SOCKET SEND WARING");
                    break;
                }
            }
        } else if ( nSent == 0 ){}
        
	}catch (...){
        printf("SOCKET SEND ERROR");
        return false;
    }
    
	return true;
}


bool GoddessSocket::sockConnect(int timeOut){
    
    struct sockaddr_in serv_addr;
    fd_set rset,wset;
    int error;
    socklen_t len;
    struct timeval tval;
    
    tval.tv_sec = timeOut;     //超时设置
    tval.tv_usec = 0;
    
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_port=htons(port);
    serv_addr.sin_addr.s_addr = inet_addr(host); //inet_addr转换为网络字节序

    //    bzero(&(serv_addr.sin_zero),8);
    memset(&(serv_addr.sin_zero), 0, 8);

    if ((this->_socket = socket(AF_INET, SOCK_STREAM, 0)) == -1) return false;       // 建立socket套接字：
    

    
	int nodelay = 1;
	if (::setsockopt(this->_socket,IPPROTO_TCP,TCP_NODELAY,(const char *)&nodelay,sizeof(nodelay))) return false;

    
    
    
    int flags = fcntl(this->_socket, F_GETFL, 0);   //获取建立的sockfd的当前状态（非阻塞）
    fcntl(this->_socket,F_SETFL, flags|O_NONBLOCK);   //将当前sockfd设置为非阻塞
    
    
    

    
    
    
    
    if (connect( this->_socket, (struct sockaddr *)&serv_addr ,sizeof(struct sockaddr)) == 0) return true;
    if(errno != EINPROGRESS) return false;

    /*建立connect连接，此时socket设置为非阻塞，connect调用后，无论连接是否建立立即返回-1，同时将errno设置为EINPROGRESS, 表示此时tcp三次握手仍旧进行，如果errno不是EINPROGRESS，则说明连接错误，程序结束。
     　　当客户端和服务器端在同一台主机上的时候，connect回马上结束，并返回0；无需等待，所以使用goto函数跳过select等待函数，直接进入连接后的处理部分。
     */

    FD_ZERO(&rset);
    FD_SET(this->_socket, &rset);
    wset = rset;
    if(select(this->_socket+1, &rset, &wset, NULL,&tval) <= 0) return false;
    
    if ( FD_ISSET(this->_socket,&rset) || FD_ISSET(this->_socket, &wset) )
    {
        len = sizeof(error);
        if( getsockopt(this->_socket,SOL_SOCKET,SO_ERROR,&error,&len) < 0) return false;
    }

    connect(this->_socket, (struct sockaddr *)&serv_addr, sizeof(struct sockaddr) );
    switch (errno)
    {
        case EISCONN: //connect ok
            return true;
            break;
        case EALREADY:
            return false;
            break;
        case EINPROGRESS: // is connecting, need to check again
            return false;
            break;
        default:
            return false;
            break;
    }

}


bool GoddessSocket::sockConnectNoBlock(){
    struct sockaddr_in serv_addr;
    
    
    this->_socket = socket(AF_INET, SOCK_STREAM, 0);
    int x = fcntl(this->_socket,F_GETFL,0);
    fcntl(this->_socket, F_SETFL, x | O_NONBLOCK);
    
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_port=htons(port);
    serv_addr.sin_addr.s_addr = inet_addr(host); //inet_addr转换为网络字节序

    //    bzero(&(serv_addr.sin_zero),8);
    memset(&(serv_addr.sin_zero), 0, 8);
    
    if (connect(this->_socket, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) == 0){
        return true;
    }else{
        return false;
    }
}

bool GoddessSocket::getSocketState(){
 
    struct sockaddr_in serv_addr;
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_port=htons(1234);
    serv_addr.sin_addr.s_addr = inet_addr(""); //inet_addr转换为网络字节序
    
//    bzero(&(serv_addr.sin_zero),8);
    memset(&(serv_addr.sin_zero), 0, 8);
    
    connect(this->_socket, (struct sockaddr *)&serv_addr, sizeof(struct sockaddr) );
    switch (errno)
    {
        case EISCONN: //connect ok
            return true;
            break;
        case EALREADY:
            return false;
            break;
        case EINPROGRESS: // is connecting, need to check again
            return false;
            break;
        default:
            return false;
            break;
    }
}


