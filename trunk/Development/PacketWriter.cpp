

#include "PacketWriter.h"

PacketWriter::PacketWriter() 
{
	offset = 0;
}

void PacketWriter::Skip(int bytes)
{
	offset += bytes;
}

void PacketWriter::Reset() 
{
	offset = 0;
}

void PacketWriter::Create(unsigned short opcode) 
{
	Reset();
	Skip(2);
	WriteWord(opcode);
	WriteWord(0);
}

void PacketWriter::WriteByte(unsigned char a) 
{
	offset++;
	Buffer[offset-1] = a;
}

void PacketWriter::WriteWord(unsigned short a) 
{
	offset += 2;
	*(unsigned short*)(Buffer+(offset-2)) = a;
}

void PacketWriter::WriteDWord(unsigned int a) 
{
	offset += 4;
	*(unsigned int*)(Buffer+(offset-4)) = a;
}

void PacketWriter::WriteString(unsigned char* a, unsigned int size) 
{
	for(unsigned int i = 0; i < size; i++, offset++) 
	{
		Buffer[offset] = a[i];
	}
}

void PacketWriter::Finalize() 
{
	*(unsigned short*)(Buffer) = offset - 6;
}

unsigned int PacketWriter::Size() 
{
	return offset;
}

void PacketWriter::WriteQWord(__int64 a) 
{
	offset += 8;
	*(__int64*)(Buffer+(offset-8)) = a;
}

void PacketWriter::WriteFloat(float a) 
{
	offset += 4;
	*(float *)(Buffer+(offset-4)) = a;
}

void PacketWriter::WriteUString(unsigned char* a, unsigned int size) 
{
	for(unsigned int i = 0; i < size; i++, offset+=2) 
	{
		Buffer[offset]   = a[i];
		Buffer[offset+1] = 0;
	}
}