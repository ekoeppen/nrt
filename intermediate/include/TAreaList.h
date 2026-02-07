#ifndef __INFERRED_TAREALIST_H
#define __INFERRED_TAREALIST_H

class TAreaList {
public:
	void AddArea();
	void Clone();
	void Dispose();
	void FindMatchingView();
	void GetArea();
	void GetMergedArea();
	void IAreaList();
	void IDispose();
	void Make();

protected:
	long fField12; // Offset: 12
};

#endif
