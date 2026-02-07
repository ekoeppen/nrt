#ifndef __INFERRED_TRECOGNITIONMANAGER_H
#define __INFERRED_TRECOGNITIONMANAGER_H

class TRecognitionManager {
public:
	void DisableModalRecognition();
	void EnableModalRecognition();
	void Idle();
	void IgnoreClicks();
	void Init();
	void InitRecognizers();
	void ModalRecognitionOK();
	void NextIdle();
	void RemoveClickView();
	void RestoreRecognitionState();
	void SaveClickView();
	void SaveRecognitionState();
	void SetNextClick();
	void Update();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	char fField28; // Offset: 28
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	char fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField80; // Offset: 80
	char fField3949; // Offset: 3949
};

#endif
