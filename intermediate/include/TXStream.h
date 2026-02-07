#ifndef __INFERRED_TXSTREAM_H
#define __INFERRED_TXSTREAM_H

class TXStream {
public:
	void GetPosition();
	void ReadBytes();
	void SetPosition();
	TXStream();
	void WriteBytes();
	~TXStream();

protected:
	long fField4; // Offset: 4
};

#endif
