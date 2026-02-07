#ifndef __INFERRED_TXSTDCONTAINER_H
#define __INFERRED_TXSTDCONTAINER_H

class TXStdContainer {
public:
	void AppendNewValue();
	void BeginWrite();
	void EndWrite();
	void FocusOnValue();
	void GetCountObjects();
	void GetValueSize();
	void SetStream();
	TXStdContainer();
	void WriteObject();
	void WriteText();

protected:
	long fField4; // Offset: 4
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField28; // Offset: 28
	long fField32; // Offset: 32
};

#endif
