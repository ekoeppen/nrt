#ifndef __INFERRED_TFLASHSTORELOOKUPCACHE_H
#define __INFERRED_TFLASHSTORELOOKUPCACHE_H

class TFlashStoreLookupCache {
public:
	void Add();
	void Change();
	void Destroy();
	void Forget();
	void ForgetAll();
	void Init();
	void Lookup();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
};

#endif
