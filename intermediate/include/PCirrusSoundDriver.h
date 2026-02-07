#ifndef __INFERRED_PCIRRUSSOUNDDRIVER_H
#define __INFERRED_PCIRRUSSOUNDDRIVER_H

class PCirrusSoundDriver {
public:
	void ADCCallbackProc();
	void ClassInfo();
	void ConfigureOutputValues();
	void CurrentInputPtr();
	void CurrentOutputPtr();
	void Delete();
	void DisableExtSoundSource();
	void EnableExtSoundSource();
	void GetSoundHardwareInfo();
	void HeadPhoneInterruptHandler();
	void InputIntHandler();
	void InputIsEnabled();
	void InputIsRunning();
	void InputVolume();
	void New();
	void OutputIntHandler();
	void OutputIsEnabled();
	void OutputIsRunning();
	void OutputVolume();
	void PowerInputOff();
	void PowerInputOn();
	void PowerOutputOff();
	void PowerOutputOn();
	void ScheduleInputBuffer();
	void ScheduleOutputBuffer();
	void SetInputBuffers();
	void SetOutputBuffers();
	void SetSoundHardwareInfo();
	void SetVolume();
	void Sizeof();
	void StartInput();
	void StartOutput();
	void StopInput();
	void StopOutput();
	void SyncExtSourceVolume();
	void SyncOutputBits();
	void SyncVolume();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField28; // Offset: 28
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
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
	char fField108; // Offset: 108
	char fField109; // Offset: 109
	char fField110; // Offset: 110
	char fField112; // Offset: 112
	char fField113; // Offset: 113
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
	long fField172; // Offset: 172
	long fField176; // Offset: 176
	char fField180; // Offset: 180
	char fField181; // Offset: 181
	char fField182; // Offset: 182
	char fField183; // Offset: 183
	long fField192; // Offset: 192
	long fField196; // Offset: 196
	long fField200; // Offset: 200
	long fField204; // Offset: 204
	long fField208; // Offset: 208
	long fField212; // Offset: 212
	long fField216; // Offset: 216
	long fField220; // Offset: 220
	long fField224; // Offset: 224
	long fField228; // Offset: 228
	long fField232; // Offset: 232
	long fField236; // Offset: 236
	char fField244; // Offset: 244
	long fField248; // Offset: 248
	long fField252; // Offset: 252
	long fField256; // Offset: 256
	long fField260; // Offset: 260
	long fField264; // Offset: 264
	char fField272; // Offset: 272
	char fField273; // Offset: 273
	char fField274; // Offset: 274
	long fField276; // Offset: 276
	long fField280; // Offset: 280
	long fField284; // Offset: 284
	long fField288; // Offset: 288
	long fField292; // Offset: 292
	long fField296; // Offset: 296
	long fField2048; // Offset: 2048
};

#endif
