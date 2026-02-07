#include "DDKIncludes/CommAPI/CMService.h"

/**
 * Symbol: TServiceInfo::SetPortId(unsigned long)
 * Address: 0006ca84
 */
void		TServiceInfo::SetPortId(TObjectId portId) {
    /*
         6ca84:	e3a02001 	mov	r2, #1	; 0x1
         6ca88:	e5c02000 	strb	r2, [r0]
         6ca8c:	e5a01004 	str	r1, [r0, #4]!	; TServiceInfo
         6ca90:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TServiceInfo::SetServiceId(unsigned long)
 * Address: 0006ca94
 */
void		TServiceInfo::SetServiceId(ULong serviceId) {
    /*
         6ca94:	e5a01008 	str	r1, [r0, #8]!	; fFlags
         6ca98:	e1a0f00e 	mov	pc, lr
    */
}

