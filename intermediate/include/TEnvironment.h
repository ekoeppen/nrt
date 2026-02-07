#ifndef __INFERRED_TENVIRONMENT_H
#define __INFERRED_TENVIRONMENT_H

class TEnvironment {
public:
	void Add();
	void DecrRefCount();
	void HasDomain();
	void IncrRefCount();
	void Init();
	void Remove();
	~TEnvironment();

protected:
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	char fField36; // Offset: 36
};

#endif
