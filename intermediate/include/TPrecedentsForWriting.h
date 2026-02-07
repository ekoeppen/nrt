#ifndef __INFERRED_TPRECEDENTSFORWRITING_H
#define __INFERRED_TPRECEDENTSFORWRITING_H

class TPrecedentsForWriting {
public:
	void Append();
	void Find();
	void GCMark();
	void GCOccured();
	void GCUpdate();
	void GenerateLinks();
	void MarkAllRefs();
	void RebuildTable();
	void Reset();
	void Search();
	TPrecedentsForWriting();
	void UpdateAllRefs();
	~TPrecedentsForWriting();

protected:
	long fField4; // Offset: 4
};

#endif
