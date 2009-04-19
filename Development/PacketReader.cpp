

#include "PacketReader.h"

PacketReader::PacketReader() 
{
	offset = 0;
}

unsigned char PacketReader::ReadByte() 
{
	offset++;
	return buf[(offset-1)];
}

unsigned short PacketReader::ReadWord()
{
	offset += 2;
	return *(unsigned short*)(buf+(offset-2));
}

unsigned int PacketReader::ReadDWord() 
{
	offset += 4;
	return *(unsigned int*)(buf+(offset-4));
}

void PacketReader::Reset() 
{
	offset = 0;
}

void PacketReader::Skip(int bytes) 
{
	offset += bytes;
}

void PacketReader::SetBuffer(unsigned char* buf) 
{
	this->buf = buf;
	offset = 0;
}

void PacketReader::ReadString(unsigned char* out, unsigned int size) 
{
	for(unsigned int i = 0; i < size; i++, offset++) 
	{
		out[i] = buf[offset];
	}
}