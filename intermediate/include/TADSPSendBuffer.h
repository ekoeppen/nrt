#ifndef __INFERRED_TADSPSENDBUFFER_H
#define __INFERRED_TADSPSENDBUFFER_H

class TADSPSendBuffer {
public:
	void Ack();
	void DataCount();
	void Getn();
	void Putn();
	void Retransmit();
	TADSPSendBuffer();
	~TADSPSendBuffer();

protected:
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	long fField88; // Offset: 88
	long fField92; // Offset: 92
};

#endif
