#ifndef __INFERRED_TCACHEDREADSTORE_H
#define __INFERRED_TCACHEDREADSTORE_H

class TCachedReadStore {
public:
	void GetDataPtr();
	void Init();
	TCachedReadStore();
	~TCachedReadStore();

protected:
	long fField1024; // Offset: 1024
	long fField1028; // Offset: 1028
	long fField1036; // Offset: 1036
	char fField1040; // Offset: 1040
	long fField1044; // Offset: 1044
	long fField1048; // Offset: 1048
};

#endif
