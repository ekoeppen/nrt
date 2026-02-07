#ifndef __INFERRED_TNBPTUPLEHEADER_H
#define __INFERRED_TNBPTUPLEHEADER_H

class TNBPTupleHeader {
public:
	void SetNetworkInfo();
	TNBPTupleHeader();

protected:
	char fField1; // Offset: 1
	char fField2; // Offset: 2
	char fField3; // Offset: 3
	char fField4; // Offset: 4
};

#endif
