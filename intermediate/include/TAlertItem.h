#ifndef __INFERRED_TALERTITEM_H
#define __INFERRED_TALERTITEM_H

class TAlertItem {
public:
	void DrawButton();
	void DrawText();
	TAlertItem();

protected:
	char fField1; // Offset: 1
	long fField2; // Offset: 2
	char fField3; // Offset: 3
	long fField4; // Offset: 4
	char fField5; // Offset: 5
	long fField6; // Offset: 6
	char fField7; // Offset: 7
	long fField8; // Offset: 8
};

#endif
