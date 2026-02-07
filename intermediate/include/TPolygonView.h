#ifndef __INFERRED_TPOLYGONVIEW_H
#define __INFERRED_TPOLYGONVIEW_H

class TPolygonView {
public:
	void AddDragInfo();
	void AddHilite();
	void AddHilited();
	void CalcHiliteBounds();
	void ClassID();
	void ClickOptions();
	void DeleteHilited();
	void DerivedFrom();
	void DrawData();
	void DrawHilitedData();
	void DrawHilites();
	void DrawScaledData();
	void DropRemove();
	void GetArcBounds();
	void GetDropData();
	void GetPenSize();
	void GlobalHiliteResizeBounds();
	void HandleHilite();
	void HandleScrub();
	void HiliteAll();
	void HiliteTraced();
	void HitSegment();
	void IsCompletelyHilited();
	void MakeHilite();
	void MakeInkHilite();
	void MakePointsCommand();
	void OuterBounds();
	void Points();
	void PolygonHiliteChanged();
	void RealDoCommand();
	void RealDraw();
	void RemoveHilite();
	void RemovePoints();
	void Scale();
	void ScrubSegment();
	void SetArcBounds();
	void SetPenSize();
	void UpdateBounds();

protected:
	char fField1; // Offset: 1
	long fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField6; // Offset: 6
	long fField8; // Offset: 8
	long fField10; // Offset: 10
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
};

#endif
