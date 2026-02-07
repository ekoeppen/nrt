#ifndef __INFERRED_TWRECDOMAIN_H
#define __INFERRED_TWRECDOMAIN_H

class TWRecDomain {
public:
	void Classify();
	void ConfigureArea();
	void Dispose();
	void DomainParameter();
	void Group();
	void IWRecDomain();
	void Make();
	void Reclassify();
	void SetParameters();
	void SignalMemoryError();
	void Sleep();
	void UnitConfidence();
	void UnitInfoFreePtr();
	void VerifyWordSymbols();
	void WakeUp();

protected:
	long fField8; // Offset: 8
	long fField24; // Offset: 24
	long fField36; // Offset: 36
	char fField87; // Offset: 87
};

#endif
