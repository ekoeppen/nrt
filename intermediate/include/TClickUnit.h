#ifndef __INFERRED_TCLICKUNIT_H
#define __INFERRED_TCLICKUNIT_H

class TClickUnit {
public:
	void CountStrokes();
	void Dump();
	void GetStroke();
	void IClickUnit();
	void IDispose();
	void Make();
	void MarkUnit();
	void OwnsStroke();

protected:
	long fField28; // Offset: 28
	char fField32; // Offset: 32
	char fField33; // Offset: 33
	long fField48; // Offset: 48
};

#endif
