#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolOpenReply::__ct(void)
 * Address: 0006fb54
 */
TCommToolOpenReply::TCommToolOpenReply() {
    /*
         6fb54:	e1a0c00d 	mov	ip, sp
         6fb58:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6fb5c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6fb60:	e1b04000 	movs	r4, r0
         6fb64:	1a000003 	bne	6fb78 <TCommToolOpenReply::__ct(void)+0x24>
         6fb68:	e3a00014 	mov	r0, #20	; 0x14
         6fb6c:	eb6d7af1 	bl	1bce738 <$__nw(unsigned int)>
         6fb70:	e1b04000 	movs	r4, r0
         6fb74:	0a000005 	beq	6fb90 <TCommToolOpenReply::__ct(void)+0x3c>
         6fb78:	e1a00004 	mov	r0, r4
         6fb7c:	eb6dff0c 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         6fb80:	e3a00000 	mov	r0, #0	; 0x0
         6fb84:	e5840010 	str	r0, [r4, #16]
         6fb88:	e3a00014 	mov	r0, #20	; 0x14
         6fb8c:	e584000c 	str	r0, [r4, #12]	; fPortId
         6fb90:	e1a00004 	mov	r0, r4
         6fb94:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

