#ifndef __INFERRED_CPTRPIPE_H
#define __INFERRED_CPTRPIPE_H

class CPtrPipe {
public:
	CPtrPipe();
	void FlushRead();
	void FlushWrite();
	void Init();
	void Overflow();
	void ReadChunk();
	void ReadPosition();
	void ReadSeek();
	void Reset();
	void Seek();
	void Underflow();
	void WriteChunk();
	void WritePosition();
	void WriteSeek();
	~CPtrPipe();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	char fField20; // Offset: 20
};

#endif
