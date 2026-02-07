#ifndef __INFERRED_TLZDECOMPRESSOR_H
#define __INFERRED_TLZDECOMPRESSOR_H

class TLZDecompressor {
public:
	void ClassInfo();
	void Decompress();
	void DecompressBlock();
	void DecompressChunk();
	void Delete();
	void Init();
	void New();
	void Sizeof();
	void codeword_dec_bin();
	void decode_copy_length_bin_huff4();
	void decode_lit_len_bin();
	void decode_offset_bin();

protected:
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	char fField56; // Offset: 56
	char fField57; // Offset: 57
};

#endif
