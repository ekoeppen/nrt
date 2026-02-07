#ifndef __INFERRED_TTREND_H
#define __INFERRED_TTREND_H

class TTrend {
public:
	void AddToCluster();
	void AddToTrend();
	void Attach();
	void Dispose();
	void FindCluster();
	void ITrend();
	void Make();
	void Merge();
	void MergeCheck();
	void NewCluster();

protected:
	long fField12; // Offset: 12
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
};

#endif
