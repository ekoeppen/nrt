#include "include/TPrecedentsVar.h"

/**
 * Symbol: TPrecedentsVar::__ct(void)
 * Address: 0035640c
 */
TPrecedentsVar::TPrecedentsVar(void) {
    /*
        35640c:	e1a0c00d 	mov	ip, sp
        356410:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        356414:	e24cb004 	sub	fp, ip, #4	; 0x4
        356418:	e1b04000 	movs	r4, r0
        35641c:	1a000003 	bne	356430 <TPrecedentsVar::__ct(void)+0x24>
        356420:	e3a00008 	mov	r0, #8	; 0x8
        356424:	eb61e0c3 	bl	1bce738 <$__nw(unsigned int)>
        356428:	e1b04000 	movs	r4, r0
        35642c:	0a000006 	beq	35644c <TPrecedentsVar::__ct(void)+0x40>
        356430:	e59f001c 	ldr	r0, [pc, #1c]	; 356454 <TPrecedentsVar::__ct(void)+0x48>
        356434:	e3a01010 	mov	r1, #16	; 0x10
        356438:	eb61af3e 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        35643c:	eb61af42 	bl	1bc214c <$AllocateRefHandle(long)>
        356440:	e5840000 	str	r0, [r4]
        356444:	e3a00000 	mov	r0, #0	; 0x0
        356448:	e5840004 	str	r0, [r4, #4]	; fField4
        35644c:	e1a00004 	mov	r0, r4
        356450:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        356454:	00681f10 	rsbeq	r1, r8, r0, lsl pc
    */
}

/**
 * Symbol: TPrecedentsVar::Append(RefVar const &)
 * Address: 00357b1c
 */
TPrecedentsVar::Append(RefVar const &) {
    /*
        357b1c:	e1a0c00d 	mov	ip, sp
        357b20:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        357b24:	e24cb004 	sub	fp, ip, #4	; 0x4
        357b28:	e1a04000 	mov	r4, r0
        357b2c:	e1a05001 	mov	r5, r1
        357b30:	e5900000 	ldr	r0, [r0]
        357b34:	e5900000 	ldr	r0, [r0]
        357b38:	eb61b5db 	bl	1bc52ac <$Length(long)>
        357b3c:	e5941004 	ldr	r1, [r4, #4]	; fField4
        357b40:	e1310000 	teq	r1, r0
        357b44:	02801010 	addeq	r1, r0, #16	; 0x10
        357b48:	01a00004 	moveq	r0, r4
        357b4c:	0b61ba06 	bleq	1bc636c <$SetLength(RefVar const &, long)>
        357b50:	e5941004 	ldr	r1, [r4, #4]	; fField4
        357b54:	e5950000 	ldr	r0, [r5]
        357b58:	e5902000 	ldr	r2, [r0]
        357b5c:	e5940000 	ldr	r0, [r4]
        357b60:	e5900000 	ldr	r0, [r0]
        357b64:	eb61b9fb 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        357b68:	e5940004 	ldr	r0, [r4, #4]	; fField4
        357b6c:	e2801001 	add	r1, r0, #1	; 0x1
        357b70:	e5a41004 	str	r1, [r4, #4]!	; fField4
        357b74:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPrecedentsVar::Find(RefVar const &)
 * Address: 00357fb0
 */
TPrecedentsVar::Find(RefVar const &) {
    /*
        357fb0:	e1a0c00d 	mov	ip, sp
        357fb4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        357fb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        357fbc:	e1a04000 	mov	r4, r0
        357fc0:	e1a05001 	mov	r5, r1
        357fc4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        357fc8:	e3300000 	teq	r0, #0	; 0x0
        357fcc:	0a000014 	beq	358024 <TPrecedentsVar::Find(RefVar const &)+0x74>
        357fd0:	e3a06000 	mov	r6, #0	; 0x0
        357fd4:	e5940000 	ldr	r0, [r4]
        357fd8:	e5900000 	ldr	r0, [r0]
        357fdc:	eb61b4c4 	bl	1bc52f4 <$ObjectPtr(long)>
        357fe0:	e280700c 	add	r7, r0, #12	; 0xc
        357fe4:	e5950000 	ldr	r0, [r5]
        357fe8:	e5900000 	ldr	r0, [r0]
        357fec:	eb5bfeed 	bl	1a57ba8 <$SetupListEQ(long)>
        357ff0:	e1a08000 	mov	r8, r0
        357ff4:	e5950000 	ldr	r0, [r5]
        357ff8:	e5901000 	ldr	r1, [r0]
        357ffc:	e7970106 	ldr	r0, [r7, r6, lsl #2]
        358000:	e1a02008 	mov	r2, r8
        358004:	eb5bf6b6 	bl	1a55ae4 <$ListEQ__FlT1Pc>
        358008:	e3300000 	teq	r0, #0	; 0x0
        35800c:	11a00006 	movne	r0, r6
        358010:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        358014:	e2866001 	add	r6, r6, #1	; 0x1
        358018:	e5940004 	ldr	r0, [r4, #4]	; fField4
        35801c:	e1560000 	cmp	r6, r0
        358020:	bafffff3 	blt	357ff4 <TPrecedentsVar::Find(RefVar const &)+0x44>
        358024:	e3e00000 	mvn	r0, #0	; 0x0
        358028:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPrecedentsVar::Get(long)
 * Address: 0035802c
 */
TPrecedentsVar::Get(long) {
    /*
        35802c:	e5900000 	ldr	r0, [r0]
        358030:	e5900000 	ldr	r0, [r0]
        358034:	ea61b086 	b	1bc4254 <$GetArraySlotRef__FlT1>
    */
}

