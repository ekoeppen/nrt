#ifndef __INFERRED_TSTOREDRIVER_H
#define __INFERRED_TSTOREDRIVER_H

class TStoreDriver {
public:
	void AddressOf();
	void AddressOfAligned();
	void ContinuePersistentCopy();
	void Copy();
	void DoPersistentCopy();
	void Init();
	void PersistentCopy();
	void Read();
	void Set();
	void Write();

protected:
	long fField2; // Offset: 2
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	char fField36; // Offset: 36
	char fField37; // Offset: 37
};

#endif
