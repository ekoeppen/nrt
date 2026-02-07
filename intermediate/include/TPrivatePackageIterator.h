#ifndef __INFERRED_TPRIVATEPACKAGEITERATOR_H
#define __INFERRED_TPRIVATEPACKAGEITERATOR_H

class TPrivatePackageIterator {
public:
	void CheckHeader();
	void ComputeSizeOfEntriesAndData();
	void DisposeDirectory();
	void GetPartDataOffset();
	void GetPartInfo();
	void GetPartInfoDesc();
	void GetRelocationChunkInfo();
	void Init();
	void NumberOfParts();
	void PackageName();
	void PackageSize();
	void SetupRelocationData();
	TPrivatePackageIterator();
	void VerifyPackage();
	~TPrivatePackageIterator();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField48; // Offset: 48
};

#endif
