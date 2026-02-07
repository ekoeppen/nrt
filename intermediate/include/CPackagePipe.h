#ifndef __INFERRED_CPACKAGEPIPE_H
#define __INFERRED_CPACKAGEPIPE_H

class CPackagePipe {
public:
	CPackagePipe();
	void FlushRead();
	void FlushWrite();
	void Init();
	void Overflow();
	void ReadChunk();
	void ReadPosition();
	void ReadSeek();
	void Reset();
	void Underflow();
	void WriteChunk();
	void WritePosition();
	void WriteSeek();
	~CPackagePipe();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
};

#endif
