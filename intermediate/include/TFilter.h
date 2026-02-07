#ifndef __INFERRED_TFILTER_H
#define __INFERRED_TFILTER_H

class TFilter {
public:
	void Init();
	void Pass();
	TFilter();
	~TFilter();

protected:
	char fField1; // Offset: 1
	long fField2; // Offset: 2
	char fField3; // Offset: 3
	long fField4; // Offset: 4
};

#endif
