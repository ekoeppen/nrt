#ifndef __INFERRED_TATPINTERFACE_H
#define __INFERRED_TATPINTERFACE_H

class TATPInterface {
public:
	void CancelAsync();
	void CloseResponder();
	void OpenResponder();
	void SendRequest();
	void SendRequestAsync();
	void SendResponsesNoFork();
	void WantRequest();

protected:
};

#endif
