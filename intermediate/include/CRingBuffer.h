#ifndef __INFERRED_CRINGBUFFER_H
#define __INFERRED_CRINGBUFFER_H

class CRingBuffer {
public:
	void AtEOF();
	CRingBuffer();
	void ComputeGetVectors();
	void ComputePutVectors();
	void CopyIn();
	void CopyOut();
	void DataCount();
	void FreeCount();
	void Get();
	void GetSize();
	void Getn();
	void GetnAt();
	void Init();
	void IsEmpty();
	void IsFull();
	void MakeShared();
	void Next();
	void Peek();
	void Put();
	void Putn();
	void Reset();
	void Skip();
	void UnShare();
	void UpdateGetVector();
	void UpdatePutVector();
	~CRingBuffer();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	char fField32; // Offset: 32
	char fField33; // Offset: 33
};

#endif
