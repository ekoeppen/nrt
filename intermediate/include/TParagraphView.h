#ifndef __INFERRED_TPARAGRAPHVIEW_H
#define __INFERRED_TPARAGRAPHVIEW_H

class TParagraphView {
public:
	void ActivateSelection();
	void AddDragInfo();
	void AddHilited();
	void AddKeyToCurrUndo();
	void AddSpaceToEnd();
	void AddTabStop();
	void AddWord();
	void AdjustBoundsForFirstBaseline();
	void AdjustHilites();
	void AdjustInsertAreasAfterDeletion();
	void AdjustInsertAreasAfterInsertion();
	void AdjustStyles();
	void Area();
	void BoundsOfLastLine();
	void CaretRelativeToVisibleRect();
	void ChangeStyleOfSelection();
	void ChangeStylesOfRange();
	void CheckAndDoJoin();
	void CheckAndDoSplitInk();
	void CheckStyles();
	void ClassID();
	void CleanupData();
	void ClearAllCaches();
	void ClickOptions();
	void Constructor();
	void CountTabStops();
	void CreateAllCaches();
	void CreateStyleRecordCache();
	void DeleteHilited();
	void DeleteHilitedTextOnly();
	void DerivedFrom();
	void DestroyStyleRecordCache();
	void DragFeedback();
	void DrawHilitedData();
	void DrawHilites();
	void DrawHiliting();
	void DrawScaledData();
	void Drop();
	void DropDone();
	void DropMove();
	void DropRemove();
	void ExtractRangeAsRichString();
	void ExtractTextRange();
	void FillAllCaches();
	void FindClosestBaseline();
	void FindFirstWordHitByHilite();
	void FindLineContainingCharOffset();
	void FindLineContainingPoint();
	void FindLineContainingRect();
	void FindLineForWord();
	void FindTab();
	void FindTextRunContainingCharOffset();
	void FindTextRunContainingCoordinate();
	void FindWordInParagraph();
	void FindWordInRun();
	void FindWordOffset();
	void FixupBBox();
	void FlushWordAtCaret();
	void GetCachedRange();
	void GetDefaultViewStyle();
	void GetDropData();
	void GetFirstBaseline();
	void GetInkRefAndBounds();
	void GetInterLineSpacing();
	void GetLastBaseline();
	void GetNextBaseline();
	void GetProperties();
	void GetRangeProperties();
	void GetRangeText();
	void GetRequestedLineSpacing();
	void GetSelection();
	void GetStyleAtOffset();
	void GetStyleForInsertion();
	void GetStyles();
	void GetStylesOfRange();
	void GetSupportedDropTypes();
	void GetValue();
	void GetWriteableTextStylesArray();
	void HandleCaret();
	void HandleHilite();
	void HandleInkWord();
	void HandleInsertItems();
	void HandleLineGesture();
	void HandleReplaceText();
	void HandleScrub();
	void HandleTap();
	void HandleWord();
	void HiliteAll();
	void HiliteClick();
	void HiliteLines();
	void HiliteParagraph();
	void HiliteRange();
	void HiliteText();
	void HiliteWords();
	void IconClick();
	void Idle();
	void InsertHorizontalSpace();
	void InsertInk();
	void InsertStyledText();
	void InsertVerticalSpace();
	void IsCompletelyHilited();
	void LineFitsInBounds();
	void MakeAndDoReplaceCommand();
	void MakeHilite();
	void NearTabStop();
	void OffsetCachedBounds();
	void OffsetInRunToBounds();
	void OffsetPastVisible();
	void OffsetToBounds();
	void OffsetToCaret();
	void PlaceAndAddWord();
	void PointOverHilitedText();
	void PointOverText();
	void PointToCaret();
	void PointToOffset();
	void PointToWord();
	void PointToWordBoundary();
	void PostDraw();
	void PreviousLineNeedsCR();
	void ProcessStyles();
	void ROMDeleteHilited();
	void RangeChanged();
	void RealDoCommand();
	void RealDraw();
	void RefillAllCaches();
	void RegisterIdler();
	void RemoveExcessWhiteSpace();
	void RemoveHilite();
	void RemoveText();
	void ReplaceCharacter();
	void SaveAddedUnitBounds();
	void ScrubCharacter();
	void ScrubHilite();
	void ScrubLines();
	void ScrubWords();
	void SetBounds();
	void SetCaretOffset();
	void SetFinderBelowParagraph();
	void SetSelection();
	void SetValue();
	void SetupArea();
	void SetupDone();
	void SimpleOffset();
	void Styles();
	void Tabs();
	void Text();
	void UpdateCachedBounds();
	void UpdateHiliteArea();
	void WordFitsAtEndOfLine();
	void WordOnLastLine();
	void WordOnLineBelowParagraph();
	~TParagraphView();

protected:
	long fField1; // Offset: 1
	long fField2; // Offset: 2
	char fField3; // Offset: 3
	long fField4; // Offset: 4
	long fField6; // Offset: 6
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField18; // Offset: 18
	long fField20; // Offset: 20
	long fField22; // Offset: 22
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField40; // Offset: 40
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField66; // Offset: 66
	long fField68; // Offset: 68
	long fField70; // Offset: 70
	char fField71; // Offset: 71
	char fField72; // Offset: 72
	char fField73; // Offset: 73
	long fField76; // Offset: 76
	char fField80; // Offset: 80
	long fField84; // Offset: 84
	char fField88; // Offset: 88
	char fField89; // Offset: 89
	long fField96; // Offset: 96
	long fField108; // Offset: 108
	long fField112; // Offset: 112
	long fField116; // Offset: 116
	char fField120; // Offset: 120
	char fField121; // Offset: 121
	long fField166; // Offset: 166
};

#endif
