#ifndef __INFERRED_PSERIALCHIPREGISTRY_H
#define __INFERRED_PSERIALCHIPREGISTRY_H

class PSerialChipRegistry {
public:
	void ClaimSerialChip();
	void Delete();
	void FindByChip();
	void FindByLocation();
	void FindByOption();
	void GetChipLocation();
	void GetChipPtr();
	void GetDefaultChip();
	void Init();
	void New();
	void Register();
	void SetDefaultChip();
	void UnRegister();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
