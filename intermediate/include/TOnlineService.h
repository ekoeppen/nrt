#ifndef __INFERRED_TONLINESERVICE_H
#define __INFERRED_TONLINESERVICE_H

class TOnlineService {
public:
	void ConnectComplete();
	void DialogPart1();
	void DialogPart2();
	void DialogPart3();
	void DoConnect();
	void DoDisconnect();
	void DoLoadPackage();
	void GetEndpoint();
	void GetState();
	void Init();
	void PrepDialog();
	void ProcessState();
	void SetState();
	TOnlineService();
	~TOnlineService();

protected:
	long fField20; // Offset: 20
	char fField24; // Offset: 24
	long fField28; // Offset: 28
	char fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField100; // Offset: 100
};

#endif
