#ifndef __INFERRED_JOURNALREPLAYHANDLER_H
#define __INFERRED_JOURNALREPLAYHANDLER_H

class JournalReplayHandler {
public:
	void GetNextStroke();
	void GetNextTabletSample();
	void InitStroke();
	void IsJournalReplayBusy();
	JournalReplayHandler();
	void ParseStrokeFileHeader();
	void PlayAStroke();
	void SetStrokesToPlay();
	~JournalReplayHandler();

protected:
	long fField8; // Offset: 8
	char fField9; // Offset: 9
	long fField10; // Offset: 10
	char fField11; // Offset: 11
	long fField12; // Offset: 12
	char fField13; // Offset: 13
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	char fField24; // Offset: 24
	char fField25; // Offset: 25
	long fField26; // Offset: 26
	char fField27; // Offset: 27
	char fField28; // Offset: 28
	char fField29; // Offset: 29
	long fField30; // Offset: 30
	char fField31; // Offset: 31
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	char fField60; // Offset: 60
	char fField61; // Offset: 61
	char fField62; // Offset: 62
	long fField64; // Offset: 64
	long fField68; // Offset: 68
};

#endif
