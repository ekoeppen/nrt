#ifndef __INFERRED_TXFRAMES_H
#define __INFERRED_TXFRAMES_H

class TXFrames {
public:
	void AbsToDraw();
	void Draw();
	void DrawToAbs();
	void FramesScrolled();
	void FreeData();
	void GetAbsFrameBounds();
	void GetAbsTextBounds();
	void GetFrameBounds();
	void GetFramesMargins();
	void GetLineBounds();
	void GetTextBounds();
	void HAbsToDraw();
	void HDrawToAbs();
	void InvalFramePart();
	void PointToFrame();
	void PointToLine();
	void SectLines();
	void SetDrawOrigin();
	void SetFramesMargins();
	void SetFramesOrigin();
	TXFrames();
	void VAbsToDraw();
	void VDrawToAbs();
	~TXFrames();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
};

#endif
