#ifndef __INFERRED_TCLASSINFOREGISTRYIMPL_H
#define __INFERRED_TCLASSINFOREGISTRYIMPL_H

class TClassInfoRegistryImpl {
public:
	void ClassInfo();
	void DeRegister();
	void Delete();
	void Find();
	void First();
	void GetInstanceCount();
	void HashString();
	void InvalidateSatisfyCache();
	void IsRegistered();
	void New();
	void Next();
	void Register();
	void Satisfy();
	void Seed();
	void Sizeof();
	void UpdateInstanceCount();

protected:
	long fField4; // Offset: 4
	long fField10; // Offset: 10
	char fField11; // Offset: 11
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
};

#endif
