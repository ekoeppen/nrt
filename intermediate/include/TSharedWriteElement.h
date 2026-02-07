#ifndef __INFERRED_TSHAREDWRITEELEMENT_H
#define __INFERRED_TSHAREDWRITEELEMENT_H

class TSharedWriteElement {
public:
	void Destroy();
	void Init();
	void Reset();
	void StreamOut();
	TSharedWriteElement();
	~TSharedWriteElement();

protected:
	long fField12; // Offset: 12
	long fField24; // Offset: 24
	long fField28; // Offset: 28
};

#endif
