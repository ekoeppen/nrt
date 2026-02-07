#ifndef __INFERRED_TXIPCRELOCATIONGENERATOR_H
#define __INFERRED_TXIPCRELOCATIONGENERATOR_H

class TXIPCRelocationGenerator {
public:
	void GetCRelocBlockHeader();
	void GetRelocDataForBlock();
	void Init();
	TXIPCRelocationGenerator();
	~TXIPCRelocationGenerator();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
};

#endif
