#ifndef __INFERRED_TDMAMANAGER_H
#define __INFERRED_TDMAMANAGER_H

class TDMAManager {
public:
	void Init();
	void PowerOffAssignment();
	void PowerOnAssignment();
	void RequestAssignment();

protected:
	long fField2; // Offset: 2
};

#endif
