#ifndef __INFERRED_TXNEWTCONTAINER_H
#define __INFERRED_TXNEWTCONTAINER_H

class TXNewtContainer {
public:
	void AcquireTextDescriptor();
	void AppendNewValue();
	void FocusOnValue();
	void GetCountObjects();
	void GetCountTextChars();
	void GetValueSize();
	void ReadObject();
	void ReleaseTextDescriptor();
	TXNewtContainer();
	void WriteObject();
	void WriteText();
	~TXNewtContainer();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	char fField2132; // Offset: 2132
};

#endif
