#ifndef __INFERRED_TXCONTAINER_H
#define __INFERRED_TXCONTAINER_H

class TXContainer {
public:
	void AcquireTextDescriptor();
	void AppendNewValue();
	void BeginWrite();
	void ConvertAndFocusOnValue();
	void ConvertValueType();
	void EndValueWrite();
	void EndWrite();
	void FocusOnValue();
	void GetAvailTypes();
	void Import();
	void ImportObjects();
	void ImportText();
	void ReleaseTextDescriptor();
	void SetStream();
	TXContainer();
	void WriteText();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
