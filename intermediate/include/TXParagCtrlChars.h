#ifndef __INFERRED_TXPARAGCTRLCHARS_H
#define __INFERRED_TXPARAGCTRLCHARS_H

class TXParagCtrlChars {
public:
	void Define();
	void GetCurrCtrlChar();
	void GetCurrCtrlOffset();
	void Invalid();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField76; // Offset: 76
	long fField140; // Offset: 140
};

#endif
