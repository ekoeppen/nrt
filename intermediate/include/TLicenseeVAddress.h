#ifndef __INFERRED_TLICENSEEVADDRESS_H
#define __INFERRED_TLICENSEEVADDRESS_H

class TLicenseeVAddress {
public:
	void AddDomainToEnvironment();
	void GetNextVirtualAddress();
	void Map();
	void SetupDomain();
	TLicenseeVAddress();
	void Unmap();
	void operator=();
	~TLicenseeVAddress();

protected:
	char fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	char fField20; // Offset: 20
	char fField21; // Offset: 21
};

#endif
