#ifndef __INFERRED_TCHMEMMODEM_H
#define __INFERRED_TCHMEMMODEM_H

class TCHMemModem {
public:
	void AllocateSerialDriver();
	void CardIdString();
	void CardSpecific();
	void CardStatus();
	void CheckNSetupMemoryDevice();
	void CheckNSetupModemDevice();
	void ClassInfo();
	void Clear();
	void Delete();
	void EmergencyShutdown();
	void FormatCIS();
	void GetDeviceInfo();
	void GetNumberOfDevice();
	void GetRemovableHandler();
	void InstallServices();
	void New();
	void NewFlashDriver();
	void ParseUnrecognizedCard();
	void RecognizeCard();
	void RemoveServices();
	void ResumeServices();
	void SaveSerialChipInfo();
	void SetBusAccess();
	void SetCardServerPort();
	void SetRemovableHandler();
	void Sizeof();
	void SuspendServices();
	void WriteTuple();

protected:
	char fField1; // Offset: 1
	char fField2; // Offset: 2
	char fField3; // Offset: 3
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	char fField20; // Offset: 20
	char fField21; // Offset: 21
	char fField22; // Offset: 22
	char fField51; // Offset: 51
	char fField52; // Offset: 52
	char fField53; // Offset: 53
	char fField54; // Offset: 54
	char fField55; // Offset: 55
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField768; // Offset: 768
};

#endif
