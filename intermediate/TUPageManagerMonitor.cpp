#include "include/TUPageManagerMonitor.h"

/**
 * Symbol: ReleaseRequest__20TUPageManagerMonitorSFUli
 * Address: 00162c14
 */
void TUPageManagerMonitor::ReleaseRequest() {
    /*
        162c14:	e1a0c00d 	mov	ip, sp
        162c18:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        162c1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        162c20:	e1a05000 	mov	r5, r0
        162c24:	e1a04001 	mov	r4, r1
        162c28:	e24dd008 	sub	sp, sp, #8	; 0x8
        162c2c:	e1a0000d 	mov	r0, sp
        162c30:	e3a01000 	mov	r1, #0	; 0x0
        162c34:	eb69aaa8 	bl	1bcd6dc <TUMonitor::$__ct(unsigned long)>
        162c38:	e1a01005 	mov	r1, r5
        162c3c:	e1a0000d 	mov	r0, sp
        162c40:	eb69b702 	bl	1bd0850 <TUMonitor::$CopyObject(unsigned long)>
        162c44:	e1a02004 	mov	r2, r4
        162c48:	e3e01102 	mvn	r1, #-2147483648	; 0x80000000
        162c4c:	e59d0000 	ldr	r0, [sp]
        162c50:	eb092db2 	bl	3ae320 <MonitorDispatchSWI>
        162c54:	e1a04000 	mov	r4, r0
        162c58:	e1a0000d 	mov	r0, sp
        162c5c:	e3a01000 	mov	r1, #0	; 0x0
        162c60:	eb69aeb2 	bl	1bce730 <TUMonitor::$__dt(void)>
        162c64:	e1a00004 	mov	r0, r4
        162c68:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

