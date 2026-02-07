#ifndef __INFERRED_TAPPLICATION_H
#define __INFERRED_TAPPLICATION_H

class TApplication {
public:
	void AddDelayedAction();
	void ClassID();
	void ClearUndo();
	void Constructor();
	void DerivedFrom();
	void DispatchCommand();
	void DoCommand();
	void GetUndoStack();
	void GetUndoState();
	void Idle();
	void InitToolbox();
	void NextDelayedActionTime();
	void PostUndoCommand();
	void Quit();
	void Run();
	void RunNextDelayedAction();
	void Undo();
	void UpdateNextIdleTime();
	~TApplication();

protected:
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	char fField20; // Offset: 20
	char fField21; // Offset: 21
	long fField24; // Offset: 24
	long fField28; // Offset: 28
};

#endif
