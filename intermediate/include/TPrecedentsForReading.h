#ifndef __INFERRED_TPRECEDENTSFORREADING_H
#define __INFERRED_TPRECEDENTSFORREADING_H

class TPrecedentsForReading {
public:
	void Append();
	void GCMark();
	void GCUpdate();
	void MarkAllRefs();
	void Replace();
	void Reset();
	TPrecedentsForReading();
	void UpdateAllRefs();
	~TPrecedentsForReading();

protected:
	long fField4; // Offset: 4
};

#endif
