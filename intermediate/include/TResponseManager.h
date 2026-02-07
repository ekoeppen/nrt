#ifndef __INFERRED_TRESPONSEMANAGER_H
#define __INFERRED_TRESPONSEMANAGER_H

class TResponseManager {
public:
	void CloseResponder();
	void CreateNewResponderSocket();
	void GetResponderSocket();
	void HandleRelease();
	void HandleReleaseTimer();
	void HandleRequest();
	void OpenResponder();
	void Remove();
	void ResponseCount();
	void SendResponses();
	void SetupResponsePackets();
	TResponseManager();
	void TransmitResponses();
	void ValidateSendResponse();
	void WantRequest();
	~TResponseManager();

protected:
	long fField4; // Offset: 4
	long fField24; // Offset: 24
	char fField56; // Offset: 56
};

#endif
