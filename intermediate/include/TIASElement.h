#ifndef __INFERRED_TIASELEMENT_H
#define __INFERRED_TIASELEMENT_H

class TIASElement {
public:
	void AddInfoToBuffer();
	void ExtractInfoFromBuffer();
	void GetInteger();
	void SetInteger();
	void SetNBytes();
	void SetString();
	TIASElement();
	~TIASElement();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
};

#endif
