#ifndef __INFERRED_CSHADOWBUFFERSEGMENT_H
#define __INFERRED_CSHADOWBUFFERSEGMENT_H

class CShadowBufferSegment {
public:
	void AtEOF();
	CShadowBufferSegment();
	void CopyIn();
	void CopyOut();
	void Get();
	void GetByteAt();
	void GetSize();
	void Getn();
	void Hide();
	void Init();
	void Next();
	void Peek();
	void Position();
	void Put();
	void PutByteAt();
	void Putn();
	void Reset();
	void Seek();
	void Skip();
	~CShadowBufferSegment();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
};

#endif
