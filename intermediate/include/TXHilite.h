#ifndef __INFERRED_TXHILITE_H
#define __INFERRED_TXHILITE_H

class TXHilite {
public:
	void Activate();
	void AdjustCharOffset();
	void ArrowKey();
	void CalcAutoScrollParams();
	void CalcCaretRect();
	void CalcCountClicks();
	void CalcRangePosition();
	void Click();
	void DoClickLoop();
	void DragHilite();
	void Draw();
	void ExtendHilite();
	void GetCaretRect();
	void GetClickRange();
	void GetHiliteRange();
	void GetHiliteRgn();
	void HiliteFrame();
	void HiliteLine();
	void HiliteRange();
	void HiliteRect();
	void Invalid();
	void IsCustomHilite();
	void IsPointInHilite();
	void LeftRightArrows();
	void SetHandlers();
	void SetHiliteEnd();
	void SetHiliteRange();
	void SetHiliteStart();
	void SetHiliteState();
	TXHilite();
	void UpDownArrows();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField22; // Offset: 22
	char fField24; // Offset: 24
	char fField25; // Offset: 25
	char fField26; // Offset: 26
	char fField27; // Offset: 27
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	char fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField68; // Offset: 68
};

#endif
