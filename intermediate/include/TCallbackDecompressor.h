#ifndef __INFERRED_TCALLBACKDECOMPRESSOR_H
#define __INFERRED_TCALLBACKDECOMPRESSOR_H

class TCallbackDecompressor {
public:
	void Delete();
	void Init();
	void New();
	void ReadChunk();
	void Reset();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
