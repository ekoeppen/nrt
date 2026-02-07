#ifndef __INFERRED_TWRITEELEMENT_H
#define __INFERRED_TWRITEELEMENT_H

class TWriteElement {
public:
	void Destroy();
	void Init();
	void Munge();
	void Reset();
	void StreamOut();
	TWriteElement();
	~TWriteElement();

protected:
	char fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField20; // Offset: 20
};

#endif
