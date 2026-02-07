#ifndef __INFERRED_TAPPWORLDSTATE_H
#define __INFERRED_TAPPWORLDSTATE_H

class TAppWorldState {
public:
	void GetError();
	void GetPort();
	void Init();
	void NestedEventLoop();
	TAppWorldState();
	void TerminateNestedEventLoop();
	~TAppWorldState();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField36; // Offset: 36
	char fField40; // Offset: 40
	char fField41; // Offset: 41
	char fField42; // Offset: 42
	long fField44; // Offset: 44
	long fField48; // Offset: 48
};

#endif
