#ifndef __INFERRED_TDOTPRINTERDRIVER_H
#define __INFERRED_TDOTPRINTERDRIVER_H

class TDotPrinterDriver {
public:
	void CancelJob();
	void Close();
	void ClosePage();
	void Delete();
	void FaxEndPage();
	void GetBandPrefs();
	void GetPageInfo();
	void ImageBand();
	void IsProblemResolved();
	void Open();
	void OpenPage();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
