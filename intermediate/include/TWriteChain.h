#ifndef __INFERRED_TWRITECHAIN_H
#define __INFERRED_TWRITECHAIN_H

class TWriteChain {
public:
	void Add();
	void AddToEnd();
	void Destroy();
	void Length();
	void Remove();
	void RemoveFirst();
	void Reset();
	void StreamOut();
	TWriteChain();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
