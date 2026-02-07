#ifndef __INFERRED_TARITHMETICDECOMPRESSOR_H
#define __INFERRED_TARITHMETICDECOMPRESSOR_H

class TArithmeticDecompressor {
public:
	void ClassInfo();
	void Cleanup();
	void Delete();
	void DiscardBits();
	void FindSymbol();
	void Init();
	void NarrowRegion();
	void New();
	void ReadByte();
	void ReadChunk();
	void Reset();
	void Sizeof();
	void StartModel();
	void StartReadingBits();
	void UpdateModel();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	char fField40; // Offset: 40
	char fField41; // Offset: 41
	char fField42; // Offset: 42
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	char fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField204; // Offset: 204
	long fField208; // Offset: 208
};

#endif
