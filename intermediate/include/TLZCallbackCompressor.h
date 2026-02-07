#ifndef __INFERRED_TLZCALLBACKCOMPRESSOR_H
#define __INFERRED_TLZCALLBACKCOMPRESSOR_H

class TLZCallbackCompressor {
public:
	void ClassInfo();
	void Delete();
	void Flush();
	void Init();
	void New();
	void Reset();
	void Sizeof();
	void WriteChunk();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
};

#endif
