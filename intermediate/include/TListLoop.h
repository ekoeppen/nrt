#ifndef __INFERRED_TLISTLOOP_H
#define __INFERRED_TLISTLOOP_H

class TListLoop {
public:
	void Current();
	void Next();
	void RemoveCurrent();
	void Reset();
	TListLoop();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
