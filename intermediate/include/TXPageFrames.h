#ifndef __INFERRED_TXPAGEFRAMES_H
#define __INFERRED_TXPAGEFRAMES_H

class TXPageFrames {
public:
	void GetAbsTextBounds();
	void GetCountPages();
	void GetPageGutter();
	void GetPageHeight();
	void GetPageWidth();
	void GetTotalHeight();
	void GetTotalWidth();
	void PageNoToCell();
	void PointToNearestFrame();
	void SectFrames();
	TXPageFrames();

protected:
	long fField4; // Offset: 4
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	char fField48; // Offset: 48
};

#endif
