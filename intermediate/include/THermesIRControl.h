#ifndef __INFERRED_THERMESIRCONTROL_H
#define __INFERRED_THERMESIRCONTROL_H

class THermesIRControl {
public:
	void GetCmdByteCount();
	void GetIRCmdByte();
	void PutIRCmdByte();
	void ResetIRCmdBuf();
	void SetResetState();
	THermesIRControl();

protected:
	long fField32; // Offset: 32
	char fField45; // Offset: 45
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	char fField60; // Offset: 60
};

#endif
