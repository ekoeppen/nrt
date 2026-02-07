#ifndef __INFERRED_TIMACODEC_H
#define __INFERRED_TIMACODEC_H

class TIMACodec {
public:
	void BufferCompleted();
	void ClassInfo();
	void Consume();
	void Delete();
	void Init();
	void New();
	void Produce();
	void Reset();
	void Sizeof();
	void Start();
	void Stop();

protected:
	long fField16; // Offset: 16
	char fField20; // Offset: 20
	char fField21; // Offset: 21
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
};

#endif
