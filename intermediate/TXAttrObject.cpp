#include "include/TXAttrObject.h"

/**
 * Symbol: TXAttrObject::__ct(void)
 * Address: 002310e4
 */
TXAttrObject::TXAttrObject(void) {
    /*
        2310e4:	e1a0c00d 	mov	ip, sp
        2310e8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2310ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2310f0:	e3300000 	teq	r0, #0	; 0x0
        2310f4:	1a000003 	bne	231108 <TXAttrObject::__ct(void)+0x24>
        2310f8:	e3a00008 	mov	r0, #8	; 0x8
        2310fc:	eb66758d 	bl	1bce738 <$__nw(unsigned int)>
        231100:	e3300000 	teq	r0, #0	; 0x0
        231104:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        231108:	e59f100c 	ldr	r1, [pc, #c]	; 23111c <TXAttrObject::__ct(void)+0x38>
        23110c:	e5801000 	str	r1, [r0]
        231110:	e3a01001 	mov	r1, #1	; 0x1
        231114:	e5801004 	str	r1, [r0, #4]	; fField4
        231118:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        23111c:	0001c6b8 	streqh	ip, [r1], -r8
    */
}

/**
 * Symbol: TXAttrObject::__dt(void)
 * Address: 00231120
 */
TXAttrObject::~TXAttrObject(void) {
    /*
        231120:	e59f200c 	ldr	r2, [pc, #c]	; 231134 <TXAttrObject::__dt(void)+0x14>
        231124:	e3110001 	tst	r1, #1	; 0x1
        231128:	e5802000 	str	r2, [r0]
        23112c:	1a66716b 	bne	1bcd6e0 <$__dl(void *)>
        231130:	e1a0f00e 	mov	pc, lr
        231134:	0001c6b8 	streqh	ip, [r1], -r8
    */
}

/**
 * Symbol: TXAttrObject::GetAttributeFlags( const(unsigned long))
 * Address: 00231138
 */
TXAttrObject::GetAttributeFlags( const(unsigned long)) {
    /*
        231138:	e3a00000 	mov	r0, #0	; 0x0
        23113c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXAttrObject::UpdateAttribute(unsigned long, void const *, long)
 * Address: 00231140
 */
TXAttrObject::UpdateAttribute(unsigned long, void const *, long) {
    /*
        231140:	e5903000 	ldr	r3, [r0]
        231144:	e283f030 	add	pc, r3, #48	; 0x30
    */
}

/**
 * Symbol: TXAttrObject::Update(TXAttrValues const *, long)
 * Address: 00231148
 */
TXAttrObject::Update(TXAttrValues const *, long) {
    /*
        231148:	e1a0c00d 	mov	ip, sp
        23114c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        231150:	e24cb004 	sub	fp, ip, #4	; 0x4
        231154:	e1a05000 	mov	r5, r0
        231158:	e1a04001 	mov	r4, r1
        23115c:	e1a06002 	mov	r6, r2
        231160:	e3a08000 	mov	r8, #0	; 0x0
        231164:	e5910004 	ldr	r0, [r1, #4]	; fField4
        231168:	e2507001 	subs	r7, r0, #1	; 0x1
        23116c:	4a000018 	bmi	2311d4 <TXAttrObject::Update(TXAttrValues const *, long)+0x8c>
        231170:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        231174:	e1a0300d 	mov	r3, sp
        231178:	e92d0008 	stmdb	sp!, {r3}
        23117c:	e28d3008 	add	r3, sp, #8	; 0x8
        231180:	e28d201c 	add	r2, sp, #28	; 0x1c
        231184:	e1a01007 	mov	r1, r7
        231188:	e1a00004 	mov	r0, r4
        23118c:	eb65587e 	bl	1b8738c <TXAttrValues::$GetIndAttrData( const(long, unsigned long *, void *, int *))>
        231190:	e28dd004 	add	sp, sp, #4	; 0x4
        231194:	e1a03006 	mov	r3, r6
        231198:	e28d2004 	add	r2, sp, #4	; 0x4
        23119c:	e1a00005 	mov	r0, r5
        2311a0:	e59d1018 	ldr	r1, [sp, #24]
        2311a4:	e595c000 	ldr	ip, [r5]
        2311a8:	e1a0e00f 	mov	lr, pc
        2311ac:	e28cf050 	add	pc, ip, #80	; 0x50
        2311b0:	e1a00005 	mov	r0, r5
        2311b4:	e59d1018 	ldr	r1, [sp, #24]
        2311b8:	e5952000 	ldr	r2, [r5]
        2311bc:	e1a0e00f 	mov	lr, pc
        2311c0:	e282f04c 	add	pc, r2, #76	; 0x4c
        2311c4:	e1808008 	orr	r8, r0, r8
        2311c8:	e28dd01c 	add	sp, sp, #28	; 0x1c
        2311cc:	e2577001 	subs	r7, r7, #1	; 0x1
        2311d0:	5affffe6 	bpl	231170 <TXAttrObject::Update(TXAttrValues const *, long)+0x28>
        2311d4:	e1a00008 	mov	r0, r8
        2311d8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXAttrObject::GetCommonAttrValue( const(unsigned long, void *))
 * Address: 002311dc
 */
TXAttrObject::GetCommonAttrValue( const(unsigned long, void *)) {
    /*
        2311dc:	e3a00000 	mov	r0, #0	; 0x0
        2311e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXAttrObject::GetCommonAttrValues(TXAttrValues *)
 * Address: 002311e4
 */
TXAttrObject::GetCommonAttrValues(TXAttrValues *) {
    /*
        2311e4:	e1a0c00d 	mov	ip, sp
        2311e8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2311ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2311f0:	e1a05000 	mov	r5, r0
        2311f4:	e1a04001 	mov	r4, r1
        2311f8:	e5910004 	ldr	r0, [r1, #4]	; fField4
        2311fc:	e2506001 	subs	r6, r0, #1	; 0x1
        231200:	491ba870 	ldmmidb	fp, {r4, r5, r6, fp, sp, pc}
        231204:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        231208:	e1a0300d 	mov	r3, sp
        23120c:	e92d0008 	stmdb	sp!, {r3}
        231210:	e28d3008 	add	r3, sp, #8	; 0x8
        231214:	e28d201c 	add	r2, sp, #28	; 0x1c
        231218:	e1a01006 	mov	r1, r6
        23121c:	e1a00004 	mov	r0, r4
        231220:	eb655859 	bl	1b8738c <TXAttrValues::$GetIndAttrData( const(long, unsigned long *, void *, int *))>
        231224:	e28dd004 	add	sp, sp, #4	; 0x4
        231228:	e28d2004 	add	r2, sp, #4	; 0x4
        23122c:	e1a00005 	mov	r0, r5
        231230:	e59d1018 	ldr	r1, [sp, #24]
        231234:	e5953000 	ldr	r3, [r5]
        231238:	e1a0e00f 	mov	lr, pc
        23123c:	e283f048 	add	pc, r3, #72	; 0x48
        231240:	e3300000 	teq	r0, #0	; 0x0
        231244:	0a000008 	beq	23126c <TXAttrObject::GetCommonAttrValues(TXAttrValues *)+0x88>
        231248:	e59d3000 	ldr	r3, [sp]
        23124c:	e92d0008 	stmdb	sp!, {r3}
        231250:	e28d3008 	add	r3, sp, #8	; 0x8
        231254:	e1a01006 	mov	r1, r6
        231258:	e1a00004 	mov	r0, r4
        23125c:	e59d201c 	ldr	r2, [sp, #28]
        231260:	eb65584a 	bl	1b87390 <TXAttrValues::$SetIndAttrData(long, unsigned long, void const *, int)>
        231264:	e28dd004 	add	sp, sp, #4	; 0x4
        231268:	ea000005 	b	231284 <TXAttrObject::GetCommonAttrValues(TXAttrValues *)+0xa0>
        23126c:	e1a01006 	mov	r1, r6
        231270:	e1a00004 	mov	r0, r4
        231274:	e3a02001 	mov	r2, #1	; 0x1
        231278:	e5943000 	ldr	r3, [r4]
        23127c:	e1a0e00f 	mov	lr, pc
        231280:	e283f004 	add	pc, r3, #4	; 0x4
        231284:	e28dd01c 	add	sp, sp, #28	; 0x1c
        231288:	e2566001 	subs	r6, r6, #1	; 0x1
        23128c:	5affffdc 	bpl	231204 <TXAttrObject::GetCommonAttrValues(TXAttrValues *)+0x20>
        231290:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXAttrObject::GetAttributesValues(TXAttrValues *)
 * Address: 00231294
 */
TXAttrObject::GetAttributesValues(TXAttrValues *) {
    /*
        231294:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXAttrObject::IsEqual( const(TXAttrObject const *))
 * Address: 00231298
 */
TXAttrObject::IsEqual( const(TXAttrObject const *)) {
    /*
        231298:	e1a0c00d 	mov	ip, sp
        23129c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2312a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2312a4:	e1a04001 	mov	r4, r1
        2312a8:	e3a05001 	mov	r5, #1	; 0x1
        2312ac:	e1310000 	teq	r1, r0
        2312b0:	0a00000b 	beq	2312e4 <TXAttrObject::IsEqual( const(TXAttrObject const *))+0x4c>
        2312b4:	e5901000 	ldr	r1, [r0]
        2312b8:	e1a0e00f 	mov	lr, pc
        2312bc:	e281f018 	add	pc, r1, #24	; 0x18
        2312c0:	e1a01004 	mov	r1, r4
        2312c4:	e1a04000 	mov	r4, r0
        2312c8:	e1a00001 	mov	r0, r1
        2312cc:	e5911000 	ldr	r1, [r1]
        2312d0:	e1a0e00f 	mov	lr, pc
        2312d4:	e281f018 	add	pc, r1, #24	; 0x18
        2312d8:	e1340000 	teq	r4, r0
        2312dc:	13a00000 	movne	r0, #0	; 0x0
        2312e0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        2312e4:	e1a00005 	mov	r0, r5
        2312e8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXAttrObject::WritePublicData(TXStream *, long *)
 * Address: 002312ec
 */
TXAttrObject::WritePublicData(TXStream *, long *) {
    /*
        2312ec:	e3a00000 	mov	r0, #0	; 0x0
        2312f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXAttrObject::ReadPublicData(TXStream *, long)
 * Address: 002312f4
 */
TXAttrObject::ReadPublicData(TXStream *, long) {
    /*
        2312f4:	e3a00000 	mov	r0, #0	; 0x0
        2312f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXAttrObject::Free(void)
 * Address: 002312fc
 */
TXAttrObject::Free(void) {
    /*
        2312fc:	e1a0c00d 	mov	ip, sp
        231300:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        231304:	e24cb004 	sub	fp, ip, #4	; 0x4
        231308:	e1a04000 	mov	r4, r0
        23130c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        231310:	e2500001 	subs	r0, r0, #1	; 0x1
        231314:	e5840004 	str	r0, [r4, #4]	; fField4
        231318:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        23131c:	e1a00004 	mov	r0, r4
        231320:	e5941000 	ldr	r1, [r4]
        231324:	e1a0e00f 	mov	lr, pc
        231328:	e281f008 	add	pc, r1, #8	; 0x8
        23132c:	e1b00004 	movs	r0, r4
        231330:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        231334:	e3a01001 	mov	r1, #1	; 0x1
        231338:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        23133c:	e590f000 	ldr	pc, [r0]
    */
}

/**
 * Symbol: TXAttrObject::FreeData(void)
 * Address: 002315b0
 */
TXAttrObject::FreeData(void) {
    /*
        2315b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXAttrObject::GetCountReferences(void)
 * Address: 002315b4
 */
TXAttrObject::GetCountReferences(void) {
    /*
        2315b4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2315b8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXAttrObject::Reference(void)
 * Address: 002315bc
 */
TXAttrObject::Reference(void) {
    /*
        2315bc:	e5901004 	ldr	r1, [r0, #4]	; fField4
        2315c0:	e2811001 	add	r1, r1, #1	; 0x1
        2315c4:	e5801004 	str	r1, [r0, #4]	; fField4
        2315c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXAttrObject::GetObjFlags( const(void))
 * Address: 002315cc
 */
TXAttrObject::GetObjFlags( const(void)) {
    /*
        2315cc:	e3a00000 	mov	r0, #0	; 0x0
        2315d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXAttrObject::GetPublicType( const(void))
 * Address: 002315d4
 */
TXAttrObject::GetPublicType( const(void)) {
    /*
        2315d4:	e3a00000 	mov	r0, #0	; 0x0
        2315d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXAttrObject::GetAttributeValue( const(unsigned long, void *))
 * Address: 002315dc
 */
TXAttrObject::GetAttributeValue( const(unsigned long, void *)) {
    /*
        2315dc:	e3a00000 	mov	r0, #0	; 0x0
        2315e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXAttrObject::SetAttributeValue(unsigned long, void const *)
 * Address: 002315e4
 */
TXAttrObject::SetAttributeValue(unsigned long, void const *) {
    /*
        2315e4:	e1a0f00e 	mov	pc, lr
    */
}

