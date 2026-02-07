#ifndef __INFERRED_TXATTROBJECT_H
#define __INFERRED_TXATTROBJECT_H

class TXAttrObject {
public:
	void Free();
	void FreeData();
	void GetAttributeFlags();
	void GetAttributeValue();
	void GetAttributesValues();
	void GetCommonAttrValue();
	void GetCommonAttrValues();
	void GetCountReferences();
	void GetObjFlags();
	void GetPublicType();
	void IsEqual();
	void ReadPublicData();
	void Reference();
	void SetAttributeValue();
	TXAttrObject();
	void Update();
	void UpdateAttribute();
	void WritePublicData();
	~TXAttrObject();

protected:
	long fField4; // Offset: 4
};

#endif
