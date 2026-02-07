#ifndef __INFERRED_TXRWORDUNIT_H
#define __INFERRED_TXRWORDUNIT_H

class TXrWordUnit {
public:
	void DisposeTrainingData();
	void GetTrainingData();
	void GetWordBase();
	void GetWordSize();
	void GetWordSlant();
	void IDispose();
	void IXrWordUnit();
	void Make();

protected:
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	long fField96; // Offset: 96
};

#endif
