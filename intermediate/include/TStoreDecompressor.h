#ifndef __INFERRED_TSTOREDECOMPRESSOR_H
#define __INFERRED_TSTOREDECOMPRESSOR_H

class TStoreDecompressor {
public:
	void Delete();
	void Init();
	void New();
	void Read();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
