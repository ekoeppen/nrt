#ifndef __INFERRED_PSTDIOOUTTRANSLATOR_H
#define __INFERRED_PSTDIOOUTTRANSLATOR_H

class PStdioOutTranslator {
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
};

#endif
