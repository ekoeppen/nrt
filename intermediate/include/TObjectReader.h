#ifndef __INFERRED_TOBJECTREADER_H
#define __INFERRED_TOBJECTREADER_H

class TObjectReader {
public:
	void Read();
	void ReadArray();
	void ReadBinaryObject();
	void ReadCharacter();
	void ReadFrame();
	void ReadImmediate();
	void ReadLargeBinary();
	void ReadPrecedent();
	void ReadSmallRect();
	void ReadSymbol();
	void ReadUnicodeCharacter();
	void Scan();
	void SetAllowFunctions();
	void SetPrecedentsForReading();
	TObjectReader();
	~TObjectReader();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	char fField12; // Offset: 12
	long fField124; // Offset: 124
};

#endif
