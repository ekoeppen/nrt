#ifndef __INFERRED_TXMONOSIZEFRAMES_H
#define __INFERRED_TXMONOSIZEFRAMES_H

class TXMonoSizeFrames {
public:
	void GetLineFormatWidth();
	void GetLineMaxWidth();
	void GetTextBoundsSize();
	void SetTextBoundsSize();
	TXMonoSizeFrames();

protected:
	long fField4; // Offset: 4
	long fField40; // Offset: 40
	long fField44; // Offset: 44
};

#endif
