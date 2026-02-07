#ifndef __INFERRED_TEZENDPOINTPIPE_H
#define __INFERRED_TEZENDPOINTPIPE_H

class TEzEndpointPipe {
public:
	void Abort();
	void BytesAvailable();
	void CommonInit();
	void GetADSPEndpoint();
	void GetIrDAEndpoint();
	void GetMNPModemEndpoint();
	void GetMNPSerialEndpoint();
	void GetSerialEndpoint();
	void GetSharpIREndpoint();
	void Init();
	TEzEndpointPipe();
	void TearDown();
	~TEzEndpointPipe();

protected:
	long fField16; // Offset: 16
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField80; // Offset: 80
	char fField84; // Offset: 84
};

#endif
