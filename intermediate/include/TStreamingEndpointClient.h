#ifndef __INFERRED_TSTREAMINGENDPOINTCLIENT_H
#define __INFERRED_TSTREAMINGENDPOINTCLIENT_H

class TStreamingEndpointClient {
public:
	void DoStreamIn();
	void DoStreamOut();
	void ReadStreamParms();
	TStreamingEndpointClient();
	~TStreamingEndpointClient();

protected:
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	char fField16; // Offset: 16
	char fField176; // Offset: 176
	long fField212; // Offset: 212
	long fField216; // Offset: 216
	char fField613; // Offset: 613
};

#endif
