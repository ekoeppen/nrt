#ifndef __INFERRED_TPSEUDOSYNCSTATE_H
#define __INFERRED_TPSEUDOSYNCSTATE_H

class TPseudoSyncState {
public:
	void Block();
	void Init();
	TPseudoSyncState();
	void Unblock();
	~TPseudoSyncState();

protected:
	char fField4; // Offset: 4
};

#endif
