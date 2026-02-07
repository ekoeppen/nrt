#ifndef __INFERRED_TXOBJECTRANGE_H
#define __INFERRED_TXOBJECTRANGE_H

class TXObjectRange {
public:
	void ClearRange();
	void CountRangeObjects();
	void FreeData();
	void FreeObjects();
	void GetNextObjectRange();
	void InsertObjectRange();
	void MapObject();
	void OffsetToObject();
	void RangeIndexToObject();
	void Remove();
	void ReplaceRange();
	void ReplaceRangeObj();
	void SearchObject();
	void SetObjectRange();
	TXObjectRange();
	void UpdateRangeObjects();
	void UpdateRangesBounds();
	~TXObjectRange();

protected:
	long fField4; // Offset: 4
	long fField24; // Offset: 24
	char fField28; // Offset: 28
};

#endif
