#ifndef __INFERRED_TMESSAGETIMER_H
#define __INFERRED_TMESSAGETIMER_H

class TMessageTimer {
public:
	void Init();
	void Reset();
	void Start();
	void Stop();
	TMessageTimer();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField28; // Offset: 28
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField48; // Offset: 48
	long fField56; // Offset: 56
};

#endif
