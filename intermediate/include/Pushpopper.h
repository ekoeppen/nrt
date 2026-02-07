#ifndef __INFERRED_PUSHPOPPER_H
#define __INFERRED_PUSHPOPPER_H

class Pushpopper {
public:
	Pushpopper();
	void flushbits();
	void popFewBits();
	void popString();
	void popbits();
	void pushbits();
	void restorebits();
	void setupreadbuffer();
	void setupwritebuffer();
	~Pushpopper();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	char fField111; // Offset: 111
};

#endif
