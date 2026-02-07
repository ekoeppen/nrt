#ifndef __INFERRED_TBEAMER_H
#define __INFERRED_TBEAMER_H

class TBeamer {
public:
	void Close();
	void CloseEndpoint();
	void ClosePipe();
	void IdentifyProtocol();
	void Open();
	void OpenEndpoint();
	void OpenPipe();
	void Receive();
	void ReceiveNewton();
	void ReceiveSetup();
	void ReceiveWizard();
	void Send();
	void SendNewton();
	void SendSetup();
	void SendWizard();
	TBeamer();
	void UpdateProgress();
	~TBeamer();

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
	char fField2159; // Offset: 2159
};

#endif
