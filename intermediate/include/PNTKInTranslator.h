#ifndef __INFERRED_PNTKINTRANSLATOR_H
#define __INFERRED_PNTKINTRANSLATOR_H

class PNTKInTranslator {
public:
	void ClassInfo();
	void Delete();
	void FrameAvailable();
	void Idle();
	void Init();
	void LoadPackage();
	void New();
	void ProduceFrame();
	void ReadData();
	void ReadHeader();
	void SetTimeout();
	void Sizeof();

protected:
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	char fField32; // Offset: 32
};

#endif
