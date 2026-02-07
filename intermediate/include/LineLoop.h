#ifndef __INFERRED_LINELOOP_H
#define __INFERRED_LINELOOP_H

class LineLoop {
public:
	void AddNextLine();
	void AddNextTextRun();
	void ComputeLineBounds();
	void CurrentLineFitsInBounds();
	void GetPseudoSpacing();
	LineLoop();
	void SkipLeadingTabs();
	~LineLoop();

protected:
	long fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField6; // Offset: 6
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField24; // Offset: 24
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField46; // Offset: 46
	long fField48; // Offset: 48
	char fField49; // Offset: 49
	long fField50; // Offset: 50
	char fField51; // Offset: 51
	long fField52; // Offset: 52
	char fField53; // Offset: 53
	char fField54; // Offset: 54
	char fField55; // Offset: 55
	char fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField80; // Offset: 80
	long fField124; // Offset: 124
};

#endif
