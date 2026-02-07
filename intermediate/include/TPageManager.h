#ifndef __INFERRED_TPAGEMANAGER_H
#define __INFERRED_TPAGEMANAGER_H

class TPageManager {
public:
	void AskOnePageToAClient();
	void Get();
	void GetExternal();
	void Make();
	void MonitorProc();
	void QueryClients();
	void Register();
	void Release();
	void ReleasePagesForFaultHandling();
	TPageManager();

protected:
	long fField8; // Offset: 8
};

#endif
