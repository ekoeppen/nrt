#ifndef __INFERRED_CBUFFERPIPE_H
#define __INFERRED_CBUFFERPIPE_H

class CBufferPipe {
public:
	CBufferPipe();
	void Get();
	void Init();
	void Next();
	void Peek();
	void Put();
	void ReadChunk();
	void ReadPosition();
	void ReadSeek();
	void Reset();
	void ResetRead();
	void ResetWrite();
	void Skip();
	void WriteChunk();
	void WritePosition();
	void WriteSeek();
	~CBufferPipe();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	char fField12; // Offset: 12
	char fField13; // Offset: 13
};

#endif
