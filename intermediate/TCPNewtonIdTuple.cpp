#include "include/TCPNewtonIdTuple.h"

/**
 * Symbol: TCPNewtonIdTuple::__ct(void)
 * Address: 00049958
 */
TCPNewtonIdTuple::TCPNewtonIdTuple(void) {
    /*
         49958:	e1a0c00d 	mov	ip, sp
         4995c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         49960:	e24cb004 	sub	fp, ip, #4	; 0x4
         49964:	e3300000 	teq	r0, #0	; 0x0
         49968:	1a000003 	bne	4997c <TCPNewtonIdTuple::__ct(void)+0x24>
         4996c:	e3a00014 	mov	r0, #20	; 0x14
         49970:	eb6e1370 	bl	1bce738 <$__nw(unsigned int)>
         49974:	e3300000 	teq	r0, #0	; 0x0
         49978:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         4997c:	e59f101c 	ldr	r1, [pc, #1c]	; 499a0 <TCPNewtonIdTuple::__ct(void)+0x48>
         49980:	e5801000 	str	r1, [r0]
         49984:	e3a0100c 	mov	r1, #12	; 0xc
         49988:	e5801004 	str	r1, [r0, #4]	; fField4
         4998c:	e3a01000 	mov	r1, #0	; 0x0
         49990:	e5801008 	str	r1, [r0, #8]	; fField8
         49994:	e580100c 	str	r1, [r0, #12]	; fField12
         49998:	e5801010 	str	r1, [r0, #16]	; fField16
         4999c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         499a0:	6e5f6964 	cdpvs	9, 5, cr6, cr15, cr4, {3}
    */
}

/**
 * Symbol: TCPNewtonIdTuple::Init(void)
 * Address: 00049b14
 */
TCPNewtonIdTuple::Init(void) {
    /*
         49b14:	e1a0c00d 	mov	ip, sp
         49b18:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         49b1c:	e24cb004 	sub	fp, ip, #4	; 0x4
         49b20:	e1a04000 	mov	r4, r0
         49b24:	e24dd044 	sub	sp, sp, #68	; 0x44
         49b28:	e1a0000d 	mov	r0, sp
         49b2c:	eb6e0ee9 	bl	1bcd6d8 <TUGestalt::$__ct(void)>
         49b30:	e28d2008 	add	r2, sp, #8	; 0x8
         49b34:	e1a0000d 	mov	r0, sp
         49b38:	e3a0303c 	mov	r3, #60	; 0x3c
         49b3c:	e3a01401 	mov	r1, #16777216	; 0x1000000
         49b40:	e2811003 	add	r1, r1, #3	; 0x3
         49b44:	eb6e2388 	bl	1bd296c <TUGestalt::$Gestalt(unsigned long, void *, unsigned long)>
         49b48:	e3300000 	teq	r0, #0	; 0x0
         49b4c:	1a000005 	bne	49b68 <TCPNewtonIdTuple::Init(void)+0x54>
         49b50:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         49b54:	e584100c 	str	r1, [r4, #12]	; fField12
         49b58:	e59d100c 	ldr	r1, [sp, #12]	; fField12
         49b5c:	e5841008 	str	r1, [r4, #8]	; fField8
         49b60:	e59d1010 	ldr	r1, [sp, #16]	; fField16
         49b64:	e5a41010 	str	r1, [r4, #16]!	; fField16
         49b68:	e1a04000 	mov	r4, r0
         49b6c:	e1a0000d 	mov	r0, sp
         49b70:	e3a01000 	mov	r1, #0	; 0x0
         49b74:	eb6e12ea 	bl	1bce724 <TUObject::$__dt(void)>
         49b78:	e1a00004 	mov	r0, r4
         49b7c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

