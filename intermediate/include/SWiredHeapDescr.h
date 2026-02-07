#ifndef __INFERRED_SWIREDHEAPDESCR_H
#define __INFERRED_SWIREDHEAPDESCR_H

class SWiredHeapDescr {
public:
	void GrowByOnePage();
	void ShrinkByOnePage();

protected:
	long fField12; // Offset: 12
};

#endif
