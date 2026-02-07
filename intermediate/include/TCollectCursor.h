#ifndef __INFERRED_TCOLLECTCURSOR_H
#define __INFERRED_TCOLLECTCURSOR_H

class TCollectCursor {
public:
	void Clone();
	void Collect();
	void CountEntries();
	void CreateNewCollectCursor();
	void DefineCurrentEntry();
	void EntryRemoved();
	void EntrySoupChanged();
	void FindEntry();
	void GCMark();
	void GCUpdate();
	void GotoEntry();
	void GotoKey();
	void Invalidate();
	void Move();
	void RebuildInfo();
	TCollectCursor();
	~TCollectCursor();

protected:
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField100; // Offset: 100
	long fField104; // Offset: 104
	char fField188; // Offset: 188
	long fField192; // Offset: 192
	long fField196; // Offset: 196
};

#endif
