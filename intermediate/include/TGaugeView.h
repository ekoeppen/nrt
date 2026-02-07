#ifndef __INFERRED_TGAUGEVIEW_H
#define __INFERRED_TGAUGEVIEW_H

class TGaugeView {
public:
	void ClassID();
	void Constructor();
	void DerivedFrom();
	void RealDoCommand();
	void RealDraw();
	void SetValue();
	void TrackSetValue();

protected:
	long fField8; // Offset: 8
	long fField48; // Offset: 48
	long fField52; // Offset: 52
};

#endif
