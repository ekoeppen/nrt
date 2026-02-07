#ifndef __INFERRED_TXBINARYSTREAM_H
#define __INFERRED_TXBINARYSTREAM_H

class TXBinaryStream {
public:
	void GetSize();
	void Read();
	TXBinaryStream();
	void Write();
	~TXBinaryStream();

protected:
	long fField4; // Offset: 4
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	char fField20; // Offset: 20
};

#endif
