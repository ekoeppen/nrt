#ifndef __INFERRED_TXADVANCEDRULER_H
#define __INFERRED_TXADVANCEDRULER_H

class TXAdvancedRuler {
public:
	void AdjustLineHeight();
	void Assign();
	void CalcPendingTabWidth();
	void CreateNew();
	void EqualTabs();
	void FreeData();
	void GetAttributeFlags();
	void GetAttributeValue();
	void GetAttributesValues();
	void GetClassId();
	void GetCommonAttrValue();
	void GetLineLeftBlanks();
	void GetLineRightBlanks();
	void GetNSObject();
	void GetTabWidth();
	void IsEqual();
	void Reference();
	void SetAttributeValue();
	void SetNSObject();
	void SetTabs();
	TXAdvancedRuler();
	void UpdateAttribute();

protected:
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	char fField28; // Offset: 28
};

#endif
