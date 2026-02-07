#ifndef __INFERRED_TNODECACHE_H
#define __INFERRED_TNODECACHE_H

class TNodeCache {
public:
	void Abort();
	void Clear();
	void Commit();
	void DeleteNode();
	void DirtyNode();
	void FindNode();
	void ForgetNode();
	void RememberNode();
	void Reuse();
	TNodeCache();
	~TNodeCache();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
};

#endif
