#ifndef __INFERRED_TRESERVEDCONTIGUOUSMEMORY_H
#define __INFERRED_TRESERVEDCONTIGUOUSMEMORY_H

class TReservedContiguousMemory {
public:
	void Delete();
	void GetPhys();
	void GetRequest();
	void New();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
