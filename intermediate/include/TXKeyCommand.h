#ifndef __INFERRED_TXKEYCOMMAND_H
#define __INFERRED_TXKEYCOMMAND_H

class TXKeyCommand {
public:
	void AcceptKey();
	void AddKey();
	void DoIt();
	void ITXKeyCommand();
	void NewKey();
	void RedoHilite();
	void SaveUndoContainer();
	TXKeyCommand();
	void UndoHilite();
	void UndoIt();

protected:
	long fField4; // Offset: 4
	char fField13; // Offset: 13
	long fField24; // Offset: 24
	char fField28; // Offset: 28
	long fField72; // Offset: 72
	char fField88; // Offset: 88
	char fField104; // Offset: 104
	char fField105; // Offset: 105
	long fField108; // Offset: 108
	char fField112; // Offset: 112
};

#endif
