#ifndef __INFERRED_TDECOMPRESSOR_H
#define __INFERRED_TDECOMPRESSOR_H

class TDecompressor {
public:
	void Decompress();
	void Delete();
	void Init();
	void New();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
