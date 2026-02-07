#ifndef __INFERRED_PMUXCALLBACK_H
#define __INFERRED_PMUXCALLBACK_H

class PMuxCallBack {
public:
	void CloseMuxComplete();
	void Delete();
	void GetMuxPort();
	void GetTimerPeriod();
	void HandleReply();
	void HandleRequest();
	void Init();
	void InitAsyncRPCMsg();
	void New();
	void OpenMuxComplete();
	void SetTimerPeriod();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
