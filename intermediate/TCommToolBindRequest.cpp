#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolBindRequest::__ct(void)
 * Address: 0006dba4
 */
TCommToolBindRequest::TCommToolBindRequest() {
    /*
         6dba4:	e1a0c00d 	mov	ip, sp
         6dba8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6dbac:	e24cb004 	sub	fp, ip, #4	; 0x4
         6dbb0:	e1b04000 	movs	r4, r0
         6dbb4:	1a000003 	bne	6dbc8 <TCommToolBindRequest::__ct(void)+0x24>
         6dbb8:	e3a00020 	mov	r0, #32	; 0x20
         6dbbc:	eb6d82dd 	bl	1bce738 <$__nw(unsigned int)>
         6dbc0:	e1b04000 	movs	r4, r0
         6dbc4:	0a000007 	beq	6dbe8 <TCommToolBindRequest::__ct(void)+0x44>
         6dbc8:	e1a00004 	mov	r0, r4
         6dbcc:	eb6e06ff 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
         6dbd0:	e3a00008 	mov	r0, #8	; 0x8
         6dbd4:	e5840008 	str	r0, [r4, #8]	; fReserved1
         6dbd8:	e3a00000 	mov	r0, #0	; 0x0
         6dbdc:	e584000c 	str	r0, [r4, #12]	; fReserved2
         6dbe0:	e5840010 	str	r0, [r4, #16]	; fOutside
         6dbe4:	e5c40014 	strb	r0, [r4, #20]	; fOptions
         6dbe8:	e1a00004 	mov	r0, r4
         6dbec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

