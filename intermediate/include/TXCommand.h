#ifndef __INFERRED_TXCOMMAND_H
#define __INFERRED_TXCOMMAND_H

class TXCommand {
public:
	void Execute();
	void ITXCommand();
	TXCommand();
	~TXCommand();

protected:
	char fField12; // Offset: 12
	char fField13; // Offset: 13
};

#endif
