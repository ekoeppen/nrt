#include "include/TKeyboardService.h"

/**
 * Symbol: Sizeof__16TKeyboardServiceSFv
 * Address: 000fa114
 */
void TKeyboardService::Sizeof() {
    /*
         fa114:	e3a00010 	mov	r0, #16	; 0x10
         fa118:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TKeyboardService::New(void)
 * Address: 000fa11c
 */
TKeyboardService::New(void) {
    /*
         fa11c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TKeyboardService::Delete(void)
 * Address: 000fa120
 */
TKeyboardService::Delete(void) {
    /*
         fa120:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TKeyboardService::Start(TOptionArray *, unsigned long, TServiceInfo *)
 * Address: 000fa124
 */
TKeyboardService::Start(TOptionArray *, unsigned long, TServiceInfo *) {
    /*
         fa124:	e1a0c00d 	mov	ip, sp
         fa128:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         fa12c:	e24cb004 	sub	fp, ip, #4	; 0x4
         fa130:	e1a07000 	mov	r7, r0
         fa134:	e1a06001 	mov	r6, r1
         fa138:	e1a05002 	mov	r5, r2
         fa13c:	e1a04003 	mov	r4, r3
         fa140:	e24ddf4f 	sub	sp, sp, #316	; 0x13c
         fa144:	e24ddb01 	sub	sp, sp, #1024	; 0x400
         fa148:	e1a01002 	mov	r1, r2
         fa14c:	e1a0000d 	mov	r0, sp
         fa150:	eb000012 	bl	fa1a0 <TKeyboardTool::__ct(unsigned long)>
         fa154:	e1a02004 	mov	r2, r4
         fa158:	e1a01005 	mov	r1, r5
         fa15c:	e1a0000d 	mov	r0, sp
         fa160:	eb6b1bcb 	bl	1bc1094 <$StartCommTool(TCommTool *, unsigned long, TServiceInfo *)>
         fa164:	e1b05000 	movs	r5, r0
         fa168:	1a000004 	bne	fa180 <TKeyboardService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x5c>
         fa16c:	e1a02007 	mov	r2, r7
         fa170:	e1a01006 	mov	r1, r6
         fa174:	e5b40004 	ldr	r0, [r4, #4]!
         fa178:	eb6b17aa 	bl	1bc0028 <$OpenCommTool(unsigned long, TOptionArray *, TCMService *)>
         fa17c:	e1a05000 	mov	r5, r0
         fa180:	e1a0000d 	mov	r0, sp
         fa184:	e3a01000 	mov	r1, #0	; 0x0
         fa188:	e1a0e00f 	mov	lr, pc
         fa18c:	e59df000 	ldr	pc, [sp]
         fa190:	e1a00005 	mov	r0, r5
         fa194:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)
 * Address: 000fa198
 */
TKeyboardService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *) {
    /*
         fa198:	e5b10008 	ldr	r0, [r1, #8]!
         fa19c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__16TKeyboardServiceSFv
 * Address: 003830a0
 */
void TKeyboardService::ClassInfo() {
    /*
        3830a0:	e24f0044 	sub	r0, pc, #68	; 0x44
        3830a4:	e1a0f00e 	mov	pc, lr
        3830a8:	e3a00000 	mov	r0, #0	; 0x0
        3830ac:	e1a0f00e 	mov	pc, lr
        3830b0:	544b6579 	strplb	r6, [fp], -#1401
        3830b4:	626f6172 	rsbvs	r6, pc, #-2147483620	; 0x8000001c
        3830b8:	64536572 	ldrvsb	r6, [r3], -#1394
        3830bc:	76696365 	strvcbt	r6, [r9], -r5, ror #6
        3830c0:	0054434d 	subeqs	r4, r4, sp, asr #6
        3830c4:	53657276 	cmnpl	r5, #1610612743	; 0x60000007
        3830c8:	69636500 	stmvsdb	r3!, {r8, sl, sp, lr}^
        3830cc:	6175746f 	cmnvs	r5, pc, ror #8
        3830d0:	00007665 	andeq	r7, r0, r5, ror #12
        3830d4:	726e0031 	rsbvc	r0, lr, #49	; 0x31
        3830d8:	00736572 	rsbeqs	r6, r3, r2, ror r5
        3830dc:	76006b79 	undefined
        3830e0:	62640000 	rsbvs	r0, r4, #0	; 0x0
        3830e4:	00000000 	andeq	r0, r0, r0
        3830e8:	eaffffec 	b	3830a0 <ClassInfo__16TKeyboardServiceSFv>
        3830ec:	eaf5dc0a 	b	fa11c <TKeyboardService::New(void)>
        3830f0:	eaf5dc0a 	b	fa120 <TKeyboardService::Delete(void)>
        3830f4:	ea5a7c01 	b	1a22100 <TKeyboardService::$Start(TOptionArray *, unsigned long, TServiceInfo *)>
        3830f8:	eaf5dc26 	b	fa198 <TKeyboardService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)>
        3830fc:	00000000 	andeq	r0, r0, r0
        383100:	00000048 	andeq	r0, r0, r8, asr #32
        383104:	00000056 	andeq	r0, r0, r6, asr r0
        383108:	0000005d 	andeq	r0, r0, sp, asr r0
        38310c:	00000064 	andeq	r0, r0, r4, rrx
        383110:	00000078 	andeq	r0, r0, r8, ror r0
        383114:	eaf6455f 	b	114698 <Sizeof__17TLocalTalkServiceSFv>
        383120:	eaf6455e 	b	1146a0 <TLocalTalkService::New(void)>
        383124:	eaf6455e 	b	1146a4 <TLocalTalkService::Delete(void)>
        383128:	00020000 	andeq	r0, r2, r0
        383134:	ea000001 	b	383140 <ClassInfo__17TLocalTalkServiceSFv+0x8>
    */
}

