#include "include/TLinkPacketBuffer.h"

/**
 * Symbol: TLinkPacketBuffer::UnLock(void)
 * Address: 000fdbd0
 */
TLinkPacketBuffer::UnLock(void) {
    /*
         fdbd0:	e1a0c00d 	mov	ip, sp
         fdbd4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fdbd8:	e24cb004 	sub	fp, ip, #4	; 0x4
         fdbdc:	e1a04000 	mov	r4, r0
         fdbe0:	eb66091c 	bl	1a80058 <TPacketBuffer::$UnLock(void)>
         fdbe4:	e5b40044 	ldr	r0, [r4, #68]!	; fField68
         fdbe8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         fdbec:	ea6619a2 	b	1a8427c <TLink::$PostRead(void)>
    */
}

