#ifndef __INFERRED_TNSDEBUGAPI_H
#define __INFERRED_TNSDEBUGAPI_H

class TNSDebugAPI {
public:
	void AccurateStack();
	void FindVar();
	void Function();
	void GetVar();
	void Implementor();
	void Locals();
	void NumStackFrames();
	void NumTemps();
	void PC();
	void Receiver();
	void Return();
	void SetFindVar();
	void SetFunction();
	void SetImplementor();
	void SetPC();
	void SetReceiver();
	void SetTempValue();
	void SetVar();
	void StackFrameAt();
	void StackStart();
	TNSDebugAPI();
	void TempValue();
	~TNSDebugAPI();

protected:
	long fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField644; // Offset: 644
	char fField645; // Offset: 645
};

#endif
