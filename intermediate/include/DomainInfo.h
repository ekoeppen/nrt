#ifndef __INFERRED_DOMAININFO_H
#define __INFERRED_DOMAININFO_H

class DomainInfo {
public:
	void Base();
	void ExceptOnNoMem();
	void GlobalBase();
	void GlobalInitSize();
	void GlobalROMBase();
	void GlobalSize();
	void GlobalZeroSize();
	void HandleHeapSize();
	void HasGlobals();
	void HasHeap();
	void HeapSize();
	void InitDomainInfo();
	void InitGlobalInfo();
	void InitHeapInfo();
	void IsCacheable();
	void IsHunkOMemory();
	void IsPersistent();
	void IsReadOnly();
	void IsSegregated();
	void MakeHeapDomain();
	void Name();
	void Size();

protected:
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
};

#endif
