#ifndef __INFERRED_TCLIPBOARD_H
#define __INFERRED_TCLIPBOARD_H

class TClipboard {
public:
	void AllocateClipboardBits();
	void CalcDataBitsBounds();
	void CalcIconBounds();
	void CalcIconDimensions();
	void ClassID();
	void Constructor();
	void CreateLabelForm();
	void DerivedFrom();
	void DragFromClipboard();
	void DrawDragData();
	void EndDrag();
	void GetClipboardDataInfo();
	void GetDropData();
	void MoveIcon();
	void NewClipboard();
	void TruncateLabel();
	~TClipboard();

protected:
	long fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField12; // Offset: 12
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField58; // Offset: 58
	long fField64; // Offset: 64
};

#endif
