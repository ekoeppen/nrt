#ifndef __INFERRED_TNBPREPLYBUFFER_H
#define __INFERRED_TNBPREPLYBUFFER_H

class TNBPReplyBuffer {
public:
	void ConstantPart();
	void Init();
	void Insert();
	void InsertLookupTuples();
	void Ith();
	void Reset();
	TNBPReplyBuffer();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
};

#endif
