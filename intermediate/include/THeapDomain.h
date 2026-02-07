#ifndef __INFERRED_THEAPDOMAIN_H
#define __INFERRED_THEAPDOMAIN_H

class THeapDomain {
public:
	void GetStackInfo();
	void Init();
	THeapDomain();
	~THeapDomain();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
};

#endif
