#ifndef __INFERRED_TMESSAGEQUEUE_H
#define __INFERRED_TMESSAGEQUEUE_H

class TMessageQueue {
public:
	void DequeueMessage();
	void EnqueueMessage();
	void IsQueueEmpty();
	TMessageQueue();

protected:
};

#endif
