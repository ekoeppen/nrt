#ifndef __INFERRED_TXPAGEFORMATTER_H
#define __INFERRED_TXPAGEFORMATTER_H

class TXPageFormatter {
public:
	void Format();
	void GetFrameHeight();
	void SetFrameHeight();
	TXPageFormatter();

protected:
	long fField28; // Offset: 28
	long fField40; // Offset: 40
	long fField48; // Offset: 48
};

#endif
