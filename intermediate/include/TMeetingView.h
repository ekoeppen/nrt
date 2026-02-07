#ifndef __INFERRED_TMEETINGVIEW_H
#define __INFERRED_TMEETINGVIEW_H

class TMeetingView {
public:
	void AddDragInfo();
	void AddHilited();
	void ClassID();
	void Constructor();
	void DeleteHilited();
	void DerivedFrom();
	void DragFeedback();
	void DrawHilitedData();
	void DrawHilites();
	void Drop();
	void DropDone();
	void DropRemove();
	void GetDropData();
	void GetSliderView();
	void GetSupportedDropTypes();
	void GetTextView();
	void GlobalHiliteBounds();
	void HandleClick();
	void HandleHilite();
	void HandleScrub();
	void HandleWord();
	void HiliteText();
	void Hilited();
	void MakeHilite();
	void RealDoCommand();
	void RemoveAllHilites();
	void RemoveHilite();

protected:
	long fField8; // Offset: 8
	long fField16; // Offset: 16
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField56; // Offset: 56
};

#endif
