#ifndef __INFERRED_TIRLMP_H
#define __INFERRED_TIRLMP_H

class TIrLMP {
public:
	void AddrConflicts();
	void DeInit();
	void Demultiplexor();
	void FillInLMPDUHeader();
	void HandleDiscoverStateEvent();
	void HandleReadyStateEvent();
	void HandleResolveAddressStateEvent();
	void Init();
	void NextState();
	void Reset();
	void StartOneSecTicker();
	void StopOneSecTicker();
	TIrLMP();
	void TimerComplete();
	~TIrLMP();

protected:
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	char fField32; // Offset: 32
	char fField33; // Offset: 33
	long fField36; // Offset: 36
};

#endif
