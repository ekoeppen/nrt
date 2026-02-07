#include "include/TMNPService.h"

/**
 * Symbol: Sizeof__11TMNPServiceSFv
 * Address: 001197d0
 */
void TMNPService::Sizeof() {
    /*
        1197d0:	e3a00010 	mov	r0, #16	; 0x10
        1197d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMNPService::New(void)
 * Address: 001197d8
 */
TMNPService::New(void) {
    /*
        1197d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMNPService::Delete(void)
 * Address: 001197dc
 */
TMNPService::Delete(void) {
    /*
        1197dc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMNPService::Start(TOptionArray *, unsigned long, TServiceInfo *)
 * Address: 001197e0
 */
TMNPService::Start(TOptionArray *, unsigned long, TServiceInfo *) {
    /*
        1197e0:	e1a0c00d 	mov	ip, sp
        1197e4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1197e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1197ec:	e1a07000 	mov	r7, r0
        1197f0:	e1a06001 	mov	r6, r1
        1197f4:	e1a05002 	mov	r5, r2
        1197f8:	e1a04003 	mov	r4, r3
        1197fc:	e24dde5b 	sub	sp, sp, #1456	; 0x5b0
        119800:	e1a01002 	mov	r1, r2
        119804:	e1a0000d 	mov	r0, sp
        119808:	eb63bf38 	bl	1a094f0 <TMNP::$__ct(unsigned long)>
        11980c:	e1a02004 	mov	r2, r4
        119810:	e1a01005 	mov	r1, r5
        119814:	e1a0000d 	mov	r0, sp
        119818:	eb6a9e1d 	bl	1bc1094 <$StartCommTool(TCommTool *, unsigned long, TServiceInfo *)>
        11981c:	e1b05000 	movs	r5, r0
        119820:	1a000004 	bne	119838 <TMNPService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x58>
        119824:	e1a02007 	mov	r2, r7
        119828:	e1a01006 	mov	r1, r6
        11982c:	e5b40004 	ldr	r0, [r4, #4]!
        119830:	eb6a99fc 	bl	1bc0028 <$OpenCommTool(unsigned long, TOptionArray *, TCMService *)>
        119834:	e1a05000 	mov	r5, r0
        119838:	e1a0000d 	mov	r0, sp
        11983c:	e3a01000 	mov	r1, #0	; 0x0
        119840:	e1a0e00f 	mov	lr, pc
        119844:	e59df000 	ldr	pc, [sp]
        119848:	e1a00005 	mov	r0, r5
        11984c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMNPService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)
 * Address: 00119850
 */
TMNPService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *) {
    /*
        119850:	e5b10008 	ldr	r0, [r1, #8]!
        119854:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__11TMNPServiceSFv
 * Address: 003831c4
 */
void TMNPService::ClassInfo() {
    /*
        3831c4:	e24f0044 	sub	r0, pc, #68	; 0x44
        3831c8:	e1a0f00e 	mov	pc, lr
        3831cc:	e3a00000 	mov	r0, #0	; 0x0
        3831d0:	e1a0f00e 	mov	pc, lr
        3831d4:	544d4e50 	strplb	r4, [sp], -#3664
        3831d8:	53657276 	cmnpl	r5, #1610612743	; 0x60000007
        3831dc:	69636500 	stmvsdb	r3!, {r8, sl, sp, lr}^
        3831e0:	54434d53 	strplb	r4, [r3], -#3411
        3831e4:	65727669 	ldrvsb	r7, [r2, -#1641]!
        3831e8:	63650073 	cmnvs	r5, #115	; 0x73
        3831ec:	65727600 	ldrvsb	r7, [r2, -#1536]!
        3831f0:	6d6e7073 	stcvsl	0, cr7, [lr, -#460]!
        3831fc:	eafffff0 	b	3831c4 <ClassInfo__11TMNPServiceSFv>
        383200:	ea5a461d 	b	1a14a7c <TMNPService::$New(void)>
        383204:	ea5a2d5b 	b	1a0e778 <TMNPService::$Delete(void)>
        383208:	ea5a5ec2 	b	1a1ad18 <TMNPService::$Start(TOptionArray *, unsigned long, TServiceInfo *)>
        38320c:	ea5a3176 	b	1a0f7ec <TMNPService::$DoneStarting(TAEvent *, unsigned long, TServiceInfo *)>
        383210:	00000000 	andeq	r0, r0, r0
        383214:	00000048 	andeq	r0, r0, r8, asr #32
        383218:	00000052 	andeq	r0, r0, r2, asr r0
        38321c:	00000059 	andeq	r0, r0, r9, asr r0
        383220:	00000060 	andeq	r0, r0, r0, rrx
        383224:	00000074 	andeq	r0, r0, r4, ror r0
        383228:	ea5a5ab1 	b	1a19cf4 <$Sizeof__13TModemServiceSFv>
        383234:	ea5a4a12 	b	1a15a84 <TModemService::$New(void)>
        383238:	ea5a3150 	b	1a0f780 <TModemService::$Delete(void)>
        38323c:	00020000 	andeq	r0, r2, r0
        383248:	ea000001 	b	383254 <ClassInfo__13TModemServiceSFv+0x8>
    */
}

