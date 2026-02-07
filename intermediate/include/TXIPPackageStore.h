#ifndef __INFERRED_TXIPPACKAGESTORE_H
#define __INFERRED_TXIPPACKAGESTORE_H

class TXIPPackageStore {
public:
	void Backup();
	void ClassInfo();
	void Create();
	void CreateFromCompressed();
	void Delete();
	void DeleteObject();
	void Duplicate();
	void Init();
	void New();
	void Resize();
	void SizeOfStream();
	void Sizeof();
	void StorageSize();

protected:
	char fField355; // Offset: 355
	long fField1112; // Offset: 1112
};

#endif
