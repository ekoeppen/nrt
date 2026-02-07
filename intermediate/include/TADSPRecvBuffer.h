#ifndef __INFERRED_TADSPRECVBUFFER_H
#define __INFERRED_TADSPRECVBUFFER_H

class TADSPRecvBuffer {
public:
	void Getn();
	void Putn();
	void RecvWdw();
	TADSPRecvBuffer();
	~TADSPRecvBuffer();

protected:
	long fField76; // Offset: 76
	long fField80; // Offset: 80
};

#endif
