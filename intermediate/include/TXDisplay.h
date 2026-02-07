#ifndef __INFERRED_TXDISPLAY_H
#define __INFERRED_TXDISPLAY_H

class TXDisplay {
public:
	void Activate();
	void AdjustScrollValues();
	void BeginEdit();
	void CharToPoint();
	void CheckScroll();
	void DisableDrawing();
	void DoLineLayout();
	void Draw();
	void DrawFrameText();
	void DrawLineGroup();
	void EnableDrawing();
	void EndEdit();
	void EraseFrameBottom();
	void Focus();
	void FrameEndEdit();
	void FreeData();
	void GetLineHilite();
	void GetScrolledValues();
	void GetViewFrames();
	void InvalidDraw();
	void IsHiliteVisible();
	void PointToChar();
	void PointToLine();
	void RestoreDrawEnv();
	void Scroll();
	void ScrollFrame();
	void ScrollRect();
	void SetDrawEnv();
	void SetHandlers();
	void SetViewRgn();
	void Start();
	TXDisplay();
	void UnFocus();
	void UpdateOverflowLines();
	void UpdateScrolledArea();
	~TXDisplay();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField30; // Offset: 30
	long fField32; // Offset: 32
};

#endif
