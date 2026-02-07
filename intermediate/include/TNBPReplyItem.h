#ifndef __INFERRED_TNBPREPLYITEM_H
#define __INFERRED_TNBPREPLYITEM_H

class TNBPReplyItem {
public:
	void GetEnumerator();
	void GetLinkId();
	void GetNetwork();
	void GetNode();
	void GetSocket();

protected:
	char fField1; // Offset: 1
	char fField2; // Offset: 2
	char fField3; // Offset: 3
	char fField4; // Offset: 4
	char fField5; // Offset: 5
	char fField6; // Offset: 6
	char fField7; // Offset: 7
	char fField8; // Offset: 8
};

#endif
