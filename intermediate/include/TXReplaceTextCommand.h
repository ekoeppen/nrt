#ifndef __INFERRED_TXREPLACETEXTCOMMAND_H
#define __INFERRED_TXREPLACETEXTCOMMAND_H

class TXReplaceTextCommand {
public:
	void DoMainAction();
	void GetUndoParams();
	void ITXReplaceTextCommand();

protected:
	long fField4; // Offset: 4
	long fField120; // Offset: 120
};

#endif
