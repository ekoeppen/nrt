#ifndef __INFERRED_TINTERPRETER_H
#define __INFERRED_TINTERPRETER_H

class TInterpreter {
public:
	void AlternatingLoops();
	void Call();
	void CallCFuncPtr();
	void CallCFunction();
	void CallCodeBlock();
	void CallPlainCFunction();
	void CallPlainCodeBlock();
	void ControlPosition();
	void EnableBreakPoints();
	void ExceptionBeingHandled();
	void FastRun();
	void FastRun1();
	void GetImplementor();
	void GetLocalFromStack();
	void GetReceiver();
	void GetSelfFromStack();
	void HandleBreakPoints();
	void HandleException();
	void IsSend();
	void PeekControl();
	void PeekValue();
	void PopHandlers();
	void PopValue();
	void PushValue();
	void Return();
	void Run();
	void Send();
	void SetBreakPoints();
	void SetCallEnv();
	void SetControl();
	void SetFastLoopFlag();
	void SetFlags();
	void SetLocalOnStack();
	void SetSendEnv();
	void SetValue();
	void SlowRun();
	void StackTrace();
	TInterpreter();
	void TaciturnPrintObject();
	void TopLevelCall();
	void TraceApply();
	void TraceArgs();
	void TraceCall();
	void TraceFreqCall();
	void TraceGet();
	void TraceMethod();
	void TraceReturn();
	void TraceSend();
	void TraceSet();
	void TraceSetOptions();
	void TranslateException();
	void ValuePosition();
	~TInterpreter();

protected:
	long fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	long fField88; // Offset: 88
	long fField92; // Offset: 92
	long fField96; // Offset: 96
	long fField100; // Offset: 100
	char fField104; // Offset: 104
	char fField105; // Offset: 105
	long fField108; // Offset: 108
	long fField112; // Offset: 112
	long fField116; // Offset: 116
	long fField120; // Offset: 120
	long fField124; // Offset: 124
};

#endif
