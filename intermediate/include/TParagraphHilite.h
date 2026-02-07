#ifndef __INFERRED_TPARAGRAPHHILITE_H
#define __INFERRED_TPARAGRAPHHILITE_H

class TParagraphHilite {
public:
	void Area();
	void Clone();
	void CopyFrom();
	void Encloses();
	void Overlaps();
	TParagraphHilite();
	~TParagraphHilite();

protected:
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
};

#endif
