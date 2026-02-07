#ifndef __INFERRED_TVIEW_H
#define __INFERRED_TVIEW_H

class TView {
public:
	void AcceptDrop();
	void ActivateSelection();
	void AddChild();
	void AddDragInfo();
	void AddHiliter();
	void AddToSoup();
	void AddView();
	void AddViews();
	void AlignDragPtToGrid();
	void BringToFront();
	void BuildContext();
	void BuildKeyChildList();
	void Changed();
	void ChildBoundsChanged();
	void ChildViewFrames();
	void ChildViewMoved();
	void Children();
	void ChildrenHeight();
	void ClassID();
	void ClearFlags();
	void ClickOptions();
	void Clipper();
	void Constructor();
	void ContentsOrigin();
	void CopyProtection();
	void DataFrame();
	void DejustifyBounds();
	void Delete();
	void DeleteHilited();
	void DerivedFrom();
	void Dirty();
	void Distance();
	void DoCommand();
	void DoEditCommand();
	void DoMoveCommand();
	void Drag();
	void DragAndDrop();
	void DragFeedback();
	void Draw();
	void DrawChildren();
	void DrawDragBackground();
	void DrawDragData();
	void DrawHilitedData();
	void DrawHilites();
	void DrawHiliting();
	void DrawScaledData();
	void Drop();
	void DropApprove();
	void DropDone();
	void DropMove();
	void DropRemove();
	void Dump();
	void EndDrag();
	void FindClosestView();
	void FindDropView();
	void FindID();
	void FindView();
	void FirstHilite();
	void FrontMost();
	void FrontMostApp();
	void GetCacheProto();
	void GetCacheVariable();
	void GetChildOrigin();
	void GetClipboardDataBits();
	void GetDropData();
	void GetFrontMask();
	void GetProto();
	void GetRangeText();
	void GetSelection();
	void GetSupportedDropTypes();
	void GetTextStyle();
	void GetTextStyleRecord();
	void GetValue();
	void GetVar();
	void GetWindowView();
	void GetWriteableProtoVariable();
	void GetWriteableVariable();
	void GlobalHiliteBounds();
	void GlobalHilitePinnedBounds();
	void GlobalHiliteResizeBounds();
	void HandleHilite();
	void HandleKeyEvent();
	void HandleScrub();
	void HasVisRgn();
	void Hide();
	void Hilite();
	void HiliteAll();
	void Hilited();
	void Hilites();
	void Idle();
	void InsideView();
	void InvalidateSlotCache();
	void IsCompletelyHilited();
	void IsGridded();
	void JustifyBounds();
	void LocalOrigin();
	void Move();
	void MoveChildBehind();
	void NarrowVisByIntersectingObscuringSiblingsAndUncles();
	void NextKeyView();
	void Offset();
	void OffsetToCaret();
	void OuterBounds();
	void PointInHilite();
	void PointToCaret();
	void PostDraw();
	void PreDraw();
	void Printing();
	void ProtoedFrom();
	void RealDoCommand();
	void RealDraw();
	void RecalcBounds();
	void RemoveAllHilites();
	void RemoveAllViews();
	void RemoveChildView();
	void RemoveFromSoup();
	void RemoveHilite();
	void RemoveUnmarked();
	void RemoveView();
	void ReorderView();
	void RunCacheScript();
	void RunScript();
	void Scale();
	void Select();
	void SelectNone();
	void SetBounds();
	void SetCaretOffset();
	void SetChildrenVertical();
	void SetContextSlot();
	void SetCustomPattern();
	void SetDataSlot();
	void SetFlags();
	void SetOrigin();
	void SetSelection();
	void SetValue();
	void SetupDone();
	void SetupForm();
	void SetupVisRgn();
	void Show();
	void SimpleOffset();
	void SoundEffect();
	void Sync();
	void SyncScroll();
	void SyncScrollSoup();
	void TargetDrop();
	void TextFlags();
	void TransferCopyProtection();
	void Update();
	void ViewVisibleChanged();
	void VisibleDeep();
	void WriteBounds();
	~TView();

protected:
	long fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField18; // Offset: 18
	long fField20; // Offset: 20
	long fField22; // Offset: 22
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField800; // Offset: 800
	long fField1394; // Offset: 1394
	long fField2119; // Offset: 2119
	long fField2121; // Offset: 2121
};

#endif
