#ifndef __INFERRED_TXLINESHEIGHTS_H
#define __INFERRED_TXLINESHEIGHTS_H

class TXLinesHeights {
public:
	void Concat();
	void EqualGroup();
	void FreeData();
	void GetLineHeightInfo();
	void GetLinesHeight();
	void HeightToCountLines();
	void InsertLine();
	void InsertLineHeightInfo();
	void LineToHeightGroup();
	void PixelToLine();
	void RemoveLines();
	void SetLineHeightInfo();
	TXLinesHeights();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField24; // Offset: 24
	long fField28; // Offset: 28
};

#endif
