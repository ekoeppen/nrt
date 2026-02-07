#ifndef __INFERRED_TUNICODECOMPRESSOR_H
#define __INFERRED_TUNICODECOMPRESSOR_H

class TUnicodeCompressor {
public:
	void ClassInfo();
	void Delete();
	void Flush();
	void Init();
	void New();
	void Reset();
	void Sizeof();
	void WriteChunk();
	void WriteRun();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField152; // Offset: 152
	long fField156; // Offset: 156
	char fField160; // Offset: 160
	char fField161; // Offset: 161
};

#endif
