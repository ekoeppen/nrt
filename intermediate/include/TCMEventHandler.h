#ifndef __INFERRED_TCMEVENTHANDLER_H
#define __INFERRED_TCMEVENTHANDLER_H

class TCMEventHandler {
public:
	void AECompletionProc();
	void AEHandlerProc();
	void GetLastDevice();
	void GetLastPackage();
	void Init();
	void SetLastDevice();
	void SetLastPackage();
	void StartService();
	TCMEventHandler();

protected:
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField44; // Offset: 44
	long fField204; // Offset: 204
	long fField216; // Offset: 216
	long fField220; // Offset: 220
	long fField224; // Offset: 224
};

#endif
