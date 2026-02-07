#ifndef __INFERRED_TMEMORYOBJECT_H
#define __INFERRED_TMEMORYOBJECT_H

class TMemoryObject {
public:
	void CopyFrom();
	void CopyTo();
	void Destroy();
	void GetId();
	void GetPtr();
	void Init();
	void Make();
	void MakeShared();
	TMemoryObject();
	~TMemoryObject();

protected:
	long fField4; // Offset: 4
	long fField28; // Offset: 28
	long fField32; // Offset: 32
};

#endif
