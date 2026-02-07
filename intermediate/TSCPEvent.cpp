#include "include/TSCPEvent.h"

/**
 * Symbol: TSCPEvent::__ct(void)
 * Address: 0030bc00
 */
TSCPEvent::TSCPEvent(void) {
    /*
        30bc00:	e1a0c00d 	mov	ip, sp
        30bc04:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        30bc08:	e24cb004 	sub	fp, ip, #4	; 0x4
        30bc0c:	e1b04000 	movs	r4, r0
        30bc10:	1a000003 	bne	30bc24 <TSCPEvent::__ct(void)+0x24>
        30bc14:	e3a00014 	mov	r0, #20	; 0x14
        30bc18:	eb630ac6 	bl	1bce738 <$__nw(unsigned int)>
        30bc1c:	e1b04000 	movs	r4, r0
        30bc20:	0a00000a 	beq	30bc50 <TSCPEvent::__ct(void)+0x50>
        30bc24:	e1a00004 	mov	r0, r4
        30bc28:	eb636182 	bl	1be4238 <TAEvent::$__ct(void)>
        30bc2c:	e59f0024 	ldr	r0, [pc, #24]	; 30bc58 <TSCPEvent::__ct(void)+0x58>
        30bc30:	e5840000 	str	r0, [r4]
        30bc34:	e59f0020 	ldr	r0, [pc, #20]	; 30bc5c <TSCPEvent::__ct(void)+0x5c>
        30bc38:	e5840004 	str	r0, [r4, #4]
        30bc3c:	e59f001c 	ldr	r0, [pc, #1c]	; 30bc60 <TSCPEvent::__ct(void)+0x60>
        30bc40:	e5840008 	str	r0, [r4, #8]
        30bc44:	e3a00000 	mov	r0, #0	; 0x0
        30bc48:	e584000c 	str	r0, [r4, #12]
        30bc4c:	e5840010 	str	r0, [r4, #16]
        30bc50:	e1a00004 	mov	r0, r4
        30bc54:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        30bc58:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        30bc5c:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
        30bc60:	73637021 	cmnvc	r3, #33	; 0x21
    */
}

/**
 * Symbol: TSCPEvent::__ct(unsigned long, unsigned long)
 * Address: 0030bc64
 */
TSCPEvent::TSCPEvent(unsigned long, unsigned long) {
    /*
        30bc64:	e1a0c00d 	mov	ip, sp
        30bc68:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        30bc6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        30bc70:	e1b04000 	movs	r4, r0
        30bc74:	e1a06001 	mov	r6, r1
        30bc78:	e1a05002 	mov	r5, r2
        30bc7c:	1a000003 	bne	30bc90 <TSCPEvent::__ct(unsigned long, unsigned long)+0x2c>
        30bc80:	e3a00014 	mov	r0, #20	; 0x14
        30bc84:	eb630aab 	bl	1bce738 <$__nw(unsigned int)>
        30bc88:	e1b04000 	movs	r4, r0
        30bc8c:	0a00000a 	beq	30bcbc <TSCPEvent::__ct(unsigned long, unsigned long)+0x58>
        30bc90:	e1a00004 	mov	r0, r4
        30bc94:	eb636167 	bl	1be4238 <TAEvent::$__ct(void)>
        30bc98:	e59f0024 	ldr	r0, [pc, #24]	; 30bcc4 <TSCPEvent::__ct(unsigned long, unsigned long)+0x60>
        30bc9c:	e5840000 	str	r0, [r4]
        30bca0:	e59f0020 	ldr	r0, [pc, #20]	; 30bcc8 <TSCPEvent::__ct(unsigned long, unsigned long)+0x64>
        30bca4:	e5840004 	str	r0, [r4, #4]
        30bca8:	e59f001c 	ldr	r0, [pc, #1c]	; 30bccc <TSCPEvent::__ct(unsigned long, unsigned long)+0x68>
        30bcac:	e2844008 	add	r4, r4, #8	; 0x8
        30bcb0:	e8840041 	stmia	r4, {r0, r6}
        30bcb4:	e5845008 	str	r5, [r4, #8]
        30bcb8:	e2444008 	sub	r4, r4, #8	; 0x8
        30bcbc:	e1a00004 	mov	r0, r4
        30bcc0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        30bcc4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        30bcc8:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
        30bccc:	73637021 	cmnvc	r3, #33	; 0x21
    */
}

