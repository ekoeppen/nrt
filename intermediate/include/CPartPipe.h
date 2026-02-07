#ifndef __INFERRED_CPARTPIPE_H
#define __INFERRED_CPARTPIPE_H

class CPartPipe {
public:
	CPartPipe();
	void Close();
	void FlushRead();
	void FlushWrite();
	void Init();
	void Overflow();
	void ReadChunk();
	void ReadPosition();
	void ReadSeek();
	void Reset();
	void SeekEOF();
	void SetStreamSize();
	void Underflow();
	void WriteChunk();
	void WritePosition();
	void WriteSeek();
	~CPartPipe();

protected:
	long fField4; // Offset: 4
	char fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
};

#endif
