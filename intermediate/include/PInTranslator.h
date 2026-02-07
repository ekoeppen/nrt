#ifndef __INFERRED_PINTRANSLATOR_H
#define __INFERRED_PINTRANSLATOR_H

class PInTranslator {
public:
	void Delete();
	void FrameAvailable();
	void Idle();
	void Init();
	void New();
	void ProduceFrame();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
