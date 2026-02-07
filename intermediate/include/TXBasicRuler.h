#ifndef __INFERRED_TXBASICRULER_H
#define __INFERRED_TXBASICRULER_H

class TXBasicRuler {
public:
	void AdjustLineHeight();
	void Assign();
	void CalcPendingTabWidth();
	void CreateNew();
	void GetAttributeValue();
	void GetAttributesValues();
	void GetClassId();
	void GetCommonAttrValue();
	void GetLineLeftBlanks();
	void GetLineRightBlanks();
	void GetNSObject();
	void GetTabWidth();
	void IsEqual();
	void SetAttributeValue();
	void SetNSObject();
	TXBasicRuler();

protected:
	char fField8; // Offset: 8
};

#endif
