#ifndef __INFERRED_TPAGETRACKER_H
#define __INFERRED_TPAGETRACKER_H

class TPageTracker {
public:
	void Put();
	void Take();

protected:
	long fField8; // Offset: 8
};

#endif
