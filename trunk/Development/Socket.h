

#include <winsock2.h>

class Socket 
{
private:

	SOCKET s;
	unsigned char pBuffer[8096];

	virtual void ProcessData(unsigned char* data, int size) = 0;

protected:

	void Close();
	void Receive();
	void Send(unsigned char* data, int size);

public:

	Socket(SOCKET s);
	~Socket();
};
