#ifndef __INFERRED_TCRC16_H
#define __INFERRED_TCRC16_H

class TCRC16 {
public:
	void ComputeCRC();
	void Get();
	void Reset();

protected:
	char fField1; // Offset: 1
	long fField4; // Offset: 4
};

#endif
