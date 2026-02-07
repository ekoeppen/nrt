#ifndef __INFERRED_TEDGELISTDOMAIN_H
#define __INFERRED_TEDGELISTDOMAIN_H

class TEdgeListDomain {
public:
	void Classify();
	void Dispose();
	void FindCorners();
	void Group();
	void IEdgeListDomain();
	void Make();

protected:
	long fField8; // Offset: 8
	long fField64; // Offset: 64
	char fField1893; // Offset: 1893
};

#endif
