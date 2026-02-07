#ifndef __INFERRED_TCARDATALOADER_H
#define __INFERRED_TCARDATALOADER_H

class TCardATALoader {
public:
	void ChecksumOf();
	void GetCardType();
	void LoadATAPackages();
	void LoadDriverPackage();
	void RemoveATAPackages();
	void SameStrings();
	TCardATALoader();
	~TCardATALoader();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
};

#endif
