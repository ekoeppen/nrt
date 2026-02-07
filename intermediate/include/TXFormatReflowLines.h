#ifndef __INFERRED_TXFORMATREFLOWLINES_H
#define __INFERRED_TXFORMATREFLOWLINES_H

class TXFormatReflowLines {
public:
	void GetFirst();
	void GetLast();
	void Reset();

protected:
	long fField4; // Offset: 4
	char fField8; // Offset: 8
	char fField9; // Offset: 9
};

#endif
