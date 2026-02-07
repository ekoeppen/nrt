#ifndef __INFERRED_TXMULTIFRAMEFORMATTER_H
#define __INFERRED_TXMULTIFRAMEFORMATTER_H

class TXMultiFrameFormatter {
public:
	void AppendFrame();
	void BreakFrame();
	void CharRangeChanged();
	void CheckFrameBreaks();
	void CheckReflow();
	void Compact();
	void ForceOverflow();
	void FreeData();
	void GetCountFrames();
	void GetFrameLineRange();
	void GetFrameTextHeight();
	void InsertLine();
	void LineToFrame();
	void MeasureFrame();
	void ReadFromStream();
	void RemoveFormattedFrames();
	void RemoveFrameLines();
	void RemoveFrames();
	void RemoveLines();
	void SetLineHeightInfo();
	TXMultiFrameFormatter();
	void VariableSizeFrames();
	void WriteToStream();
	~TXMultiFrameFormatter();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	char fField44; // Offset: 44
};

#endif
