#ifndef __INFERRED_TDICTCHAIN_H
#define __INFERRED_TDICTCHAIN_H

class TDictChain {
public:
	void AddDictToChain();
	void HandleToPosition();
	void IDictChain();
	void LockChain();
	void Make();
	void PositionToHandle();
	void RemoveDictFromChain();
	TDictChain();
	void UnlockChain();

protected:
	long fField12; // Offset: 12
	long fField28; // Offset: 28
	long fField32; // Offset: 32
};

#endif
