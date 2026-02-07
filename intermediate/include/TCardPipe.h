#ifndef __INFERRED_TCARDPIPE_H
#define __INFERRED_TCARDPIPE_H

class TCardPipe {
public:
	void FlushRead();
	void FlushWrite();
	void Overflow();
	void ReadChunk();
	void ReadPosition();
	void ReadSeek();
	void Reset();
	TCardPipe();
	void Underflow();
	void WriteChunk();
	void WritePosition();
	void WriteSeek();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
};

#endif
