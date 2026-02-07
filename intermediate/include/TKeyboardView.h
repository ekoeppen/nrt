#ifndef __INFERRED_TKEYBOARDVIEW_H
#define __INFERRED_TKEYBOARDVIEW_H

class TKeyboardView {
public:
	void ClassID();
	void Constructor();
	void DerivedFrom();
	void DoKey();
	void DrawKey();
	void DrawKeyFrame();
	void GetLegendRef();
	void GetResultRef();
	void HandleKeyPress();
	void InsideView();
	void PostKeypressCommands();
	void RealDoCommand();
	void RealDraw();
	void TrackStroke();
	~TKeyboardView();

protected:
	long fField12; // Offset: 12
	long fField36; // Offset: 36
	long fField48; // Offset: 48
	char fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField96; // Offset: 96
	long fField100; // Offset: 100
	long fField104; // Offset: 104
	long fField108; // Offset: 108
	long fField112; // Offset: 112
	long fField116; // Offset: 116
	long fField120; // Offset: 120
	long fField124; // Offset: 124
	long fField128; // Offset: 128
	long fField132; // Offset: 132
	char fField136; // Offset: 136
	char fField137; // Offset: 137
	char fField138; // Offset: 138
	char fField139; // Offset: 139
	char fField140; // Offset: 140
	char fField141; // Offset: 141
	char fField142; // Offset: 142
	char fField143; // Offset: 143
	char fField144; // Offset: 144
};

#endif
