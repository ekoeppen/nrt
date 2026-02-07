#include "include/IRProbeService.h"

/**
 * Symbol: Sizeof__14IRProbeServiceSFv
 * Address: 000e89d8
 */
void IRProbeService::Sizeof() {
    /*
         e89d8:	e3a00010 	mov	r0, #16	; 0x10
         e89dc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: IRProbeService::New(void)
 * Address: 000e89e0
 */
IRProbeService::New(void) {
    /*
         e89e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: IRProbeService::Delete(void)
 * Address: 000e89e4
 */
IRProbeService::Delete(void) {
    /*
         e89e4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: IRProbeService::Start(TOptionArray *, unsigned long, TServiceInfo *)
 * Address: 000e89e8
 */
IRProbeService::Start(TOptionArray *, unsigned long, TServiceInfo *) {
    /*
         e89e8:	e1a0c00d 	mov	ip, sp
         e89ec:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         e89f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         e89f4:	e1a07000 	mov	r7, r0
         e89f8:	e1a06001 	mov	r6, r1
         e89fc:	e1a05002 	mov	r5, r2
         e8a00:	e1a04003 	mov	r4, r3
         e8a04:	e24ddf6f 	sub	sp, sp, #444	; 0x1bc
         e8a08:	e24ddb01 	sub	sp, sp, #1024	; 0x400
         e8a0c:	e1a01002 	mov	r1, r2
         e8a10:	e1a0000d 	mov	r0, sp
         e8a14:	eb003971 	bl	f6fe0 <TIrProbeTool::__ct(unsigned long)>
         e8a18:	e1a02004 	mov	r2, r4
         e8a1c:	e1a01005 	mov	r1, r5
         e8a20:	e1a0000d 	mov	r0, sp
         e8a24:	eb6b619a 	bl	1bc1094 <$StartCommTool(TCommTool *, unsigned long, TServiceInfo *)>
         e8a28:	e1b05000 	movs	r5, r0
         e8a2c:	1a000004 	bne	e8a44 <IRProbeService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x5c>
         e8a30:	e1a02007 	mov	r2, r7
         e8a34:	e1a01006 	mov	r1, r6
         e8a38:	e5b40004 	ldr	r0, [r4, #4]!
         e8a3c:	eb6b5d79 	bl	1bc0028 <$OpenCommTool(unsigned long, TOptionArray *, TCMService *)>
         e8a40:	e1a05000 	mov	r5, r0
         e8a44:	e1a0000d 	mov	r0, sp
         e8a48:	e3a01000 	mov	r1, #0	; 0x0
         e8a4c:	e1a0e00f 	mov	lr, pc
         e8a50:	e59df000 	ldr	pc, [sp]
         e8a54:	e1a00005 	mov	r0, r5
         e8a58:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: IRProbeService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)
 * Address: 000e8a5c
 */
IRProbeService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *) {
    /*
         e8a5c:	e5b10008 	ldr	r0, [r1, #8]!
         e8a60:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__14IRProbeServiceSFv
 * Address: 00382f88
 */
void IRProbeService::ClassInfo() {
    /*
        382f88:	e24f0044 	sub	r0, pc, #68	; 0x44
        382f8c:	e1a0f00e 	mov	pc, lr
        382f90:	e3a00000 	mov	r0, #0	; 0x0
        382f94:	e1a0f00e 	mov	pc, lr
        382f98:	49525072 	ldmmidb	r2, {r1, r4, r5, r6, ip, lr}^
        382f9c:	6f626553 	swivs	0x00626553
        382fa0:	65727669 	ldrvsb	r7, [r2, -#1641]!
        382fa4:	63650054 	cmnvs	r5, #84	; 0x54
        382fa8:	434d5365 	cmpmi	sp, #-1811939327	; 0x94000001
        382fac:	72766963 	rsbvcs	r6, r6, #1622016	; 0x18c000
        382fb0:	65007365 	strvs	r7, [r0, -#869]	; fField869
        382fb4:	72760070 	rsbvcs	r0, r6, #112	; 0x70
        382fb8:	6b697200 	blvs	1ddf7c0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x1cef68>
        382fc4:	eaffffef 	b	382f88 <ClassInfo__14IRProbeServiceSFv>
        382fc8:	eaf59684 	b	e89e0 <IRProbeService::New(void)>
        382fcc:	eaf59684 	b	e89e4 <IRProbeService::Delete(void)>
        382fd0:	ea5aadd5 	b	1a2e72c <IRProbeService::$Start(TOptionArray *, unsigned long, TServiceInfo *)>
        382fd4:	eaf596a0 	b	e8a5c <IRProbeService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)>
        382fd8:	00000000 	andeq	r0, r0, r0
        382fdc:	00000048 	andeq	r0, r0, r8, asr #32
        382fe0:	00000054 	andeq	r0, r0, r4, asr r0
        382fe4:	0000005b 	andeq	r0, r0, fp, asr r0
        382fe8:	00000064 	andeq	r0, r0, r4, rrx
        382fec:	00000078 	andeq	r0, r0, r8, ror r0
        382ff0:	eafaaeaa 	b	22eaa0 <Sizeof__15TVRemoteServiceSFv>
        382ffc:	eafaaea9 	b	22eaa8 <TVRemoteService::New(void)>
        383000:	eafaaea9 	b	22eaac <TVRemoteService::Delete(void)>
        383004:	00020000 	andeq	r0, r2, r0
        383010:	ea000001 	b	38301c <ClassInfo__15TVRemoteServiceSFv+0x8>
    */
}

