#ifndef __INFERRED_TOBJREF_H
#define __INFERRED_TOBJREF_H

class TObjRef {
public:
	void ClearSeparateTranny();
	void Clone();
	void CloneEmpty();
	void CopyTo();
	void Delete();
	void FindSuperceeded();
	void FindSuperceeder();
	void GetDirEntOffset();
	void ReWriteObjHeader();
	void Read();
	void Set();
	void SetCommittedState();
	void SetSeparateTranny();
	void SetState();
	void Write();
	void operator=();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
};

#endif
