#ifndef __INFERRED_TRESPONDERSOCKET_H
#define __INFERRED_TRESPONDERSOCKET_H

class TResponderSocket {
public:
	void AddRequestor();
	void MatchResponder();
	void NewResponder();
	void PullARequestor();
	void RemoveResponder();
	TResponderSocket();
	~TResponderSocket();

protected:
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField60; // Offset: 60
};

#endif
