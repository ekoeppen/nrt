#ifndef __INFERRED_POPTIONDATAIN_H
#define __INFERRED_POPTIONDATAIN_H

class POptionDataIn {
public:
	void ClassInfo();
	void ConvertFromOption();
	void ConvertFromOptionArray();
	void Delete();
	void New();
	void ParseInput();
	void Sizeof();
	void Translate();

protected:
	char fField4; // Offset: 4
};

#endif
