#ifndef __INFERRED_TCARDMESSAGE_H
#define __INFERRED_TCARDMESSAGE_H

class TCardMessage {
public:
	void Clear();
	void MessageStuff();
	TCardMessage();
	~TCardMessage();

protected:
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	char fField44; // Offset: 44
	char fField45; // Offset: 45
};

#endif
