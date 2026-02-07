#ifndef __INFERRED_TCONTROLLER_H
#define __INFERRED_TCONTROLLER_H

class TController {
public:
	void BuildGTypes();
	void CheckBusy();
	void ClassifyInArea();
	void CleanGroupQ();
	void CleanUp();
	void CleanUpUnits();
	void CleanupAfterError();
	void ClearArbiter();
	void ClearController();
	void ControllerError();
	void DeletePiece();
	void DeleteUnit();
	void Dispose();
	void DoArbitration();
	void DoClassify();
	void DoGroup();
	void ExpireAllStrokes();
	void GetClickInProgress();
	void GetDelayList();
	void GetIndexedStroke();
	void GetTypedDomain();
	void GetUList();
	void IController();
	void Idle();
	void Initialize();
	void IsExternallyArbitrated();
	void IsLastCompleteStroke();
	void Make();
	void MarkUnits();
	void NewClassification();
	void NewGroup();
	void NextIdleTime();
	void NoEventsWithinDelay();
	void RecognizeInArea();
	void RegisterArbiter();
	void RegisterDomain();
	void RegroupSub();
	void RegroupUnclaimedSubs();
	void SetExpireStrokeRoutine();
	void SetHitTestRoutine();
	void SignalMemoryError();
	void TimeOut();
	void TriggerRecognition();
	void UpdateInk();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	char fField29; // Offset: 29
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	char fField38; // Offset: 38
	char fField39; // Offset: 39
	long fField40; // Offset: 40
	long fField42; // Offset: 42
	long fField44; // Offset: 44
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	char fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	long fField88; // Offset: 88
	long fField92; // Offset: 92
};

#endif
