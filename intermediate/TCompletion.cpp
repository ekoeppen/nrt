#include "include/TCompletion.h"

/**
 * Symbol: TCompletion::__ct(void)
 * Address: 00070f74
 */
TCompletion::TCompletion(void) {
    /*
         70f74:	e1a0c00d 	mov	ip, sp
         70f78:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         70f7c:	e24cb004 	sub	fp, ip, #4	; 0x4
         70f80:	e3300000 	teq	r0, #0	; 0x0
         70f84:	1a000003 	bne	70f98 <TCompletion::__ct(void)+0x24>
         70f88:	e3a0001c 	mov	r0, #28	; 0x1c
         70f8c:	eb6d75e9 	bl	1bce738 <$__nw(unsigned int)>
         70f90:	e3300000 	teq	r0, #0	; 0x0
         70f94:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         70f98:	e3a01000 	mov	r1, #0	; 0x0
         70f9c:	e580100c 	str	r1, [r0, #12]	; fField12
         70fa0:	e5801018 	str	r1, [r0, #24]	; fField24
         70fa4:	e5801010 	str	r1, [r0, #16]	; fField16
         70fa8:	e5801014 	str	r1, [r0, #20]	; fField20
         70fac:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCompletion::__ct(TUMsgToken *)
 * Address: 00070fb0
 */
TCompletion::TCompletion(TUMsgToken *) {
    /*
         70fb0:	e1a0c00d 	mov	ip, sp
         70fb4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         70fb8:	e24cb004 	sub	fp, ip, #4	; 0x4
         70fbc:	e1a04001 	mov	r4, r1
         70fc0:	e3300000 	teq	r0, #0	; 0x0
         70fc4:	1a000003 	bne	70fd8 <TCompletion::__ct(TUMsgToken *)+0x28>
         70fc8:	e3a0001c 	mov	r0, #28	; 0x1c
         70fcc:	eb6d75d9 	bl	1bce738 <$__nw(unsigned int)>
         70fd0:	e3300000 	teq	r0, #0	; 0x0
         70fd4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         70fd8:	e3a01000 	mov	r1, #0	; 0x0
         70fdc:	e580100c 	str	r1, [r0, #12]	; fField12
         70fe0:	e5801018 	str	r1, [r0, #24]	; fField24
         70fe4:	e5801010 	str	r1, [r0, #16]	; fField16
         70fe8:	e5801014 	str	r1, [r0, #20]	; fField20
         70fec:	e3a01001 	mov	r1, #1	; 0x1
         70ff0:	e5c01000 	strb	r1, [r0]
         70ff4:	e280100c 	add	r1, r0, #12	; 0xc
         70ff8:	e894500c 	ldmia	r4, {r2, r3, ip, lr}
         70ffc:	e881500c 	stmia	r1, {r2, r3, ip, lr}
         71000:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCompletion::__ct(TCompletionClass *, unsigned long)
 * Address: 00071004
 */
TCompletion::TCompletion(TCompletionClass *, unsigned long) {
    /*
         71004:	e1a0c00d 	mov	ip, sp
         71008:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7100c:	e24cb004 	sub	fp, ip, #4	; 0x4
         71010:	e1a05001 	mov	r5, r1
         71014:	e1a04002 	mov	r4, r2
         71018:	e3300000 	teq	r0, #0	; 0x0
         7101c:	1a000003 	bne	71030 <TCompletion::__ct(TCompletionClass *, unsigned long)+0x2c>
         71020:	e3a0001c 	mov	r0, #28	; 0x1c
         71024:	eb6d75c3 	bl	1bce738 <$__nw(unsigned int)>
         71028:	e3300000 	teq	r0, #0	; 0x0
         7102c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         71030:	e3a01000 	mov	r1, #0	; 0x0
         71034:	e580100c 	str	r1, [r0, #12]	; fField12
         71038:	e5801018 	str	r1, [r0, #24]	; fField24
         7103c:	e5801010 	str	r1, [r0, #16]	; fField16
         71040:	e5801014 	str	r1, [r0, #20]	; fField20
         71044:	e5c01000 	strb	r1, [r0]
         71048:	e5804008 	str	r4, [r0, #8]	; fField8
         7104c:	e5805004 	str	r5, [r0, #4]	; fField4
         71050:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCompletion::Complete(TAppleTalkMessage *, unsigned long)
 * Address: 00071054
 */
TCompletion::Complete(TAppleTalkMessage *, unsigned long) {
    /*
         71054:	e1a0c00d 	mov	ip, sp
         71058:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         7105c:	e24cb004 	sub	fp, ip, #4	; 0x4
         71060:	e280000c 	add	r0, r0, #12	; 0xc
         71064:	e3a03000 	mov	r3, #0	; 0x0
         71068:	eb6da31f 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
         7106c:	e280cc27 	add	ip, r0, #9984	; 0x2700
         71070:	e37c0031 	cmn	ip, #49	; 0x31
         71074:	03a00000 	moveq	r0, #0	; 0x0
         71078:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCompletion::Complete(long)
 * Address: 0007107c
 */
TCompletion::Complete(long) {
    /*
         7107c:	e1a0c00d 	mov	ip, sp
         71080:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         71084:	e24cb004 	sub	fp, ip, #4	; 0x4
         71088:	e1a04000 	mov	r4, r0
         7108c:	e1a05001 	mov	r5, r1
         71090:	e3a06000 	mov	r6, #0	; 0x0
         71094:	e5d00000 	ldrb	r0, [r0]
         71098:	e3300000 	teq	r0, #0	; 0x0
         7109c:	0a00000f 	beq	710e0 <TCompletion::Complete(long)+0x64>
         710a0:	e24dd014 	sub	sp, sp, #20	; 0x14
         710a4:	e1a0000d 	mov	r0, sp
         710a8:	eb6dcc62 	bl	1be4238 <TAEvent::$__ct(void)>
         710ac:	e59f0028 	ldr	r0, [pc, #28]	; 710dc <TCompletion::Complete(long)+0x60>
         710b0:	e58d0000 	str	r0, [sp]
         710b4:	e3a00000 	mov	r0, #0	; 0x0
         710b8:	e58d000c 	str	r0, [sp, #12]	; fField12
         710bc:	e58d5008 	str	r5, [sp, #8]	; fField8
         710c0:	e1a0100d 	mov	r1, sp
         710c4:	e1a00004 	mov	r0, r4
         710c8:	e3a02014 	mov	r2, #20	; 0x14
         710cc:	eb681ac1 	bl	1a77bd8 <TCompletion::$Complete(TAppleTalkMessage *, unsigned long)>
         710d0:	e1a06000 	mov	r6, r0
         710d4:	e28dd014 	add	sp, sp, #20	; 0x14
         710d8:	ea000006 	b	710f8 <TCompletion::Complete(long)+0x7c>
         710dc:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         710e0:	e1a01006 	mov	r1, r6
         710e4:	e5b43004 	ldr	r3, [r4, #4]!	; fField4
         710e8:	e5942004 	ldr	r2, [r4, #4]	; fField4
         710ec:	e1a00003 	mov	r0, r3
         710f0:	e1a0e00f 	mov	lr, pc
         710f4:	e593f000 	ldr	pc, [r3]
         710f8:	e1a00006 	mov	r0, r6
         710fc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

