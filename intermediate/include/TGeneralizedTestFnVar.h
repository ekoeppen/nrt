#ifndef __INFERRED_TGENERALIZEDTESTFNVAR_H
#define __INFERRED_TGENERALIZEDTESTFNVAR_H

class TGeneralizedTestFnVar {
public:
	void ApplyKey();
	TGeneralizedTestFnVar();
	void TestClosure();
	void TestEQ();
	void TestEQClosure();
	void TestNumbers();
	void TestNumsRealUtil();
	void TestSymbols();
	void TestUniChars();
	void TestUniStrings();

protected:
	long fField4; // Offset: 4
	long fField24; // Offset: 24
};

#endif
