#ifndef __INFERRED_TXRULERUI_H
#define __INFERRED_TXRULERUI_H

class TXRulerUI {
public:
	void CalcCurrentRulerObject();
	void CheckTextBounds();
	void CheckUpdate();
	void Click();
	void Draw();
	void Focus();
	void GetBounds();
	void GetCurrFrameTextBounds();
	void GetRulerType();
	void HitTest();
	void Scrolled();
	void SetBounds();
	void Start();
	TXRulerUI();
	void Unfocus();
	void UpdateRulerInfo();
	~TXRulerUI();

protected:
	long fField4; // Offset: 4
	long fField6; // Offset: 6
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	char fField21; // Offset: 21
	long fField22; // Offset: 22
	char fField23; // Offset: 23
	long fField24; // Offset: 24
	char fField25; // Offset: 25
	long fField26; // Offset: 26
	char fField27; // Offset: 27
	long fField28; // Offset: 28
	char fField29; // Offset: 29
	long fField30; // Offset: 30
	char fField31; // Offset: 31
	long fField32; // Offset: 32
	long fField36; // Offset: 36
};

#endif
