#ifndef __INFERRED_SWIREDHEAPPAGE_H
#define __INFERRED_SWIREDHEAPPAGE_H

class SWiredHeapPage {
public:
	void Destroy();
	void FreePage();
	void GetPage();
	void New();

protected:
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField40; // Offset: 40
};

#endif
