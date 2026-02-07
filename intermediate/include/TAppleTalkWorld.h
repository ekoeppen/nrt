#ifndef __INFERRED_TAPPLETALKWORLD_H
#define __INFERRED_TAPPLETALKWORLD_H

class TAppleTalkWorld {
public:
	void FreeMessage();
	void GetMessage();
	void GetSizeOf();
	void MainConstructor();
	void MainDestructor();
	void NewMessage();
	TAppleTalkWorld();
	void TheMain();

protected:
	char fField256; // Offset: 256
	long fField276; // Offset: 276
	char fField368; // Offset: 368
	long fField1512; // Offset: 1512
	long fField1516; // Offset: 1516
};

#endif
