#ifndef __INFERRED_TVREMOTEIRTOOL_H
#define __INFERRED_TVREMOTEIRTOOL_H

class TVRemoteIRTool {
public:
	void AddCurrentOptions();
	void AddDefaultOptions();
	void AllocateBuffers();
	void ConnectStart();
	void DoInput();
	void DoOutput();
	void GetSizeOf();
	void GetToolName();
	void IHReqHandler();
	void PacketSentInt();
	void ProcessOptionStart();
	void StartIRTransmit();
	TVRemoteIRTool();
	void TaskConstructor();
	void TaskDestructor();
	void TurnOnSerChip();

protected:
	long fField344; // Offset: 344
	long fField348; // Offset: 348
	long fField352; // Offset: 352
	long fField356; // Offset: 356
	long fField360; // Offset: 360
	long fField364; // Offset: 364
	long fField624; // Offset: 624
	long fField628; // Offset: 628
	char fField634; // Offset: 634
	char fField658; // Offset: 658
	long fField756; // Offset: 756
	long fField768; // Offset: 768
	long fField772; // Offset: 772
	long fField780; // Offset: 780
	long fField1216; // Offset: 1216
	long fField1224; // Offset: 1224
	long fField1228; // Offset: 1228
};

#endif
