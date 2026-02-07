#ifndef __INFERRED_CREFPIPE_H
#define __INFERRED_CREFPIPE_H

class CRefPipe {
public:
	CRefPipe();
	void InitSink();
	void InitSource();
	~CRefPipe();

protected:
	long fField4; // Offset: 4
};

#endif
