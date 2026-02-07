#ifndef __INFERRED_TDOCKER_H
#define __INFERRED_TDOCKER_H

class TDocker {
public:
	void AbortConnection();
	void AddChangedSoup();
	void AddEntry();
	void BackupSoup();
	void BroadcastChanges();
	void BytesAvailable();
	void CallConnectionApp();
	void CallFunction();
	void ChangeEntry();
	void CheckCancel();
	void CheckProtocolExtension();
	void CheckProtocolPatch();
	void CleanUpIfError();
	void CleanUpIfStopping();
	void ClearSoupDirty();
	void CompatabilityHacks();
	void Connect();
	void ConvertEntry();
	void CreateSoup();
	void CreateSoupFromSoupDef();
	void Delay();
	void DeleteEntries();
	void DoConnection();
	void DoDisplaySlip();
	void DoGetPassword();
	void DoImportParametersSlip();
	void DoKeyboardPassthrough();
	void DoRemovePackage();
	void DoRestorePackage();
	void DoRestorePatch();
	void EmptyOrDelete();
	void EntriesEqual();
	void FinishSequence();
	void FlushCommand();
	void FlushCommandData();
	void FlushPadding();
	void FramesEqual();
	void FreeCurrentStore();
	void GetBackupCursor();
	void GetCurrentStore();
	void GetEntryFromID();
	void GetPackageInfo();
	void GetPlatform();
	void GetSoupIDCount();
	void GetState();
	void GetSyncChanges();
	void GetTDockerLock();
	void InstallProtocolExtension();
	void IsDuplicateEntry();
	void KeyboardProcessCommand();
	void MakeStoreFrame();
	void OutOfMemory();
	void Pad();
	void ProcessBuiltinCommand();
	void ProcessCommand();
	void ProcessException();
	void ReadBytes();
	void ReadChunk();
	void ReadCommand();
	void ReadCommandData();
	void ReadCurrentSoup();
	void ReadData();
	void ReadDesktopInfo();
	void ReadInitiateDocking();
	void ReadPackage();
	void ReadPassword();
	void ReadProtocolExtension();
	void ReadRef();
	void ReadRemoveProtocolExtension();
	void ReadResult();
	void ReadResultString();
	void ReadSourceVersion();
	void ReadString();
	void RefsEqual();
	void RemoteCursorCountEntries();
	void RemoteCursorEntry();
	void RemoteCursorFree();
	void RemoteCursorGotoKey();
	void RemoteCursorMap();
	void RemoteCursorMove();
	void RemoteCursorNext();
	void RemoteCursorPrev();
	void RemoteCursorReset();
	void RemoteCursorResetToEnd();
	void RemoteCursorWhichEnd();
	void RemoteGetCursor();
	void RemoteQuery();
	void RemoveProtocolExtension();
	void ReplaceEntryContents();
	void ReserveCurrentStore();
	void RetryPassword();
	void ReturnEntry();
	void SendSoup();
	void SetCurrentSoup();
	void SetCurrentStore();
	void SetSoupInfoFrame();
	void SetSoupSignature();
	void SetState();
	void SetStoreSignature();
	void SetStoreToDefault();
	void SetTimeout();
	void SetWhichIcons();
	void SetupSoup();
	void ShouldBackupEntry();
	void SoupChangedSinceLastBackup();
	void Stop();
	TDocker();
	void TestMessage();
	void TestRefMessage();
	void TossDataStructures();
	void UnlockTDocker();
	void ValidateQuery();
	void VerifyPassword();
	void VerifySoup();
	void WaitAndLockTDocker();
	void WaitForDisconnect();
	void WaitForStopToComplete();
	void WriteBytes();
	void WriteChangedIDs();
	void WriteCommand();
	void WriteDefaultStore();
	void WriteEntry();
	void WriteIndexDescription();
	void WriteInheritanceFrame();
	void WriteLong();
	void WriteNewtonName();
	void WritePassword();
	void WritePatches();
	void WriteRef();
	void WriteResult();
	void WriteSoupIDs();
	void WriteSoupInfo();
	void WriteSoupNames();
	void WriteStoreNames();
	void WriteString();
	void WriteSyncOptions();
	~TDocker();

protected:
	long fField4; // Offset: 4
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	char fField44; // Offset: 44
	char fField45; // Offset: 45
	char fField46; // Offset: 46
	char fField47; // Offset: 47
	char fField48; // Offset: 48
	char fField49; // Offset: 49
	char fField50; // Offset: 50
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	long fField88; // Offset: 88
	long fField92; // Offset: 92
	long fField96; // Offset: 96
	long fField100; // Offset: 100
	long fField104; // Offset: 104
	long fField108; // Offset: 108
	long fField112; // Offset: 112
	long fField116; // Offset: 116
	long fField120; // Offset: 120
	long fField124; // Offset: 124
	long fField128; // Offset: 128
	long fField132; // Offset: 132
	long fField136; // Offset: 136
	long fField140; // Offset: 140
	long fField144; // Offset: 144
	long fField148; // Offset: 148
	long fField152; // Offset: 152
	long fField156; // Offset: 156
	long fField160; // Offset: 160
	long fField164; // Offset: 164
	long fField168; // Offset: 168
	char fField172; // Offset: 172
	char fField173; // Offset: 173
	char fField174; // Offset: 174
	char fField175; // Offset: 175
	char fField176; // Offset: 176
	char fField177; // Offset: 177
	char fField178; // Offset: 178
	char fField179; // Offset: 179
	char fField180; // Offset: 180
};

#endif
