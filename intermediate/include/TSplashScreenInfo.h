#ifndef __INFERRED_TSPLASHSCREENINFO_H
#define __INFERRED_TSPLASHSCREENINFO_H

class TSplashScreenInfo {
public:
	void Delete();
	void GetBits();
	void GetText();
	void New();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
