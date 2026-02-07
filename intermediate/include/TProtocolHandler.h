#ifndef __INFERRED_TPROTOCOLHANDLER_H
#define __INFERRED_TPROTOCOLHANDLER_H

class TProtocolHandler {
public:
	void Init();
	void Read();
	TProtocolHandler();
	~TProtocolHandler();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
};

#endif
