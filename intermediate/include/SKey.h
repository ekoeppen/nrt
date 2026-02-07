#ifndef __INFERRED_SKEY_H
#define __INFERRED_SKEY_H

class SKey {
public:
	void Equals();
	void Set();
	void SetFlags();
	void SetMissingKey();
	void SetSize();
	void operator double();
	void operator long();
	void operator unsigned short();
	void operator=();

protected:
	char fField1; // Offset: 1
};

#endif
