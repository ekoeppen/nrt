#ifndef __INFERRED_TKYBDEXTENSION_H
#define __INFERRED_TKYBDEXTENSION_H

class TKybdExtension {
public:
	void DataInFilter();
	void Delete();
	void GetFeatures();
	void Init();
	void IsRepeatable();
	void New();
	void SetKeyboardType();
	void SetRepeatParams();
	void TranslateKey();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
