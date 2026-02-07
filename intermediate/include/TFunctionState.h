#ifndef __INFERRED_TFUNCTIONSTATE_H
#define __INFERRED_TFUNCTIONSTATE_H

class TFunctionState {
public:
	void AddConstant();
	void AddLocals();
	void AddLoopExit();
	void AtTopLevel();
	void Backpatch();
	void BeginLoop();
	void ComputeArgFrame();
	void ComputeInitialVarLocs();
	void CopyClosedArgs();
	void CurPC();
	void DeclarationsFinished();
	void Emit();
	void EmitOne();
	void EmitPlaceholder();
	void EmitThree();
	void EndLoop();
	void GetConstantValue();
	void IsConstant();
	void IsLocalConstant();
	void IsLocalVariable();
	void LitOffset();
	void MakeCodeBlock();
	void NoteMsgEnvReference();
	void NoteVarReference();
	TFunctionState();
	void VariableIndex();
	~TFunctionState();

protected:
	char fField1; // Offset: 1
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField84; // Offset: 84
};

#endif
