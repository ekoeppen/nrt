#ifndef __INFERRED_TVALIDATEPACKAGEDRIVER_H
#define __INFERRED_TVALIDATEPACKAGEDRIVER_H

class TValidatePackageDriver {
public:
	void Delete();
	void New();
	void ValidateBegin();
	void ValidateEnd();
	void ValidateNextBlock();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
