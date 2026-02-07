#ifndef __INFERRED_PFRAMESINK_H
#define __INFERRED_PFRAMESINK_H

class PFrameSink {
public:
	void Delete();
	void New();
	void Translate();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
