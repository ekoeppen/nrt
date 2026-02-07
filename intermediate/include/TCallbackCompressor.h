#ifndef __INFERRED_TCALLBACKCOMPRESSOR_H
#define __INFERRED_TCALLBACKCOMPRESSOR_H

class TCallbackCompressor {
public:
	void Delete();
	void Flush();
	void Init();
	void New();
	void Reset();
	void WriteChunk();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
