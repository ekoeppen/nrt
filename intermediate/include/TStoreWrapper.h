#ifndef __INFERRED_TSTOREWRAPPER_H
#define __INFERRED_TSTOREWRAPPER_H

class TStoreWrapper {
public:
	void Abort();
	void AddMap();
	void CopyMap();
	void CopySymbol();
	void Dirty();
	void EndCopyMaps_Symbols();
	void FrameToMapReference();
	void GetStoreSizes();
	void LockStore();
	void ReferenceToMap();
	void ReferenceToSymbol();
	void SparklingClean();
	void StartCopyMaps_Symbols();
	void SymbolToReference();
	TStoreWrapper();
	void UnlockStore();
	~TStoreWrapper();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField116; // Offset: 116
	long fField120; // Offset: 120
	long fField124; // Offset: 124
	char fField144; // Offset: 144
	long fField148; // Offset: 148
};

#endif
