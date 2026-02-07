#ifndef __INFERRED_TARITHMETICCOMPRESSOR_H
#define __INFERRED_TARITHMETICCOMPRESSOR_H

class TArithmeticCompressor {
public:
	void ClassInfo();
	void Cleanup();
	void Delete();
	void Flush();
	void FlushBits();
	void Init();
	void NarrowRegion();
	void New();
	void PushOutBits();
	void Reset();
	void Sizeof();
	void StartModel();
	void StartOutputtingBits();
	void UpdateModel();
	void WriteByte();
	void WriteChunk();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField36; // Offset: 36
	char fField40; // Offset: 40
	char fField41; // Offset: 41
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	char fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField200; // Offset: 200
	long fField204; // Offset: 204
};

#endif
