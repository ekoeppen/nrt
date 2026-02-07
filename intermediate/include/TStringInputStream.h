#ifndef __INFERRED_TSTRINGINPUTSTREAM_H
#define __INFERRED_TSTRINGINPUTSTREAM_H

class TStringInputStream {
public:
	void End();
	void GetChar();
	TStringInputStream();
	void UngetChar();

protected:
	long fField4; // Offset: 4
	long fField264; // Offset: 264
	long fField268; // Offset: 268
};

#endif
