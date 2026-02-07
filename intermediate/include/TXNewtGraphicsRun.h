#ifndef __INFERRED_TXNEWTGRAPHICSRUN_H
#define __INFERRED_TXNEWTGRAPHICSRUN_H

class TXNewtGraphicsRun {
public:
	void Assign();
	void CreateNew();
	void DrawContent();
	void GetAttributeFlags();
	void GetClassId();
	void GetDimensions();
	void GetNSObject();
	void GetObjFlags();
	void GetPublicType();
	void SetNSObject();
	TXNewtGraphicsRun();

protected:
	long fField4; // Offset: 4
	long fField16; // Offset: 16
};

#endif
