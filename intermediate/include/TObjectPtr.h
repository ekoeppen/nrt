#ifndef __INFERRED_TOBJECTPTR_H
#define __INFERRED_TOBJECTPTR_H

class TObjectPtr {
public:
	TObjectPtr();
	void operator char *();
	void operator=();
	~TObjectPtr();

protected:
	long fField4; // Offset: 4
};

#endif
