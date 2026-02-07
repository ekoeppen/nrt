#ifndef __INFERRED_TFRAMEPARTHANDLER_H
#define __INFERRED_TFRAMEPARTHANDLER_H

class TFramePartHandler {
public:
	void Expand();
	void Install();
	void Remove();
	void SetFrameRemoveObject();

protected:
	long fField56; // Offset: 56
};

#endif
