#ifndef __INFERRED_TTASKQUEUE_H
#define __INFERRED_TTASKQUEUE_H

class TTaskQueue {
public:
	void Add();
	void CheckBeforeAdd();
	void FindAndRemove();
	void Peek();
	void Remove();
	void RemoveFromQueue();
	TTaskQueue();

protected:
	long fField4; // Offset: 4
};

#endif
