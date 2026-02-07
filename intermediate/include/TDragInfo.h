#ifndef __INFERRED_TDRAGINFO_H
#define __INFERRED_TDRAGINFO_H

class TDragInfo {
public:
	void AddDragItem();
	void AddItemDragType();
	void CheckTypes();
	void CreateItemFrame();
	void FindType();
	void GetItemDragLabel();
	void GetItemDragRef();
	void GetItemIndType();
	void GetItemTypes();
	void GetItemView();
	void SetItemDragLabel();
	void SetItemDragRef();
	void SetItemDragTypes();
	void SetItemView();
	TDragInfo();

protected:
	long fField4; // Offset: 4
};

#endif
