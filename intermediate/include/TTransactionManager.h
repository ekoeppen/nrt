#ifndef __INFERRED_TTRANSACTIONMANAGER_H
#define __INFERRED_TTRANSACTIONMANAGER_H

class TTransactionManager {
public:
	void CancelTransaction();
	void CreateNewTransaction();
	void GenerateTID();
	void GetTransaction();
	void GetTransactionByCompletionId();
	void HandleRequestRetryTimer();
	void HandleResponse();
	void Remove();
	void SendRelease();
	void SendRequest();
	TTransactionManager();
	void TransactionRequest();
	void TransactionRequestAgain();
	void Validate();
	~TTransactionManager();

protected:
	long fField4; // Offset: 4
	long fField220; // Offset: 220
	long fField248; // Offset: 248
	long fField304; // Offset: 304
};

#endif
