

#include <winsock2.h>

class ServerSocket 
{
private:

	SOCKET s;

public:

	SOCKET Accept();

	ServerSocket(short port); // Constructor
	~ServerSocket(); // Destructor
};