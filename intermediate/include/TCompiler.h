#ifndef __INFERRED_TCOMPILER_H
#define __INFERRED_TCOMPILER_H

class TCompiler {
public:
	void AddLocals();
	void AddLoopExit();
	void Backpatch();
	void BeginLoop();
	void ClosureWalker();
	void Compile();
	void CurPC();
	void DeclarationWalker();
	void Emit();
	void EmitBranch();
	void EmitFuncall();
	void EmitPlaceholder();
	void EmitPop();
	void EmitPush();
	void EmitReturn();
	void EmitVarGet();
	void EmitVarIncr();
	void EmitVarSet();
	void EndFunction();
	void EndLoop();
	void Error();
	void EvaluateConstantExpr();
	void GetCharsUntil();
	void GetNumber();
	void GetToken();
	void IsConstantExpr();
	void NewFunctionState();
	void Parser();
	void ParserStackOverflow();
	void ReservedWordToken();
	void Simplify();
	void SyntaxError();
	TCompiler();
	void WalkAssignment();
	void WalkForClosures();
	void WalkForCode();
	void WalkForDeclarations();
	void WalkForPath();
	void WalkForStringer();
	void Warning();
	void yylex0();
	~TCompiler();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField36; // Offset: 36
	char fField39; // Offset: 39
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	char fField98; // Offset: 98
	char fField116; // Offset: 116
	long fField288; // Offset: 288
	char fField1362; // Offset: 1362
	char fField1379; // Offset: 1379
	char fField1394; // Offset: 1394
	char fField3328; // Offset: 3328
};

#endif
