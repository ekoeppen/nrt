#ifndef __INFERRED_TXATTRVALUES_H
#define __INFERRED_TXATTRVALUES_H

class TXAttrValues {
public:
	void Add();
	void GetIndAttrData();
	void GetValue();
	void Remove();
	void SetIndAttrData();
	TXAttrValues();
	~TXAttrValues();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
};

#endif
