#include "include/TCommToolOptMgmtPB.h"

/**
 * Symbol: TCommToolOptMgmtPB::__ct(unsigned long, unsigned char)
 * Address: 001d9b38
 */
TCommToolOptMgmtPB::TCommToolOptMgmtPB(unsigned long, unsigned char) {
    /*
        1d9b38:	e1a0c00d 	mov	ip, sp
        1d9b3c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1d9b40:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d9b44:	e1b04000 	movs	r4, r0
        1d9b48:	e1a05001 	mov	r5, r1
        1d9b4c:	e20260ff 	and	r6, r2, #255	; 0xff
        1d9b50:	1a000003 	bne	1d9b64 <TCommToolOptMgmtPB::__ct(unsigned long, unsigned char)+0x2c>
        1d9b54:	e3a0006c 	mov	r0, #108	; 0x6c
        1d9b58:	eb67d2f6 	bl	1bce738 <$__nw(unsigned int)>
        1d9b5c:	e1b04000 	movs	r4, r0
        1d9b60:	0a00000e 	beq	1d9ba0 <TCommToolOptMgmtPB::__ct(unsigned long, unsigned char)+0x68>
        1d9b64:	e1a03006 	mov	r3, r6
        1d9b68:	e1a02005 	mov	r2, r5
        1d9b6c:	e1a00004 	mov	r0, r4
        1d9b70:	e3a01004 	mov	r1, #4	; 0x4
        1d9b74:	eb614ec1 	bl	1a2d680 <TCommToolPB::$__ct(unsigned long, unsigned long, unsigned char)>
        1d9b78:	e284001c 	add	r0, r4, #28	; 0x1c
        1d9b7c:	eb68571a 	bl	1bef7ec <TCommToolOptionMgmtRequest::$__ct(void)>
        1d9b80:	e2840038 	add	r0, r4, #56	; 0x38
        1d9b84:	eb68570a 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
        1d9b88:	e2840048 	add	r0, r4, #72	; 0x48
        1d9b8c:	eb60add2 	bl	1a052dc <TOptMgmtCompleteEvent::$__ct(void)>
        1d9b90:	e3a0000a 	mov	r0, #10	; 0xa
        1d9b94:	e5840024 	str	r0, [r4, #36]
        1d9b98:	e3e00003 	mvn	r0, #3	; 0x3
        1d9b9c:	e5840058 	str	r0, [r4, #88]
        1d9ba0:	e1a00004 	mov	r0, r4
        1d9ba4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

