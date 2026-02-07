#ifndef __INFERRED_TXBINARYCHARS_H
#define __INFERRED_TXBINARYCHARS_H

class TXBinaryChars {
public:
	void AcquireCharChunk();
	void CopyTo();
	void Count();
	void GetChar();
	void GetCtrlCharOffset();
	void GetLineChars();
	void ReleaseCharChunk();
	void Replace();
	void SearchChar();
	void SearchCharBack();
	TXBinaryChars();

protected:
	long fField4; // Offset: 4
};

#endif
