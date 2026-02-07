#include "include/PFlattenPtr.h"

/**
 * Symbol: Sizeof__11PFlattenPtrSFv
 * Address: 000caf00
 */
void PFlattenPtr::Sizeof() {
    /*
         caf00:	e3a00010 	mov	r0, #16	; 0x10
         caf04:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PFlattenPtr::New(void)
 * Address: 000caf08
 */
PFlattenPtr::New(void) {
    /*
         caf08:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PFlattenPtr::Delete(void)
 * Address: 000caf0c
 */
PFlattenPtr::Delete(void) {
    /*
         caf0c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PFlattenPtr::Translate(void *, PipeCallBack *)
 * Address: 000caf10
 */
PFlattenPtr::Translate(void *, PipeCallBack *) {
    /*
         caf10:	e1a0c00d 	mov	ip, sp
         caf14:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         caf18:	e24cb004 	sub	fp, ip, #4	; 0x4
         caf1c:	e1a04002 	mov	r4, r2
         caf20:	e3a05000 	mov	r5, #0	; 0x0
         caf24:	e3310000 	teq	r1, #0	; 0x0
         caf28:	0a000065 	beq	cb0c4 <PFlattenPtr::Translate(void *, PipeCallBack *)+0x1b4>
         caf2c:	e3a00000 	mov	r0, #0	; 0x0
         caf30:	e52d0004 	str	r0, [sp, -#4]!
         caf34:	e1a05001 	mov	r5, r1
         caf38:	e52d0004 	str	r0, [sp, -#4]!
         caf3c:	e24dd040 	sub	sp, sp, #64	; 0x40
         caf40:	e28d0028 	add	r0, sp, #40	; 0x28
         caf44:	eb6b963d 	bl	1bb0840 <CPtrPipe::$__ct(void)>
         caf48:	e28d2028 	add	r2, sp, #40	; 0x28
         caf4c:	e1a01005 	mov	r1, r5
         caf50:	e1a0000d 	mov	r0, sp
         caf54:	e3a03000 	mov	r3, #0	; 0x0
         caf58:	eb6bd863 	bl	1bc10ec <TObjectWriter::$__ct(RefVar const &, CPipe &, int)>
         caf5c:	e1a0000d 	mov	r0, sp
         caf60:	eb6bed03 	bl	1bc6374 <TObjectWriter::$Size(void)>
         caf64:	e5951008 	ldr	r1, [r5, #8]
         caf68:	e0816000 	add	r6, r1, r0
         caf6c:	e5d50004 	ldrb	r0, [r5, #4]
         caf70:	e59f7044 	ldr	r7, [pc, #44]	; cafbc <PFlattenPtr::Translate(void *, PipeCallBack *)+0xac>
         caf74:	e3300000 	teq	r0, #0	; 0x0
         caf78:	e1a00006 	mov	r0, r6
         caf7c:	0a00000f 	beq	cafc0 <PFlattenPtr::Translate(void *, PipeCallBack *)+0xb0>
         caf80:	eb6c5c69 	bl	1be212c <$NewHandle>
         caf84:	e58d0040 	str	r0, [sp, #64]
         caf88:	e3300000 	teq	r0, #0	; 0x0
         caf8c:	1a000004 	bne	cafa4 <PFlattenPtr::Translate(void *, PipeCallBack *)+0x94>
         caf90:	eb6c5c62 	bl	1be2120 <$MemError>
         caf94:	e1a01000 	mov	r1, r0
         caf98:	e3a02000 	mov	r2, #0	; 0x0
         caf9c:	e5970000 	ldr	r0, [r7]
         cafa0:	eb6c607d 	bl	1be319c <$Throw>
         cafa4:	e59d0040 	ldr	r0, [sp, #64]
         cafa8:	eb6c5c57 	bl	1be210c <$HLock>
         cafac:	e59d0040 	ldr	r0, [sp, #64]
         cafb0:	e5900000 	ldr	r0, [r0]
         cafb4:	e58d0044 	str	r0, [sp, #68]
         cafb8:	ea000009 	b	cafe4 <PFlattenPtr::Translate(void *, PipeCallBack *)+0xd4>
         cafbc:	00371328 	eoreqs	r1, r7, r8, lsr #6
         cafc0:	eb6c2ee8 	bl	1bd6b68 <$malloc>
         cafc4:	e58d0044 	str	r0, [sp, #68]
         cafc8:	e3300000 	teq	r0, #0	; 0x0
         cafcc:	1a000004 	bne	cafe4 <PFlattenPtr::Translate(void *, PipeCallBack *)+0xd4>
         cafd0:	eb6c5c52 	bl	1be2120 <$MemError>
         cafd4:	e1a01000 	mov	r1, r0
         cafd8:	e3a02000 	mov	r2, #0	; 0x0
         cafdc:	e5970000 	ldr	r0, [r7]
         cafe0:	eb6c606d 	bl	1be319c <$Throw>
         cafe4:	e1a03004 	mov	r3, r4
         cafe8:	e92d0008 	stmdb	sp!, {r3}
         cafec:	e1a02006 	mov	r2, r6
         caff0:	e59d1048 	ldr	r1, [sp, #72]
         caff4:	e28d002c 	add	r0, sp, #44	; 0x2c
         caff8:	e3a03000 	mov	r3, #0	; 0x0
         caffc:	eb6b70e0 	bl	1ba7384 <CPtrPipe::$Init(void *, long, unsigned char, PipeCallBack *)>
         cb000:	e28dd004 	add	sp, sp, #4	; 0x4
         cb004:	e5b50008 	ldr	r0, [r5, #8]!
         cb008:	e3500000 	cmp	r0, #0	; 0x0
         cb00c:	da000005 	ble	cb028 <PFlattenPtr::Translate(void *, PipeCallBack *)+0x118>
         cb010:	e28d0028 	add	r0, sp, #40	; 0x28
         cb014:	e3e02000 	mvn	r2, #0	; 0x0
         cb018:	e3a01004 	mov	r1, #4	; 0x4
         cb01c:	e59d3028 	ldr	r3, [sp, #40]
         cb020:	e1a0e00f 	mov	lr, pc
         cb024:	e283f00c 	add	pc, r3, #12	; 0xc
         cb028:	e3a00000 	mov	r0, #0	; 0x0
         cb02c:	e52d006c 	str	r0, [sp, -#108]!
         cb030:	e28d0008 	add	r0, sp, #8	; 0x8
         cb034:	eb6b9e4e 	bl	1bb2974 <$setjmp>
         cb038:	e3300000 	teq	r0, #0	; 0x0
         cb03c:	1a000004 	bne	cb054 <PFlattenPtr::Translate(void *, PipeCallBack *)+0x144>
         cb040:	e1a0000d 	mov	r0, sp
         cb044:	eb6c540c 	bl	1be007c <$AddExceptionHandler>
         cb048:	e28d006c 	add	r0, sp, #108	; 0x6c
         cb04c:	eb6bf50a 	bl	1bc847c <TObjectWriter::$Write(void)>
         cb050:	ea000009 	b	cb07c <PFlattenPtr::Translate(void *, PipeCallBack *)+0x16c>
         cb054:	e59d00ac 	ldr	r0, [sp, #172]
         cb058:	e3300000 	teq	r0, #0	; 0x0
         cb05c:	0a000001 	beq	cb068 <PFlattenPtr::Translate(void *, PipeCallBack *)+0x158>
         cb060:	eb6c5812 	bl	1be10b0 <$DisposHandle>
         cb064:	ea000002 	b	cb074 <PFlattenPtr::Translate(void *, PipeCallBack *)+0x164>
         cb068:	e59d00b0 	ldr	r0, [sp, #176]
         cb06c:	e3300000 	teq	r0, #0	; 0x0
         cb070:	1b6c1e38 	blne	1bd2958 <$free>
         cb074:	e1a0000d 	mov	r0, sp
         cb078:	eb6c5c35 	bl	1be2154 <$NextHandler>
         cb07c:	e1a0000d 	mov	r0, sp
         cb080:	eb6c580c 	bl	1be10b8 <$ExitHandler>
         cb084:	e28dd06c 	add	sp, sp, #108	; 0x6c
         cb088:	e59d0040 	ldr	r0, [sp, #64]
         cb08c:	e3300000 	teq	r0, #0	; 0x0
         cb090:	0a000002 	beq	cb0a0 <PFlattenPtr::Translate(void *, PipeCallBack *)+0x190>
         cb094:	eb6c5c1e 	bl	1be2114 <$HUnlock>
         cb098:	e59d5040 	ldr	r5, [sp, #64]
         cb09c:	ea000000 	b	cb0a4 <PFlattenPtr::Translate(void *, PipeCallBack *)+0x194>
         cb0a0:	e59d5044 	ldr	r5, [sp, #68]
         cb0a4:	e1a0000d 	mov	r0, sp
         cb0a8:	e3a01000 	mov	r1, #0	; 0x0
         cb0ac:	eb660dad 	bl	1a4e768 <TObjectWriter::$__dt(void)>
         cb0b0:	e28d0028 	add	r0, sp, #40	; 0x28
         cb0b4:	e3a01000 	mov	r1, #0	; 0x0
         cb0b8:	e1a0e00f 	mov	lr, pc
         cb0bc:	e59df028 	ldr	pc, [sp, #40]
         cb0c0:	e28dd048 	add	sp, sp, #72	; 0x48
         cb0c4:	e1a00005 	mov	r0, r5
         cb0c8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__11PFlattenPtrSFv
 * Address: 0038a010
 */
void PFlattenPtr::ClassInfo() {
    /*
        38a010:	e24f0044 	sub	r0, pc, #68	; 0x44
        38a014:	e1a0f00e 	mov	pc, lr
        38a018:	e3a00000 	mov	r0, #0	; 0x0
        38a01c:	e1a0f00e 	mov	pc, lr
        38a020:	50466c61 	subpl	r6, r6, r1, ror #24
        38a024:	7474656e 	ldrvcbt	r6, [r4], -#1390
        38a028:	50747200 	rsbpls	r7, r4, r0, lsl #4
        38a02c:	50467261 	subpl	r7, r6, r1, ror #4
        38a030:	6d655369 	stcvsl	3, cr5, [r5, -#420]!
        38a034:	6e6b0000 	cdpvs	0, 6, cr0, cr11, cr0, {0}
        38a038:	00000000 	andeq	r0, r0, r0
        38a03c:	eafffff3 	b	38a010 <ClassInfo__11PFlattenPtrSFv>
        38a040:	ea6074d8 	b	1ba73a8 <PFlattenPtr::$New(void)>
        38a044:	ea6070bc 	b	1ba633c <PFlattenPtr::$Delete(void)>
        38a048:	ea6078f0 	b	1ba8410 <PFlattenPtr::$Translate(void *, PipeCallBack *)>
        38a04c:	00000000 	andeq	r0, r0, r0
        38a050:	00000048 	andeq	r0, r0, r8, asr #32
        38a054:	00000052 	andeq	r0, r0, r2, asr r0
        38a058:	0000005b 	andeq	r0, r0, fp, asr r0
        38a05c:	00000058 	andeq	r0, r0, r8, asr r0
        38a060:	00000068 	andeq	r0, r0, r8, rrx
        38a064:	ea6095d2 	b	1baf7b4 <$Sizeof__13PUnFlattenPtrSFv>
        38a070:	ea6074d4 	b	1ba73c8 <PUnFlattenPtr::$New(void)>
        38a074:	ea6070b8 	b	1ba635c <PUnFlattenPtr::$Delete(void)>
        38a084:	ea000001 	b	38a090 <ClassInfo__13PUnFlattenPtrSFv+0x8>
    */
}

