#ifndef __INFERRED_TEDITVIEW_H
#define __INFERRED_TEDITVIEW_H

class TEditView {
public:
	void ActivateSelection();
	void AddDragInfo();
	void AddForm();
	void AddHiliter();
	void AddNewParagraph();
	void AlignBounds();
	void AlignToLineSpacing();
	void BoundsOverlapsGraphics();
	void BuildKeyChildList();
	void ChildBoundsChanged();
	void ClassID();
	void CleanupData();
	void Constructor();
	void CountHilites();
	void DeleteHilitedViews();
	void DerivedFrom();
	void DetermineKeyView();
	void DiceHilited();
	void DirtyBoxHilites();
	void DrawHilitedData();
	void DrawHiliting();
	void DrawScaledViews();
	void Drop();
	void DropDone();
	void DropMove();
	void DropRemove();
	void FindDropView();
	void GetCaretGlobalTopLeft();
	void GetCaretLocalTopLeft();
	void GetDragInfo();
	void GetDropData();
	void GetHilitedViewsSorted();
	void GetSelection();
	void GetSupportedDropTypes();
	void GetValue();
	void GlobalHiliteBounds();
	void GlobalHilitePinnedBounds();
	void GlobalHiliteResizeBounds();
	void GlobalSelectedBounds();
	void HandleCaret();
	void HandleInk();
	void HandleInkWord();
	void HandleInsertItems();
	void HandleLineGesture();
	void HandleShape();
	void HandleTap();
	void HandleWord();
	void HandleWordUnit();
	void HasHilitedChildren();
	void HiliteAll();
	void HiliteClick();
	void Idle();
	void InvalAllHilites();
	void JamText();
	void MoveBetweenParagraphs();
	void OffsetToCaret();
	void PlaybackInk();
	void PointInHilite();
	void PointToCaret();
	void PositionCaret();
	void PostDraw();
	void RealDoCommand();
	void RemoveAllHilites();
	void ResetHilitesForNewWord();
	void Scrub();
	void ScrubHilite();
	void SetCaretRectGlobal();
	void SetCaretRectLocal();
	void SetSelection();
	void SetValue();
	void SetupDone();
	void TextContainingPoint();
	void TrackDistort();
	void TrackScale();
	void ValidateCaret();

protected:
	long fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField6; // Offset: 6
	long fField8; // Offset: 8
	long fField16; // Offset: 16
	char fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField48; // Offset: 48
	char fField49; // Offset: 49
	long fField52; // Offset: 52
	char fField64; // Offset: 64
	long fField72; // Offset: 72
	char fField76; // Offset: 76
	char fField92; // Offset: 92
};

#endif
