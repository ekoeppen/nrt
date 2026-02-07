#ifndef __INFERRED_CSTDIOPIPE_H
#define __INFERRED_CSTDIOPIPE_H

class CStdioPipe {
public:
	CStdioPipe();
	void Flush();
	void FlushRead();
	void FlushWrite();
	void Overflow();
	void ReadChunk();
	void ReadPosition();
	void ReadSeek();
	void Reset();
	void Underflow();
	void WriteChunk();
	void WritePosition();
	void WriteSeek();
	~CStdioPipe();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
