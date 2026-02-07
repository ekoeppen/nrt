#ifndef __INFERRED_TSTOREPACKAGEWRITER_H
#define __INFERRED_TSTOREPACKAGEWRITER_H

class TStorePackageWriter {
public:
	void Abort();
	void Flush();
	void Init();
	TStorePackageWriter();
	void WriteChunk();
	void WriteCompressedData();
	~TStorePackageWriter();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
};

#endif
