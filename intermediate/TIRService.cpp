#include "include/TIRService.h"

/**
 * Symbol: Sizeof__10TIRServiceSFv
 * Address: 000e8f20
 */
void TIRService::Sizeof() {
    /*
         e8f20:	e3a00010 	mov	r0, #16	; 0x10
         e8f24:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIRService::New(void)
 * Address: 000e8f28
 */
TIRService::New(void) {
    /*
         e8f28:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIRService::Delete(void)
 * Address: 000e8f2c
 */
TIRService::Delete(void) {
    /*
         e8f2c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIRService::Start(TOptionArray *, unsigned long, TServiceInfo *)
 * Address: 000e8f30
 */
TIRService::Start(TOptionArray *, unsigned long, TServiceInfo *) {
    /*
         e8f30:	e1a0c00d 	mov	ip, sp
         e8f34:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         e8f38:	e24cb004 	sub	fp, ip, #4	; 0x4
         e8f3c:	e1a07000 	mov	r7, r0
         e8f40:	e1a06001 	mov	r6, r1
         e8f44:	e1a05002 	mov	r5, r2
         e8f48:	e1a04003 	mov	r4, r3
         e8f4c:	e24dd008 	sub	sp, sp, #8	; 0x8
         e8f50:	e3a00000 	mov	r0, #0	; 0x0
         e8f54:	e5cd0004 	strb	r0, [sp, #4]
         e8f58:	e58d0000 	str	r0, [sp]
         e8f5c:	e1a0100d 	mov	r1, sp
         e8f60:	e1a00002 	mov	r0, r2
         e8f64:	eb6b476e 	bl	1bbad24 <$ServiceToPort(unsigned long, TUPort *)>
         e8f68:	e1a08000 	mov	r8, r0
         e8f6c:	e280cd9d 	add	ip, r0, #10048	; 0x2740
         e8f70:	e37c0013 	cmn	ip, #19	; 0x13
         e8f74:	1a00001e 	bne	e8ff4 <TIRService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0xc4>
         e8f78:	e24dde79 	sub	sp, sp, #1936	; 0x790
         e8f7c:	e1a01005 	mov	r1, r5
         e8f80:	e1a0000d 	mov	r0, sp
         e8f84:	eb648151 	bl	1a094d0 <TSharpIRTool::$__ct(unsigned long)>
         e8f88:	e1a02004 	mov	r2, r4
         e8f8c:	e1a01005 	mov	r1, r5
         e8f90:	e1a0000d 	mov	r0, sp
         e8f94:	eb6b603e 	bl	1bc1094 <$StartCommTool(TCommTool *, unsigned long, TServiceInfo *)>
         e8f98:	e1b08000 	movs	r8, r0
         e8f9c:	0a000009 	beq	e8fc8 <TIRService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x98>
         e8fa0:	e1a0000d 	mov	r0, sp
         e8fa4:	e3a01000 	mov	r1, #0	; 0x0
         e8fa8:	e1a0e00f 	mov	lr, pc
         e8fac:	e59df000 	ldr	pc, [sp]
         e8fb0:	e28d0e79 	add	r0, sp, #1936	; 0x790
         e8fb4:	e3a01000 	mov	r1, #0	; 0x0
         e8fb8:	eb6b95d9 	bl	1bce724 <TUObject::$__dt(void)>
         e8fbc:	e28ddfe6 	add	sp, sp, #920	; 0x398
         e8fc0:	e28ddb01 	add	sp, sp, #1024	; 0x400
         e8fc4:	ea000016 	b	e9024 <TIRService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0xf4>
         e8fc8:	e1a02007 	mov	r2, r7
         e8fcc:	e1a01006 	mov	r1, r6
         e8fd0:	e5b40004 	ldr	r0, [r4, #4]!
         e8fd4:	eb6b5c13 	bl	1bc0028 <$OpenCommTool(unsigned long, TOptionArray *, TCMService *)>
         e8fd8:	e1a08000 	mov	r8, r0
         e8fdc:	e1a0000d 	mov	r0, sp
         e8fe0:	e3a01000 	mov	r1, #0	; 0x0
         e8fe4:	e1a0e00f 	mov	lr, pc
         e8fe8:	e59df000 	ldr	pc, [sp]
         e8fec:	e28dde79 	add	sp, sp, #1936	; 0x790
         e8ff0:	ea000007 	b	e9014 <TIRService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0xe4>
         e8ff4:	e3380000 	teq	r8, #0	; 0x0
         e8ff8:	1a000005 	bne	e9014 <TIRService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0xe4>
         e8ffc:	e1a00004 	mov	r0, r4
         e9000:	e59d1000 	ldr	r1, [sp]
         e9004:	eb6b474c 	bl	1bbad3c <TServiceInfo::$SetPortId(unsigned long)>
         e9008:	e1a01005 	mov	r1, r5
         e900c:	e1a00004 	mov	r0, r4
         e9010:	eb6b474a 	bl	1bbad40 <TServiceInfo::$SetServiceId(unsigned long)>
         e9014:	e1a0000d 	mov	r0, sp
         e9018:	e3a01000 	mov	r1, #0	; 0x0
         e901c:	eb6b95c0 	bl	1bce724 <TUObject::$__dt(void)>
         e9020:	e28dd008 	add	sp, sp, #8	; 0x8
         e9024:	e1a00008 	mov	r0, r8
         e9028:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TIRService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)
 * Address: 000e902c
 */
TIRService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *) {
    /*
         e902c:	e5b10008 	ldr	r0, [r1, #8]!
         e9030:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__10TIRServiceSFv
 * Address: 00382e74
 */
void TIRService::ClassInfo() {
    /*
        382e74:	e24f0044 	sub	r0, pc, #68	; 0x44
        382e78:	e1a0f00e 	mov	pc, lr
        382e7c:	e3a00000 	mov	r0, #0	; 0x0
        382e80:	e1a0f00e 	mov	pc, lr
        382e84:	54495253 	strplb	r5, [r9], -#595
        382e88:	65727669 	ldrvsb	r7, [r2, -#1641]!
        382e8c:	63650054 	cmnvs	r5, #84	; 0x54
        382e90:	434d5365 	cmpmi	sp, #-1811939327	; 0x94000001
        382e94:	72766963 	rsbvcs	r6, r6, #1622016	; 0x18c000
        382e98:	65007365 	strvs	r7, [r0, -#869]	; fField869
        382e9c:	72760073 	rsbvcs	r0, r6, #115	; 0x73
        382ea0:	6c697200 	sfmvs	f7, 2, [r9]
        382eac:	eafffff0 	b	382e74 <ClassInfo__10TIRServiceSFv>
        382eb0:	ea5a46ee 	b	1a14a70 <TIRService::$New(void)>
        382eb4:	ea5a2e2c 	b	1a0e76c <TIRService::$Delete(void)>
        382eb8:	ea5a5f93 	b	1a1ad0c <TIRService::$Start(TOptionArray *, unsigned long, TServiceInfo *)>
        382ebc:	ea5a3247 	b	1a0f7e0 <TIRService::$DoneStarting(TAEvent *, unsigned long, TServiceInfo *)>
        382ec0:	00000000 	andeq	r0, r0, r0
        382ec4:	00000048 	andeq	r0, r0, r8, asr #32
        382ec8:	00000053 	andeq	r0, r0, r3, asr r0
        382ecc:	0000005a 	andeq	r0, r0, sl, asr r0
        382ed0:	00000064 	andeq	r0, r0, r4, rrx
        382ed4:	00000078 	andeq	r0, r0, r8, ror r0
        382ed8:	eaf59855 	b	e9034 <Sizeof__14IRSniffServiceSFv>
        382ee4:	eaf59854 	b	e903c <IRSniffService::New(void)>
        382ee8:	eaf59854 	b	e9040 <IRSniffService::Delete(void)>
        382eec:	00020000 	andeq	r0, r2, r0
        382ef8:	ea000001 	b	382f04 <ClassInfo__14IRSniffServiceSFv+0x8>
    */
}

