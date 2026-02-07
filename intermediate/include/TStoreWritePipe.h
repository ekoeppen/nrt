#ifndef __INFERRED_TSTOREWRITEPIPE_H
#define __INFERRED_TSTOREWRITEPIPE_H

class TStoreWritePipe {
public:
	void BufferToObject();
	void CompCallback();
	void Complete();
	void Flush();
	void GetDataPtr();
	void Init();
	void SetPosition();
	TStoreWritePipe();
	void Write();
	void WriteToStore();
	void operator<<();
	~TStoreWritePipe();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField124; // Offset: 124
	long fField536; // Offset: 536
	long fField540; // Offset: 540
	long fField544; // Offset: 544
	long fField548; // Offset: 548
	long fField552; // Offset: 552
	char fField556; // Offset: 556
};

#endif
