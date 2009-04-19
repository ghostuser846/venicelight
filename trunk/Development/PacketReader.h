

class PacketReader 
{ 

private:

	int				offset;
	unsigned char*	buf;

public:

	unsigned char	ReadByte();
	unsigned int	ReadDWord();
	unsigned short	ReadWord();
	void			ReadString(unsigned char* out, unsigned int size);

	void Reset();
	void Skip		(int bytes);
	void SetBuffer	(unsigned char* buf);

	PacketReader();

};