#ifndef __INFERRED_TZIPINTERFACE_H
#define __INFERRED_TZIPINTERFACE_H

class TZIPInterface {
public:
	void Cancel();
	void Close();
	void FilterNonUserZone();
	void GetLocalZoneList();
	void GetRouterAddress();
	void GetZoneList();
	void HaveZones();
	TZIPInterface();
	void ZoneList();
	~TZIPInterface();

protected:
	char fField4; // Offset: 4
};

#endif
