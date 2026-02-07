#ifndef __INFERRED_TICACHE_H
#define __INFERRED_TICACHE_H

class TICache {
public:
	void Clear();
	void ClearFrame();
	void ClearSymbol();
	void DIYMarkTICache();
	void DIYUpdateTICache();
	void Insert();
	void Lookup();
	void LookupValue();
	void Mark();
	TICache();
	void Update();
	~TICache();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
};

#endif
