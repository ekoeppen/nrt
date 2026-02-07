#ifndef __INFERRED_TXMOVETEXTCOMMAND_H
#define __INFERRED_TXMOVETEXTCOMMAND_H

class TXMoveTextCommand {
public:
	void DoIt();
	void GetUndoParams();
	void ITXMoveTextCommand();
	void RedoIt();
	void UndoIt();

protected:
	long fField4; // Offset: 4
	long fField120; // Offset: 120
	char fField128; // Offset: 128
};

#endif
