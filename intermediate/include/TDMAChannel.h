#ifndef __INFERRED_TDMACHANNEL_H
#define __INFERRED_TDMACHANNEL_H

class TDMAChannel {
public:
	void Consume();
	void GetVolume();
	void Prep();
	void Produce();
	void SetupNode();
	TDMAChannel();
	~TDMAChannel();

protected:
	long fField12; // Offset: 12
	long fField20; // Offset: 20
	char fField48; // Offset: 48
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField84; // Offset: 84
	long fField88; // Offset: 88
	long fField92; // Offset: 92
	long fField96; // Offset: 96
	long fField476; // Offset: 476
	long fField480; // Offset: 480
	long fField484; // Offset: 484
	long fField488; // Offset: 488
	long fField496; // Offset: 496
	long fField500; // Offset: 500
	long fField504; // Offset: 504
	long fField508; // Offset: 508
	long fField512; // Offset: 512
	long fField516; // Offset: 516
};

#endif
