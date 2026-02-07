#ifndef __INFERRED_TXMONOFRAMEFORMATTER_H
#define __INFERRED_TXMONOFRAMEFORMATTER_H

class TXMonoFrameFormatter {
public:
	void CatchFrame();
	void ForceOverflow();
	void GetCountFrames();
	void GetFrameHeight();
	void GetFrameLineRange();
	void GetFrameTextHeight();
	void GetNextFrameEditInfo();
	void LineToFrame();
	void SetFrameHeight();
	TXMonoFrameFormatter();

protected:
	long fField12; // Offset: 12
	long fField24; // Offset: 24
	long fField28; // Offset: 28
};

#endif
