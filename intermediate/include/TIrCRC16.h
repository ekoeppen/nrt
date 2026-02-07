#ifndef __INFERRED_TIRCRC16_H
#define __INFERRED_TIRCRC16_H

class TIrCRC16 {
public:
	void ComputeCRC();
	void Finalize();
	void Get();
	void Reset();

protected:
	char fField1; // Offset: 1
	long fField4; // Offset: 4
};

#endif
