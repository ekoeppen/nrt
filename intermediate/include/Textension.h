#ifndef __INFERRED_TEXTENSION_H
#define __INFERRED_TEXTENSION_H

class Textension {
public:
	void Activate();
	void CharToLine();
	void ClearKeyDown();
	void Click();
	void Compact();
	void DisplayChanged();
	void EndEdit();
	void Export();
	void Format();
	void GetContinuousAttrValues();
	void GetHiliteRangeRuns();
	void GetHiliteRangeWithoutSpaces();
	void GetKeyDownFlags();
	void GetNewRulerObject();
	void GetNewRunObject();
	void GetRangeBounds();
	void ITextension();
	void IsRangeGraphicsRun();
	void KeyDown();
	void PointToWord();
	void RegisterRuler();
	void RegisterRun();
	void ReplaceRange();
	void SetCharsHandler();
	void SetHiliteRange();
	Textension();
	void TextensionStart();
	void UpdateFormatter();
	void UpdatePendingRun();
	void UpdateRangeRulers();
	void UpdateRangeRuns();
	~Textension();

protected:
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	char fField40; // Offset: 40
};

#endif
