#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolGetEventReply::__ct(void)
 * Address: 0006e118
 */
TCommToolGetEventReply::TCommToolGetEventReply() {
    /*
         6e118:	e1a0c00d 	mov	ip, sp
         6e11c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6e120:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e124:	e1b04000 	movs	r4, r0
         6e128:	1a000003 	bne	6e13c <TCommToolGetEventReply::__ct(void)+0x24>
         6e12c:	e3a00024 	mov	r0, #36	; 0x24
         6e130:	eb6d8180 	bl	1bce738 <$__nw(unsigned int)>
         6e134:	e1b04000 	movs	r4, r0
         6e138:	0a00000d 	beq	6e174 <TCommToolGetEventReply::__ct(void)+0x5c>
         6e13c:	e1a00004 	mov	r0, r4
         6e140:	eb6e059b 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         6e144:	e24dd008 	sub	sp, sp, #8	; 0x8
         6e148:	e3a00000 	mov	r0, #0	; 0x0
         6e14c:	e5840010 	str	r0, [r4, #16]	; fEventTime
         6e150:	e58d0004 	str	r0, [sp, #4]
         6e154:	e2842014 	add	r2, r4, #20	; 0x14
         6e158:	e58d0000 	str	r0, [sp]
         6e15c:	e89d5000 	ldmia	sp, {ip, lr}
         6e160:	e8825000 	stmia	r2, {ip, lr}
         6e164:	e584001c 	str	r0, [r4, #28]
         6e168:	e3a00024 	mov	r0, #36	; 0x24
         6e16c:	e584000c 	str	r0, [r4, #12]	; fEventCode
         6e170:	e28dd008 	add	sp, sp, #8	; 0x8
         6e174:	e1a00004 	mov	r0, r4
         6e178:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

