#ifndef __INFERRED_TCONTAINERVIEW_H
#define __INFERRED_TCONTAINERVIEW_H

class TContainerView {
public:
	void AddHilited();
	void ChildBoundsChanged();
	void ClassID();
	void ClickOptions();
	void Constructor();
	void CopyForm();
	void DeleteHilited();
	void DerivedFrom();
	void DrawHilitedData();
	void DrawHilites();
	void GetHiliteView();
	void GetValue();
	void GlobalHiliteBounds();
	void HandleCaret();
	void HandleHilite();
	void HandleInkWord();
	void HandleLineGesture();
	void HandleScrub();
	void HandleTap();
	void HandleWord();
	void HiliteAll();
	void IsCompletelyHilited();
	void MakeHilite();
	void PointOverText();
	void PointToCaret();
	void RealDoCommand();
	void RemoveAllHilites();
	void RemoveHilite();
	~TContainerView();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	char fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField48; // Offset: 48
	long fField52; // Offset: 52
};

#endif
