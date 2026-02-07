#ifndef __INFERRED_TXNEWTDISPLAY_H
#define __INFERRED_TXNEWTDISPLAY_H

class TXNewtDisplay {
public:
	void BeginEdit();
	void EndEdit();
	void Focus();
	TXNewtDisplay();
	void UnFocus();

protected:
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
};

#endif
