#ifndef __INFERRED_PSTDIOINTRANSLATOR_H
#define __INFERRED_PSTDIOINTRANSLATOR_H

class PStdioInTranslator {
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
	long fField28; // Offset: 28
};

#endif
