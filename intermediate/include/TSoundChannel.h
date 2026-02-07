#ifndef __INFERRED_TSOUNDCHANNEL_H
#define __INFERRED_TSOUNDCHANNEL_H

class TSoundChannel {
public:
	void Cancel();
	void CleanupNode();
	void FreeNode();
	void MakeNode();
	void Pause();
	void Schedule();
	void Start();
	void Stop();
	TSoundChannel();
	~TSoundChannel();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	char fField48; // Offset: 48
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField80; // Offset: 80
};

#endif
