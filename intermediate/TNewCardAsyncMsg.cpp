#include "include/TNewCardAsyncMsg.h"

/**
 * Symbol: TNewCardAsyncMsg::__ct(void)
 * Address: 0004b224
 */
TNewCardAsyncMsg::TNewCardAsyncMsg(void) {
    /*
         4b224:	e1a0c00d 	mov	ip, sp
         4b228:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         4b22c:	e24cb004 	sub	fp, ip, #4	; 0x4
         4b230:	e1b04000 	movs	r4, r0
         4b234:	1a000003 	bne	4b248 <TNewCardAsyncMsg::__ct(void)+0x24>
         4b238:	e3a000f0 	mov	r0, #240	; 0xf0
         4b23c:	eb6e0d3d 	bl	1bce738 <$__nw(unsigned int)>
         4b240:	e1b04000 	movs	r4, r0
         4b244:	0a00000c 	beq	4b27c <TNewCardAsyncMsg::__ct(void)+0x58>
         4b248:	e1a00004 	mov	r0, r4
         4b24c:	eb6e0508 	bl	1bcc674 <TCardMessage::$__ct(void)>
         4b250:	e28400b8 	add	r0, r4, #184	; 0xb8
         4b254:	eb6e0914 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         4b258:	e28450c8 	add	r5, r4, #200	; 0xc8
         4b25c:	e3a06000 	mov	r6, #0	; 0x0
         4b260:	e1a01006 	mov	r1, r6
         4b264:	e1a00005 	mov	r0, r5
         4b268:	eb6e0905 	bl	1bcd684 <TSystemEvent::$__ct(unsigned long)>
         4b26c:	e5c56010 	strb	r6, [r5, #16]
         4b270:	e585600c 	str	r6, [r5, #12]
         4b274:	e2850014 	add	r0, r5, #20	; 0x14
         4b278:	eb6b2a0d 	bl	1b15ab4 <TSysEventRequest::$__ct(void)>
         4b27c:	e1a00004 	mov	r0, r4
         4b280:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNewCardAsyncMsg::Init(void)
 * Address: 0004b284
 */
TNewCardAsyncMsg::Init(void) {
    /*
         4b284:	e1a0c00d 	mov	ip, sp
         4b288:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4b28c:	e24cb004 	sub	fp, ip, #4	; 0x4
         4b290:	e1a04000 	mov	r4, r0
         4b294:	eb6bae29 	bl	1b36b40 <TNewCardAsyncMsg::$Clear(void)>
         4b298:	e28400c8 	add	r0, r4, #200	; 0xc8
         4b29c:	e1a05000 	mov	r5, r0
         4b2a0:	eb6e2a00 	bl	1bd5aa8 <TSendSystemEvent::$Init(void)>
         4b2a4:	e3300000 	teq	r0, #0	; 0x0
         4b2a8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         4b2ac:	e28400b8 	add	r0, r4, #184	; 0xb8
         4b2b0:	e3a01001 	mov	r1, #1	; 0x1
         4b2b4:	eb6e29f6 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         4b2b8:	e3300000 	teq	r0, #0	; 0x0
         4b2bc:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         4b2c0:	e1a00005 	mov	r0, r5
         4b2c4:	e59f1008 	ldr	r1, [pc, #8]	; 4b2d4 <TNewCardAsyncMsg::Init(void)+0x50>
         4b2c8:	eb6e42ba 	bl	1bdbdb8 <TSystemEvent::$SetEvent(unsigned long)>
         4b2cc:	e3a00000 	mov	r0, #0	; 0x0
         4b2d0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         4b2d4:	63617264 	cmnvs	r1, #1073741830	; 0x40000006
    */
}

/**
 * Symbol: TNewCardAsyncMsg::Clear(void)
 * Address: 0004b2d8
 */
TNewCardAsyncMsg::Clear(void) {
    /*
         4b2d8:	ea6e154b 	b	1bd080c <TCardMessage::$Clear(void)>
    */
}

/**
 * Symbol: TNewCardAsyncMsg::SendSystemEvent(void)
 * Address: 0004b2dc
 */
TNewCardAsyncMsg::SendSystemEvent(void) {
    /*
         4b2dc:	e1a0c00d 	mov	ip, sp
         4b2e0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         4b2e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         4b2e8:	e3a030b8 	mov	r3, #184	; 0xb8
         4b2ec:	e1a02000 	mov	r2, r0
         4b2f0:	e92d000c 	stmdb	sp!, {r2, r3}
         4b2f4:	e0801003 	add	r1, r0, r3
         4b2f8:	e280c0c8 	add	ip, r0, #200	; 0xc8
         4b2fc:	e1a02000 	mov	r2, r0
         4b300:	e1a0000c 	mov	r0, ip
         4b304:	eb6e3e91 	bl	1bdad50 <TSendSystemEvent::$SendSystemEvent(TUAsyncMessage *, void *, unsigned long, void *, unsigned long)>
         4b308:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

