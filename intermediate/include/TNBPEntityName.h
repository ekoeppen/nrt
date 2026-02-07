#ifndef __INFERRED_TNBPENTITYNAME_H
#define __INFERRED_TNBPENTITYNAME_H

class TNBPEntityName {
public:
	void FormFromEntityName();
	void Length();
	void Match();
	void StreamOut();
	TNBPEntityName();
	void operator==();

protected:
	char fField36; // Offset: 36
	char fField72; // Offset: 72
};

#endif
