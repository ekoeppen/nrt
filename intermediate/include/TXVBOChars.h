#ifndef __INFERRED_TXVBOCHARS_H
#define __INFERRED_TXVBOCHARS_H

class TXVBOChars {
public:
	void AllocateChunks();
	void GetCharsVBO();
	void GetChunkPtr();
	void MungeChunk();
	void RemoveChunks();
	void SetCharsVBO();
	TXVBOChars();

protected:
	long fField4; // Offset: 4
	long fField16; // Offset: 16
};

#endif
