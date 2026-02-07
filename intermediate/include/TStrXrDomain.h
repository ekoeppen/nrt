#ifndef __INFERRED_TSTRXRDOMAIN_H
#define __INFERRED_TSTRXRDOMAIN_H

class TStrXrDomain {
public:
	void AddStrokeToBoxedWord();
	void BoxHit();
	void Classify();
	void ClassifyStrXr();
	void Dispose();
	void DomainParameter();
	void Group();
	void GroupBoxedSegmentation();
	void GroupOnLineSegmentation();
	void IStrXrDomain();
	void Make();
	void PreGroup();
	void Reclassify();
	void ReclassifyStrXr();
	void SetParameters();
	void StartWord();

protected:
	char fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField16; // Offset: 16
	long fField24; // Offset: 24
	long fField32; // Offset: 32
	char fField36; // Offset: 36
	char fField37; // Offset: 37
	char fField38; // Offset: 38
	char fField39; // Offset: 39
	long fField40; // Offset: 40
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField88; // Offset: 88
	long fField92; // Offset: 92
	long fField96; // Offset: 96
	long fField100; // Offset: 100
	long fField102; // Offset: 102
	char fField104; // Offset: 104
	char fField105; // Offset: 105
	char fField106; // Offset: 106
	char fField107; // Offset: 107
	char fField108; // Offset: 108
	char fField109; // Offset: 109
	long fField112; // Offset: 112
	long fField116; // Offset: 116
	char fField120; // Offset: 120
	char fField121; // Offset: 121
	char fField122; // Offset: 122
	char fField123; // Offset: 123
	char fField124; // Offset: 124
	char fField125; // Offset: 125
	char fField126; // Offset: 126
	char fField127; // Offset: 127
};

#endif
