#ifndef __INFERRED_TTIMERELEMENT_H
#define __INFERRED_TTIMERELEMENT_H

class TTimerElement {
public:
	void Cancel();
	void Prime();
	TTimerElement();
	~TTimerElement();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	char fField20; // Offset: 20
};

#endif
