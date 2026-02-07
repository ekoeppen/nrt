#ifndef __INFERRED_TEXTERNALNEWTEVENTHANDLER_H
#define __INFERRED_TEXTERNALNEWTEVENTHANDLER_H

class TExternalNewtEventHandler {
public:
	void Delete();
	void HandleEvent();
	void New();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
