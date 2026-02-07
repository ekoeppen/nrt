#ifndef __INFERRED_TXFORMATTER_H
#define __INFERRED_TXFORMATTER_H

class TXFormatter {
public:
	void AppendEmptyLine();
	void BreakAlignTabChars();
	void BreakCtrlChar();
	void BreakLine();
	void BreakRun();
	void BreakVisibleChars();
	void CalcLinesHeights();
	void CalcRunsHeight();
	void CheckFramesReflow();
	void CheckRulerSettings();
	void Compact();
	void Format();
	void FormatAll();
	void FormatRange();
	void FreeData();
	void GetLineRange();
	void InsertLine();
	void IsLineFeed();
	void ReadFromStream();
	void RemoveFormattedLines();
	void RemoveLines();
	void ReplaceRange();
	void ReserveLines();
	void SetHandlers();
	void SetLineInfo();
	TXFormatter();
	void WriteToStream();
	~TXFormatter();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	char fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	char fField48; // Offset: 48
	char fField56; // Offset: 56
	char fField57; // Offset: 57
	long fField64; // Offset: 64
	long fField68; // Offset: 68
};

#endif
