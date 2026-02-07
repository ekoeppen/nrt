#ifndef __INFERRED_TSTOREREADPIPE_H
#define __INFERRED_TSTOREREADPIPE_H

class TStoreReadPipe {
public:
	void DecompCallback();
	void FillBuffer();
	void Read();
	void ReadFromStore();
	void SetPSSID();
	void SetPosition();
	void Skip();
	void SkipUByte();
	TStoreReadPipe();
	~TStoreReadPipe();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField124; // Offset: 124
	long fField284; // Offset: 284
};

#endif
