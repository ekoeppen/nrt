#ifndef __INFERRED_TXRANGES_H
#define __INFERRED_TXRANGES_H

class TXRanges {
public:
	void AddToRangeEnd();
	void FreeData();
	void GetLastRangeEnd();
	void GetRangeBounds();
	void GetRangeEnd();
	void GetRangeLen();
	void GetRangeStart();
	void IsRangeStart();
	void OffsetToRangeIndex();
	void SectRanges();
	void SetRangeEnd();
	TXRanges();

protected:
	long fField4; // Offset: 4
	char fField8; // Offset: 8
};

#endif
