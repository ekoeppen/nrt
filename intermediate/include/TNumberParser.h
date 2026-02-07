#ifndef __INFERRED_TNUMBERPARSER_H
#define __INFERRED_TNUMBERPARSER_H

class TNumberParser {
public:
	void Reset();
	void SetDecimal();
	void SetInteger();
	void SetNumberType();
	void SetPrefix();
	void SetSign();
	void SetSuffix();
	void StringToNumber();
	TNumberParser();

protected:
	long fField16; // Offset: 16
	long fField28; // Offset: 28
	char fField32; // Offset: 32
	long fField36; // Offset: 36
};

#endif
