#ifndef __INFERRED_TLOOPSTATE_H
#define __INFERRED_TLOOPSTATE_H

class TLoopState {
public:
	void AddExit();
	void PatchExits();
	TLoopState();
	~TLoopState();

protected:
	long fField4; // Offset: 4
};

#endif
