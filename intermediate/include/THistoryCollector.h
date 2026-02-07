#ifndef __INFERRED_THISTORYCOLLECTOR_H
#define __INFERRED_THISTORYCOLLECTOR_H

class THistoryCollector {
public:
	void Add();
	void AddAddress();
	void AddAddressReset();
	void AddDescriptions();
	void AddReset();
	void ClassInfo();
	void CollectionControl();
	void Delete();
	void Init();
	void New();
	void Sizeof();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField92; // Offset: 92
	long fField96; // Offset: 96
	long fField100; // Offset: 100
	long fField104; // Offset: 104
};

#endif
