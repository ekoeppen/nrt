#ifndef __INFERRED_TXRULERICONSBAR_H
#define __INFERRED_TXRULERICONSBAR_H

class TXRulerIconsBar {
public:
	void CheckUpdate();
	void Click();
	void DoJustClick();
	void DoLineSpaceClick();
	void DoTabsClick();
	void Draw();
	void HitTest();
	void IRulerIconsBar();
	void JustValueToBitMapIndex();
	void SetBounds();
	TXRulerIconsBar();

protected:
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField14; // Offset: 14
	long fField16; // Offset: 16
	long fField18; // Offset: 18
	long fField128; // Offset: 128
};

#endif
