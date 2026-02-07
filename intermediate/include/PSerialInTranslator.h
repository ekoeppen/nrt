#ifndef __INFERRED_PSERIALINTRANSLATOR_H
#define __INFERRED_PSERIALINTRANSLATOR_H

class PSerialInTranslator {
public:
	void ClassInfo();
	void Delete();
	void FrameAvailable();
	void Idle();
	void Init();
	void New();
	void ProduceFrame();
	void Sizeof();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
};

#endif
