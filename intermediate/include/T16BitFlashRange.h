#ifndef __INFERRED_T16BITFLASHRANGE_H
#define __INFERRED_T16BITFLASHRANGE_H

class T16BitFlashRange {
public:
	void AdjustVirtualAddresses();
	void DoWrite();
	void PrepareForBlockCommand();
	void StartOfBlockWriteVirtualAddress();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField60; // Offset: 60
};

#endif
