#ifndef __INFERRED_TUNIONSOUPINDEX_H
#define __INFERRED_TUNIONSOUPINDEX_H

class TUnionSoupIndex {
public:
	void Commit();
	void CurrentSoupGone();
	void Find();
	void First();
	void InvalidateState();
	void IsValidState();
	void Last();
	void MoveToNextSoup();
	void Next();
	void Prior();
	void Search();
	void SetCurrentSoup();
	TUnionSoupIndex();
	~TUnionSoupIndex();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	char fField16; // Offset: 16
};

#endif
