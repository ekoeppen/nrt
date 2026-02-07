#ifndef __INFERRED_TBUCKETARRAY_H
#define __INFERRED_TBUCKETARRAY_H

class TBucketArray {
public:
	void ElementAt();
	void SetNumberOfElements();
	TBucketArray();
	~TBucketArray();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
};

#endif
