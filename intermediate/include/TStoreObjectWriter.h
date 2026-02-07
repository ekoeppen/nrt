#ifndef __INFERRED_TSTOREOBJECTWRITER_H
#define __INFERRED_TSTOREOBJECTWRITER_H

class TStoreObjectWriter {
public:
	void NextHintChunk();
	void Prescan();
	void Prescan1();
	void Scan();
	void Scan1();
	TStoreObjectWriter();
	void Write();
	void WriteLargeBinary();
	~TStoreObjectWriter();

protected:
	long fField8; // Offset: 8
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField1156; // Offset: 1156
	long fField1160; // Offset: 1160
	long fField1164; // Offset: 1164
	long fField1168; // Offset: 1168
	char fField1172; // Offset: 1172
	long fField1176; // Offset: 1176
	long fField1180; // Offset: 1180
	long fField1184; // Offset: 1184
	long fField1192; // Offset: 1192
	char fField1197; // Offset: 1197
	char fField1198; // Offset: 1198
};

#endif
