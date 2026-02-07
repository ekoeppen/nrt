#ifndef __INFERRED_TXNEWTTEXTRUN_H
#define __INFERRED_TXNEWTTEXTRUN_H

class TXNewtTextRun {
public:
	void AddFace();
	void Assign();
	void CharToPixel();
	void CreateNew();
	void Draw();
	void FullJustifPortion();
	void GetAttributeFlags();
	void GetAttributeValue();
	void GetAttributesValues();
	void GetClassId();
	void GetCommonAttrValue();
	void GetHeightInfo();
	void GetNSObject();
	void GetNewtStyleRecord();
	void IsEqual();
	void IsTextRun();
	void LineBreak();
	void MeasureWidth();
	void PixelToChar();
	void RemoveFace();
	void SetAttributeValue();
	void SetNSObject();
	TXNewtTextRun();
	void UpdateAttribute();
	void VisibleLen();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
};

#endif
