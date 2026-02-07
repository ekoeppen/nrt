#ifndef __INFERRED_TLRGOBJSTORE_H
#define __INFERRED_TLRGOBJSTORE_H

class TLrgObjStore {
public:
	void Backup();
	void Create();
	void CreateFromCompressed();
	void Delete();
	void DeleteObject();
	void Duplicate();
	void Init();
	void New();
	void Resize();
	void SizeOfStream();
	void StorageSize();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
