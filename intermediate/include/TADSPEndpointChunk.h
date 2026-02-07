#ifndef __INFERRED_TADSPENDPOINTCHUNK_H
#define __INFERRED_TADSPENDPOINTCHUNK_H

class TADSPEndpointChunk {
public:
	void ADSPCallService();
	void Abort();
	void CloseADSPSocket();
	void ConsumeData();
	void DeRegisterNBPName();
	void GetRecvPB();
	void GetSendPB();
	void Init();
	void InitBuffers();
	void IsPending();
	void KillControl();
	void KillRecv();
	void KillSend();
	void OpenADSPSocket();
	void ProduceData();
	void Recv();
	void RecvComplete();
	void RegisterNBPName();
	void Send();
	void SendComplete();
	TADSPEndpointChunk();
	void Timeout();
	void UpdateClient();
	void UpdateStack();
	~TADSPEndpointChunk();

protected:
	long fField4; // Offset: 4
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField32; // Offset: 32
	long fField60; // Offset: 60
	long fField84; // Offset: 84
	long fField112; // Offset: 112
	long fField136; // Offset: 136
	char fField164; // Offset: 164
	long fField168; // Offset: 168
	long fField176; // Offset: 176
	char fField180; // Offset: 180
	char fField181; // Offset: 181
	char fField182; // Offset: 182
	char fField183; // Offset: 183
	char fField184; // Offset: 184
	char fField187; // Offset: 187
	char fField188; // Offset: 188
	char fField189; // Offset: 189
	long fField336; // Offset: 336
	long fField340; // Offset: 340
	long fField344; // Offset: 344
	long fField348; // Offset: 348
	long fField352; // Offset: 352
	long fField356; // Offset: 356
};

#endif
