#ifndef __INFERRED_TUSOUNDCALLBACKPROC_H
#define __INFERRED_TUSOUNDCALLBACKPROC_H

class TUSoundCallbackProc {
public:
	void Complete();
	void SetCallback();
	TUSoundCallbackProc();
	~TUSoundCallbackProc();

protected:
	long fField4; // Offset: 4
};

#endif
