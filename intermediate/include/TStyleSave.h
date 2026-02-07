#ifndef __INFERRED_TSTYLESAVE_H
#define __INFERRED_TSTYLESAVE_H

class TStyleSave {
public:
	void BeginLevel();
	void EndLevel();
	void LookupCache();
	void SetStyle();
	TStyleSave();
	~TStyleSave();

protected:
	char fField1; // Offset: 1
	char fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField108; // Offset: 108
};

#endif
