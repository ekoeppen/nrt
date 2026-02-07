#include "include/TIrDAService.h"

/**
 * Symbol: Sizeof__12TIrDAServiceSFv
 * Address: 000edde0
 */
void TIrDAService::Sizeof() {
    /*
         edde0:	e3a00010 	mov	r0, #16	; 0x10
         edde4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrDAService::New(void)
 * Address: 000edde8
 */
TIrDAService::New(void) {
    /*
         edde8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrDAService::Delete(void)
 * Address: 000eddec
 */
TIrDAService::Delete(void) {
    /*
         eddec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrDAService::Start(TOptionArray *, unsigned long, TServiceInfo *)
 * Address: 000eddf0
 */
TIrDAService::Start(TOptionArray *, unsigned long, TServiceInfo *) {
    /*
         eddf0:	e1a0c00d 	mov	ip, sp
         eddf4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         eddf8:	e24cb004 	sub	fp, ip, #4	; 0x4
         eddfc:	e1a07000 	mov	r7, r0
         ede00:	e1a06001 	mov	r6, r1
         ede04:	e1a05002 	mov	r5, r2
         ede08:	e1a04003 	mov	r4, r3
         ede0c:	e24dd008 	sub	sp, sp, #8	; 0x8
         ede10:	e3a00000 	mov	r0, #0	; 0x0
         ede14:	e5cd0004 	strb	r0, [sp, #4]
         ede18:	e58d0000 	str	r0, [sp]
         ede1c:	e1a0100d 	mov	r1, sp
         ede20:	e1a00002 	mov	r0, r2
         ede24:	eb6b33be 	bl	1bbad24 <$ServiceToPort(unsigned long, TUPort *)>
         ede28:	e1a08000 	mov	r8, r0
         ede2c:	e280cd9d 	add	ip, r0, #10048	; 0x2740
         ede30:	e37c0013 	cmn	ip, #19	; 0x13
         ede34:	1a00001e 	bne	edeb4 <TIrDAService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0xc4>
         ede38:	e24dde69 	sub	sp, sp, #1680	; 0x690
         ede3c:	e1a01005 	mov	r1, r5
         ede40:	e1a0000d 	mov	r0, sp
         ede44:	eb00002a 	bl	edef4 <TIrDATool::__ct(unsigned long)>
         ede48:	e1a02004 	mov	r2, r4
         ede4c:	e1a01005 	mov	r1, r5
         ede50:	e1a0000d 	mov	r0, sp
         ede54:	eb6b4c8e 	bl	1bc1094 <$StartCommTool(TCommTool *, unsigned long, TServiceInfo *)>
         ede58:	e1b08000 	movs	r8, r0
         ede5c:	0a000009 	beq	ede88 <TIrDAService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x98>
         ede60:	e1a0000d 	mov	r0, sp
         ede64:	e3a01000 	mov	r1, #0	; 0x0
         ede68:	e1a0e00f 	mov	lr, pc
         ede6c:	e59df000 	ldr	pc, [sp]
         ede70:	e28d0e69 	add	r0, sp, #1680	; 0x690
         ede74:	e3a01000 	mov	r1, #0	; 0x0
         ede78:	eb6b8229 	bl	1bce724 <TUObject::$__dt(void)>
         ede7c:	e28ddfa6 	add	sp, sp, #664	; 0x298
         ede80:	e28ddb01 	add	sp, sp, #1024	; 0x400
         ede84:	ea000016 	b	edee4 <TIrDAService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0xf4>
         ede88:	e1a02007 	mov	r2, r7
         ede8c:	e1a01006 	mov	r1, r6
         ede90:	e5b40004 	ldr	r0, [r4, #4]!
         ede94:	eb6b4863 	bl	1bc0028 <$OpenCommTool(unsigned long, TOptionArray *, TCMService *)>
         ede98:	e1a08000 	mov	r8, r0
         ede9c:	e1a0000d 	mov	r0, sp
         edea0:	e3a01000 	mov	r1, #0	; 0x0
         edea4:	e1a0e00f 	mov	lr, pc
         edea8:	e59df000 	ldr	pc, [sp]
         edeac:	e28dde69 	add	sp, sp, #1680	; 0x690
         edeb0:	ea000007 	b	eded4 <TIrDAService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0xe4>
         edeb4:	e3380000 	teq	r8, #0	; 0x0
         edeb8:	1a000005 	bne	eded4 <TIrDAService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0xe4>
         edebc:	e1a00004 	mov	r0, r4
         edec0:	e59d1000 	ldr	r1, [sp]
         edec4:	eb6b339c 	bl	1bbad3c <TServiceInfo::$SetPortId(unsigned long)>
         edec8:	e1a01005 	mov	r1, r5
         edecc:	e1a00004 	mov	r0, r4
         eded0:	eb6b339a 	bl	1bbad40 <TServiceInfo::$SetServiceId(unsigned long)>
         eded4:	e1a0000d 	mov	r0, sp
         eded8:	e3a01000 	mov	r1, #0	; 0x0
         ededc:	eb6b8210 	bl	1bce724 <TUObject::$__dt(void)>
         edee0:	e28dd008 	add	sp, sp, #8	; 0x8
         edee4:	e1a00008 	mov	r0, r8
         edee8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TIrDAService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)
 * Address: 000edeec
 */
TIrDAService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *) {
    /*
         edeec:	e5b10008 	ldr	r0, [r1, #8]!
         edef0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__12TIrDAServiceSFv
 * Address: 00382dec
 */
void TIrDAService::ClassInfo() {
    /*
        382dec:	e24f0044 	sub	r0, pc, #68	; 0x44
        382df0:	e1a0f00e 	mov	pc, lr
        382df4:	e3a00000 	mov	r0, #0	; 0x0
        382df8:	e1a0f00e 	mov	pc, lr
        382dfc:	54497244 	strplb	r7, [r9], -#580
        382e00:	41536572 	cmpmi	r3, r2, ror r5
        382e04:	76696365 	strvcbt	r6, [r9], -r5, ror #6
        382e08:	0054434d 	subeqs	r4, r4, sp, asr #6
        382e0c:	53657276 	cmnpl	r5, #1610612743	; 0x60000007
        382e10:	69636500 	stmvsdb	r3!, {r8, sl, sp, lr}^
        382e14:	73657276 	cmnvc	r5, #1610612743	; 0x60000007
        382e18:	00697264 	rsbeq	r7, r9, r4, ror #4
        382e1c:	61000000 	tstvs	r0, r0
        382e20:	00000000 	andeq	r0, r0, r0
        382e24:	eafffff0 	b	382dec <ClassInfo__12TIrDAServiceSFv>
        382e28:	eaf5abee 	b	edde8 <TIrDAService::New(void)>
        382e2c:	eaf5abee 	b	eddec <TIrDAService::Delete(void)>
        382e30:	ea5aae3e 	b	1a2e730 <TIrDAService::$Start(TOptionArray *, unsigned long, TServiceInfo *)>
        382e34:	eaf5ac2c 	b	edeec <TIrDAService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)>
        382e38:	00000000 	andeq	r0, r0, r0
        382e3c:	00000048 	andeq	r0, r0, r8, asr #32
        382e40:	0000004f 	andeq	r0, r0, pc, asr #32
        382e44:	00000056 	andeq	r0, r0, r6, asr r0
        382e48:	00000060 	andeq	r0, r0, r0, rrx
        382e4c:	00000074 	andeq	r0, r0, r4, ror r0
        382e50:	ea5a5ba2 	b	1a19ce0 <$Sizeof__10TIRServiceSFv>
        382e5c:	ea5a4703 	b	1a14a70 <TIRService::$New(void)>
        382e60:	ea5a2e41 	b	1a0e76c <TIRService::$Delete(void)>
        382e64:	00020000 	andeq	r0, r2, r0
        382e70:	ea000001 	b	382e7c <ClassInfo__10TIRServiceSFv+0x8>
    */
}

