#ifndef __INFERRED_TSTDIOINPUTSTREAM_H
#define __INFERRED_TSTDIOINPUTSTREAM_H

class TStdioInputStream {
public:
	void End();
	void GetChar();
	TStdioInputStream();
	void UngetChar();

protected:
	long fField4; // Offset: 4
	long fField264; // Offset: 264
};

#endif
