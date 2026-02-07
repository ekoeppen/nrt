#ifndef __INFERRED_TTABLETDRIVER_H
#define __INFERRED_TTABLETDRIVER_H

class TTabletDriver {
public:
	void Delete();
	void GetFingerInputState();
	void GetSampleRate();
	void GetTabletCalibration();
	void GetTabletResolution();
	void GetTabletState();
	void Init();
	void New();
	void RecalibrateTabletAfterRotate();
	void ReturnTabletToConsciousness();
	void SetDoingCalibration();
	void SetFingerInputState();
	void SetSampleRate();
	void SetTabletCalibration();
	void ShutDown();
	void StartBypassTablet();
	void StopBypassTablet();
	void TabSetOrientation();
	void TabletIdle();
	void TabletNeedsRecalibration();
	void WakeUp();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
