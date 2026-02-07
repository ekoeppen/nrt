#ifndef __INFERRED_TDDP_H
#define __INFERRED_TDDP_H

class TDDP {
public:
	void ATLKAttachLink();
	void ATLKClose();
	void ATLKDetachLink();
	void ATLKOpen();
	void ATLKShutDown();
	void ATLKSocketClosed();
	void CancelReceiveDatagram();
	void CloseSocket();
	void DoCommand();
	void Init();
	void NextSocketNumber();
	void OpenSocket();
	void Read();
	void ReadLong();
	void ReadShort();
	void ReceiveDatagram();
	TDDP();
	void Write();
	~TDDP();

protected:
	long fField20; // Offset: 20
	char fField24; // Offset: 24
	char fField25; // Offset: 25
	long fField32; // Offset: 32
	char fField40; // Offset: 40
	long fField44; // Offset: 44
};

#endif
