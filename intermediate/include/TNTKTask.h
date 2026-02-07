#ifndef __INFERRED_TNTKTASK_H
#define __INFERRED_TNTKTASK_H

class TNTKTask {
public:
	void GetSizeOf();
	void InitNTK();
	void MainConstructor();
	void MainDestructor();
	void PostMain();
	void PreMain();
	TNTKTask();
	~TNTKTask();

protected:
	long fField4; // Offset: 4
	long fField112; // Offset: 112
};

#endif
