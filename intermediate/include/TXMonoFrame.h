#ifndef __INFERRED_TXMONOFRAME_H
#define __INFERRED_TXMONOFRAME_H

class TXMonoFrame {
public:
	void GetTotalHeight();
	void GetTotalWidth();
	void PointToNearestFrame();
	void SectFrames();
	void SetTextBoundsSize();
	TXMonoFrame();

protected:
	long fField4; // Offset: 4
};

#endif
