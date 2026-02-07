#ifndef __INFERRED_TXSTYLEDTEXT_H
#define __INFERRED_TXSTYLEDTEXT_H

class TXStyledText {
public:
	void AdvanceOffset();
	void CharToWord();
	void GetTextPort();
	void IStyledText();
	void IsWordSpace();
	void SetTextPort();
	TXStyledText();
	~TXStyledText();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
};

#endif
