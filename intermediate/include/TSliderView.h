#ifndef __INFERRED_TSLIDERVIEW_H
#define __INFERRED_TSLIDERVIEW_H

class TSliderView {
public:
	void ClassID();
	void Constructor();
	void DerivedFrom();
	void DrawHilitedData();
	void DrawSlider();
	void HandleClick();
	void RealDoCommand();
	void RealDraw();
	~TSliderView();

protected:
	long fField2; // Offset: 2
	long fField6; // Offset: 6
	long fField28; // Offset: 28
};

#endif
