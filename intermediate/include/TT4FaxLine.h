#ifndef __INFERRED_TT4FAXLINE_H
#define __INFERRED_TT4FAXLINE_H

class TT4FaxLine {
public:
	void AppendTo();
	void DecodeLine();
	void DoMHDecodeLine();
	void EmitBits();
	void GetBits();
	void GetLength();
	void GetNextBit();
	void Init();
	void MHGetNextCode();
	void Reset();
	void SkipPastEOL();
	TT4FaxLine();
	~TT4FaxLine();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	char fField20; // Offset: 20
	long fField24; // Offset: 24
	char fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	char fField44; // Offset: 44
	long fField48; // Offset: 48
};

#endif
