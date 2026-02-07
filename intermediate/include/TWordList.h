#ifndef __INFERRED_TWORDLIST_H
#define __INFERRED_TWORDLIST_H

class TWordList {
public:
	void BubbleGuess();
	void Count();
	void Find();
	void InsertLast();
	void Ith();
	void Label();
	void Reorder();
	void ScanTo();
	void Score();
	void SwapSingleCharacterGuesses();
	TWordList();
	void Word();
	~TWordList();

protected:
	long fField1; // Offset: 1
	long fField32; // Offset: 32
	char fField64; // Offset: 64
	long fField68; // Offset: 68
};

#endif
