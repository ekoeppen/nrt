#include "include/TCommToolControlPB.h"

/**
 * Symbol: TCommToolControlPB::__ct(unsigned long, long, unsigned long, unsigned char)
 * Address: 001dcec4
 */
TCommToolControlPB::TCommToolControlPB(unsigned long, long, unsigned long, unsigned char) {
    /*
        1dcec4:	e1a0c00d 	mov	ip, sp
        1dcec8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1dcecc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dced0:	e1b04000 	movs	r4, r0
        1dced4:	e1a07001 	mov	r7, r1
        1dced8:	e1a06002 	mov	r6, r2
        1dcedc:	e1a05003 	mov	r5, r3
        1dcee0:	e59b0004 	ldr	r0, [fp, #4]
        1dcee4:	e20080ff 	and	r8, r0, #255	; 0xff
        1dcee8:	1a000003 	bne	1dcefc <TCommToolControlPB::__ct(unsigned long, long, unsigned long, unsigned char)+0x38>
        1dceec:	e3a00058 	mov	r0, #88	; 0x58
        1dcef0:	eb67c610 	bl	1bce738 <$__nw(unsigned int)>
        1dcef4:	e1b04000 	movs	r4, r0
        1dcef8:	0a00000c 	beq	1dcf30 <TCommToolControlPB::__ct(unsigned long, long, unsigned long, unsigned char)+0x6c>
        1dcefc:	e1a03008 	mov	r3, r8
        1dcf00:	e1a02005 	mov	r2, r5
        1dcf04:	e1a00004 	mov	r0, r4
        1dcf08:	e3a01004 	mov	r1, #4	; 0x4
        1dcf0c:	eb6141db 	bl	1a2d680 <TCommToolPB::$__ct(unsigned long, unsigned long, unsigned char)>
        1dcf10:	e284001c 	add	r0, r4, #28	; 0x1c
        1dcf14:	eb684a2d 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
        1dcf18:	e2840028 	add	r0, r4, #40	; 0x28
        1dcf1c:	eb684a24 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
        1dcf20:	e2840038 	add	r0, r4, #56	; 0x38
        1dcf24:	eb60a0dd 	bl	1a052a0 <TEndpointEvent::$__ct(void)>
        1dcf28:	e5846048 	str	r6, [r4, #72]
        1dcf2c:	e5847024 	str	r7, [r4, #36]
        1dcf30:	e1a00004 	mov	r0, r4
        1dcf34:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

