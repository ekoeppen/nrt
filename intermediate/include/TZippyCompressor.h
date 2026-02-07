#ifndef __INFERRED_TZIPPYCOMPRESSOR_H
#define __INFERRED_TZIPPYCOMPRESSOR_H

class TZippyCompressor {
public:
	void CacheAndCompress();
	void ClassInfo();
	void Compress();
	void CompressChunk();
	void Delete();
	void EstimatedCompressedSize();
	void Finish();
	void HeaderSize();
	void Init();
	void InitCache();
	void New();
	void Sizeof();
	void StuffBits();

protected:
	char fField1; // Offset: 1
	long fField2; // Offset: 2
	char fField4; // Offset: 4
	char fField5; // Offset: 5
	long fField16; // Offset: 16
	long fField20; // Offset: 20
};

#endif
