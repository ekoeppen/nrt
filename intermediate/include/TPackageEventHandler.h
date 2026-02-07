#ifndef __INFERRED_TPACKAGEEVENTHANDLER_H
#define __INFERRED_TPACKAGEEVENTHANDLER_H

class TPackageEventHandler {
public:
	void AECompletionProc();
	void AEHandlerProc();
	void BeginLoadPackage();
	void CheckAndInstallPatch();
	void GetBackupInfo();
	void GetPartSize();
	void GetUniquePackageId();
	void InitValidatePackageDriver();
	void InstallPart();
	void LoadNextPart();
	void LoadProtocolCode();
	void Register();
	void RemovePackage();
	void RemovePart();
	void SafeToDeactivatePackage();
	void SearchPackageList();
	void SearchRegistry();
	void SetDefaultHeap();
	void SetPersistentHeap();
	TPackageEventHandler();
	void Unregister();
	void ValidatePackage();
	~TPackageEventHandler();

protected:
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	char fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField96; // Offset: 96
	char fField100; // Offset: 100
	long fField104; // Offset: 104
	long fField116; // Offset: 116
	long fField120; // Offset: 120
};

#endif
