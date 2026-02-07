#ifndef __INFERRED_TMATHEXPVIEW_H
#define __INFERRED_TMATHEXPVIEW_H

class TMathExpView {
public:
	void ClassID();
	void Constructor();
	void DerivedFrom();
	void GetContext();
	void HandleScrub();
	void PreDraw();
	void RealDoCommand();
	void RealDraw();

protected:
	long fField8; // Offset: 8
	long fField32; // Offset: 32
	long fField36; // Offset: 36
};

#endif
