#ifndef __INFERRED_TASYNCDEBUGLINK_H
#define __INFERRED_TASYNCDEBUGLINK_H

class TAsyncDebugLink {
public:
	void ClassInfo();
	void Delete();
	void EnbIntOnNextRxC();
	void ExtStsInterrupt();
	void GetSerialChipPtr();
	void Install();
	void New();
	void PollByte();
	void PowerCycle();
	void ReadDebugFrame();
	void Remove();
	void RxBFInterrupt();
	void Sizeof();
	void TxBEInterrupt();
	void WriteByte();
	void WriteDebugFrame();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
};

#endif
