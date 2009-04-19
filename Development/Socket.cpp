

#include "Socket.h"

Socket::Socket(SOCKET s) 
{
	this->s = s;
}

void Socket::Receive()
{
	int ReceivedBytes = 0;
	while(ReceivedBytes = recv(s, (char*)pBuffer, sizeof(pBuffer), 0)) 
	{
		if(ReceivedBytes == 0 || ReceivedBytes == -1) break;
		ProcessData(pBuffer, ReceivedBytes);
	}
}

Socket::~Socket() 
{
	closesocket(s);
}

void Socket::Send(unsigned char* data, int size) 
{
	send(s, (char*)data, size, 0);
}

void Socket::Close() 
{
	closesocket(s);
}