#ifndef __INFERRED_TZIPPYDECOMPRESSOR_H
#define __INFERRED_TZIPPYDECOMPRESSOR_H

class TZippyDecompressor {
public:
	void ClassInfo();
	void Decompress();
	void DecompressChunk();
	void DecompressedLength();
	void Delete();
	void ExpandValue();
	void Finish();
	void HeaderSize();
	void Init();
	void InitCache();
	void New();
	void Sizeof();

protected:
	char fField1; // Offset: 1
	long fField16; // Offset: 16
};

#endif
