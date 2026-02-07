#include "include/TAsyncService.h"

/**
 * Symbol: Sizeof__13TAsyncServiceSFv
 * Address: 0003b0c4
 */
void TAsyncService::Sizeof() {
    /*
         3b0c4:	e3a00010 	mov	r0, #16	; 0x10
         3b0c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAsyncService::New(void)
 * Address: 0003b0cc
 */
TAsyncService::New(void) {
    /*
         3b0cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAsyncService::Delete(void)
 * Address: 0003b0d0
 */
TAsyncService::Delete(void) {
    /*
         3b0d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAsyncService::Start(TOptionArray *, unsigned long, TServiceInfo *)
 * Address: 0003b0d4
 */
TAsyncService::Start(TOptionArray *, unsigned long, TServiceInfo *) {
    /*
         3b0d4:	e1a0c00d 	mov	ip, sp
         3b0d8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         3b0dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         3b0e0:	e1a07000 	mov	r7, r0
         3b0e4:	e1a06001 	mov	r6, r1
         3b0e8:	e1a05002 	mov	r5, r2
         3b0ec:	e1a04003 	mov	r4, r3
         3b0f0:	e24dde4b 	sub	sp, sp, #1200	; 0x4b0
         3b0f4:	e1a01002 	mov	r1, r2
         3b0f8:	e1a0000d 	mov	r0, sp
         3b0fc:	eb6738f4 	bl	1a094d4 <TAsyncSerTool::$__ct(unsigned long)>
         3b100:	e1a02004 	mov	r2, r4
         3b104:	e1a01005 	mov	r1, r5
         3b108:	e1a0000d 	mov	r0, sp
         3b10c:	eb6e17e0 	bl	1bc1094 <$StartCommTool(TCommTool *, unsigned long, TServiceInfo *)>
         3b110:	e1b05000 	movs	r5, r0
         3b114:	1a000004 	bne	3b12c <TAsyncService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x58>
         3b118:	e1a02007 	mov	r2, r7
         3b11c:	e1a01006 	mov	r1, r6
         3b120:	e5b40004 	ldr	r0, [r4, #4]!
         3b124:	eb6e13bf 	bl	1bc0028 <$OpenCommTool(unsigned long, TOptionArray *, TCMService *)>
         3b128:	e1a05000 	mov	r5, r0
         3b12c:	e1a0000d 	mov	r0, sp
         3b130:	e3a01000 	mov	r1, #0	; 0x0
         3b134:	e1a0e00f 	mov	lr, pc
         3b138:	e59df000 	ldr	pc, [sp]
         3b13c:	e1a00005 	mov	r0, r5
         3b140:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)
 * Address: 0003b144
 */
TAsyncService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *) {
    /*
         3b144:	e5b10008 	ldr	r0, [r1, #8]!
         3b148:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__13TAsyncServiceSFv
 * Address: 00382c4c
 */
void TAsyncService::ClassInfo() {
    /*
        382c4c:	e24f0044 	sub	r0, pc, #68	; 0x44
        382c50:	e1a0f00e 	mov	pc, lr
        382c54:	e3a00000 	mov	r0, #0	; 0x0
        382c58:	e1a0f00e 	mov	pc, lr
        382c5c:	54417379 	strplb	r7, [r1], -#889
        382c60:	6e635365 	cdpvs	3, 6, cr5, cr3, cr5, {3}
        382c64:	72766963 	rsbvcs	r6, r6, #1622016	; 0x18c000
        382c68:	65005443 	strvs	r5, [r0, -#1091]	; fField1091
        382c6c:	4d536572 	ldcmil	5, cr6, [r3, -#456]
        382c70:	76696365 	strvcbt	r6, [r9], -r5, ror #6
        382c74:	00736572 	rsbeqs	r6, r3, r2, ror r5
        382c78:	76006173 	undefined
        382c7c:	65720000 	ldrvsb	r0, [r2]!
        382c80:	00000000 	andeq	r0, r0, r0
        382c84:	eafffff0 	b	382c4c <ClassInfo__13TAsyncServiceSFv>
        382c88:	ea5a4b7c 	b	1a15a80 <TAsyncService::$New(void)>
        382c8c:	ea5a2eba 	b	1a0e77c <TAsyncService::$Delete(void)>
        382c90:	ea5a6021 	b	1a1ad1c <TAsyncService::$Start(TOptionArray *, unsigned long, TServiceInfo *)>
        382c94:	ea5a32d5 	b	1a0f7f0 <TAsyncService::$DoneStarting(TAEvent *, unsigned long, TServiceInfo *)>
        382c98:	00000000 	andeq	r0, r0, r0
        382c9c:	00000048 	andeq	r0, r0, r8, asr #32
        382ca0:	00000050 	andeq	r0, r0, r0, asr r0
        382ca4:	00000057 	andeq	r0, r0, r7, asr r0
        382ca8:	00000060 	andeq	r0, r0, r0, rrx
        382cac:	00000074 	andeq	r0, r0, r4, ror r0
        382cb0:	ea5a5c0c 	b	1a19ce8 <$Sizeof__11TFaxServiceSFv>
        382cbc:	ea5a476d 	b	1a14a78 <TFaxService::$New(void)>
        382cc0:	ea5a2eab 	b	1a0e774 <TFaxService::$Delete(void)>
        382cc4:	00020000 	andeq	r0, r2, r0
        382cd0:	ea000001 	b	382cdc <ClassInfo__11TFaxServiceSFv+0x8>
    */
}

