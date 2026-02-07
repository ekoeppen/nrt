#ifndef __INFERRED_TCARDSYSTEMEVENTHANDLER_H
#define __INFERRED_TCARDSYSTEMEVENTHANDLER_H

class TCardSystemEventHandler {
public:
	void AECompletionProc();
	void Init();
	void NewCard();
	void PowerOff();
	void PowerOn();
	void ReplyPowerOff();
	TCardSystemEventHandler();

protected:
	long fField24; // Offset: 24
};

#endif
