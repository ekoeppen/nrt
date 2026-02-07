#ifndef __INFERRED_TPSPRINTER_H
#define __INFERRED_TPSPRINTER_H

class TPSPrinter {
public:
	void CancelJob();
	void CheckEmptyPath();
	void ClassInfo();
	void Close();
	void ClosePage();
	void Constructor();
	void ContinueIO();
	void ContinueRendering();
	void CountBitsInPattern();
	void Delete();
	void DoHandleProblem();
	void DoPSLine();
	void DoSelectFont();
	void DoSetGray();
	void Draw1Curve();
	void Draw1Path();
	void Draw1QDLine();
	void DrawAnyArc();
	void DrawAnyCurve();
	void DrawAnyPath();
	void DrawFillOval();
	void DrawFillPoly();
	void DrawFillRect();
	void DrawFrameOval();
	void DrawFramePoly();
	void DrawFrameRect();
	void EmitInsetRect();
	void EmitText();
	void ErrorIsFatal();
	void ErrorIsPrintingError();
	void ErrorIsProblem();
	void FaxEndPage();
	void FixedToString();
	void FlushBuffer();
	void GetDoPatternFill();
	void GetDocTitle();
	void GetPageInfo();
	void GetStatus();
	void GetUserName();
	void HandleCharacters();
	void HandleError();
	void IsProblemResolved();
	void MakeTextPSFriendly();
	void OffsetFixedPoint();
	void Open();
	void OpenPage();
	void PositionPen();
	void ProblemIsFatal();
	void RepeatPage();
	void ResetLineWidth();
	void SendPSBinary();
	void SendPSHeader();
	void SendPSText();
	void SendPSTrailer();
	void SendRectangle();
	void SetClip();
	void SetGrayLevel();
	void SetLineWidth();
	void SetPortraitOrientation();
	void SetSoftError();
	void SetupFontMapping();
	void SetupLineStrings();
	void SetupPSBottlenecks();
	void SetupPSTextMode();
	void SetupPen();
	void Sizeof();
	void TearDownPSBottlenecks();
	void UnicodeToDestmap();

protected:
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	char fField20; // Offset: 20
	char fField21; // Offset: 21
	long fField36; // Offset: 36
	char fField37; // Offset: 37
	long fField40; // Offset: 40
	char fField54; // Offset: 54
	char fField83; // Offset: 83
	long fField97; // Offset: 97
	long fField152; // Offset: 152
	long fField156; // Offset: 156
	char fField160; // Offset: 160
	char fField161; // Offset: 161
	long fField164; // Offset: 164
	long fField168; // Offset: 168
	long fField172; // Offset: 172
	long fField196; // Offset: 196
	char fField197; // Offset: 197
	long fField198; // Offset: 198
	char fField199; // Offset: 199
	char fField200; // Offset: 200
	char fField201; // Offset: 201
	char fField202; // Offset: 202
	char fField203; // Offset: 203
	long fField204; // Offset: 204
	long fField224; // Offset: 224
	char fField225; // Offset: 225
	char fField226; // Offset: 226
	char fField227; // Offset: 227
	long fField228; // Offset: 228
	char fField232; // Offset: 232
	long fField488; // Offset: 488
	char fField492; // Offset: 492
	long fField613; // Offset: 613
	long fField622; // Offset: 622
	char fField848; // Offset: 848
	long fField882; // Offset: 882
	long fField1138; // Offset: 1138
	long fField1317; // Offset: 1317
	long fField1359; // Offset: 1359
	long fField1390; // Offset: 1390
	long fField1647; // Offset: 1647
};

#endif
