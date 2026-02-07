#ifndef __INFERRED_PMUXCALLBACKWRAPPER_H
#define __INFERRED_PMUXCALLBACKWRAPPER_H

class PMuxCallBackWrapper {
public:
	void ClassInfo();
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
	void Sizeof();

protected:
	long fField16; // Offset: 16
	long fField192; // Offset: 192
	long fField196; // Offset: 196
};

#endif
