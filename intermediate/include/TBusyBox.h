#ifndef __INFERRED_TBUSYBOX_H
#define __INFERRED_TBUSYBOX_H

class TBusyBox {
public:
	void DoCommand();
	void HideBusyBox();
	void ShowBusyBox();
	TBusyBox();
	void Timeout();

protected:
	long fField52; // Offset: 52
	long fField100; // Offset: 100
};

#endif
