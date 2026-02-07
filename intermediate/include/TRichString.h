#ifndef __INFERRED_TRICHSTRING_H
#define __INFERRED_TRICHSTRING_H

class TRichString {
public:
	void CloneInkWordNo();
	void CompareInk();
	void CompareSubStringCommon();
	void DeleteRange();
	void DoStringerStuff();
	void Format();
	void GetChar();
	void GetInkData();
	void GetInkWordNoInfoOffset();
	void GetLengthsAndDataInRange();
	void GrabPtr();
	void InkWordNoAtOffset();
	void InsertRange();
	void MakeParagraphStylesSlot();
	void MakeParagraphTextSlot();
	void MungeRange();
	void NumInkAndTextRunsInRange();
	void NumInkWords();
	void NumInkWordsInRange();
	void ReleasePtr();
	void SetCPlainStringData();
	void SetCStringData();
	void SetChar();
	void SetFormatAndLength();
	void SetNoStringData();
	void SetObjectSize();
	void SetStringData();
	TRichString();
	void Verify();

protected:
	long fField1; // Offset: 1
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	char fField36; // Offset: 36
};

#endif
