#ifndef __INFERRED_CPACKAGEARCHIVALPIPE_H
#define __INFERRED_CPACKAGEARCHIVALPIPE_H

class CPackageArchivalPipe {
public:
	CPackageArchivalPipe();
	void FlushRead();
	void FlushWrite();
	void GetPackageChunk();
	void Init();
	void MakeNewPackageChunk();
	void Overflow();
	void Reset();
	void Underflow();
	void UpdateKeyList();
	~CPackageArchivalPipe();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
};

#endif
