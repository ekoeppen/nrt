#ifndef __INFERRED_TFLASHPHYSBLOCK_H
#define __INFERRED_TFLASHPHYSBLOCK_H

class TFlashPhysBlock {
public:
	void EraseCount();
	void GetPhysicalOffset();
	void Init();
	void IsSpare();
	void LogEntryOffset();
	void SetInfo();
	void SetSpare();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	char fField20; // Offset: 20
	char fField21; // Offset: 21
};

#endif
