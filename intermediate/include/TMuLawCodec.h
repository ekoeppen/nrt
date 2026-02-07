#ifndef __INFERRED_TMULAWCODEC_H
#define __INFERRED_TMULAWCODEC_H

class TMuLawCodec {
public:
	void BlockConvertLin16ToMuLaw();
	void BlockConvertMuLawToLin16();
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
};

#endif
