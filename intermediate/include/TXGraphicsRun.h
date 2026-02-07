#ifndef __INFERRED_TXGRAPHICSRUN_H
#define __INFERRED_TXGRAPHICSRUN_H

class TXGraphicsRun {
public:
	void AdjustRunRect();
	void CharToPixel();
	void Draw();
	void DrawHilite();
	void GetHeightInfo();
	void GetHiliteInset();
	void GetObjFlags();
	void GetRunRect();
	void GetTotalDimensions();
	void IsTextRun();
	void LineBreak();
	void MeasureWidth();
	void PixelToChar();
	void Reference();
	void SetHilite();
	TXGraphicsRun();

protected:
	long fField8; // Offset: 8
	char fField12; // Offset: 12
};

#endif
