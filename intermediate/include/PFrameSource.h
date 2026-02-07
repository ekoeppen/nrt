#ifndef __INFERRED_PFRAMESOURCE_H
#define __INFERRED_PFRAMESOURCE_H

class PFrameSource {
public:
	void Delete();
	void New();
	void Translate();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
