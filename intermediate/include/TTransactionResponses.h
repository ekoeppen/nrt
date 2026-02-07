#ifndef __INFERRED_TTRANSACTIONRESPONSES_H
#define __INFERRED_TTRANSACTIONRESPONSES_H

class TTransactionResponses {
public:
	void Copy();
	void CopyOutResponseHeader();
	void Init();
	void SetOffsetAndLength();
	TTransactionResponses();

protected:
	long fField40; // Offset: 40
	long fField104; // Offset: 104
};

#endif
