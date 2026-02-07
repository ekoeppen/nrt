#ifndef __INFERRED_TBITS_H
#define __INFERRED_TBITS_H

class TBits {
public:
	void BeginDrawing();
	void Cleanup();
	void Constructor();
	void CopyFromScreen();
	void CopyIntoBitmap();
	void Draw();
	void EndDrawing();
	void Fill();
	void InitBitMap();
	void RestorePort();
	void SetBounds();
	void SetPort();
	TBits();
	~TBits();

protected:
	long fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField6; // Offset: 6
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField28; // Offset: 28
	char fField32; // Offset: 32
	char fField33; // Offset: 33
};

#endif
