#ifndef __INFERRED_TAIRUSITERATOR_H
#define __INFERRED_TAIRUSITERATOR_H

class TAirusIterator {
public:
	void AddParallelState();
	void BuildStateAtPrefix();
	void BuildStateUpToPrefix();
	void ConstructResult();
	void GetNextChars();
	void InsertNewNextChar();
	void NextWord();
	void PopState();
	void PreviousWord();
	void PushState();
	void RefreshState();
	void Reset();
	TAirusIterator();
	void ThisWord();
	void UnwindStateStack();
	void VerifyNextChar();
	void VerifyPrevChar();
	~TAirusIterator();

protected:
	char fField4; // Offset: 4
	long fField44; // Offset: 44
	char fField68; // Offset: 68
	long fField132; // Offset: 132
	char fField136; // Offset: 136
	long fField140; // Offset: 140
};

#endif
