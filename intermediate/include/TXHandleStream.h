#ifndef __INFERRED_TXHANDLESTREAM_H
#define __INFERRED_TXHANDLESTREAM_H

class TXHandleStream {
public:
	void GetSize();
	void Read();
	TXHandleStream();
	void Write();
	~TXHandleStream();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
