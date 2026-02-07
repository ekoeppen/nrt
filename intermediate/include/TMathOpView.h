#ifndef __INFERRED_TMATHOPVIEW_H
#define __INFERRED_TMATHOPVIEW_H

class TMathOpView {
public:
	void ClassID();
	void Constructor();
	void DerivedFrom();
	void PreDraw();
	void RealDoCommand();
	void RealDraw();

protected:
	long fField36; // Offset: 36
	long fField48; // Offset: 48
};

#endif
