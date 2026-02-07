#ifndef __INFERRED_PTHESERCHIPREGISTRY_H
#define __INFERRED_PTHESERCHIPREGISTRY_H

class PTheSerChipRegistry {
public:
	void ClaimSerialChip();
	void ClassInfo();
	void ClearEntry();
	void Delete();
	void FindByChip();
	void FindByLocation();
	void FindByOption();
	void FindNextFreeIndex();
	void GetChipLocation();
	void GetChipPtr();
	void GetDefaultChip();
	void GetMutex();
	void IDToIndex();
	void IndexToID();
	void Init();
	void New();
	void Register();
	void RelMutex();
	void SetChipData();
	void SetDefaultChip();
	void Sizeof();
	void UnRegister();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	long fField88; // Offset: 88
};

#endif
