#ifndef __INFERRED_TANIMATE_H
#define __INFERRED_TANIMATE_H

class TAnimate {
public:
	void CrumpleEffect();
	void CrumpleSprite();
	void DoEffect();
	void MultiEffect();
	void PoofEffect();
	void PostSetup();
	void PreSetup();
	void SetupDragEffect();
	void SetupPlainEffect();
	void SetupPoofEffect();
	void SetupSlideEffect();
	void SetupTrashEffect();
	TAnimate();
	~TAnimate();

protected:
	long fField100; // Offset: 100
	char fField101; // Offset: 101
	long fField102; // Offset: 102
	char fField103; // Offset: 103
	long fField104; // Offset: 104
	char fField105; // Offset: 105
	char fField106; // Offset: 106
	char fField107; // Offset: 107
	char fField116; // Offset: 116
	char fField117; // Offset: 117
	long fField120; // Offset: 120
	char fField121; // Offset: 121
	char fField122; // Offset: 122
	char fField123; // Offset: 123
	long fField132; // Offset: 132
	long fField136; // Offset: 136
	long fField140; // Offset: 140
	long fField144; // Offset: 144
	long fField148; // Offset: 148
	long fField152; // Offset: 152
	long fField156; // Offset: 156
	long fField160; // Offset: 160
	char fField164; // Offset: 164
	char fField165; // Offset: 165
	long fField168; // Offset: 168
};

#endif
