#include "include/TFaxService.h"

/**
 * Symbol: Sizeof__11TFaxServiceSFv
 * Address: 000b4e00
 */
void TFaxService::Sizeof() {
    /*
         b4e00:	e3a00010 	mov	r0, #16	; 0x10
         b4e04:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxService::New(void)
 * Address: 000b4e08
 */
TFaxService::New(void) {
    /*
         b4e08:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxService::Delete(void)
 * Address: 000b4e0c
 */
TFaxService::Delete(void) {
    /*
         b4e0c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxService::Start(TOptionArray *, unsigned long, TServiceInfo *)
 * Address: 000b4e10
 */
TFaxService::Start(TOptionArray *, unsigned long, TServiceInfo *) {
    /*
         b4e10:	e1a0c00d 	mov	ip, sp
         b4e14:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         b4e18:	e24cb004 	sub	fp, ip, #4	; 0x4
         b4e1c:	e1a07000 	mov	r7, r0
         b4e20:	e1a06001 	mov	r6, r1
         b4e24:	e1a05002 	mov	r5, r2
         b4e28:	e1a04003 	mov	r4, r3
         b4e2c:	e24dd08c 	sub	sp, sp, #140	; 0x8c
         b4e30:	e24ddb02 	sub	sp, sp, #2048	; 0x800
         b4e34:	e1a01002 	mov	r1, r2
         b4e38:	e1a0000d 	mov	r0, sp
         b4e3c:	eb6551ad 	bl	1a094f8 <TFaxTool::$__ct(unsigned long)>
         b4e40:	e1a02004 	mov	r2, r4
         b4e44:	e1a01005 	mov	r1, r5
         b4e48:	e1a0000d 	mov	r0, sp
         b4e4c:	eb6c3090 	bl	1bc1094 <$StartCommTool(TCommTool *, unsigned long, TServiceInfo *)>
         b4e50:	e1b05000 	movs	r5, r0
         b4e54:	1a000004 	bne	b4e6c <TFaxService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x5c>
         b4e58:	e1a02007 	mov	r2, r7
         b4e5c:	e1a01006 	mov	r1, r6
         b4e60:	e5b40004 	ldr	r0, [r4, #4]!
         b4e64:	eb6c2c6f 	bl	1bc0028 <$OpenCommTool(unsigned long, TOptionArray *, TCMService *)>
         b4e68:	e1a05000 	mov	r5, r0
         b4e6c:	e1a0000d 	mov	r0, sp
         b4e70:	e3a01000 	mov	r1, #0	; 0x0
         b4e74:	e1a0e00f 	mov	lr, pc
         b4e78:	e59df000 	ldr	pc, [sp]
         b4e7c:	e1a00005 	mov	r0, r5
         b4e80:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)
 * Address: 000b4e84
 */
TFaxService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *) {
    /*
         b4e84:	e5b10008 	ldr	r0, [r1, #8]!
         b4e88:	e1a0f00e 	mov	pc, lr
         b4e8c:	e59f201c 	ldr	r2, [pc, #1c]	; b4eb0 <TFaxService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)+0x2c>	; fField1
         b4e90:	e3310000 	teq	r1, #0	; 0x0
         b4e94:	01a0f00e 	moveq	pc, lr
         b4e98:	e5d03000 	ldrb	r3, [r0]
         b4e9c:	e7d23003 	ldrb	r3, [r2, r3]
         b4ea0:	e4c03001 	strb	r3, [r0], #1	; fField1
         b4ea4:	e2511001 	subs	r1, r1, #1	; 0x1
         b4ea8:	1afffffa 	bne	b4e98 <TFaxService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)+0x14>
         b4eac:	e1a0f00e 	mov	pc, lr
         b4eb0:	0037132c 	eoreqs	r1, r7, ip, lsr #6
    */
}

/**
 * Symbol: ClassInfo__11TFaxServiceSFv
 * Address: 00382cd4
 */
void TFaxService::ClassInfo() {
    /*
        382cd4:	e24f0044 	sub	r0, pc, #68	; 0x44
        382cd8:	e1a0f00e 	mov	pc, lr
        382cdc:	e3a00000 	mov	r0, #0	; 0x0
        382ce0:	e1a0f00e 	mov	pc, lr
        382ce4:	54466178 	strplb	r6, [r6], -#376
        382ce8:	53657276 	cmnpl	r5, #1610612743	; 0x60000007
        382cec:	69636500 	stmvsdb	r3!, {r8, sl, sp, lr}^
        382cf0:	54434d53 	strplb	r4, [r3], -#3411
        382cf4:	65727669 	ldrvsb	r7, [r2, -#1641]!
        382cf8:	63650073 	cmnvs	r5, #115	; 0x73
        382cfc:	65727600 	ldrvsb	r7, [r2, -#1536]!
        382d00:	66617873 	undefined
        382d0c:	eafffff0 	b	382cd4 <ClassInfo__11TFaxServiceSFv>
        382d10:	ea5a4758 	b	1a14a78 <TFaxService::$New(void)>
        382d14:	ea5a2e96 	b	1a0e774 <TFaxService::$Delete(void)>
        382d18:	ea5a5ffd 	b	1a1ad14 <TFaxService::$Start(TOptionArray *, unsigned long, TServiceInfo *)>
        382d1c:	ea5a32b1 	b	1a0f7e8 <TFaxService::$DoneStarting(TAEvent *, unsigned long, TServiceInfo *)>
        382d20:	00000000 	andeq	r0, r0, r0
        382d24:	00000048 	andeq	r0, r0, r8, asr #32
        382d28:	00000058 	andeq	r0, r0, r8, asr r0
        382d2c:	0000005f 	andeq	r0, r0, pc, asr r0
        382d30:	00000068 	andeq	r0, r0, r8, rrx
        382d34:	0000007c 	andeq	r0, r0, ip, ror r0
        382d38:	ea5a5bef 	b	1a19cfc <$Sizeof__19TFramedAsyncServiceSFv>
        382d44:	ea5a4b50 	b	1a15a8c <TFramedAsyncService::$New(void)>
        382d48:	ea5a328e 	b	1a0f788 <TFramedAsyncService::$Delete(void)>
        382d4c:	00020000 	andeq	r0, r2, r0
        382d58:	ea000001 	b	382d64 <ClassInfo__19TFramedAsyncServiceSFv+0x8>
    */
}

