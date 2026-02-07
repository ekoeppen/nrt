#ifndef __INFERRED_TLIBRARIAN_H
#define __INFERRED_TLIBRARIAN_H

class TLibrarian {
public:
	void BookAvailable();
	void BookRemoved();
	void CheckHints();
	void ClassID();
	void CompareValues();
	void CountPages();
	void CurrentPage();
	void DerivedFrom();
	void Encode();
	void Find();
	void FindContentBySlot();
	void FindContentByValue();
	void FindPageByContent();
	void FindPageByValue();
	void GetBookFrame();
	void GetLibraryEntry();
	void GetPageN();
	void PageSize();
	void Pages();
	void PreviousPage();
	void Rendering();
	void SetCurrentPage();
	void StrRefToSymbol();
	void TextSearch();

protected:
	long fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
