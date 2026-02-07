#include "include/THermesIRControl.h"

/**
 * Symbol: THermesIRControl::__ct(void)
 * Address: 001d6708
 */
THermesIRControl::THermesIRControl(void) {
    /*
        1d6708:	e1a0c00d 	mov	ip, sp
        1d670c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d6710:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d6714:	e1b04000 	movs	r4, r0
        1d6718:	1a000003 	bne	1d672c <THermesIRControl::__ct(void)+0x24>
        1d671c:	e3a0005c 	mov	r0, #92	; 0x5c
        1d6720:	eb67e004 	bl	1bce738 <$__nw(unsigned int)>
        1d6724:	e1b04000 	movs	r4, r0
        1d6728:	0a000007 	beq	1d674c <THermesIRControl::__ct(void)+0x44>
        1d672c:	e1a00004 	mov	r0, r4
        1d6730:	eb000008 	bl	1d6758 <THermesIRControl::SetResetState(void)>
        1d6734:	e2840010 	add	r0, r4, #16	; 0x10
        1d6738:	e59f1014 	ldr	r1, [pc, #14]	; 1d6754 <THermesIRControl::__ct(void)+0x4c>
        1d673c:	e891500c 	ldmia	r1, {r2, r3, ip, lr}
        1d6740:	e880500c 	stmia	r0, {r2, r3, ip, lr}
        1d6744:	e3a00d96 	mov	r0, #9600	; 0x2580
        1d6748:	e5840024 	str	r0, [r4, #36]
        1d674c:	e1a00004 	mov	r0, r4
        1d6750:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1d6754:	003776ec 	eoreqs	r7, r7, ip, ror #13
    */
}

/**
 * Symbol: THermesIRControl::SetResetState(void)
 * Address: 001d6758
 */
THermesIRControl::SetResetState(void) {
    /*
        1d6758:	e59f201c 	ldr	r2, [pc, #1c]	; 1d677c <THermesIRControl::SetResetState(void)+0x24>
        1d675c:	e1a01000 	mov	r1, r0
        1d6760:	e8b21008 	ldmia	r2!, {r3, ip}
        1d6764:	e8a11008 	stmia	r1!, {r3, ip}
        1d6768:	e8921008 	ldmia	r2, {r3, ip}
        1d676c:	e8811008 	stmia	r1, {r3, ip}
        1d6770:	e3a01d96 	mov	r1, #9600	; 0x2580
        1d6774:	e5801020 	str	r1, [r0, #32]	; fField32
        1d6778:	ea000106 	b	1d6b98 <THermesIRControl::ResetIRCmdBuf(void)>
        1d677c:	003776dc 	ldreqsb	r7, [r7], -ip
    */
}

/**
 * Symbol: THermesIRControl::ResetIRCmdBuf(void)
 * Address: 001d6b98
 */
THermesIRControl::ResetIRCmdBuf(void) {
    /*
        1d6b98:	e3a01000 	mov	r1, #0	; 0x0
        1d6b9c:	e5c0102d 	strb	r1, [r0, #45]	; fField45
        1d6ba0:	e5801030 	str	r1, [r0, #48]	; fField48
        1d6ba4:	e5a01034 	str	r1, [r0, #52]!	; fField52
        1d6ba8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: THermesIRControl::GetCmdByteCount(void)
 * Address: 001d6f98
 */
THermesIRControl::GetCmdByteCount(void) {
    /*
        1d6f98:	e5901030 	ldr	r1, [r0, #48]	; fField48
        1d6f9c:	e5900034 	ldr	r0, [r0, #52]	; fField52
        1d6fa0:	e0410000 	sub	r0, r1, r0
        1d6fa4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: THermesIRControl::PutIRCmdByte(unsigned char, unsigned char)
 * Address: 001d7978
 */
THermesIRControl::PutIRCmdByte(unsigned char, unsigned char) {
    /*
        1d7978:	e20220ff 	and	r2, r2, #255	; 0xff
        1d797c:	e201100f 	and	r1, r1, #15	; 0xf
        1d7980:	e1813202 	orr	r3, r1, r2, lsl #4
        1d7984:	e5902030 	ldr	r2, [r0, #48]	; fField48
        1d7988:	e2821001 	add	r1, r2, #1	; 0x1
        1d798c:	e5801030 	str	r1, [r0, #48]	; fField48
        1d7990:	e0820000 	add	r0, r2, r0
        1d7994:	e5c0303c 	strb	r3, [r0, #60]	; fField60
        1d7998:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: THermesIRControl::GetIRCmdByte(unsigned char *)
 * Address: 001d7ef8
 */
THermesIRControl::GetIRCmdByte(unsigned char *) {
    /*
        1d7ef8:	e5902034 	ldr	r2, [r0, #52]	; fField52
        1d7efc:	e5903030 	ldr	r3, [r0, #48]	; fField48
        1d7f00:	e1320003 	teq	r2, r3
        1d7f04:	03a00000 	moveq	r0, #0	; 0x0
        1d7f08:	01a0f00e 	moveq	pc, lr
        1d7f0c:	e2823001 	add	r3, r2, #1	; 0x1
        1d7f10:	e5803034 	str	r3, [r0, #52]	; fField52
        1d7f14:	e0820000 	add	r0, r2, r0
        1d7f18:	e5d0003c 	ldrb	r0, [r0, #60]	; fField60
        1d7f1c:	e5c10000 	strb	r0, [r1]
        1d7f20:	e3a00001 	mov	r0, #1	; 0x1
        1d7f24:	e1a0f00e 	mov	pc, lr
    */
}

