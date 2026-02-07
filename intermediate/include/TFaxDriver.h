#ifndef __INFERRED_TFAXDRIVER_H
#define __INFERRED_TFAXDRIVER_H

class TFaxDriver {
public:
	void CancelJob();
	void ClassInfo();
	void Close();
	void ClosePage();
	void ContinueIO();
	void Delete();
	void FaxEndPage();
	void GetBandPrefs();
	void GetPageInfo();
	void ImageBand();
	void IsProblemResolved();
	void Open();
	void OpenPage();
	void PrintBlankLines();
	void Sizeof();

protected:
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	char fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
};

#endif
