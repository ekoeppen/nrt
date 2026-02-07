#ifndef __INFERRED_TADSPBUFFER_H
#define __INFERRED_TADSPBUFFER_H

class TADSPBuffer {
public:
	void CheckEOM();
	void CountEOM();
	void Init();
	TADSPBuffer();
	~TADSPBuffer();

protected:
	char fField72; // Offset: 72
};

#endif
