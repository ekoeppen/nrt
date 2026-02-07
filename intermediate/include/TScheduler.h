#ifndef __INFERRED_TSCHEDULER_H
#define __INFERRED_TSCHEDULER_H

class TScheduler {
public:
	void Add();
	void AddWhenNotCurrent();
	void Remove();
	void RemoveHighestPriority();
	void Schedule();
	TScheduler();
	void UpdateCurrentBucket();

protected:
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField172; // Offset: 172
	long fField284; // Offset: 284
};

#endif
