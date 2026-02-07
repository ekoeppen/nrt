#ifndef __INFERRED_TRECOBJECT_H
#define __INFERRED_TRECOBJECT_H

class TRecObject {
public:
	void CopyInto();
	void Dispose();
	void Dump();
	void DumpObject();
	void SetFlags();
	void SizeInBytes();
	TRecObject();
	void TestFlags();
	void UnsetFlags();
	~TRecObject();

protected:
	long fField4; // Offset: 4
};

#endif
