#ifndef __INFERRED_TREFSTACK_H
#define __INFERRED_TREFSTACK_H

class TRefStack {
public:
	void PushNILs();
	void Reset();
	TRefStack();
	~TRefStack();

protected:
	long fField4; // Offset: 4
	long fField52; // Offset: 52
};

#endif
