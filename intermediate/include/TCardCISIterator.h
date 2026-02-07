#ifndef __INFERRED_TCARDCISITERATOR_H
#define __INFERRED_TCARDCISITERATOR_H

class TCardCISIterator {
public:
	void GetPackage();
	void GetStatus();
	void GetTuple();
	void GetTupleData();
	void Init();
	void ReadCIS();
	void ResetCIS();
	void ResetFields();
	void SelectCIS();
	void SwapLittleEndianLong();
	void SwapLittleEndianShort();
	TCardCISIterator();
	void VerifyLinkTargetTuple();
	void Version();
	~TCardCISIterator();

protected:
	char fField1; // Offset: 1
	char fField2; // Offset: 2
	long fField12; // Offset: 12
	char fField16; // Offset: 16
	char fField17; // Offset: 17
	char fField18; // Offset: 18
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	char fField36; // Offset: 36
	long fField40; // Offset: 40
};

#endif
