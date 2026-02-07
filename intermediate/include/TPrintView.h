#ifndef __INFERRED_TPRINTVIEW_H
#define __INFERRED_TPRINTVIEW_H

class TPrintView {
public:
	void ClassID();
	void DerivedFrom();
	void PrintPages();
	void ROMRealDoCommand();
	void RealDoCommand();

protected:
	long fField36; // Offset: 36
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	char fField68; // Offset: 68
	char fField69; // Offset: 69
};

#endif
