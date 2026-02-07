#ifndef __INFERRED_TSERIALDEBUGLINK_H
#define __INFERRED_TSERIALDEBUGLINK_H

class TSerialDebugLink {
public:
	void Delete();
	void EnbIntOnNextRxC();
	void GetSerialChipPtr();
	void Install();
	void New();
	void PollByte();
	void PowerCycle();
	void ReadDebugFrame();
	void Remove();
	void WriteDebugFrame();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
