#ifndef __INFERRED_TTASKSAFERINGPIPE_H
#define __INFERRED_TTASKSAFERINGPIPE_H

class TTaskSafeRingPipe {
public:
	void FlushRead();
	void FlushWrite();
	void Init();
	void Overflow();
	void ReadChunk();
	void ReadPosition();
	void ReadSeek();
	void Reset();
	TTaskSafeRingPipe();
	void Underflow();
	void WriteChunk();
	void WritePosition();
	void WriteSeek();
	~TTaskSafeRingPipe();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	char fField16; // Offset: 16
};

#endif
