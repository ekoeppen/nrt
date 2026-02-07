#ifndef __INFERRED_CRINGPIPE_H
#define __INFERRED_CRINGPIPE_H

class CRingPipe {
public:
	CRingPipe();
	void Init();
	void ReadChunk();
	void ReadPosition();
	void ReadSeek();
	void Reset();
	void WriteChunk();
	void WritePosition();
	void WriteSeek();
	~CRingPipe();

protected:
	long fField4; // Offset: 4
	char fField8; // Offset: 8
	char fField9; // Offset: 9
};

#endif
