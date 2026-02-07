#ifndef __INFERRED_TPINPAD_H
#define __INFERRED_TPINPAD_H

class TPinPad {
public:
	void BeginPolling();
	void ClassInfo();
	void DefineStyle();
	void Delete();
	void DrawPict();
	void DrawText();
	void EndPolling();
	void GetPoint();
	void GetTextWidth();
	void Init();
	void Sizeof();

protected:
	long fField108; // Offset: 108
	long fField112; // Offset: 112
	char fField116; // Offset: 116
	long fField120; // Offset: 120
	long fField128; // Offset: 128
	long fField156; // Offset: 156
	long fField160; // Offset: 160
	long fField164; // Offset: 164
	long fField168; // Offset: 168
	long fField172; // Offset: 172
	long fField176; // Offset: 176
	long fField180; // Offset: 180
	char fField2414; // Offset: 2414
};

#endif
