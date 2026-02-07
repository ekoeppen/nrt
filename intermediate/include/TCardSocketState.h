#ifndef __INFERRED_TCARDSOCKETSTATE_H
#define __INFERRED_TCARDSOCKETSTATE_H

class TCardSocketState {
public:
	void Clear();
	void Init();
	TCardSocketState();
	~TCardSocketState();

protected:
	char fField16; // Offset: 16
	long fField524; // Offset: 524
	long fField552; // Offset: 552
	long fField776; // Offset: 776
	long fField780; // Offset: 780
	long fField784; // Offset: 784
	long fField828; // Offset: 828
	long fField864; // Offset: 864
	long fField868; // Offset: 868
};

#endif
