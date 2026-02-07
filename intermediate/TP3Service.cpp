#include "include/TP3Service.h"

/**
 * Symbol: Sizeof__10TP3ServiceSFv
 * Address: 0014ef50
 */
void TP3Service::Sizeof() {
    /*
        14ef50:	e3a00010 	mov	r0, #16	; 0x10
        14ef54:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TP3Service::New(void)
 * Address: 0014ef58
 */
TP3Service::New(void) {
    /*
        14ef58:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TP3Service::Delete(void)
 * Address: 0014ef5c
 */
TP3Service::Delete(void) {
    /*
        14ef5c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TP3Service::Start(TOptionArray *, unsigned long, TServiceInfo *)
 * Address: 0014ef60
 */
TP3Service::Start(TOptionArray *, unsigned long, TServiceInfo *) {
    /*
        14ef60:	e1a0c00d 	mov	ip, sp
        14ef64:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        14ef68:	e24cb004 	sub	fp, ip, #4	; 0x4
        14ef6c:	e1a07000 	mov	r7, r0
        14ef70:	e1a06001 	mov	r6, r1
        14ef74:	e1a05002 	mov	r5, r2
        14ef78:	e1a04003 	mov	r4, r3
        14ef7c:	e24ddfc2 	sub	sp, sp, #776	; 0x308
        14ef80:	e24ddb07 	sub	sp, sp, #7168	; 0x1c00
        14ef84:	e1a01002 	mov	r1, r2
        14ef88:	e1a0000d 	mov	r0, sp
        14ef8c:	eb62e958 	bl	1a094f4 <TP3Tool::$__ct(unsigned long)>
        14ef90:	e1a02004 	mov	r2, r4
        14ef94:	e1a01005 	mov	r1, r5
        14ef98:	e1a0000d 	mov	r0, sp
        14ef9c:	eb69c83c 	bl	1bc1094 <$StartCommTool(TCommTool *, unsigned long, TServiceInfo *)>
        14efa0:	e1b05000 	movs	r5, r0
        14efa4:	1a000004 	bne	14efbc <TP3Service::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x5c>
        14efa8:	e1a02007 	mov	r2, r7
        14efac:	e1a01006 	mov	r1, r6
        14efb0:	e5b40004 	ldr	r0, [r4, #4]!
        14efb4:	eb69c41b 	bl	1bc0028 <$OpenCommTool(unsigned long, TOptionArray *, TCMService *)>
        14efb8:	e1a05000 	mov	r5, r0
        14efbc:	e1a0000d 	mov	r0, sp
        14efc0:	e3a01000 	mov	r1, #0	; 0x0
        14efc4:	e1a0e00f 	mov	lr, pc
        14efc8:	e59df000 	ldr	pc, [sp]
        14efcc:	e1a00005 	mov	r0, r5
        14efd0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TP3Service::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)
 * Address: 0014efd4
 */
TP3Service::DoneStarting(TAEvent *, unsigned long, TServiceInfo *) {
    /*
        14efd4:	e5b10008 	ldr	r0, [r1, #8]!
        14efd8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__10TP3ServiceSFv
 * Address: 003832d4
 */
void TP3Service::ClassInfo() {
    /*
        3832d4:	e24f0044 	sub	r0, pc, #68	; 0x44
        3832d8:	e1a0f00e 	mov	pc, lr
        3832dc:	e3a00000 	mov	r0, #0	; 0x0
        3832e0:	e1a0f00e 	mov	pc, lr
        3832e4:	54503353 	ldrplb	r3, [r0], -#851	; fField851
        3832e8:	65727669 	ldrvsb	r7, [r2, -#1641]!
        3832ec:	63650054 	cmnvs	r5, #84	; 0x54
        3832f0:	434d5365 	cmpmi	sp, #-1811939327	; 0x94000001
        3832f4:	72766963 	rsbvcs	r6, r6, #1622016	; 0x18c000
        3832f8:	65007665 	strvs	r7, [r0, -#1637]	; fField1637
        3832fc:	726e0031 	rsbvc	r0, lr, #49	; 0x31
        383300:	00736572 	rsbeqs	r6, r3, r2, ror r5
        383304:	76007033 	undefined
        383308:	20200000 	eorcs	r0, r0, r0
        38330c:	00000000 	andeq	r0, r0, r0
        383310:	eaffffef 	b	3832d4 <ClassInfo__10TP3ServiceSFv>
        383314:	ea5a45d6 	b	1a14a74 <TP3Service::$New(void)>
        383318:	ea5a2d14 	b	1a0e770 <TP3Service::$Delete(void)>
        38331c:	ea5a5e7b 	b	1a1ad10 <TP3Service::$Start(TOptionArray *, unsigned long, TServiceInfo *)>
        383320:	ea5a312f 	b	1a0f7e4 <TP3Service::$DoneStarting(TAEvent *, unsigned long, TServiceInfo *)>
        383324:	00000000 	andeq	r0, r0, r0
        383328:	00000048 	andeq	r0, r0, r8, asr #32
        38332c:	00000054 	andeq	r0, r0, r4, asr r0
        383330:	0000005a 	andeq	r0, r0, sl, asr r0
        383334:	00000058 	andeq	r0, r0, r8, asr r0
        383338:	000000f8 	streqd	r0, [r0], -r8
        38333c:	ea5a5a6d 	b	1a19cf8 <$Sizeof__15TSerialEndpointSFv>
        383348:	ea5a49ce 	b	1a15a88 <TSerialEndpoint::$New(void)>
        38334c:	ea5a310c 	b	1a0f784 <TSerialEndpoint::$Delete(void)>
        38335c:	ea000001 	b	383368 <ClassInfo__15TSerialEndpointSFv+0x8>
    */
}

