#include "include/TOptMgmtCompleteEvent.h"

/**
 * Symbol: TOptMgmtCompleteEvent::__ct(void)
 * Address: 000acfbc
 */
TOptMgmtCompleteEvent::TOptMgmtCompleteEvent(void) {
    /*
         acfbc:	e1a0c00d 	mov	ip, sp
         acfc0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         acfc4:	e24cb004 	sub	fp, ip, #4	; 0x4
         acfc8:	e1b04000 	movs	r4, r0
         acfcc:	1a000003 	bne	acfe0 <TOptMgmtCompleteEvent::__ct(void)+0x24>
         acfd0:	e3a00024 	mov	r0, #36	; 0x24
         acfd4:	eb6c85d7 	bl	1bce738 <$__nw(unsigned int)>
         acfd8:	e1b04000 	movs	r4, r0
         acfdc:	0a000003 	beq	acff0 <TOptMgmtCompleteEvent::__ct(void)+0x34>
         acfe0:	e1a00004 	mov	r0, r4
         acfe4:	eb6560ad 	bl	1a052a0 <TEndpointEvent::$__ct(void)>
         acfe8:	e3a00000 	mov	r0, #0	; 0x0
         acfec:	e5840020 	str	r0, [r4, #32]
         acff0:	e1a00004 	mov	r0, r4
         acff4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TOptMgmtCompleteEvent::__ct(long, unsigned long)
 * Address: 000acff8
 */
TOptMgmtCompleteEvent::TOptMgmtCompleteEvent(long, unsigned long) {
    /*
         acff8:	e1a0c00d 	mov	ip, sp
         acffc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ad000:	e24cb004 	sub	fp, ip, #4	; 0x4
         ad004:	e1b04000 	movs	r4, r0
         ad008:	e1a05001 	mov	r5, r1
         ad00c:	e1a06002 	mov	r6, r2
         ad010:	1a000003 	bne	ad024 <TOptMgmtCompleteEvent::__ct(long, unsigned long)+0x2c>
         ad014:	e3a00024 	mov	r0, #36	; 0x24
         ad018:	eb6c85c6 	bl	1bce738 <$__nw(unsigned int)>
         ad01c:	e1b04000 	movs	r4, r0
         ad020:	0a000006 	beq	ad040 <TOptMgmtCompleteEvent::__ct(long, unsigned long)+0x48>
         ad024:	e1a02006 	mov	r2, r6
         ad028:	e1a01005 	mov	r1, r5
         ad02c:	e1a00004 	mov	r0, r4
         ad030:	e3e03003 	mvn	r3, #3	; 0x3
         ad034:	eb656098 	bl	1a0529c <TEndpointEvent::$__ct(long, unsigned long, long)>
         ad038:	e3a00000 	mov	r0, #0	; 0x0
         ad03c:	e5840020 	str	r0, [r4, #32]
         ad040:	e1a00004 	mov	r0, r4
         ad044:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

