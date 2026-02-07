#ifndef __INFERRED_TEWORLDCLIENT_H
#define __INFERRED_TEWORLDCLIENT_H

class TEWorldClient {
public:
	void AddAtoms();
	void AddLargeAtom();
	void AddNormalAtom();
	void AddToStreamBuffer();
	void AsciiString();
	void BufferStart();
	void ClearAtomizer();
	void ConnectToHost();
	void DecodePacket();
	void DecodeTextCR();
	void Default();
	void DispatchPacket();
	void DoAtomStreamLocal();
	void DoAtomizerStream();
	void DoOutput();
	void DoOutputAtom();
	void EncodeTextCR();
	void Escape();
	void ExecAtom();
	void GetAtomBytes();
	void GetLongValue();
	void GetMaxUploadLength();
	void InitBuffer();
	void InitEWorldClient();
	void ProcessAtom();
	void ProcessAtomStream();
	void QueueRcv();
	void RcvComplete();
	void SendMessage();
	void SendP3Buffer();
	void SendP3BufferEscaped();
	void SetStrSlot();
	TEWorldClient();
	void UnEscape();
	void UploadFile();
	~TEWorldClient();

protected:
	char fField1; // Offset: 1
	char fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField680; // Offset: 680
	char fField684; // Offset: 684
	long fField688; // Offset: 688
	long fField692; // Offset: 692
	char fField696; // Offset: 696
	char fField697; // Offset: 697
	char fField700; // Offset: 700
	long fField704; // Offset: 704
	long fField708; // Offset: 708
	long fField712; // Offset: 712
	long fField716; // Offset: 716
	long fField756; // Offset: 756
	long fField760; // Offset: 760
	long fField764; // Offset: 764
	long fField768; // Offset: 768
};

#endif
