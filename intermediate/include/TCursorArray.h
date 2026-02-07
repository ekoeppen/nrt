#ifndef __INFERRED_TCURSORARRAY_H
#define __INFERRED_TCURSORARRAY_H

class TCursorArray {
public:
	void Add();
	void Get();
	void Remove();
	TCursorArray();
	~TCursorArray();

protected:
	long fField4; // Offset: 4
};

#endif
