#ifndef __INFERRED_TVISKEYITERATOR_H
#define __INFERRED_TVISKEYITERATOR_H

class TVisKeyIterator {
public:
	void CopyInto();
	void FindEnclosingKey();
	void LoadKey();
	void LoadRow();
	void Next();
	void Reset();
	void SkipToStartOfNextRow();
	TVisKeyIterator();

protected:
	long fField8; // Offset: 8
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField48; // Offset: 48
	char fField49; // Offset: 49
	long fField50; // Offset: 50
	char fField51; // Offset: 51
	long fField56; // Offset: 56
	char fField57; // Offset: 57
	long fField58; // Offset: 58
	char fField59; // Offset: 59
	long fField60; // Offset: 60
	char fField61; // Offset: 61
	long fField62; // Offset: 62
	char fField63; // Offset: 63
	char fField68; // Offset: 68
	char fField69; // Offset: 69
	long fField70; // Offset: 70
	char fField71; // Offset: 71
	long fField72; // Offset: 72
	char fField73; // Offset: 73
	long fField74; // Offset: 74
	char fField75; // Offset: 75
	char fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	long fField92; // Offset: 92
	long fField94; // Offset: 94
	long fField96; // Offset: 96
	long fField98; // Offset: 98
	long fField100; // Offset: 100
	long fField104; // Offset: 104
	long fField108; // Offset: 108
	long fField112; // Offset: 112
};

#endif
