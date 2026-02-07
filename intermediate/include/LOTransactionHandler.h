#ifndef __INFERRED_LOTRANSACTIONHANDLER_H
#define __INFERRED_LOTRANSACTIONHANDLER_H

class LOTransactionHandler {
public:
	void AddObjectToTransaction();
	void EndAllObjectsTransaction();
	void EndIndexTableTransaction();
	void EndTransaction();
	void Free();
	void HasTransaction();
	LOTransactionHandler();
	void SetAllInTransaction();

protected:
	char fField4; // Offset: 4
	char fField5; // Offset: 5
};

#endif
