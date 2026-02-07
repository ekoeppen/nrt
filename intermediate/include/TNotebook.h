#ifndef __INFERRED_TNOTEBOOK_H
#define __INFERRED_TNOTEBOOK_H

class TNotebook {
public:
	void Constructor();
	void DerivedFrom();
	void DrawSplashScreen();
	void Idle();
	void InitInker();
	void InitOffscreenBitmaps();
	void InitToolbox();
	void NeedsIdle();
	void Quit();
	void Run();

protected:
	long fField4; // Offset: 4
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField879; // Offset: 879
};

#endif
