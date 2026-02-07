#ifndef __INFERRED_TCURSOR_H
#define __INFERRED_TCURSOR_H

class TCursor {
public:
	void BuildSoupsInfo();
	void Clone();
	void CloneFrameSlot();
	void CountEntries();
	void CreateIndexes();
	void CreateNewCursor();
	void Entry();
	void EntryChanged();
	void EntryKey();
	void EntryReadded();
	void EntryRemoved();
	void EntrySoupChanged();
	void ExitParking();
	void GCMark();
	void GCUpdate();
	void GetSoupInfoIndex();
	void GetState();
	void GotoEntry();
	void GotoKey();
	void IndexObjectsChanged();
	void IndexRemoved();
	void Init();
	void Invalidate();
	void IsParked();
	void KeyBoundsValidTest();
	void MakeEntryFaultBlock();
	void Move();
	void Park();
	void PinCurrentKey();
	void RebuildInfo();
	void RegisterInSoup();
	void Reset();
	void ResetToEnd();
	void SetSoup();
	void SetState();
	void SoupAdded();
	void SoupRemoved();
	void SoupTagsChanged();
	void Status();
	TCursor();
	void TextValidTest();
	void UnregisterFromSoup();
	void ValidTest();
	void WordsValidTest();
	~TCursor();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	char fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	long fField88; // Offset: 88
	long fField92; // Offset: 92
	long fField96; // Offset: 96
	long fField100; // Offset: 100
	long fField104; // Offset: 104
	char fField108; // Offset: 108
	char fField109; // Offset: 109
	char fField188; // Offset: 188
	char fField189; // Offset: 189
};

#endif
