#ifndef __INFERRED_TPAGETABLEMANAGER_H
#define __INFERRED_TPAGETABLEMANAGER_H

class TPageTableManager {
public:
	void AllocatePageTable();
	void MonitorProc();
	void ReleasePageTable();
	TPageTableManager();

protected:
};

#endif
