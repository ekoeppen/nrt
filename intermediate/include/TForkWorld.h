#ifndef __INFERRED_TFORKWORLD_H
#define __INFERRED_TFORKWORLD_H

class TForkWorld {
public:
	void AcquireMutex();
	void EnableForking();
	void Fork();
	void ForkConstructor();
	void ForkDestructor();
	void ForkInit();
	void ForkSwitch();
	void GetSizeOf();
	void MainConstructor();
	void MainDestructor();
	void MainInit();
	void MakeFork();
	void PostMain();
	void PreMain();
	void ReleaseMutex();
	TForkWorld();
	void TaskConstructor();
	void TaskDestructor();
	void TaskMain();
	void Yield();
	~TForkWorld();

protected:
	long fField24; // Offset: 24
	char fField28; // Offset: 28
	char fField29; // Offset: 29
	char fField30; // Offset: 30
	char fField31; // Offset: 31
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
};

#endif
