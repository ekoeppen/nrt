#ifndef __INFERRED_TTESTCASE_H
#define __INFERRED_TTESTCASE_H

class TTestCase {
public:
	void Cleanup();
	void Delete();
	void Execute();
	void Init();
	void New();
	void Setup();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
