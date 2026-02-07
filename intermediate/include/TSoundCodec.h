#ifndef __INFERRED_TSOUNDCODEC_H
#define __INFERRED_TSOUNDCODEC_H

class TSoundCodec {
public:
	void BufferCompleted();
	void Consume();
	void Delete();
	void Init();
	void New();
	void Produce();
	void Reset();
	void Start();
	void Stop();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
