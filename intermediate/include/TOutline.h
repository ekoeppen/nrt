#ifndef __INFERRED_TOUTLINE_H
#define __INFERRED_TOUTLINE_H

class TOutline {
public:
	void AddTopic();
	void AutoCollapse();
	void Browser();
	void ClassID();
	void ClickCommand();
	void Collapse();
	void Constructor();
	void CountTopics();
	void DerivedFrom();
	void DoClick();
	void DrawTopic();
	void DrawTopicRefs();
	void Expand();
	void FindPageInList();
	void FindTopic();
	void InitTopics();
	void List();
	void PageNumber();
	void PaneIndex();
	void RealDoCommand();
	void RealDraw();
	void RefreshTopics();
	void RevealTopic();
	void ScrollToCurrent();
	void ScrollToSelection();
	void SetScrollers();
	void TopicFrame();
	void TopicInit();
	void TopicPtr();
	void TopicRect();
	void TopicText();
	void VisibleTopic();
	void WhereAreWe();
	~TOutline();

protected:
	char fField1; // Offset: 1
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	char fField69; // Offset: 69
	long fField72; // Offset: 72
	char fField76; // Offset: 76
	char fField77; // Offset: 77
	long fField78; // Offset: 78
	long fField80; // Offset: 80
	long fField82; // Offset: 82
	char fField83; // Offset: 83
	long fField84; // Offset: 84
	long fField92; // Offset: 92
	long fField96; // Offset: 96
	long fField100; // Offset: 100
};

#endif
