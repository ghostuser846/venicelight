

class PacketWriter 
{
private:

	int	offset;

	void Reset();
	void Skip(int bytes);

public:

	unsigned char Buffer[8096];

	unsigned int Size();

	PacketWriter();

	void Create(unsigned short opcode);

	void WriteByte	(unsigned char a);
	void WriteWord	(unsigned short a);
	void WriteDWord	(unsigned int a);
	void WriteQWord	(__int64 a);
	void WriteFloat	(float a);

	void WriteString (unsigned char* a, unsigned int size);	// Ascii
	void WriteUString(unsigned char* a, unsigned int size);	// Unicode

	void Finalize();
};