#ifndef __INFERRED_CSHADOWRINGBUFFER_H
#define __INFERRED_CSHADOWRINGBUFFER_H

class CShadowRingBuffer {
public:
	void AtEOF();
	CShadowRingBuffer();
	void ComputeGetVectors();
	void ComputePutVectors();
	void ComputeTempGetVectors();
	void CopyIn();
	void CopyOut();
	void DataCount();
	void FreeCount();
	void Get();
	void GetByteAt();
	void GetSize();
	void Getn();
	void Init();
	void IsEmpty();
	void IsFull();
	void Next();
	void Peek();
	void Put();
	void PutByteAt();
	void Putn();
	void Reset();
	void Skip();
	void TempCopyOut();
	void TempDataCount();
	void TempGetn();
	void TempReset();
	void UpdateGetVector();
	void UpdatePutVector();
	~CShadowRingBuffer();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
};

#endif
