#ifndef __INFERRED_TASYNCEVENT_H
#define __INFERRED_TASYNCEVENT_H

class TAsyncEvent {
public:
	void Cancel();
	void Free();
	void Init();
	void SetReply();
	TAsyncEvent();
	~TAsyncEvent();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
};

#endif
