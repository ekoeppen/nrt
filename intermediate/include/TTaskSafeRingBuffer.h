#ifndef __INFERRED_TTASKSAFERINGBUFFER_H
#define __INFERRED_TTASKSAFERINGBUFFER_H

class TTaskSafeRingBuffer {
public:
	void Acquire();
	void AtEOF();
	void CheckGetSignal();
	void CheckPutSignal();
	void ComputeGetVectors();
	void ComputePutVectors();
	void CopyIn();
	void CopyOut();
	void DataCount();
	void FreeCount();
	void Get();
	void GetCompletely();
	void GetSize();
	void Getn();
	void GetnCompletely();
	void Init();
	void IsEmpty();
	void IsFull();
	void Next();
	void Pause();
	void Peek();
	void Put();
	void PutCompletely();
	void Putn();
	void PutnCompletely();
	void Release();
	void Reset();
	void Skip();
	TTaskSafeRingBuffer();
	void UpdateGetVector();
	void UpdatePutVector();
	~TTaskSafeRingBuffer();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	char fField48; // Offset: 48
	char fField49; // Offset: 49
};

#endif
