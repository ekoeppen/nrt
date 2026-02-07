#ifndef __INFERRED_PMUXSERVICE_H
#define __INFERRED_PMUXSERVICE_H

class PMuxService {
public:
	void Delete();
	void New();
	void OpenConnectionEnd();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
