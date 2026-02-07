#ifndef __INFERRED_TOBJECTWRITER_H
#define __INFERRED_TOBJECTWRITER_H

class TObjectWriter {
public:
	void Prescan();
	void Scan();
	void SetCompressLargeBinaries();
	void Size();
	TObjectWriter();
	void Write();
	~TObjectWriter();

protected:
	char fField8; // Offset: 8
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	char fField36; // Offset: 36
};

#endif
