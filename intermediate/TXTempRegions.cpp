#include "include/TXTempRegions.h"

/**
 * Symbol: TXTempRegions::CreateNewReference(void)
 * Address: 0023422c
 */
TXTempRegions::CreateNewReference(void) {
    /*
        23422c:	ea6475a5 	b	1b518c8 <$NewRgn(void)>
    */
}

/**
 * Symbol: TXTempRegions::FreeReference(void *)
 * Address: 00234230
 */
TXTempRegions::FreeReference(void *) {
    /*
        234230:	e1a00001 	mov	r0, r1
        234234:	ea646529 	b	1b4d6e0 <$DisposeRgn(Region **)>
    */
}

