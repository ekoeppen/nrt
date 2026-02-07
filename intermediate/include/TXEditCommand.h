#ifndef __INFERRED_TXEDITCOMMAND_H
#define __INFERRED_TXEDITCOMMAND_H

class TXEditCommand {
public:
	void CreateUndoRedoStream();
	void DoIt();
	void DoMainAction();
	void FreeContainerStream();
	void GetContainerStream();
	void GetUndoParams();
	void ITXEditCommand();
	void RedoHilite();
	void RedoIt();
	void SaveRedoContainer();
	void SaveUndoContainer();
	TXEditCommand();
	void UndoHilite();
	void UndoIt();
	~TXEditCommand();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	char fField12; // Offset: 12
	char fField13; // Offset: 13
	long fField16; // Offset: 16
	long fField24; // Offset: 24
	long fField72; // Offset: 72
	char fField80; // Offset: 80
	long fField84; // Offset: 84
	char fField88; // Offset: 88
	long fField92; // Offset: 92
	long fField96; // Offset: 96
	long fField100; // Offset: 100
};

#endif
