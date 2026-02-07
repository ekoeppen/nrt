#ifndef __INFERRED_TROOTVIEW_H
#define __INFERRED_TROOTVIEW_H

class TRootView {
public:
	void ActivatePendingKeyView();
	void AddClipboard();
	void AddIdler();
	void CaretEnabled();
	void CaretValid();
	void CaretViewGone();
	void CheckForCaretRemoval();
	void ClassID();
	void CleanSelectionStack();
	void CommandKeyboardConnected();
	void CommonSetKeyView();
	void ConnectPassthruKeyboard();
	void Constructor();
	void DerivedFrom();
	void Dirty();
	void DirtyCaret();
	void DoCaretClick();
	void DrawCaret();
	void FindDefaultButtonAndCaretSlip();
	void FindRestorableKeyView();
	void ForgetAboutView();
	void GetCaretPoint();
	void GetCaretRect();
	void GetClipboard();
	void GetClipboardIcon();
	void GetClipboardIcons();
	void GetCommonParent();
	void GetFrontmostModalView();
	void GetIdlingView();
	void GetKeyboardIndex();
	void GetPreserveHilites();
	void GetRemoteWriting();
	void GetSelectionStack();
	void HandleKeyIn();
	void HideCaret();
	void Hiliter();
	void HoldPendingKeyView();
	void IdleViews();
	void Invalidate();
	void KeyboardActive();
	void KeyboardConnected();
	void NeedsUpdate();
	void PopSelection();
	void PostDraw();
	void PushSelection();
	void RealDoCommand();
	void RealDraw();
	void RegisterKeyboard();
	void RemoveAllIdlers();
	void RemoveAllViews();
	void RemoveClipboard();
	void RemoveIdler();
	void RestoreBitsUnderCaret();
	void RestoreKeyView();
	void SetHilitedView();
	void SetKeyView();
	void SetKeyViewSelection();
	void SetPopup();
	void SetPreserveHilites();
	void SetRemoteWriting();
	void ShowCaret();
	void SmartInvalidate();
	void SmartScreenDirty();
	void UnlinkIdleView();
	void UnregisterKeyboard();
	void Update();
	void UpdateDefaultButtonAndCaretSlip();
	void Validate();
	~TRootView();

protected:
	char fField1; // Offset: 1
	char fField2; // Offset: 2
	char fField3; // Offset: 3
	long fField4; // Offset: 4
	char fField5; // Offset: 5
	char fField6; // Offset: 6
	char fField7; // Offset: 7
	long fField8; // Offset: 8
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField40; // Offset: 40
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField64; // Offset: 64
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	long fField88; // Offset: 88
	char fField92; // Offset: 92
	long fField96; // Offset: 96
	char fField100; // Offset: 100
	long fField104; // Offset: 104
	long fField112; // Offset: 112
	long fField116; // Offset: 116
	long fField120; // Offset: 120
	long fField124; // Offset: 124
	char fField128; // Offset: 128
	long fField132; // Offset: 132
	long fField136; // Offset: 136
	long fField144; // Offset: 144
	long fField148; // Offset: 148
	long fField152; // Offset: 152
	long fField156; // Offset: 156
};

#endif
