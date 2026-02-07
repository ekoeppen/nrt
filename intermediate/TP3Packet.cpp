#include "include/TP3Packet.h"

/**
 * Symbol: TP3Packet::__ct(void)
 * Address: 0014efdc
 */
TP3Packet::TP3Packet(void) {
    /*
        14efdc:	e1a0c00d 	mov	ip, sp
        14efe0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14efe4:	e24cb004 	sub	fp, ip, #4	; 0x4
        14efe8:	e1b04000 	movs	r4, r0
        14efec:	1a000003 	bne	14f000 <TP3Packet::__ct(void)+0x24>
        14eff0:	e3a00058 	mov	r0, #88	; 0x58
        14eff4:	eb69fdcf 	bl	1bce738 <$__nw(unsigned int)>
        14eff8:	e1b04000 	movs	r4, r0
        14effc:	0a000005 	beq	14f018 <TP3Packet::__ct(void)+0x3c>
        14f000:	e2840004 	add	r0, r4, #4	; 0x4
        14f004:	eb6a506d 	bl	1be31c0 <CBufferList::$__ct(void)>
        14f008:	e2840024 	add	r0, r4, #36	; 0x24
        14f00c:	eb6a547c 	bl	1be4204 <CBufferSegment::$__ct(void)>
        14f010:	e3a00000 	mov	r0, #0	; 0x0
        14f014:	e5c40000 	strb	r0, [r4]
        14f018:	e1a00004 	mov	r0, r4
        14f01c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TP3Packet::__dt(void)
 * Address: 0014f020
 */
TP3Packet::~TP3Packet(void) {
    /*
        14f020:	e1a0c00d 	mov	ip, sp
        14f024:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14f028:	e24cb004 	sub	fp, ip, #4	; 0x4
        14f02c:	e1a04000 	mov	r4, r0
        14f030:	e1a05001 	mov	r5, r1
        14f034:	e2800024 	add	r0, r0, #36	; 0x24
        14f038:	e3a01000 	mov	r1, #0	; 0x0
        14f03c:	eb6a548a 	bl	1be426c <CBufferSegment::$__dt(void)>
        14f040:	e2840004 	add	r0, r4, #4	; 0x4
        14f044:	e3a01000 	mov	r1, #0	; 0x0
        14f048:	eb6a5480 	bl	1be4250 <CBufferList::$__dt(void)>
        14f04c:	e3150001 	tst	r5, #1	; 0x1
        14f050:	11a00004 	movne	r0, r4
        14f054:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        14f058:	1a69f9a0 	bne	1bcd6e0 <$__dl(void *)>
        14f05c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

