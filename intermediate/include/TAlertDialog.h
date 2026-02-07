#ifndef __INFERRED_TALERTDIALOG_H
#define __INFERRED_TALERTDIALOG_H

class TAlertDialog {
public:
	void Alert();
	void CheckAlertDone();
	void CheckButton();
	void DisplayAlert();
	void DrawAlert();
	void RemoveAlert();
	void SetFilterData();
	void SetFilterProc();
	TAlertDialog();

protected:
	long fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField6; // Offset: 6
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	char fField13; // Offset: 13
	char fField14; // Offset: 14
	char fField15; // Offset: 15
	long fField16; // Offset: 16
	char fField17; // Offset: 17
	char fField18; // Offset: 18
	char fField19; // Offset: 19
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
};

#endif
