#ifndef __INFERRED_TNEWTWORLD_H
#define __INFERRED_TNEWTWORLD_H

class TNewtWorld {
public:
	void AEDispatch();
	void ForkConstructor();
	void ForkDestructor();
	void ForkInit();
	void ForkSwitch();
	void GetSizeOf();
	void MainConstructor();
	void MakeFork();
	void PreMain();
	void TheMain();

protected:
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField24; // Offset: 24
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField112; // Offset: 112
	long fField116; // Offset: 116
	long fField120; // Offset: 120
	char fField1138; // Offset: 1138
};

#endif
