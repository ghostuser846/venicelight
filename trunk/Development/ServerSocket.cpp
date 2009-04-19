

#include "ServerSocket.h"

ServerSocket::ServerSocket(short port) 
{
	WSAData wsa;
	if(WSAStartup(MAKEWORD(2,2), &wsa) != 0) 
	{
		return;
	}
	
	SOCKADDR_IN* sa = new SOCKADDR_IN;

	sa->sin_port = htons(port);
	sa->sin_family = AF_INET;
	sa->sin_addr.s_addr = INADDR_ANY;

	s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if(s == SOCKET_ERROR) 
	{
		return;
	}

	int ret = bind(s, (sockaddr*)sa, sizeof(*sa));

	if(ret == SOCKET_ERROR) 
	{
		closesocket(s);
		return;
	}

	listen(s, 500);

	delete[] sa;
}

SOCKET ServerSocket::Accept() 
{
	return accept(s, 0, 0);
}

ServerSocket::~ServerSocket() 
{
	WSACleanup();
}