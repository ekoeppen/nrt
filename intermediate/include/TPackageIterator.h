#ifndef __INFERRED_TPACKAGEITERATOR_H
#define __INFERRED_TPACKAGEITERATOR_H

class TPackageIterator {
public:
	void ComputeSizeOfEntriesAndData();
	void CopyProtected();
	void Copyright();
	void CreationDate();
	void DirectorySize();
	void DisposeDirectory();
	void ForDispatchOnly();
	void GetPackageId();
	void GetPartDataOffset();
	void GetPartInfo();
	void GetRelocationChunkInfo();
	void GetVersion();
	void Init();
	void InitFields();
	void ModifyDate();
	void NumberOfParts();
	void PackageFlags();
	void PackageName();
	void PackageSize();
	void ProcessorTypeOfPart();
	void SetupRelocationData();
	void Store();
	TPackageIterator();
	void VerifyPackage();
	~TPackageIterator();

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
	long fField44; // Offset: 44
};

#endif
