#include "DDKIncludes/OS600/NameServer.h"

/**
 * Symbol: TResArbitrationRequest::__ct(void)
 * Address: 00131e80
 */
TResArbitrationRequest::TResArbitrationRequest() {
    /*
        131e80:	e1a0c00d 	mov	ip, sp
        131e84:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        131e88:	e24cb004 	sub	fp, ip, #4	; 0x4
        131e8c:	e1b04000 	movs	r4, r0
        131e90:	1a000003 	bne	131ea4 <TResArbitrationRequest::__ct(void)+0x24>
        131e94:	e3a00028 	mov	r0, #40	; 0x28
        131e98:	eb6a7226 	bl	1bce738 <$__nw(unsigned int)>
        131e9c:	e1b04000 	movs	r4, r0
        131ea0:	0a000008 	beq	131ec8 <TResArbitrationRequest::__ct(void)+0x48>
        131ea4:	e1a00004 	mov	r0, r4
        131ea8:	ebfffc4c 	bl	130fe0 <TNameRequest::__ct(void)>
        131eac:	e3a0000b 	mov	r0, #11	; 0xb
        131eb0:	e5840000 	str	r0, [r4]
        131eb4:	e3a00001 	mov	r0, #1	; 0x1
        131eb8:	e584001c 	str	r0, [r4, #28]
        131ebc:	e3a00000 	mov	r0, #0	; 0x0
        131ec0:	e5840020 	str	r0, [r4, #32]	; fOwnerPortId
        131ec4:	e5840024 	str	r0, [r4, #36]
        131ec8:	e1a00004 	mov	r0, r4
        131ecc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

