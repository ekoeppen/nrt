#ifndef __INFERRED_TIRDSCINFO_H
#define __INFERRED_TIRDSCINFO_H

class TIrDscInfo {
public:
	void AddDevInfoToBuffer();
	void ExtractDevInfoFromBuffer();
	void SetNickname();
	TIrDscInfo();
	~TIrDscInfo();

protected:
	long fField4; // Offset: 4
	char fField9; // Offset: 9
};

#endif
