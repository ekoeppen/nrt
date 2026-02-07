#ifndef __INFERRED_TFLASHTRACKER_H
#define __INFERRED_TFLASHTRACKER_H

class TFlashTracker {
public:
	void Add();
	void Deinit();
	void Init();
	void Remove();
	TFlashTracker();
	~TFlashTracker();

protected:
	long fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	char fField12; // Offset: 12
	long fField16; // Offset: 16
};

#endif
