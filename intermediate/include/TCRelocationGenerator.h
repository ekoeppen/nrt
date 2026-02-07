#ifndef __INFERRED_TCRELOCATIONGENERATOR_H
#define __INFERRED_TCRELOCATIONGENERATOR_H

class TCRelocationGenerator {
public:
	void GetRelocDataForBlock();
	void GetRelocDataSizeForBlock();
	void Init();
	TCRelocationGenerator();
	~TCRelocationGenerator();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	char fField12; // Offset: 12
	char fField13; // Offset: 13
	long fField16; // Offset: 16
	long fField20; // Offset: 20
};

#endif
