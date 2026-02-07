#ifndef __INFERRED_TENDPOINTTIMER_H
#define __INFERRED_TENDPOINTTIMER_H

class TEndpointTimer {
public:
	TEndpointTimer();
	void Timeout();

protected:
	long fField24; // Offset: 24
};

#endif
