#ifndef __INFERRED_TFRAMESOUNDCHANNEL_H
#define __INFERRED_TFRAMESOUNDCHANNEL_H

class TFrameSoundChannel {
public:
	void Close();
	void Convert();
	void DeleteCodec();
	void InitCodec();
	void Open();
	void OpenCodec();
	void Schedule();
	TFrameSoundChannel();
	~TFrameSoundChannel();

protected:
	long fField4; // Offset: 4
	long fField60; // Offset: 60
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	char fField92; // Offset: 92
	long fField96; // Offset: 96
	long fField768; // Offset: 768
};

#endif
