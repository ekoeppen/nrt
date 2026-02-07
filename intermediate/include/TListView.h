#ifndef __INFERRED_TLISTVIEW_H
#define __INFERRED_TLISTVIEW_H

class TListView {
public:
	void ClassID();
	void Constructor();
	void DerivedFrom();
	void DragFeedback();
	void DrawHilitedData();
	void DrawTopicMarker();
	void DropMove();
	void DropRemove();
	void FamilySize();
	void FindDropView();
	void GadgetWidth();
	void GetDropData();
	void HandlePenDown();
	void HandleTap();
	void IndexFromY();
	void LevelFromX();
	void MarkerBounds();
	void NTopics();
	void PointToCaret();
	void RealDoCommand();
	void RealDraw();
	void Scrub();
	void SetupVisibleChildren();
	void Topic();
	void TopicIndexToView();
	void TopicLevel();
	void TopicVisible();
	void Topics();
	void TrackCheck();
	void TrackTopic();

protected:
	long fField8; // Offset: 8
	long fField16; // Offset: 16
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	long fField88; // Offset: 88
};

#endif
