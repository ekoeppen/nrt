#include "include/TFramedAsyncService.h"

/**
 * Symbol: Sizeof__19TFramedAsyncServiceSFv
 * Address: 000d393c
 */
void TFramedAsyncService::Sizeof() {
    /*
         d393c:	e3a00010 	mov	r0, #16	; 0x10
         d3940:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFramedAsyncService::New(void)
 * Address: 000d3944
 */
TFramedAsyncService::New(void) {
    /*
         d3944:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFramedAsyncService::Delete(void)
 * Address: 000d3948
 */
TFramedAsyncService::Delete(void) {
    /*
         d3948:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFramedAsyncService::Start(TOptionArray *, unsigned long, TServiceInfo *)
 * Address: 000d394c
 */
TFramedAsyncService::Start(TOptionArray *, unsigned long, TServiceInfo *) {
    /*
         d394c:	e1a0c00d 	mov	ip, sp
         d3950:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         d3954:	e24cb004 	sub	fp, ip, #4	; 0x4
         d3958:	e1a07000 	mov	r7, r0
         d395c:	e1a06001 	mov	r6, r1
         d3960:	e1a05002 	mov	r5, r2
         d3964:	e1a04003 	mov	r4, r3
         d3968:	e24ddf53 	sub	sp, sp, #332	; 0x14c
         d396c:	e24ddb01 	sub	sp, sp, #1024	; 0x400
         d3970:	e1a01002 	mov	r1, r2
         d3974:	e1a0000d 	mov	r0, sp
         d3978:	eb64d6da 	bl	1a094e8 <TFramedAsyncSerTool::$__ct(unsigned long)>
         d397c:	e1a02004 	mov	r2, r4
         d3980:	e1a01005 	mov	r1, r5
         d3984:	e1a0000d 	mov	r0, sp
         d3988:	eb6bb5c1 	bl	1bc1094 <$StartCommTool(TCommTool *, unsigned long, TServiceInfo *)>
         d398c:	e1b05000 	movs	r5, r0
         d3990:	1a000004 	bne	d39a8 <TFramedAsyncService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x5c>
         d3994:	e1a02007 	mov	r2, r7
         d3998:	e1a01006 	mov	r1, r6
         d399c:	e5b40004 	ldr	r0, [r4, #4]!
         d39a0:	eb6bb1a0 	bl	1bc0028 <$OpenCommTool(unsigned long, TOptionArray *, TCMService *)>
         d39a4:	e1a05000 	mov	r5, r0
         d39a8:	e1a0000d 	mov	r0, sp
         d39ac:	e3a01000 	mov	r1, #0	; 0x0
         d39b0:	e1a0e00f 	mov	lr, pc
         d39b4:	e59df000 	ldr	pc, [sp]
         d39b8:	e1a00005 	mov	r0, r5
         d39bc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFramedAsyncService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)
 * Address: 000d39c0
 */
TFramedAsyncService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *) {
    /*
         d39c0:	e5b10008 	ldr	r0, [r1, #8]!
         d39c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__19TFramedAsyncServiceSFv
 * Address: 00382d5c
 */
void TFramedAsyncService::ClassInfo() {
    /*
        382d5c:	e24f0044 	sub	r0, pc, #68	; 0x44
        382d60:	e1a0f00e 	mov	pc, lr
        382d64:	e3a00000 	mov	r0, #0	; 0x0
        382d68:	e1a0f00e 	mov	pc, lr
        382d6c:	54467261 	strplb	r7, [r6], -#609
        382d70:	6d656441 	stcvsl	4, cr6, [r5, -#260]!
        382d74:	73796e63 	cmnvc	r9, #1584	; 0x630
        382d78:	53657276 	cmnpl	r5, #1610612743	; 0x60000007
        382d7c:	69636500 	stmvsdb	r3!, {r8, sl, sp, lr}^
        382d80:	54434d53 	strplb	r4, [r3], -#3411
        382d84:	65727669 	ldrvsb	r7, [r2, -#1641]!
        382d88:	63650073 	cmnvs	r5, #115	; 0x73
        382d8c:	65727600 	ldrvsb	r7, [r2, -#1536]!
        382d90:	66736572 	undefined
        382d9c:	eaffffee 	b	382d5c <ClassInfo__19TFramedAsyncServiceSFv>
        382da0:	ea5a4b39 	b	1a15a8c <TFramedAsyncService::$New(void)>
        382da4:	ea5a3277 	b	1a0f788 <TFramedAsyncService::$Delete(void)>
        382da8:	ea5a5fdd 	b	1a1ad24 <TFramedAsyncService::$Start(TOptionArray *, unsigned long, TServiceInfo *)>
        382dac:	ea5a3291 	b	1a0f7f8 <TFramedAsyncService::$DoneStarting(TAEvent *, unsigned long, TServiceInfo *)>
        382db0:	00000000 	andeq	r0, r0, r0
        382db4:	00000048 	andeq	r0, r0, r8, asr #32
        382db8:	00000051 	andeq	r0, r0, r1, asr r0
        382dbc:	00000058 	andeq	r0, r0, r8, asr r0
        382dc0:	00000060 	andeq	r0, r0, r0, rrx
        382dc4:	00000074 	andeq	r0, r0, r4, ror r0
        382dc8:	eaf5ac04 	b	edde0 <Sizeof__12TIrDAServiceSFv>
        382dd4:	eaf5ac03 	b	edde8 <TIrDAService::New(void)>
        382dd8:	eaf5ac03 	b	eddec <TIrDAService::Delete(void)>
        382ddc:	00020000 	andeq	r0, r2, r0
        382de8:	ea000001 	b	382df4 <ClassInfo__12TIrDAServiceSFv+0x8>
    */
}

