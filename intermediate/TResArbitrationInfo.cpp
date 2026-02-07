#include "include/TResArbitrationInfo.h"

/**
 * Symbol: TResArbitrationInfo::__ct(void)
 * Address: 0012f220
 */
TResArbitrationInfo::TResArbitrationInfo(void) {
    /*
        12f220:	e1a0c00d 	mov	ip, sp
        12f224:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12f228:	e24cb004 	sub	fp, ip, #4	; 0x4
        12f22c:	e1b04000 	movs	r4, r0
        12f230:	1a000003 	bne	12f244 <TResArbitrationInfo::__ct(void)+0x24>
        12f234:	e3a00064 	mov	r0, #100	; 0x64
        12f238:	eb6a7d3e 	bl	1bce738 <$__nw(unsigned int)>
        12f23c:	e1b04000 	movs	r4, r0
        12f240:	0a000012 	beq	12f290 <TResArbitrationInfo::__ct(void)+0x70>
        12f244:	e284000c 	add	r0, r4, #12	; 0xc
        12f248:	eb63f918 	bl	1a2d6b0 <TCommToolResArbRequest::$__ct(void)>
        12f24c:	e2840020 	add	r0, r4, #32	; 0x20
        12f250:	eb6a7915 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        12f254:	e2840030 	add	r0, r4, #48	; 0x30
        12f258:	eb6b0155 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
        12f25c:	e3a05000 	mov	r5, #0	; 0x0
        12f260:	e5845040 	str	r5, [r4, #64]
        12f264:	e584504c 	str	r5, [r4, #76]
        12f268:	e5845044 	str	r5, [r4, #68]
        12f26c:	e5845048 	str	r5, [r4, #72]
        12f270:	e2840058 	add	r0, r4, #88	; 0x58
        12f274:	eb679a15 	bl	1b15ad0 <TRPCInfo::$__ct(void)>
        12f278:	e5845000 	str	r5, [r4]
        12f27c:	e5845004 	str	r5, [r4, #4]
        12f280:	e3a00001 	mov	r0, #1	; 0x1
        12f284:	e5840058 	str	r0, [r4, #88]
        12f288:	e5845008 	str	r5, [r4, #8]	; fField8
        12f28c:	e584405c 	str	r4, [r4, #92]
        12f290:	e1a00004 	mov	r0, r4
        12f294:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TResArbitrationInfo::__dt(void)
 * Address: 0012f298
 */
TResArbitrationInfo::~TResArbitrationInfo(void) {
    /*
        12f298:	e1a0c00d 	mov	ip, sp
        12f29c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12f2a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        12f2a4:	e1a04000 	mov	r4, r0
        12f2a8:	e1a05001 	mov	r5, r1
        12f2ac:	e5900004 	ldr	r0, [r0, #4]
        12f2b0:	e3300000 	teq	r0, #0	; 0x0
        12f2b4:	13a01001 	movne	r1, #1	; 0x1
        12f2b8:	1b679a03 	blne	1b15acc <TResOwnerInfo::$__dt(void)>
        12f2bc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        12f2c0:	e3300000 	teq	r0, #0	; 0x0
        12f2c4:	13a01001 	movne	r1, #1	; 0x1
        12f2c8:	1b6799ff 	blne	1b15acc <TResOwnerInfo::$__dt(void)>
        12f2cc:	e2840020 	add	r0, r4, #32	; 0x20
        12f2d0:	e3a01000 	mov	r1, #0	; 0x0
        12f2d4:	eb6a7d0d 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        12f2d8:	e3150001 	tst	r5, #1	; 0x1
        12f2dc:	11a00004 	movne	r0, r4
        12f2e0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        12f2e4:	1a6a78fd 	bne	1bcd6e0 <$__dl(void *)>
        12f2e8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TResArbitrationInfo::Init(TUPort *)
 * Address: 0012f2ec
 */
TResArbitrationInfo::Init(TUPort *) {
    /*
        12f2ec:	e1a0c00d 	mov	ip, sp
        12f2f0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        12f2f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        12f2f8:	e1a04000 	mov	r4, r0
        12f2fc:	e1a05001 	mov	r5, r1
        12f300:	e2800020 	add	r0, r0, #32	; 0x20
        12f304:	e1a06000 	mov	r6, r0
        12f308:	e3a01001 	mov	r1, #1	; 0x1
        12f30c:	eb6a99e0 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        12f310:	e3300000 	teq	r0, #0	; 0x0
        12f314:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        12f318:	e1a00006 	mov	r0, r6
        12f31c:	e2841058 	add	r1, r4, #88	; 0x58
        12f320:	eb6ab6ba 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
        12f324:	e3300000 	teq	r0, #0	; 0x0
        12f328:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        12f32c:	e1a00006 	mov	r0, r6
        12f330:	e5951000 	ldr	r1, [r5]
        12f334:	eb6ab295 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        12f338:	e3300000 	teq	r0, #0	; 0x0
        12f33c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

