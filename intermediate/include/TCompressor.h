#ifndef __INFERRED_TCOMPRESSOR_H
#define __INFERRED_TCOMPRESSOR_H

class TCompressor {
public:
	void Compress();
	void Delete();
	void EstimatedCompressedSize();
	void Init();
	void New();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
