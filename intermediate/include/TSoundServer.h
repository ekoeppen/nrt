#ifndef __INFERRED_TSOUNDSERVER_H
#define __INFERRED_TSOUNDSERVER_H

class TSoundServer {
public:
	void AllInputChannelsEmpty();
	void AllOutputChannelsEmpty();
	void CancelNode();
	void CloseChannel();
	void EmptyDMABuffer();
	void FillDMABuffer();
	void FindChannel();
	void GetSizeOf();
	void MainConstructor();
	void MainDestructor();
	void OpenCompressorChannel();
	void OpenDecompressorChannel();
	void OpenInputChannel();
	void OpenOutputChannel();
	void PauseChannel();
	void PrepOutputChannels();
	void ScheduleInputBuffer();
	void ScheduleNode();
	void ScheduleOutputBuffer();
	void SetInputDevice();
	void SetInputVolume();
	void SetOutputDevice();
	void SetOutputVolume();
	void SoundInputIH();
	void SoundOutputIH();
	void StartChannel();
	void StartCompressor();
	void StartDecompressor();
	void StartInput();
	void StartOutput();
	void StopAll();
	void StopChannel();
	void StopCompressor();
	void StopDecompressor();
	void StopInput();
	void StopOutput();
	TSoundServer();
	void TheMain();
	void UniqueId();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField44; // Offset: 44
	long fField112; // Offset: 112
	long fField116; // Offset: 116
	long fField120; // Offset: 120
	long fField184; // Offset: 184
	long fField188; // Offset: 188
	long fField192; // Offset: 192
	long fField196; // Offset: 196
	long fField200; // Offset: 200
	long fField204; // Offset: 204
	long fField216; // Offset: 216
	long fField220; // Offset: 220
	long fField224; // Offset: 224
	long fField228; // Offset: 228
	long fField240; // Offset: 240
	char fField244; // Offset: 244
	long fField248; // Offset: 248
	long fField252; // Offset: 252
	long fField256; // Offset: 256
};

#endif
