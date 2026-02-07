#ifndef __INFERRED_TDOUBLEQCONTAINER_H
#define __INFERRED_TDOUBLEQCONTAINER_H

class TDoubleQContainer {
public:
	void Add();
	void AddBefore();
	void AddToFront();
	void CheckBeforeAdd();
	void DeleteFromQueue();
	void GetNext();
	void Init();
	void Peek();
	void Remove();
	void RemoveFromQueue();
	TDoubleQContainer();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
};

#endif
