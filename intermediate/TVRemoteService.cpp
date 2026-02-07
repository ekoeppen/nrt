#include "include/TVRemoteService.h"

/**
 * Symbol: Sizeof__15TVRemoteServiceSFv
 * Address: 0022eaa0
 */
void TVRemoteService::Sizeof() {
    /*
        22eaa0:	e3a00010 	mov	r0, #16	; 0x10
        22eaa4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TVRemoteService::New(void)
 * Address: 0022eaa8
 */
TVRemoteService::New(void) {
    /*
        22eaa8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TVRemoteService::Delete(void)
 * Address: 0022eaac
 */
TVRemoteService::Delete(void) {
    /*
        22eaac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TVRemoteService::Start(TOptionArray *, unsigned long, TServiceInfo *)
 * Address: 0022eab0
 */
TVRemoteService::Start(TOptionArray *, unsigned long, TServiceInfo *) {
    /*
        22eab0:	e1a0c00d 	mov	ip, sp
        22eab4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        22eab8:	e24cb004 	sub	fp, ip, #4	; 0x4
        22eabc:	e1a07000 	mov	r7, r0
        22eac0:	e1a06001 	mov	r6, r1
        22eac4:	e1a05002 	mov	r5, r2
        22eac8:	e1a04003 	mov	r4, r3
        22eacc:	e24dde4d 	sub	sp, sp, #1232	; 0x4d0
        22ead0:	e1a01002 	mov	r1, r2
        22ead4:	e1a0000d 	mov	r0, sp
        22ead8:	ebfffecf 	bl	22e61c <TVRemoteIRTool::__ct(unsigned long)>
        22eadc:	e1a02004 	mov	r2, r4
        22eae0:	e1a01005 	mov	r1, r5
        22eae4:	e1a0000d 	mov	r0, sp
        22eae8:	eb664969 	bl	1bc1094 <$StartCommTool(TCommTool *, unsigned long, TServiceInfo *)>
        22eaec:	e1b05000 	movs	r5, r0
        22eaf0:	1a000004 	bne	22eb08 <TVRemoteService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x58>
        22eaf4:	e1a02007 	mov	r2, r7
        22eaf8:	e1a01006 	mov	r1, r6
        22eafc:	e5b40004 	ldr	r0, [r4, #4]!
        22eb00:	eb664548 	bl	1bc0028 <$OpenCommTool(unsigned long, TOptionArray *, TCMService *)>
        22eb04:	e1a05000 	mov	r5, r0
        22eb08:	e1a0000d 	mov	r0, sp
        22eb0c:	e3a01000 	mov	r1, #0	; 0x0
        22eb10:	e1a0e00f 	mov	lr, pc
        22eb14:	e59df000 	ldr	pc, [sp]
        22eb18:	e1a00005 	mov	r0, r5
        22eb1c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TVRemoteService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)
 * Address: 0022eb20
 */
TVRemoteService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *) {
    /*
        22eb20:	e5b10008 	ldr	r0, [r1, #8]!
        22eb24:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__15TVRemoteServiceSFv
 * Address: 00383014
 */
void TVRemoteService::ClassInfo() {
    /*
        383014:	e24f0044 	sub	r0, pc, #68	; 0x44
        383018:	e1a0f00e 	mov	pc, lr
        38301c:	e3a00000 	mov	r0, #0	; 0x0
        383020:	e1a0f00e 	mov	pc, lr
        383024:	54565265 	ldrplb	r5, [r6], -#613
        383028:	6d6f7465 	stcvsl	4, cr7, [pc, -#404]!
        38302c:	53657276 	cmnpl	r5, #1610612743	; 0x60000007
        383030:	69636500 	stmvsdb	r3!, {r8, sl, sp, lr}^
        383034:	54434d53 	strplb	r4, [r3], -#3411
        383038:	65727669 	ldrvsb	r7, [r2, -#1641]!
        38303c:	63650073 	cmnvs	r5, #115	; 0x73
        383040:	65727600 	ldrvsb	r7, [r2, -#1536]!
        383044:	74766972 	ldrvcbt	r6, [r6], -#2418
        383050:	eaffffef 	b	383014 <ClassInfo__15TVRemoteServiceSFv>
        383054:	eafaae93 	b	22eaa8 <TVRemoteService::New(void)>
        383058:	eafaae93 	b	22eaac <TVRemoteService::Delete(void)>
        38305c:	ea5a7826 	b	1a210fc <TVRemoteService::$Start(TOptionArray *, unsigned long, TServiceInfo *)>
        383060:	eafaaeae 	b	22eb20 <TVRemoteService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)>
        383064:	00000000 	andeq	r0, r0, r0
        383068:	00000048 	andeq	r0, r0, r8, asr #32
        38306c:	00000055 	andeq	r0, r0, r5, asr r0
        383070:	0000005c 	andeq	r0, r0, ip, asr r0
        383074:	00000070 	andeq	r0, r0, r0, ror r0
        383078:	00000084 	andeq	r0, r0, r4, lsl #1
        38307c:	eaf5dc24 	b	fa114 <Sizeof__16TKeyboardServiceSFv>
        383088:	eaf5dc23 	b	fa11c <TKeyboardService::New(void)>
        38308c:	eaf5dc23 	b	fa120 <TKeyboardService::Delete(void)>
        38309c:	ea000001 	b	3830a8 <ClassInfo__16TKeyboardServiceSFv+0x8>
    */
}

