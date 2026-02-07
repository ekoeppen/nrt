#ifndef __INFERRED_TXREGISTEREDOBJECTS_H
#define __INFERRED_TXREGISTEREDOBJECTS_H

class TXRegisteredObjects {
public:
	void Add();
	void GetIndObject();
	TXRegisteredObjects();
	~TXRegisteredObjects();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
