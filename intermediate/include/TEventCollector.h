#ifndef __INFERRED_TEVENTCOLLECTOR_H
#define __INFERRED_TEVENTCOLLECTOR_H

class TEventCollector {
public:
	void Add();
	void AddAddress();
	void AddDescriptions();
	void AddTime();
	void CollectionControl();
	void Delete();
	void Deregister();
	void Init();
	void New();
	void Register();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField24; // Offset: 24
};

#endif
