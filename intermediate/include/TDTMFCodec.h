#ifndef __INFERRED_TDTMFCODEC_H
#define __INFERRED_TDTMFCODEC_H

class TDTMFCodec {
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
	long fField308; // Offset: 308
	long fField312; // Offset: 312
	long fField316; // Offset: 316
	long fField320; // Offset: 320
	long fField660; // Offset: 660
	long fField668; // Offset: 668
	long fField672; // Offset: 672
	long fField676; // Offset: 676
	long fField680; // Offset: 680
	long fField684; // Offset: 684
	long fField688; // Offset: 688
};

#endif
