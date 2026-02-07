#ifndef __INFERRED_TARBITER_H
#define __INFERRED_TARBITER_H

class TArbiter {
public:
	void AllUnitsPresent();
	void ArbitrateGraphicsWords();
	void ArbitrateUnits();
	void CleanUp();
	void DoArbitration();
	void GatherUnits();
	void IArbiter();
	void Make();
	void WaitingForOtherUnits();

protected:
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	char fField33; // Offset: 33
};

#endif
