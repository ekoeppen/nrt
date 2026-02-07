#ifndef __INFERRED_TEXTPAGETRACKERMGR_H
#define __INFERRED_TEXTPAGETRACKERMGR_H

class TExtPageTrackerMgr {
public:
	void DisposeTracker();
	void DoDeferral();
	void MakeNewTracker();
	void Put();
	void Take();
	void UnHookTracker();

protected:
};

#endif
