#ifndef __INFERRED_TCARDDOMAINS_H
#define __INFERRED_TCARDDOMAINS_H

class TCardDomains {
public:
	void CardFaultMonProc();
	void CardFaultMonitor();
	void ClientDomain();
	void Init();
	void NotifyTaskBlocked();
	void ReleaseBlockedTask();
	void SetCardFaultState();
	void SetCardServerPort();
	void SocketDomain();
	TCardDomains();
	~TCardDomains();

protected:
	long fField4; // Offset: 4
};

#endif
