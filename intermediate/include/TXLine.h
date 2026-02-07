#ifndef __INFERRED_TXLINE_H
#define __INFERRED_TXLINE_H

class TXLine {
public:
	void CalcAlignTabWidth();
	void CalcFullJustifPortions();
	void CalcRunHilite();
	void CalcVisibleLength();
	void CharToRun();
	void CharacterToPixel();
	void DefineRunWidths();
	void DefineRuns();
	void DefineRunsExtraWidths();
	void DoLineLayout();
	void Draw();
	void GetLineHilite();
	void GetRunDisplayInfo();
	void InsertRun();
	void PixelToCharacter();
	void PixelToRun();
	void RunCharToPixel();
	void RunMeasure();
	TXLine();
	~TXLine();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	char fField20; // Offset: 20
	long fField24; // Offset: 24
	char fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
};

#endif
