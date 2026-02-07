#ifndef __INFERRED_TINTRPSTACK_H
#define __INFERRED_TINTRPSTACK_H

class TIntrpStack {
public:
	void DupState();
	void NewState();
	void PrevState();
	void StateAt();

protected:
	long fField4; // Offset: 4
	long fField16; // Offset: 16
	long fField20; // Offset: 20
};

#endif
