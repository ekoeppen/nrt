#ifndef __INFERRED_TRESERVEDBLOCKHANDLER_H
#define __INFERRED_TRESERVEDBLOCKHANDLER_H

class TReservedBlockHandler {
public:
	void AddObject();
	void CommitObject();
	void Compact();
	void DeleteObject();
	void FindFreeBlock();
	void FindObject();
	void GetBlockUsage();
	void GetObjectBlockNumber();
	void GetObjectNumber();
	void GetObjectSize();
	void GetObjectType();
	void GetReservedId();
	void Read();
	void ReplaceObject();
	TReservedBlockHandler();
	void Write();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField84; // Offset: 84
};

#endif
