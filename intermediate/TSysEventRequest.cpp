#include "DDKIncludes/OS600/NameServer.h"

/**
 * Symbol: TSysEventRequest::__ct(void)
 * Address: 00131728
 */
TSysEventRequest::TSysEventRequest() {
    /*
        131728:	e1a0c00d 	mov	ip, sp
        13172c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        131730:	e24cb004 	sub	fp, ip, #4	; 0x4
        131734:	e1b04000 	movs	r4, r0
        131738:	1a000003 	bne	13174c <TSysEventRequest::__ct(void)+0x24>
        13173c:	e3a00014 	mov	r0, #20	; 0x14
        131740:	eb6a73fc 	bl	1bce738 <$__nw(unsigned int)>
        131744:	e1b04000 	movs	r4, r0
        131748:	0a000009 	beq	131774 <TSysEventRequest::__ct(void)+0x4c>
        13174c:	e1a00004 	mov	r0, r4
        131750:	eb678483 	bl	1b12964 <TNameServerRequest::$__ct(void)>
        131754:	e3a00007 	mov	r0, #7	; 0x7
        131758:	e5840000 	str	r0, [r4]
        13175c:	e59f0018 	ldr	r0, [pc, #18]	; 13177c <TSysEventRequest::__ct(void)+0x54>
        131760:	e5840004 	str	r0, [r4, #4]
        131764:	e3a00000 	mov	r0, #0	; 0x0
        131768:	e5840008 	str	r0, [r4, #8]	; fTheEvent
        13176c:	e584000c 	str	r0, [r4, #12]	; fSysEventObjId
        131770:	e5840010 	str	r0, [r4, #16]	; fSysEventTimeOut
        131774:	e1a00004 	mov	r0, r4
        131778:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        13177c:	70776f6e 	rsbvcs	r6, r7, lr, ror #30
    */
}

