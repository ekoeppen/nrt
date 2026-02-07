#ifndef __INFERRED_TLZCOMPRESSOR_H
#define __INFERRED_TLZCOMPRESSOR_H

class TLZCompressor {
public:
	void ClassInfo();
	void Compress();
	void CompressBlock();
	void CompressChunk();
	void Delete();
	void EstimatedCompressedSize();
	void Finish();
	void HeaderSize();
	void Init();
	void New();
	void SetHeader();
	void Sizeof();
	void codeword_gen_bin();
	void encode_copy_length_bin_huff4();
	void encode_lit_len_bin();
	void encode_offset_bin();
	void talloc();

protected:
	char fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField1056; // Offset: 1056
	long fField1060; // Offset: 1060
	long fField1064; // Offset: 1064
	char fField1068; // Offset: 1068
	char fField1069; // Offset: 1069
	char fField1070; // Offset: 1070
	long fField1072; // Offset: 1072
	long fField1076; // Offset: 1076
};

#endif
