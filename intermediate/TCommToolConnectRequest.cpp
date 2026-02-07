#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolConnectRequest::__ct(void)
 * Address: 0006fd08
 */
TCommToolConnectRequest::TCommToolConnectRequest() {
    /*
         6fd08:	e1a0c00d 	mov	ip, sp
         6fd0c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6fd10:	e24cb004 	sub	fp, ip, #4	; 0x4
         6fd14:	e1b04000 	movs	r4, r0
         6fd18:	1a000003 	bne	6fd2c <TCommToolConnectRequest::__ct(void)+0x24>
         6fd1c:	e3a00028 	mov	r0, #40	; 0x28
         6fd20:	eb6d7a84 	bl	1bce738 <$__nw(unsigned int)>
         6fd24:	e1b04000 	movs	r4, r0
         6fd28:	0a00000b 	beq	6fd5c <TCommToolConnectRequest::__ct(void)+0x54>
         6fd2c:	e1a00004 	mov	r0, r4
         6fd30:	eb6dfea6 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
         6fd34:	e3a00003 	mov	r0, #3	; 0x3
         6fd38:	e5840008 	str	r0, [r4, #8]	; fReserved1
         6fd3c:	e3a00000 	mov	r0, #0	; 0x0
         6fd40:	e584000c 	str	r0, [r4, #12]	; fReserved2
         6fd44:	e5840010 	str	r0, [r4, #16]	; fOptions
         6fd48:	e5840014 	str	r0, [r4, #20]	; fOptionCount
         6fd4c:	e5840018 	str	r0, [r4, #24]	; fData
         6fd50:	e584001c 	str	r0, [r4, #28]	; fSequence
         6fd54:	e5840020 	str	r0, [r4, #32]	; fOutside
         6fd58:	e5c40024 	strb	r0, [r4, #36]
         6fd5c:	e1a00004 	mov	r0, r4
         6fd60:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

