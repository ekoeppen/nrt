#ifndef __INFERRED_TSOUPINDEX_H
#define __INFERRED_TSOUPINDEX_H

class TSoupIndex {
public:
	void ASCIIKeyCompare();
	void Add();
	void AddInTransaction();
	void AppendDupData();
	void BalanceTwoNodes();
	void BytesInNode();
	void ChangeNode();
	void CharacterKeyCompare();
	void CheckForDupData();
	void CompareKeys();
	void CopyKeyFmNode();
	void Create();
	void CreateFirstRoot();
	void CreateNewRoot();
	void Delete();
	void DeleteDupData();
	void DeleteKey();
	void DeleteKeyFromNode();
	void DeleteNode();
	void DeleteTheKey();
	void Destroy();
	void DoubleKeyCompare();
	void DupNodeSize();
	void Find();
	void FindAndGetState();
	void FindDupDataAdr();
	void FindFirstKey();
	void FindLastAndGetState();
	void FindLastKey();
	void FindNextDupDataAdr();
	void FindNextKey();
	void FindPriorAndGetState();
	void FindPriorDupDataAdr();
	void FindPriorKey();
	void First();
	void FirstDupDataAdr();
	void FirstKeyField();
	void FirstNodeNo();
	void FreeDupNodes();
	void FreeNodes();
	void GetLeafKey();
	void Init();
	void InitNode();
	void InsertAfterDelete();
	void InsertDupData();
	void InsertKey();
	void KeyAfterNodeNo();
	void KeyBeforeNodeNo();
	void KeyFieldAdr();
	void KeyFieldBase();
	void KeyInNode();
	void Last();
	void LastDupDataAdr();
	void LastKeyField();
	void LastNodeNo();
	void LastSlotInNode();
	void LeftNodeNo();
	void LongKeyCompare();
	void MergeTwoNodes();
	void MoveAndGetState();
	void MoveKey();
	void MoveUsingState();
	void MultiKeyCompare();
	void NewDupNode();
	void NewNode();
	void Next();
	void NextDupDataAdr();
	void NodeSize();
	void NodeUnderflow();
	void PrependDupData();
	void Prior();
	void PutKeyIntoNode();
	void RawKeyCompare();
	void ReadADupNode();
	void ReadANode();
	void ReadInfo();
	void ReadRootNode();
	void RightNodeNo();
	void RoomInNode();
	void Search();
	void SearchNext();
	void SearchNextDup();
	void SearchPrior();
	void SearchPriorDup();
	void SetNodeNo();
	void SetRootNode();
	void SplitANode();
	void StoreAborted();
	void StoreDupData();
	void StringKeyCompare();
	void TotalSize();
	void UpdateDupNode();
	void UpdateNode();
	void _BTEnterKey();
	void _BTGetNextDupKey();
	void _BTGetNextKey();
	void _BTGetPriorDupKey();
	void _BTGetPriorKey();
	void _BTRemoveKey();
	void kfAssembleKeyField();
	void kfConvertKeyField();
	void kfDeleteData();
	void kfDisassembleKeyField();
	void kfDupCount();
	void kfFindDataAdr();
	void kfFirstDataAdr();
	void kfInsertData();
	void kfLastDataAdr();
	void kfNextDataAdr();
	void kfNextDupID();
	void kfReplaceFirstData();
	void kfSetDupCount();
	void kfSetNextDupID();
	void kfSizeOfData();
	void kfSizeOfKey();
	~TSoupIndex();

protected:
	char fField1; // Offset: 1
	char fField2; // Offset: 2
	char fField3; // Offset: 3
	long fField4; // Offset: 4
	long fField6; // Offset: 6
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	char fField40; // Offset: 40
	char fField41; // Offset: 41
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField124; // Offset: 124
};

#endif
