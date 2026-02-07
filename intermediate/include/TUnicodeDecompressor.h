#ifndef __INFERRED_TUNICODEDECOMPRESSOR_H
#define __INFERRED_TUNICODEDECOMPRESSOR_H

class TUnicodeDecompressor {
public:
	void ClassInfo();
	void Delete();
	void Init();
	void New();
	void ReadChunk();
	void Reset();
	void Sizeof();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	char fField24; // Offset: 24
	long fField28; // Offset: 28
	char fField32; // Offset: 32
	char fField289; // Offset: 289
};

#endif
