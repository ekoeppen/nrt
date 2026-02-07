#ifndef __INFERRED_TEZPIPEPROTOCOL_H
#define __INFERRED_TEZPIPEPROTOCOL_H

class TEzPipeProtocol {
public:
	void FindDockerHeader();
	void ProtocolInit();
	void ReadDockerHeader();
	void SendDockerHeader();
	void WriteDockerHeader();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
