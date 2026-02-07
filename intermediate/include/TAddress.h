#ifndef __INFERRED_TADDRESS_H
#define __INFERRED_TADDRESS_H

class TAddress {
public:
	void Equal();
	void SetAddress();
	void SetToBroadcast();
	TAddress();
	void operator=();

protected:
	char fField1; // Offset: 1
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	char fField9; // Offset: 9
	char fField10; // Offset: 10
	char fField11; // Offset: 11
};

#endif
