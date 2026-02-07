#ifndef __INFERRED_TTESTSTOREFILELIST_H
#define __INFERRED_TTESTSTOREFILELIST_H

class TTestStoreFileList {
public:
	void Add();
	void DeleteAll();
	void FileNameSum();
	void FileNamesEqual();
	void Get();
	TTestStoreFileList();
	~TTestStoreFileList();

protected:
	long fField24; // Offset: 24
};

#endif
