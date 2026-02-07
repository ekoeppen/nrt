#ifndef __INFERRED_PNTKOUTTRANSLATOR_H
#define __INFERRED_PNTKOUTTRANSLATOR_H

class PNTKOutTranslator {
public:
	void ClassInfo();
	void ConsumeExceptionFrame();
	void ConsumeFrame();
	void ConsumeFrameReally();
	void Delete();
	void EnterBreakLoop();
	void ExceptionNotify();
	void ExitBreakLoop();
	void Flush();
	void FlushText();
	void Idle();
	void Init();
	void New();
	void Print();
	void Prompt();
	void Putc();
	void SendCommand();
	void SendData();
	void SendHeader();
	void SetTimeout();
	void Sizeof();
	void StackTrace();

protected:
	long fField8; // Offset: 8
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
};

#endif
