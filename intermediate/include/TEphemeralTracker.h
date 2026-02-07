#ifndef __INFERRED_TEPHEMERALTRACKER_H
#define __INFERRED_TEPHEMERALTRACKER_H

class TEphemeralTracker {
public:
	void AbortEphemerals();
	void AddEphemeral();
	void DeleteAllEphemerals();
	void DeleteEphemeral();
	void DeleteEphemeral1();
	void DeletePendingEphemerals();
	void Find();
	void FindAndRemove();
	void FlushEphemerals();
	void Init();
	void IsEphemeral();
	void LockEphemerals();
	void ReadEphemeralList();
	void RemoveEphemeral();
	TEphemeralTracker();
	void WriteEphemeralList();
	~TEphemeralTracker();

protected:
	long fField4; // Offset: 4
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
};

#endif
