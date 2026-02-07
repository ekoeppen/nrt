#ifndef __INFERRED_TCODECCHANNEL_H
#define __INFERRED_TCODECCHANNEL_H

class TCodecChannel {
public:
	void Abort();
	void Cancel();
	void CompressLoop();
	void DecompressLoop();
	void DeleteCodecNodes();
	void EmptyDMABuffer();
	void FillDMABuffer();
	void FreeNode();
	void GetBufferTimeout();
	void GetCodec();
	void GetCodecState();
	void GetNextNode();
	void GetNodeBuffer();
	void GetNodeRefCount();
	void GetRecordState();
	void InitCodecNodes();
	void InitNode();
	void MainEventLoop();
	void Pause();
	void ReleaseNode();
	void ScheduleDMA();
	void SendStart();
	void SetCodec();
	void SetCodecState();
	void SetNodeRefCount();
	void SetRecordState();
	void SetupNode();
	void Start();
	void Stop();
	TCodecChannel();
	void WaitForNextBuffer();
	~TCodecChannel();

protected:
	long fField4; // Offset: 4
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField36; // Offset: 36
	long fField480; // Offset: 480
	long fField484; // Offset: 484
	long fField500; // Offset: 500
	long fField504; // Offset: 504
	long fField512; // Offset: 512
	long fField516; // Offset: 516
	long fField520; // Offset: 520
	long fField528; // Offset: 528
	long fField532; // Offset: 532
};

#endif
