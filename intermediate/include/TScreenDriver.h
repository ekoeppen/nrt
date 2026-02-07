#ifndef __INFERRED_TSCREENDRIVER_H
#define __INFERRED_TSCREENDRIVER_H

class TScreenDriver {
public:
	void AutoAdjustFeatures();
	void Blit();
	void Delete();
	void DoubleBlit();
	void EnterIdleMode();
	void ExitIdleMode();
	void GetFeature();
	void GetScreenInfo();
	void PowerInit();
	void PowerOff();
	void PowerOn();
	void ScreenSetup();
	void SetFeature();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
