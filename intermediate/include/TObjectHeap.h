#ifndef __INFERRED_TOBJECTHEAP_H
#define __INFERRED_TOBJECTHEAP_H

class TObjectHeap {
public:
	void AllocateArray();
	void AllocateBinary();
	void AllocateBlock();
	void AllocateFrame();
	void AllocateFrameWithMap();
	void AllocateIndirectBinary();
	void AllocateMap();
	void AllocateObject();
	void BlockStatistics();
	void CleanUpWeakChain();
	void ClearRefHandles();
	void Clone();
	void CoalesceFreeBlocks();
	void DeclawRefsInRegisteredRanges();
	void DisposeMemory();
	void FindFreeBlock();
	void GC();
	void InHeap();
	void KillBlock();
	void MakeFreeBlock();
	void Mark();
	void RegisterRangeForDeclawing();
	void ReplaceObject();
	void ResizeBlock();
	void ResizeObject();
	void SetLength();
	void SplitBlock();
	void Statistics();
	void SweepAndCompact();
	TObjectHeap();
	void UnsafeSetArrayLength();
	void UnsafeSetBinaryLength();
	void UpdateRef();
	void Uriah();
	void UriahBinaryObjects();
	~TObjectHeap();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	char fField98; // Offset: 98
	char fField108; // Offset: 108
	char fField115; // Offset: 115
	char fField609; // Offset: 609
	char fField2317; // Offset: 2317
	char fField3104; // Offset: 3104
	char fField3328; // Offset: 3328
	char fField3958; // Offset: 3958
};

#endif
