#ifndef __INFERRED_TGSMCODEC_H
#define __INFERRED_TGSMCODEC_H

class TGSMCodec {
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
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
};

#endif
