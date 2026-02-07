#ifndef __INFERRED_TXCHUNKEDCHARS_H
#define __INFERRED_TXCHUNKEDCHARS_H

class TXChunkedChars {
public:
	void AcquireCharChunk();
	void Compact();
	void ConcatChunks();
	void CopyTo();
	void Count();
	void GetChar();
	void GetCtrlCharOffset();
	void GetLineChars();
	void InsertInChunk();
	void InsertUsingExtraChunks();
	void InsertUsingNearChunk();
	void MungeChunk();
	void Preflight();
	void ReadChunksRanges();
	void ReleaseCharChunk();
	void Remove();
	void Replace();
	void SearchChar();
	void SearchCharBack();
	TXChunkedChars();
	void UnlockChunk();
	void WriteChunksRanges();
	~TXChunkedChars();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
};

#endif
