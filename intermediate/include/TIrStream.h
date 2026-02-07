#ifndef __INFERRED_TIRSTREAM_H
#define __INFERRED_TIRSTREAM_H

class TIrStream {
public:
	void DequeueEvent();
	void EnqueueEvent();
	void Init();
	void ProcessNextEvent();
	TIrStream();
	~TIrStream();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
};

#endif
