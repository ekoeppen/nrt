#include "include/TLocalTalkService.h"

/**
 * Symbol: Sizeof__17TLocalTalkServiceSFv
 * Address: 00114698
 */
void TLocalTalkService::Sizeof() {
    /*
        114698:	e3a00010 	mov	r0, #16	; 0x10
        11469c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLocalTalkService::New(void)
 * Address: 001146a0
 */
TLocalTalkService::New(void) {
    /*
        1146a0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLocalTalkService::Delete(void)
 * Address: 001146a4
 */
TLocalTalkService::Delete(void) {
    /*
        1146a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLocalTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)
 * Address: 001146a8
 */
TLocalTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *) {
    /*
        1146a8:	e1a0c00d 	mov	ip, sp
        1146ac:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1146b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1146b4:	e1a07000 	mov	r7, r0
        1146b8:	e1a06001 	mov	r6, r1
        1146bc:	e1a05002 	mov	r5, r2
        1146c0:	e1a04003 	mov	r4, r3
        1146c4:	e24dd038 	sub	sp, sp, #56	; 0x38
        1146c8:	e24ddb01 	sub	sp, sp, #1024	; 0x400
        1146cc:	e1a01002 	mov	r1, r2
        1146d0:	e1a0000d 	mov	r0, sp
        1146d4:	ebfffec1 	bl	1141e0 <TLocalTalkTool::__ct(unsigned long)>
        1146d8:	e1a02004 	mov	r2, r4
        1146dc:	e1a01005 	mov	r1, r5
        1146e0:	e1a0000d 	mov	r0, sp
        1146e4:	eb6ab26a 	bl	1bc1094 <$StartCommTool(TCommTool *, unsigned long, TServiceInfo *)>
        1146e8:	e1b05000 	movs	r5, r0
        1146ec:	1a000004 	bne	114704 <TLocalTalkService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x5c>
        1146f0:	e1a02007 	mov	r2, r7
        1146f4:	e1a01006 	mov	r1, r6
        1146f8:	e5b40004 	ldr	r0, [r4, #4]!
        1146fc:	eb6aae49 	bl	1bc0028 <$OpenCommTool(unsigned long, TOptionArray *, TCMService *)>
        114700:	e1a05000 	mov	r5, r0
        114704:	e1a0000d 	mov	r0, sp
        114708:	e3a01000 	mov	r1, #0	; 0x0
        11470c:	e1a0e00f 	mov	lr, pc
        114710:	e59df000 	ldr	pc, [sp]
        114714:	e1a00005 	mov	r0, r5
        114718:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TLocalTalkService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)
 * Address: 0011471c
 */
TLocalTalkService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *) {
    /*
        11471c:	e5b10008 	ldr	r0, [r1, #8]!
        114720:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__17TLocalTalkServiceSFv
 * Address: 00383138
 */
void TLocalTalkService::ClassInfo() {
    /*
        383138:	e24f0044 	sub	r0, pc, #68	; 0x44
        38313c:	e1a0f00e 	mov	pc, lr
        383140:	e3a00000 	mov	r0, #0	; 0x0
        383144:	e1a0f00e 	mov	pc, lr
        383148:	544c6f63 	strplb	r6, [ip], -#3939
        38314c:	616c5461 	cmnvs	ip, r1, ror #8
        383150:	6c6b5365 	stcvsl	3, cr5, [fp], -#404
        383154:	72766963 	rsbvcs	r6, r6, #1622016	; 0x18c000
        383158:	65005443 	strvs	r5, [r0, -#1091]	; fField1091
        38315c:	4d536572 	ldcmil	5, cr6, [r3, -#456]
        383160:	76696365 	strvcbt	r6, [r9], -r5, ror #6
        383164:	00736572 	rsbeqs	r6, r3, r2, ror r5
        383168:	76006c74 	undefined
        38316c:	6c6b0000 	stcvsl	0, cr0, [fp]
        383170:	00000000 	andeq	r0, r0, r0
        383174:	eaffffef 	b	383138 <ClassInfo__17TLocalTalkServiceSFv>
        383178:	eaf64548 	b	1146a0 <TLocalTalkService::New(void)>
        38317c:	eaf64548 	b	1146a4 <TLocalTalkService::Delete(void)>
        383180:	ea5a7bdf 	b	1a22104 <TLocalTalkService::$Start(TOptionArray *, unsigned long, TServiceInfo *)>
        383184:	eaf64564 	b	11471c <TLocalTalkService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)>
        383188:	00000000 	andeq	r0, r0, r0
        38318c:	00000048 	andeq	r0, r0, r8, asr #32
        383190:	00000050 	andeq	r0, r0, r0, asr r0
        383194:	00000057 	andeq	r0, r0, r7, asr r0
        383198:	00000060 	andeq	r0, r0, r0, rrx
        38319c:	00000074 	andeq	r0, r0, r4, ror r0
        3831a0:	ea5a5ad1 	b	1a19cec <$Sizeof__11TMNPServiceSFv>
        3831ac:	ea5a4632 	b	1a14a7c <TMNPService::$New(void)>
        3831b0:	ea5a2d70 	b	1a0e778 <TMNPService::$Delete(void)>
        3831b4:	00020000 	andeq	r0, r2, r0
        3831c0:	ea000001 	b	3831cc <ClassInfo__11TMNPServiceSFv+0x8>
    */
}

