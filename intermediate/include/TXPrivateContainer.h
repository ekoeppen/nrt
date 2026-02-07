#ifndef __INFERRED_TXPRIVATECONTAINER_H
#define __INFERRED_TXPRIVATECONTAINER_H

class TXPrivateContainer {
public:
	void AcquireTextDescriptor();
	void AppendNewValue();
	void EndValueWrite();
	void EndWrite();
	void FocusOnValue();
	void GetCountObjects();
	void GetValueSize();
	void ReadObject();
	TXPrivateContainer();
	void WriteObject();
	void WriteText();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	char fField52; // Offset: 52
	char fField2132; // Offset: 2132
};

#endif
