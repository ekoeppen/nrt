#ifndef __INFERRED_TOBJECTTABLE_H
#define __INFERRED_TOBJECTTABLE_H

class TObjectTable {
public:
	void Add();
	void Exists();
	void Get();
	void Init();
	void NewId();
	void NextGlobalUniqueId();
	void ReassignOwnership();
	void Remove();
	void Scavenge();
	void ScavengeAll();
	void SetScavengeProc();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
};

#endif
