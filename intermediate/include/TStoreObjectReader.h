#ifndef __INFERRED_TSTOREOBJECTREADER_H
#define __INFERRED_TSTOREOBJECTREADER_H

class TStoreObjectReader {
public:
	void EachLargeObjectDo();
	void Read();
	void Scan();
	void Scan1();
	TStoreObjectReader();
	~TStoreObjectReader();

protected:
	long fField4; // Offset: 4
	long fField584; // Offset: 584
	long fField588; // Offset: 588
	long fField596; // Offset: 596
};

#endif
