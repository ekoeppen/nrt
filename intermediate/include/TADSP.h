#ifndef __INFERRED_TADSP_H
#define __INFERRED_TADSP_H

class TADSP {
public:
	void ATLKAttachLink();
	void ATLKClose();
	void ATLKDetachLink();
	void ATLKOpen();
	void ATLKShutDown();
	void Cancel();
	void DoCloseConnection();
	void DoCommand();
	void DoOpenConnection();
	void FindListener();
	void FindSender();
	void Init();
	void Match();
	void MatchConnection();
	void NewConnection();
	void OpenConnection();
	void Read();
	void ReadControl();
	void SendDeny();
	TADSP();
	void TimerNotify();
	~TADSP();

protected:
	long fField12; // Offset: 12
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	char fField28; // Offset: 28
	char fField29; // Offset: 29
	long fField32; // Offset: 32
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	char fField353; // Offset: 353
	long fField372; // Offset: 372
	long fField380; // Offset: 380
	long fField396; // Offset: 396
};

#endif
