#ifndef __INFERRED_TXRULERTABSBAR_H
#define __INFERRED_TXRULERTABSBAR_H

class TXRulerTabsBar {
public:
	void CheckUpdate();
	void Click();
	void Draw();
	void DrawRuler();
	void DrawRulerMeasure();
	void GetBitMapRect();
	void GetTabBitMapIndex();
	void GetTabRect();
	void HitTest();
	void IRulerTabsBar();
	void PointToBitMapIndex();
	void SetRulerMeasure();
	TXRulerTabsBar();
	void TabRectToTabValue();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField14; // Offset: 14
	long fField16; // Offset: 16
	long fField18; // Offset: 18
	long fField20; // Offset: 20
};

#endif
