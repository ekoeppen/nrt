#ifndef __INFERRED_TTESTCOMMANDQUEUE_H
#define __INFERRED_TTESTCOMMANDQUEUE_H

class TTestCommandQueue {
public:
	void DequeueTestCommand();
	void EnqueueTestCommand();
	TTestCommandQueue();

protected:
	long fField24; // Offset: 24
};

#endif
