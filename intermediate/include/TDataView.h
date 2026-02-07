#ifndef __INFERRED_TDATAVIEW_H
#define __INFERRED_TDATAVIEW_H

class TDataView {
public:
	void AddHilited();
	void ClassID();
	void CleanupData();
	void DerivedFrom();
	void DiceHilited();
	void DrawHilitedData();
	void GetContext();
	void GetEnclosingEditView();
	void GetHiliteView();
	void GetProperties();
	void GetTextView();
	void HandleCaret();
	void HandleInk();
	void HandleInkWord();
	void HandleLineGesture();
	void HandleTap();
	void HandleWord();
	void HiliteText();
	void PointOverHilitedText();
	void PointOverText();
	void SaveAddedUnitBounds();

protected:
	long fField28; // Offset: 28
};

#endif
