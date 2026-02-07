#ifndef __INFERRED_TXLOCALCONTAINER_H
#define __INFERRED_TXLOCALCONTAINER_H

class TXLocalContainer {
public:
	void EndWrite();
	void FreeObjects();
	void ReadObject();
	TXLocalContainer();
	void WriteObjectData();

protected:
	long fField4; // Offset: 4
};

#endif
