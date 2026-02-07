#ifndef __INFERRED_TPMITERATOR_H
#define __INFERRED_TPMITERATOR_H

class TPMIterator {
public:
	void Done();
	void Init();
	void IsCopyProtected();
	void More();
	void NextPackage();
	void PackageId();
	void PackageName();
	void PackageSize();
	TPMIterator();
	~TPMIterator();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField92; // Offset: 92
	long fField96; // Offset: 96
};

#endif
