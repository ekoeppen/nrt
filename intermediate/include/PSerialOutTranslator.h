#ifndef __INFERRED_PSERIALOUTTRANSLATOR_H
#define __INFERRED_PSERIALOUTTRANSLATOR_H

class PSerialOutTranslator {
public:
	void ClassInfo();
	void ConsumeFrame();
	void Delete();
	void EnterBreakLoop();
	void ExceptionNotify();
	void ExitBreakLoop();
	void Flush();
	void Idle();
	void Init();
	void New();
	void Print();
	void Prompt();
	void Putc();
	void Sizeof();
	void StackTrace();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
};

#endif
