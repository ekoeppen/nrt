#ifndef __INFERRED_TXRWORDDOMAIN_H
#define __INFERRED_TXRWORDDOMAIN_H

class TXrWordDomain {
public:
	void Classify();
	void ClassifyXrWord();
	void ConfigureSubDomain();
	void Dispose();
	void DomainParameter();
	void Group();
	void IXrWordDomain();
	void InitializeParamStruct();
	void Make();
	void Reclassify();
	void SetParameters();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField24; // Offset: 24
	long fField52; // Offset: 52
	long fField218; // Offset: 218
	char fField308; // Offset: 308
	long fField312; // Offset: 312
	long fField316; // Offset: 316
	long fField320; // Offset: 320
	long fField324; // Offset: 324
	long fField328; // Offset: 328
	char fField332; // Offset: 332
	char fField333; // Offset: 333
	char fField348; // Offset: 348
	char fField349; // Offset: 349
};

#endif
