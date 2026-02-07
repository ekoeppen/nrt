#ifndef __INFERRED_TRECAREA_H
#define __INFERRED_TRECAREA_H

class TRecArea {
public:
	void AddAType();
	void Clone();
	void Dispose();
	void Dump();
	void GetInfoFor();
	void IDispose();
	void Make();
	void ParamsAllSet();
	void Release();
	void SizeInBytes();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
};

#endif
