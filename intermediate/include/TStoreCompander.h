#ifndef __INFERRED_TSTORECOMPANDER_H
#define __INFERRED_TSTORECOMPANDER_H

class TStoreCompander {
public:
	void BlockSize();
	void Delete();
	void DoTransactionAgainst();
	void Init();
	void IsReadOnly();
	void New();
	void Read();
	void Write();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
