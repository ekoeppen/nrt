#ifndef __INFERRED_TCARDPROCESSOR_H
#define __INFERRED_TCARDPROCESSOR_H

class TCardProcessor {
public:
	void DoCommand();
	void ForkInit();
	void MainConstructor();
	void MainDestructor();
	void MakeFork();
	TCardProcessor();
	void TheMain();
	~TCardProcessor();

protected:
	long fField2; // Offset: 2
	long fField120; // Offset: 120
	long fField128; // Offset: 128
	long fField2596; // Offset: 2596
};

#endif
