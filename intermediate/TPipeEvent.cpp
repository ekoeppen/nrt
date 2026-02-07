#include "include/TPipeEvent.h"

/**
 * Symbol: TPipeEvent::__ct(unsigned long, long, long)
 * Address: 00182d60
 */
TPipeEvent::TPipeEvent(unsigned long, long, long) {
    /*
        182d60:	e1a0c00d 	mov	ip, sp
        182d64:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        182d68:	e24cb004 	sub	fp, ip, #4	; 0x4
        182d6c:	e1b04000 	movs	r4, r0
        182d70:	e1a07001 	mov	r7, r1
        182d74:	e1a06002 	mov	r6, r2
        182d78:	e1a05003 	mov	r5, r3
        182d7c:	1a000003 	bne	182d90 <TPipeEvent::__ct(unsigned long, long, long)+0x30>
        182d80:	e3a00014 	mov	r0, #20	; 0x14
        182d84:	eb692e6b 	bl	1bce738 <$__nw(unsigned int)>
        182d88:	e1b04000 	movs	r4, r0
        182d8c:	0a000005 	beq	182da8 <TPipeEvent::__ct(unsigned long, long, long)+0x48>
        182d90:	e1a00004 	mov	r0, r4
        182d94:	eb698527 	bl	1be4238 <TAEvent::$__ct(void)>
        182d98:	e59f0010 	ldr	r0, [pc, #10]	; 182db0 <TPipeEvent::__ct(unsigned long, long, long)+0x50>
        182d9c:	e9840081 	stmib	r4, {r0, r7}
        182da0:	e5845010 	str	r5, [r4, #16]
        182da4:	e584600c 	str	r6, [r4, #12]
        182da8:	e1a00004 	mov	r0, r4
        182dac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        182db0:	70636b6d 	rsbvc	r6, r3, sp, ror #22
    */
}

/**
 * Symbol: TPipeEvent::__ct(void)
 * Address: 00182db4
 */
TPipeEvent::TPipeEvent(void) {
    /*
        182db4:	e1a0c00d 	mov	ip, sp
        182db8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        182dbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        182dc0:	e1b04000 	movs	r4, r0
        182dc4:	1a000003 	bne	182dd8 <TPipeEvent::__ct(void)+0x24>
        182dc8:	e3a00014 	mov	r0, #20	; 0x14
        182dcc:	eb692e59 	bl	1bce738 <$__nw(unsigned int)>
        182dd0:	e1b04000 	movs	r4, r0
        182dd4:	0a000007 	beq	182df8 <TPipeEvent::__ct(void)+0x44>
        182dd8:	e1a00004 	mov	r0, r4
        182ddc:	eb698515 	bl	1be4238 <TAEvent::$__ct(void)>
        182de0:	e59f0018 	ldr	r0, [pc, #18]	; 182e00 <TPipeEvent::__ct(void)+0x4c>
        182de4:	e5840004 	str	r0, [r4, #4]
        182de8:	e3a00000 	mov	r0, #0	; 0x0
        182dec:	e5840008 	str	r0, [r4, #8]
        182df0:	e584000c 	str	r0, [r4, #12]
        182df4:	e5840010 	str	r0, [r4, #16]
        182df8:	e1a00004 	mov	r0, r4
        182dfc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        182e00:	70636b6d 	rsbvc	r6, r3, sp, ror #22
    */
}

