#include "include/IRSniffService.h"

/**
 * Symbol: Sizeof__14IRSniffServiceSFv
 * Address: 000e9034
 */
void IRSniffService::Sizeof() {
    /*
         e9034:	e3a00010 	mov	r0, #16	; 0x10
         e9038:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: IRSniffService::New(void)
 * Address: 000e903c
 */
IRSniffService::New(void) {
    /*
         e903c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: IRSniffService::Delete(void)
 * Address: 000e9040
 */
IRSniffService::Delete(void) {
    /*
         e9040:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: IRSniffService::Start(TOptionArray *, unsigned long, TServiceInfo *)
 * Address: 000e9044
 */
IRSniffService::Start(TOptionArray *, unsigned long, TServiceInfo *) {
    /*
         e9044:	e1a0c00d 	mov	ip, sp
         e9048:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         e904c:	e24cb004 	sub	fp, ip, #4	; 0x4
         e9050:	e1a07000 	mov	r7, r0
         e9054:	e1a06001 	mov	r6, r1
         e9058:	e1a05002 	mov	r5, r2
         e905c:	e1a04003 	mov	r4, r3
         e9060:	e24dd0c8 	sub	sp, sp, #200	; 0xc8
         e9064:	e24ddb01 	sub	sp, sp, #1024	; 0x400
         e9068:	e1a01002 	mov	r1, r2
         e906c:	e1a0000d 	mov	r0, sp
         e9070:	eb03e6f9 	bl	1e2c5c <TSniffIRTool::__ct(unsigned long)>
         e9074:	e1a02004 	mov	r2, r4
         e9078:	e1a01005 	mov	r1, r5
         e907c:	e1a0000d 	mov	r0, sp
         e9080:	eb6b6003 	bl	1bc1094 <$StartCommTool(TCommTool *, unsigned long, TServiceInfo *)>
         e9084:	e1b05000 	movs	r5, r0
         e9088:	1a000004 	bne	e90a0 <IRSniffService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x5c>
         e908c:	e1a02007 	mov	r2, r7
         e9090:	e1a01006 	mov	r1, r6
         e9094:	e5b40004 	ldr	r0, [r4, #4]!
         e9098:	eb6b5be2 	bl	1bc0028 <$OpenCommTool(unsigned long, TOptionArray *, TCMService *)>
         e909c:	e1a05000 	mov	r5, r0
         e90a0:	e1a0000d 	mov	r0, sp
         e90a4:	e3a01000 	mov	r1, #0	; 0x0
         e90a8:	e1a0e00f 	mov	lr, pc
         e90ac:	e59df000 	ldr	pc, [sp]
         e90b0:	e1a00005 	mov	r0, r5
         e90b4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: IRSniffService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)
 * Address: 000e90b8
 */
IRSniffService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *) {
    /*
         e90b8:	e5b10008 	ldr	r0, [r1, #8]!
         e90bc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__14IRSniffServiceSFv
 * Address: 00382efc
 */
void IRSniffService::ClassInfo() {
    /*
        382efc:	e24f0044 	sub	r0, pc, #68	; 0x44
        382f00:	e1a0f00e 	mov	pc, lr
        382f04:	e3a00000 	mov	r0, #0	; 0x0
        382f08:	e1a0f00e 	mov	pc, lr
        382f0c:	4952536e 	ldmmidb	r2, {r1, r2, r3, r5, r6, r8, r9, ip, lr}^
        382f10:	69666653 	stmvsdb	r6!, {r0, r1, r4, r6, r9, sl, sp, lr}^
        382f14:	65727669 	ldrvsb	r7, [r2, -#1641]!
        382f18:	63650054 	cmnvs	r5, #84	; 0x54
        382f1c:	434d5365 	cmpmi	sp, #-1811939327	; 0x94000001
        382f20:	72766963 	rsbvcs	r6, r6, #1622016	; 0x18c000
        382f24:	65007365 	strvs	r7, [r0, -#869]	; fField869
        382f28:	72760073 	rsbvcs	r0, r6, #115	; 0x73
        382f2c:	6e696600 	cdpvs	6, 6, cr6, cr9, cr0, {0}
        382f38:	eaffffef 	b	382efc <ClassInfo__14IRSniffServiceSFv>
        382f3c:	eaf5983e 	b	e903c <IRSniffService::New(void)>
        382f40:	eaf5983e 	b	e9040 <IRSniffService::Delete(void)>
        382f44:	ea5a786b 	b	1a210f8 <IRSniffService::$Start(TOptionArray *, unsigned long, TServiceInfo *)>
        382f48:	eaf5985a 	b	e90b8 <IRSniffService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)>
        382f4c:	00000000 	andeq	r0, r0, r0
        382f50:	00000048 	andeq	r0, r0, r8, asr #32
        382f54:	00000053 	andeq	r0, r0, r3, asr r0
        382f58:	0000005a 	andeq	r0, r0, sl, asr r0
        382f5c:	00000064 	andeq	r0, r0, r4, rrx
        382f60:	00000078 	andeq	r0, r0, r8, ror r0
        382f64:	eaf5969b 	b	e89d8 <Sizeof__14IRProbeServiceSFv>
        382f70:	eaf5969a 	b	e89e0 <IRProbeService::New(void)>
        382f74:	eaf5969a 	b	e89e4 <IRProbeService::Delete(void)>
        382f78:	00020000 	andeq	r0, r2, r0
        382f84:	ea000001 	b	382f90 <ClassInfo__14IRProbeServiceSFv+0x8>
    */
}

