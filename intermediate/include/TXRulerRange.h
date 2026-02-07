#ifndef __INFERRED_TXRULERRANGE_H
#define __INFERRED_TXRULERRANGE_H

class TXRulerRange {
public:
	void CharRangeToParagRange();
	void FreeData();
	void GetPendingRuler();
	void GetReplaceExtraChars();
	void InvalidatePendingRuler();
	void NukePendingRuler();
	void OffsetToObject();
	TXRulerRange();
	void UpdateRangeObjects();
	void ValidateRuler();
	void ValidateRulerRange();
	~TXRulerRange();

protected:
	long fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField6; // Offset: 6
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	char fField40; // Offset: 40
};

#endif
