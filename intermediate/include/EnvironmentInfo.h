#ifndef __INFERRED_ENVIRONMENTINFO_H
#define __INFERRED_ENVIRONMENTINFO_H

class EnvironmentInfo {
public:
	void DefaultHeap();
	void DefaultHeapDomain();
	void DefaultStackDomain();
	void Domains();
	void Init();
	void Name();

protected:
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
};

#endif
