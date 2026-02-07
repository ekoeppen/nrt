#ifndef __INFERRED_TXIPSTORECOMPANDER_H
#define __INFERRED_TXIPSTORECOMPANDER_H

class TXIPStoreCompander {
public:
	void BlockSize();
	void ClassInfo();
	void Delete();
	void DoTransactionAgainst();
	void Init();
	void IsReadOnly();
	void New();
	void Read();
	void Sizeof();
	void Write();

protected:
	long fField16; // Offset: 16
	long fField24; // Offset: 24
	char fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
};

#endif
