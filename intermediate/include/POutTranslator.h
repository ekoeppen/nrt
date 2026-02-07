#ifndef __INFERRED_POUTTRANSLATOR_H
#define __INFERRED_POUTTRANSLATOR_H

class POutTranslator {
public:
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
	void StackTrace();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
