#ifndef __INFERRED_TMATHLINEVIEW_H
#define __INFERRED_TMATHLINEVIEW_H

class TMathLineView {
public:
	void ClassID();
	void Constructor();
	void DerivedFrom();
	void PreDraw();
	void RealDoCommand();
	void RealDraw();

protected:
	long fField16; // Offset: 16
	long fField36; // Offset: 36
};

#endif
