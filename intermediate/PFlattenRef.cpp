#include "include/PFlattenRef.h"

/**
 * Symbol: Sizeof__11PFlattenRefSFv
 * Address: 000cb0cc
 */
void PFlattenRef::Sizeof() {
    /*
         cb0cc:	e3a00010 	mov	r0, #16	; 0x10
         cb0d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PFlattenRef::New(void)
 * Address: 000cb0d4
 */
PFlattenRef::New(void) {
    /*
         cb0d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PFlattenRef::Delete(void)
 * Address: 000cb0d8
 */
PFlattenRef::Delete(void) {
    /*
         cb0d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PFlattenRef::Translate(void *, PipeCallBack *)
 * Address: 000cb0dc
 */
PFlattenRef::Translate(void *, PipeCallBack *) {
    /*
         cb0dc:	e1a0c00d 	mov	ip, sp
         cb0e0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         cb0e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         cb0e8:	e1a04001 	mov	r4, r1
         cb0ec:	e1a05002 	mov	r5, r2
         cb0f0:	e3a00002 	mov	r0, #2	; 0x2
         cb0f4:	eb6bdc14 	bl	1bc214c <$AllocateRefHandle(long)>
         cb0f8:	e1a06000 	mov	r6, r0
         cb0fc:	e3340000 	teq	r4, #0	; 0x0
         cb100:	0a00001b 	beq	cb174 <PFlattenRef::Translate(void *, PipeCallBack *)+0x98>
         cb104:	e24dd044 	sub	sp, sp, #68	; 0x44
         cb108:	e28d0028 	add	r0, sp, #40	; 0x28
         cb10c:	eb6b95cc 	bl	1bb0844 <CRefPipe::$__ct(void)>
         cb110:	e28d2028 	add	r2, sp, #40	; 0x28
         cb114:	e1a01004 	mov	r1, r4
         cb118:	e1a0000d 	mov	r0, sp
         cb11c:	e3a03000 	mov	r3, #0	; 0x0
         cb120:	eb6bd7f1 	bl	1bc10ec <TObjectWriter::$__ct(RefVar const &, CPipe &, int)>
         cb124:	e1a0000d 	mov	r0, sp
         cb128:	eb6bec91 	bl	1bc6374 <TObjectWriter::$Size(void)>
         cb12c:	e2842004 	add	r2, r4, #4	; 0x4
         cb130:	e1a03005 	mov	r3, r5
         cb134:	e1a01000 	mov	r1, r0
         cb138:	e28d0028 	add	r0, sp, #40	; 0x28
         cb13c:	eb6b6c8c 	bl	1ba6374 <CRefPipe::$InitSink(long, RefVar const &, PipeCallBack *)>
         cb140:	e1a0000d 	mov	r0, sp
         cb144:	eb6bf4cc 	bl	1bc847c <TObjectWriter::$Write(void)>
         cb148:	e59d0040 	ldr	r0, [sp, #64]
         cb14c:	e5900000 	ldr	r0, [r0]
         cb150:	e5860000 	str	r0, [r6]
         cb154:	e1a0000d 	mov	r0, sp
         cb158:	e3a01000 	mov	r1, #0	; 0x0
         cb15c:	eb660d81 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         cb160:	e28d0028 	add	r0, sp, #40	; 0x28
         cb164:	e3a01000 	mov	r1, #0	; 0x0
         cb168:	e1a0e00f 	mov	lr, pc
         cb16c:	e59df028 	ldr	pc, [sp, #40]
         cb170:	e28dd044 	add	sp, sp, #68	; 0x44
         cb174:	e5964000 	ldr	r4, [r6]
         cb178:	e1a00006 	mov	r0, r6
         cb17c:	eb6be00e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cb180:	e1a00004 	mov	r0, r4
         cb184:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__11PFlattenRefSFv
 * Address: 0038a104
 */
void PFlattenRef::ClassInfo() {
    /*
        38a104:	e24f0044 	sub	r0, pc, #68	; 0x44
        38a108:	e1a0f00e 	mov	pc, lr
        38a10c:	e3a00000 	mov	r0, #0	; 0x0
        38a110:	e1a0f00e 	mov	pc, lr
        38a114:	50466c61 	subpl	r6, r6, r1, ror #24
        38a118:	7474656e 	ldrvcbt	r6, [r4], -#1390
        38a11c:	52656600 	rsbpl	r6, r5, #0	; 0x0
        38a120:	50467261 	subpl	r7, r6, r1, ror #4
        38a124:	6d655369 	stcvsl	3, cr5, [r5, -#420]!
        38a128:	6e6b0000 	cdpvs	0, 6, cr0, cr11, cr0, {0}
        38a12c:	00000000 	andeq	r0, r0, r0
        38a130:	eafffff3 	b	38a104 <ClassInfo__11PFlattenRefSFv>
        38a134:	ea60749c 	b	1ba73ac <PFlattenRef::$New(void)>
        38a138:	ea607080 	b	1ba6340 <PFlattenRef::$Delete(void)>
        38a13c:	ea6078b4 	b	1ba8414 <PFlattenRef::$Translate(void *, PipeCallBack *)>
        38a140:	00000000 	andeq	r0, r0, r0
        38a144:	00000048 	andeq	r0, r0, r8, asr #32
        38a148:	00000052 	andeq	r0, r0, r2, asr r0
        38a14c:	0000005b 	andeq	r0, r0, fp, asr r0
        38a150:	00000058 	andeq	r0, r0, r8, asr r0
        38a154:	00000068 	andeq	r0, r0, r8, rrx
        38a158:	ea609596 	b	1baf7b8 <$Sizeof__13PUnFlattenRefSFv>
        38a164:	ea607498 	b	1ba73cc <PUnFlattenRef::$New(void)>
        38a168:	ea60707c 	b	1ba6360 <PUnFlattenRef::$Delete(void)>
        38a178:	ea000001 	b	38a184 <ClassInfo__13PUnFlattenRefSFv+0x8>
    */
}

