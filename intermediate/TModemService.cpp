#include "include/TModemService.h"

/**
 * Symbol: Sizeof__13TModemServiceSFv
 * Address: 0011fad4
 */
void TModemService::Sizeof() {
    /*
        11fad4:	e3a00010 	mov	r0, #16	; 0x10
        11fad8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TModemService::New(void)
 * Address: 0011fadc
 */
TModemService::New(void) {
    /*
        11fadc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TModemService::Delete(void)
 * Address: 0011fae0
 */
TModemService::Delete(void) {
    /*
        11fae0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TModemService::Start(TOptionArray *, unsigned long, TServiceInfo *)
 * Address: 0011fae4
 */
TModemService::Start(TOptionArray *, unsigned long, TServiceInfo *) {
    /*
        11fae4:	e1a0c00d 	mov	ip, sp
        11fae8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        11faec:	e24cb004 	sub	fp, ip, #4	; 0x4
        11faf0:	e1a07000 	mov	r7, r0
        11faf4:	e1a06001 	mov	r6, r1
        11faf8:	e1a05002 	mov	r5, r2
        11fafc:	e1a04003 	mov	r4, r3
        11fb00:	e24ddfe9 	sub	sp, sp, #932	; 0x3a4
        11fb04:	e24ddb02 	sub	sp, sp, #2048	; 0x800
        11fb08:	e1a01002 	mov	r1, r2
        11fb0c:	e1a0000d 	mov	r0, sp
        11fb10:	eb63a670 	bl	1a094d8 <TClassOneModem::$__ct(unsigned long)>
        11fb14:	e1a02004 	mov	r2, r4
        11fb18:	e1a01005 	mov	r1, r5
        11fb1c:	e1a0000d 	mov	r0, sp
        11fb20:	eb6a855b 	bl	1bc1094 <$StartCommTool(TCommTool *, unsigned long, TServiceInfo *)>
        11fb24:	e1b05000 	movs	r5, r0
        11fb28:	1a000004 	bne	11fb40 <TModemService::Start(TOptionArray *, unsigned long, TServiceInfo *)+0x5c>
        11fb2c:	e1a02007 	mov	r2, r7
        11fb30:	e1a01006 	mov	r1, r6
        11fb34:	e5b40004 	ldr	r0, [r4, #4]!
        11fb38:	eb6a813a 	bl	1bc0028 <$OpenCommTool(unsigned long, TOptionArray *, TCMService *)>
        11fb3c:	e1a05000 	mov	r5, r0
        11fb40:	e1a0000d 	mov	r0, sp
        11fb44:	e3a01000 	mov	r1, #0	; 0x0
        11fb48:	e1a0e00f 	mov	lr, pc
        11fb4c:	e59df000 	ldr	pc, [sp]
        11fb50:	e1a00005 	mov	r0, r5
        11fb54:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TModemService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)
 * Address: 0011fb58
 */
TModemService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *) {
    /*
        11fb58:	e5b10008 	ldr	r0, [r1, #8]!
        11fb5c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__13TModemServiceSFv
 * Address: 0038324c
 */
void TModemService::ClassInfo() {
    /*
        38324c:	e24f0044 	sub	r0, pc, #68	; 0x44
        383250:	e1a0f00e 	mov	pc, lr
        383254:	e3a00000 	mov	r0, #0	; 0x0
        383258:	e1a0f00e 	mov	pc, lr
        38325c:	544d6f64 	strplb	r6, [sp], -#3940
        383260:	656d5365 	strvsb	r5, [sp, -#869]!
        383264:	72766963 	rsbvcs	r6, r6, #1622016	; 0x18c000
        383268:	65005443 	strvs	r5, [r0, -#1091]	; fField1091
        38326c:	4d536572 	ldcmil	5, cr6, [r3, -#456]
        383270:	76696365 	strvcbt	r6, [r9], -r5, ror #6
        383274:	00736572 	rsbeqs	r6, r3, r2, ror r5
        383278:	76006d6f 	strvc	r6, [r0], -pc, ror #26	; fField26
        38327c:	64730000 	ldrvsbt	r0, [r3]
        383280:	00000000 	andeq	r0, r0, r0
        383284:	eafffff0 	b	38324c <ClassInfo__13TModemServiceSFv>
        383288:	ea5a49fd 	b	1a15a84 <TModemService::$New(void)>
        38328c:	ea5a313b 	b	1a0f780 <TModemService::$Delete(void)>
        383290:	ea5a5ea2 	b	1a1ad20 <TModemService::$Start(TOptionArray *, unsigned long, TServiceInfo *)>
        383294:	ea5a3156 	b	1a0f7f4 <TModemService::$DoneStarting(TAEvent *, unsigned long, TServiceInfo *)>
        383298:	00000000 	andeq	r0, r0, r0
        38329c:	00000048 	andeq	r0, r0, r8, asr #32
        3832a0:	0000004f 	andeq	r0, r0, pc, asr #32
        3832a4:	00000056 	andeq	r0, r0, r6, asr r0
        3832a8:	00000064 	andeq	r0, r0, r4, rrx
        3832ac:	00000078 	andeq	r0, r0, r8, ror r0
        3832b0:	ea5a5a8b 	b	1a19ce4 <$Sizeof__10TP3ServiceSFv>
        3832bc:	ea5a45ec 	b	1a14a74 <TP3Service::$New(void)>
        3832c0:	ea5a2d2a 	b	1a0e770 <TP3Service::$Delete(void)>
        3832d0:	ea000001 	b	3832dc <ClassInfo__10TP3ServiceSFv+0x8>
    */
}

