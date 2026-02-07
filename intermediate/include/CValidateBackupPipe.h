#ifndef __INFERRED_CVALIDATEBACKUPPIPE_H
#define __INFERRED_CVALIDATEBACKUPPIPE_H

class CValidateBackupPipe {
public:
	CValidateBackupPipe();
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
	~CValidateBackupPipe();

protected:
	long fField4; // Offset: 4
};

#endif
