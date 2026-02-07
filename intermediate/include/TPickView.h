#ifndef __INFERRED_TPICKVIEW_H
#define __INFERRED_TPICKVIEW_H

class TPickView {
public:
	void ClassID();
	void Constructor();
	void DerivedFrom();
	void FlashItem();
	void GetDisplayFixedHeight();
	void GetDisplayIcon();
	void GetDisplayIndent();
	void GetDisplayItem();
	void GetGridInfo();
	void GetGridItemRect();
	void GetItemFlags();
	void GetItemLength();
	void GetItemNoText();
	void GetItemRect();
	void GetKeyCommand();
	void GetKeyCommandInfo();
	void GetKeyCommandModifierWidth();
	void GetOverflows();
	void HandleKeyDown();
	void Hide();
	void InvertItem();
	void IsItemNoPickable();
	void Item();
	void KeyToNextItem();
	void KeyToPrevItem();
	void PickItem();
	void PickableItem();
	void RealDoCommand();
	void RealDraw();
	void Scroll();
	void SetItemFlags();
	void SetItemLength();
	void SetupForm();
	void SubItem();
	void TrackStroke();
	~TPickView();

protected:
	long fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField16; // Offset: 16
	long fField18; // Offset: 18
	long fField20; // Offset: 20
	long fField22; // Offset: 22
	long fField28; // Offset: 28
	long fField36; // Offset: 36
	char fField48; // Offset: 48
	char fField49; // Offset: 49
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField116; // Offset: 116
	char fField120; // Offset: 120
	long fField124; // Offset: 124
	long fField128; // Offset: 128
	long fField132; // Offset: 132
	long fField136; // Offset: 136
	long fField140; // Offset: 140
	long fField144; // Offset: 144
	long fField152; // Offset: 152
	long fField156; // Offset: 156
	long fField160; // Offset: 160
	long fField164; // Offset: 164
	long fField168; // Offset: 168
	char fField169; // Offset: 169
	long fField172; // Offset: 172
	long fField180; // Offset: 180
	char fField184; // Offset: 184
	long fField1056; // Offset: 1056
};

#endif
