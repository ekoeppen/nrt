#ifndef __INFERRED_TUSOUNDCHANNEL_H
#define __INFERRED_TUSOUNDCHANNEL_H

class TUSoundChannel {
public:
	void AECompletionProc();
	void AbortBusy();
	void Cancel();
	void Close();
	void FindNode();
	void FindRefCon();
	void FreeNode();
	void GetInputGain();
	void GetVolume();
	void MakeNode();
	void Open();
	void Pause();
	void Schedule();
	void SendImmediate();
	void SetInputGain();
	void SetOutputDevice();
	void SetVolume();
	void Start();
	void Stop();
	TUSoundChannel();
	void UniqueId();
	~TUSoundChannel();

protected:
	long fField4; // Offset: 4
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField68; // Offset: 68
};

#endif
