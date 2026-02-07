#ifndef __INFERRED_TSIMPLESTORECOMPANDER_H
#define __INFERRED_TSIMPLESTORECOMPANDER_H

class TSimpleStoreCompander {
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
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	char fField28; // Offset: 28
};

#endif
