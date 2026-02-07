#ifndef __USERGLOBALS_H
#define __USERGLOBALS_H

#include "UserObjects.h"

class TUMonitor;
extern TUMonitor* gUObjectMgrMonitor;

extern "C" long MonitorDispatchSWI(TObjectId monitorId, long selector, void* userObject);

#endif
