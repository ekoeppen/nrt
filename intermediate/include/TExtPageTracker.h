#ifndef __INFERRED_TEXTPAGETRACKER_H
#define __INFERRED_TEXTPAGETRACKER_H

class TExtPageTracker {
public:
	void DoDeferral();
	void Init();
	void Put();
	void RemoveReferences();
	void Take();

protected:
	char fField1; // Offset: 1
	long fField4; // Offset: 4
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
};

#endif
