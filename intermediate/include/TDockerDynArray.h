#ifndef __INFERRED_TDOCKERDYNARRAY_H
#define __INFERRED_TDOCKERDYNARRAY_H

class TDockerDynArray {
public:
	void Add();
	void AddAndReplaceZero();
	void Find();
	void Replace();
	TDockerDynArray();
	~TDockerDynArray();

protected:
	long fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
