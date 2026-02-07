#ifndef __INFERRED_TOBJTEXTDECOMPRESSOR_H
#define __INFERRED_TOBJTEXTDECOMPRESSOR_H

class TObjTextDecompressor {
public:
	void Decompress();
	void SlowDecompress();
	TObjTextDecompressor();
	void TextDecompCallback();
	~TObjTextDecompressor();

protected:
	long fField3000; // Offset: 3000
	long fField3004; // Offset: 3004
	long fField3008; // Offset: 3008
	long fField3012; // Offset: 3012
};

#endif
