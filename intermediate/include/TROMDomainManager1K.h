#ifndef __INFERRED_TROMDOMAINMANAGER1K_H
#define __INFERRED_TROMDOMAINMANAGER1K_H

class TROMDomainManager1K {
public:
	void AddPackage();
	void AddPage();
	void AddPageTableEntry();
	void AllocatePackageEntry();
	void ClearTableEntry();
	void Collect();
	void DecompressAndMap();
	void DeleteObjectInfo();
	void DoAcquireDatabase();
	void DoTransactionAgainstObject();
	void EndSession();
	void Fault();
	void FindSubPage();
	void FlushCache();
	void FlushCacheByBase();
	void FreeAnySubPages();
	void FreeSubPages();
	void GetObjectPtr();
	void GetSourcePage();
	void GetSubPage();
	void GetWorkingSetPage();
	void InsertPages();
	void IsEmptyPage();
	void MakePermissions();
	void MakeSubPageBitMap();
	void MungeObject();
	void OKIfDirty();
	void ObjectToIndex();
	void PackageToIndex();
	void ReleasePageTableEntry();
	void ReleasePagesFromOurWS();
	void ReleaseRequest();
	void RemovePages();
	void Reset();
	void ResizeObject();
	void RestrictPage();
	void RestrictToInternalWorkingSet();
	void RestrictedPage();
	void SetPackageId();
	void ShuffleSubPages();
	void SubPageFree();
	void SubPageMap();
	TROMDomainManager1K();
	void UnrestrictPage();
	void UserRequest();
	void VAddrToPageIndex();
	void ValidPage();
	void WriteOutPage();
	void XIPAddPackage();
	void XIPAllocatePackageEntry();
	void XIPEndSession();
	void XIPFault();
	void XIPInvalidateStore();
	void XIPMapInPackageSection();
	void XIPObjectHasMoved();
	~TROMDomainManager1K();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	char fField15; // Offset: 15
	long fField16; // Offset: 16
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	char fField48; // Offset: 48
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	long fField88; // Offset: 88
	long fField92; // Offset: 92
	long fField96; // Offset: 96
	long fField100; // Offset: 100
	long fField104; // Offset: 104
	long fField108; // Offset: 108
	long fField112; // Offset: 112
	long fField152; // Offset: 152
	long fField156; // Offset: 156
	long fField168; // Offset: 168
	long fField176; // Offset: 176
	long fField180; // Offset: 180
	long fField184; // Offset: 184
	long fField196; // Offset: 196
	long fField200; // Offset: 200
	char fField204; // Offset: 204
	char fField205; // Offset: 205
	char fField216; // Offset: 216
	char fField217; // Offset: 217
	char fField218; // Offset: 218
	long fField220; // Offset: 220
	long fField512; // Offset: 512
	long fField599; // Offset: 599
	long fField879; // Offset: 879
};

#endif
