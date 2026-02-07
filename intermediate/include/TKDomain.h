#ifndef __INFERRED_TKDOMAIN_H
#define __INFERRED_TKDOMAIN_H

class TKDomain {
public:
	void Init();
	void InitWithDomainNumber();
	void Intersects();
	void SetFaultMonitor();
	TKDomain();
	~TKDomain();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
};

#endif
