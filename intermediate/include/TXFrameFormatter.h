#ifndef __INFERRED_TXFRAMEFORMATTER_H
#define __INFERRED_TXFRAMEFORMATTER_H

class TXFrameFormatter {
public:
	void BeginEdit();
	void CatchFrame();
	void CharRangeChanged();
	void CharToFrame();
	void EndEdit();
	void Format();
	void GetNextFrameEditInfo();
	void ReadFromStream();
	TXFrameFormatter();
	void TestFrameOverflow();
	void WriteToStream();

protected:
};

#endif
