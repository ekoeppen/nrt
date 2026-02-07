#ifndef __INFERRED_TXVIEW_H
#define __INFERRED_TXVIEW_H

class TXView {
public:
	void AcceptDrop();
	void ActivateSelection();
	void AddTextDragItem();
	void ChangeRangeRulers();
	void ChangeRangeRuns();
	void CharToPoint();
	void CheckDrag();
	void CheckReplaceData();
	void ClassID();
	void Clear();
	void Click();
	void ClickLoop();
	void Constructor();
	void Copy();
	void CountChars();
	void CreateNewTextension();
	void Cut();
	void DerivedFrom();
	void DoEditCommand();
	void DragFeedback();
	void DrawDragBackground();
	void DrawDragData();
	void Drop();
	void DropMove();
	void DropRemove();
	void Edited();
	void ExecuteCommand();
	void Externalize();
	void FindString();
	void GeometryChanged();
	void GetBestCoveredLine();
	void GetClipboardDataBits();
	void GetClipboardDataText();
	void GetContinuousRun();
	void GetCountPages();
	void GetCurrentKeyCommand();
	void GetDragInfo();
	void GetDropData();
	void GetDropOffset();
	void GetHiliteBounds();
	void GetHiliteRange();
	void GetIntersectedLines();
	void GetLineRange();
	void GetParagraphRange();
	void GetRangeData();
	void GetRangeText();
	void GetScrollValues();
	void GetSelection();
	void GetSupportedDropTypes();
	void GetTextViewRgn();
	void GetTotalHeight();
	void GetTotalWidth();
	void GetValue();
	void GetWordRange();
	void HandleCaretGesture();
	void HideRuler();
	void Idle();
	void InsertPageBreak();
	void Internalize();
	void InternalizeChars();
	void InternalizeFormattingData();
	void IsCharOrWordsScrub();
	void IsLinesScrub();
	void IsModified();
	void KeyDown();
	void KeyString();
	void NarrowVisByIntersectingObscuringSiblingsAndUncles();
	void NewAttrCommand();
	void NewKey();
	void NewMoveTextCommand();
	void NewPasteCommand();
	void NewReplaceTextCommand();
	void OffsetToCaret();
	void Paste();
	void PointToChar();
	void PostUndo();
	void RealDoCommand();
	void RealDraw();
	void Replace();
	void ReplaceAll();
	void RulerClick();
	void Scroll();
	void Scrub();
	void SetBounds();
	void SetCaretOffset();
	void SetDrawOrigin();
	void SetGeometry();
	void SetHiliteRange();
	void SetReadOnly();
	void SetSelection();
	void SetStore();
	void SetupDone();
	void ShowRuler();
	void SyncViewRgn();
	void TextFlags();
	void UpdateRuler();
	void UpdateRulerInfo();
	void UpdateScrollers();
	~TXView();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField32; // Offset: 32
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	char fField65; // Offset: 65
	long fField66; // Offset: 66
	char fField67; // Offset: 67
	long fField68; // Offset: 68
	char fField69; // Offset: 69
	long fField70; // Offset: 70
	char fField71; // Offset: 71
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	long fField88; // Offset: 88
	char fField92; // Offset: 92
};

#endif
