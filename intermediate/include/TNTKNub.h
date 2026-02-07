#ifndef __INFERRED_TNTKNUB_H
#define __INFERRED_TNTKNUB_H

class TNTKNub {
public:
	void DeletePackage();
	void DoCommand();
	void DownloadPackage();
	void EnterBreakLoop();
	void ExceptionNotify();
	void ExitBreakLoop();
	void HandleCodeBlock();
	void Init();
	void ReadCommand();
	void SendEOM();
	void SendExceptionData();
	void SendExceptionHeader();
	void SendRef();
	void SendResult();
	void SendTextHeader();
	void StartListener();
	void StopListener();
	TNTKNub();
	~TNTKNub();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	char fField36; // Offset: 36
	char fField40; // Offset: 40
	char fField41; // Offset: 41
};

#endif
