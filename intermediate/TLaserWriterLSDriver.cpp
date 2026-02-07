#include "include/TLaserWriterLSDriver.h"

/**
 * Symbol: Sizeof__20TLaserWriterLSDriverSFv
 * Address: 00103cf0
 */
void TLaserWriterLSDriver::Sizeof() {
    /*
        103cf0:	e3a00f61 	mov	r0, #388	; 0x184
        103cf4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLaserWriterLSDriver::BlinkLED(void)
 * Address: 00103cf8
 */
TLaserWriterLSDriver::BlinkLED(void) {
    /*
        103cf8:	e1a0c00d 	mov	ip, sp
        103cfc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        103d00:	e24cb004 	sub	fp, ip, #4	; 0x4
        103d04:	e1a04000 	mov	r4, r0
        103d08:	e24dd010 	sub	sp, sp, #16	; 0x10
        103d0c:	e1a0000d 	mov	r0, sp
        103d10:	eb6b3f30 	bl	1bd39d8 <$GetGlobalTime>
        103d14:	e28d1008 	add	r1, sp, #8	; 0x8
        103d18:	e89d5000 	ldmia	sp, {ip, lr}
        103d1c:	e8815000 	stmia	r1, {ip, lr}
        103d20:	e2841f5b 	add	r1, r4, #364	; 0x16c
        103d24:	e1a05001 	mov	r5, r1
        103d28:	e28d0008 	add	r0, sp, #8	; 0x8
        103d2c:	eb6b74d5 	bl	1be1088 <$CompCompare>
        103d30:	e3500000 	cmp	r0, #0	; 0x0
        103d34:	da000009 	ble	103d60 <TLaserWriterLSDriver::BlinkLED(void)+0x68>
        103d38:	e1a00005 	mov	r0, r5
        103d3c:	e59f1020 	ldr	r1, [pc, #20]	; 103d64 <TLaserWriterLSDriver::BlinkLED(void)+0x6c>	; fField20
        103d40:	eb6b6852 	bl	1bdde90 <$TimeFromNow>
        103d44:	e5d40022 	ldrb	r0, [r4, #34]	; fField34
        103d48:	e2200001 	eor	r0, r0, #1	; 0x1
        103d4c:	e5c40022 	strb	r0, [r4, #34]	; fField34
        103d50:	e20020ff 	and	r2, r0, #255	; 0xff
        103d54:	e1a00004 	mov	r0, r4
        103d58:	e3a01084 	mov	r1, #132	; 0x84
        103d5c:	eb69013f 	bl	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
        103d60:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        103d64:	001c1f38 	andeqs	r1, ip, r8, lsr pc
    */
}

/**
 * Symbol: TLaserWriterLSDriver::ClosePage(void)
 * Address: 00103d68
 */
TLaserWriterLSDriver::ClosePage(void) {
    /*
        103d68:	e1a0c00d 	mov	ip, sp
        103d6c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        103d70:	e24cb004 	sub	fp, ip, #4	; 0x4
        103d74:	e1a04000 	mov	r4, r0
        103d78:	eb68f089 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        103d7c:	e3300000 	teq	r0, #0	; 0x0
        103d80:	0a000007 	beq	103da4 <TLaserWriterLSDriver::ClosePage(void)+0x3c>
        103d84:	e1a00004 	mov	r0, r4
        103d88:	eb69055a 	bl	1b452f8 <TLaserWriterLSDriver::$WaitForPage(void)>
        103d8c:	e1a00004 	mov	r0, r4
        103d90:	e3a01001 	mov	r1, #1	; 0x1
        103d94:	eb68fd02 	bl	1b431a4 <TLaserWriterLSDriver::$PrintPage(unsigned char)>
        103d98:	e3300000 	teq	r0, #0	; 0x0
        103d9c:	11a00004 	movne	r0, r4
        103da0:	1b690554 	blne	1b452f8 <TLaserWriterLSDriver::$WaitForPage(void)>
        103da4:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        103da8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::ConnectToPrinter(void)
 * Address: 00103dac
 */
TLaserWriterLSDriver::ConnectToPrinter(void) {
    /*
        103dac:	e1a0c00d 	mov	ip, sp
        103db0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        103db4:	e24cb004 	sub	fp, ip, #4	; 0x4
        103db8:	e1a04000 	mov	r4, r0
        103dbc:	eb68ec5f 	bl	1b3ef40 <TLaserWriterLSDriver::$ClearState(void)>
        103dc0:	e1a00004 	mov	r0, r4
        103dc4:	e3a01000 	mov	r1, #0	; 0x0
        103dc8:	eb690112 	bl	1b44218 <TLaserWriterLSDriver::$ResetPrinter(unsigned char)>
        103dcc:	e1a00004 	mov	r0, r4
        103dd0:	eb690530 	bl	1b45298 <TLaserWriterLSDriver::$SetState(void)>
        103dd4:	e1a00004 	mov	r0, r4
        103dd8:	eb68f071 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        103ddc:	e3300000 	teq	r0, #0	; 0x0
        103de0:	13a00001 	movne	r0, #1	; 0x1
        103de4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::ContinueIO(void)
 * Address: 00103de8
 */
TLaserWriterLSDriver::ContinueIO(void) {
    /*
        103de8:	e1a0c00d 	mov	ip, sp
        103dec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        103df0:	e24cb004 	sub	fp, ip, #4	; 0x4
        103df4:	e3a04001 	mov	r4, #1	; 0x1
        103df8:	e590101c 	ldr	r1, [r0, #28]	; fField28
        103dfc:	e281ccab 	add	ip, r1, #43776	; 0xab00
        103e00:	e37c00e0 	cmn	ip, #224	; 0xe0
        103e04:	1281ccab 	addne	ip, r1, #43776	; 0xab00
        103e08:	137c00e4 	cmnne	ip, #228	; 0xe4
        103e0c:	0a000002 	beq	103e1c <TLaserWriterLSDriver::ContinueIO(void)+0x34>
        103e10:	eb68fce5 	bl	1b431ac <TLaserWriterLSDriver::$ProblemIsFatal(void)>
        103e14:	e3300000 	teq	r0, #0	; 0x0
        103e18:	0a000000 	beq	103e20 <TLaserWriterLSDriver::ContinueIO(void)+0x38>
        103e1c:	e3a04000 	mov	r4, #0	; 0x0
        103e20:	e1a00004 	mov	r0, r4
        103e24:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::ContinueRendering(void)
 * Address: 00103e28
 */
TLaserWriterLSDriver::ContinueRendering(void) {
    /*
        103e28:	e1a0c00d 	mov	ip, sp
        103e2c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        103e30:	e24cb004 	sub	fp, ip, #4	; 0x4
        103e34:	e3a04001 	mov	r4, #1	; 0x1
        103e38:	e590101c 	ldr	r1, [r0, #28]	; fField28
        103e3c:	e281ccab 	add	ip, r1, #43776	; 0xab00
        103e40:	e37c00e1 	cmn	ip, #225	; 0xe1
        103e44:	0a000002 	beq	103e54 <TLaserWriterLSDriver::ContinueRendering(void)+0x2c>
        103e48:	eb68f055 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        103e4c:	e3300000 	teq	r0, #0	; 0x0
        103e50:	1a000000 	bne	103e58 <TLaserWriterLSDriver::ContinueRendering(void)+0x30>
        103e54:	e3a04000 	mov	r4, #0	; 0x0
        103e58:	e1a00004 	mov	r0, r4
        103e5c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::Delete(void)
 * Address: 00103e60
 */
TLaserWriterLSDriver::Delete(void) {
    /*
        103e60:	e5900018 	ldr	r0, [r0, #24]	; fField24
        103e64:	e3300000 	teq	r0, #0	; 0x0
        103e68:	1a6acf60 	bne	1bb7bf0 <TEndpoint::$Delete(void)>
        103e6c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLaserWriterLSDriver::DoGetControllerStatus(void)
 * Address: 00103e70
 */
TLaserWriterLSDriver::DoGetControllerStatus(void) {
    /*
        103e70:	e1a0c00d 	mov	ip, sp
        103e74:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        103e78:	e24cb004 	sub	fp, ip, #4	; 0x4
        103e7c:	e1a04000 	mov	r4, r0
        103e80:	e24dd004 	sub	sp, sp, #4	; 0x4
        103e84:	e3a02000 	mov	r2, #0	; 0x0
        103e88:	e3a01082 	mov	r1, #130	; 0x82
        103e8c:	eb6900f3 	bl	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
        103e90:	e1a0100d 	mov	r1, sp
        103e94:	e1a00004 	mov	r0, r4
        103e98:	eb68fcd1 	bl	1b431e4 <TLaserWriterLSDriver::$Receive(void *)>
        103e9c:	e3300000 	teq	r0, #0	; 0x0
        103ea0:	05dd0000 	ldreqb	r0, [sp]
        103ea4:	13a00000 	movne	r0, #0	; 0x0
        103ea8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::DoHandleProblem(long)
 * Address: 00103eac
 */
TLaserWriterLSDriver::DoHandleProblem(long) {
    /*
        103eac:	e1a0c00d 	mov	ip, sp
        103eb0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        103eb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        103eb8:	e1a04000 	mov	r4, r0
        103ebc:	e1a05001 	mov	r5, r1
        103ec0:	e281cb2b 	add	ip, r1, #44032	; 0xac00
        103ec4:	e37c004a 	cmn	ip, #74	; 0x4a
        103ec8:	13a00000 	movne	r0, #0	; 0x0
        103ecc:	03a00001 	moveq	r0, #1	; 0x1
        103ed0:	e20070ff 	and	r7, r0, #255	; 0xff
        103ed4:	e3a06965 	mov	r6, #1654784	; 0x194000
        103ed8:	e2866401 	add	r6, r6, #16777216	; 0x1000000
        103edc:	e3a09001 	mov	r9, #1	; 0x1
        103ee0:	e3a03001 	mov	r3, #1	; 0x1
        103ee4:	e5845174 	str	r5, [r4, #372]	; fField372
        103ee8:	e92d0008 	stmdb	sp!, {r3}
        103eec:	e1a02005 	mov	r2, r5
        103ef0:	e1a03006 	mov	r3, r6
        103ef4:	e2841010 	add	r1, r4, #16	; 0x10
        103ef8:	e8910003 	ldmia	r1, {r0, r1}
        103efc:	eb6b6c11 	bl	1bdef48 <$CallHandleProblem(PrintConnect *, TPrinter *, long, unsigned long, unsigned char)>
        103f00:	e28dd004 	add	sp, sp, #4	; 0x4
        103f04:	e1a08000 	mov	r8, r0
        103f08:	e3300001 	teq	r0, #1	; 0x1
        103f0c:	1a000004 	bne	103f24 <TLaserWriterLSDriver::DoHandleProblem(long)+0x78>
        103f10:	e5941174 	ldr	r1, [r4, #372]	; fField372
        103f14:	e1a00004 	mov	r0, r4
        103f18:	eb6904dd 	bl	1b45294 <TLaserWriterLSDriver::$SetSoftError(long)>
        103f1c:	e5c49178 	strb	r9, [r4, #376]	; fField376
        103f20:	ea00000c 	b	103f58 <TLaserWriterLSDriver::DoHandleProblem(long)+0xac>
        103f24:	e3370000 	teq	r7, #0	; 0x0
        103f28:	1a00000f 	bne	103f6c <TLaserWriterLSDriver::DoHandleProblem(long)+0xc0>
        103f2c:	e1a00004 	mov	r0, r4
        103f30:	e3a01001 	mov	r1, #1	; 0x1
        103f34:	eb68f45f 	bl	1b410b8 <TLaserWriterLSDriver::$GetStatus(unsigned char)>
        103f38:	e3300000 	teq	r0, #0	; 0x0
        103f3c:	0a00001e 	beq	103fbc <TLaserWriterLSDriver::DoHandleProblem(long)+0x110>
        103f40:	e594101c 	ldr	r1, [r4, #28]	; fField28
        103f44:	e1a00004 	mov	r0, r4
        103f48:	eb68f041 	bl	1b40054 <TLaserWriterLSDriver::$ErrorIsProblem(long)>
        103f4c:	e3300000 	teq	r0, #0	; 0x0
        103f50:	0a000019 	beq	103fbc <TLaserWriterLSDriver::DoHandleProblem(long)+0x110>
        103f54:	e594501c 	ldr	r5, [r4, #28]	; fField28
        103f58:	e3350000 	teq	r5, #0	; 0x0
        103f5c:	0a000002 	beq	103f6c <TLaserWriterLSDriver::DoHandleProblem(long)+0xc0>
        103f60:	e5d40178 	ldrb	r0, [r4, #376]	; fField376
        103f64:	e3300000 	teq	r0, #0	; 0x0
        103f68:	0affffdc 	beq	103ee0 <TLaserWriterLSDriver::DoHandleProblem(long)+0x34>
        103f6c:	e3370000 	teq	r7, #0	; 0x0
        103f70:	0a000011 	beq	103fbc <TLaserWriterLSDriver::DoHandleProblem(long)+0x110>
        103f74:	e3380000 	teq	r8, #0	; 0x0
        103f78:	1a000009 	bne	103fa4 <TLaserWriterLSDriver::DoHandleProblem(long)+0xf8>
        103f7c:	e1a00004 	mov	r0, r4
        103f80:	e3a01001 	mov	r1, #1	; 0x1
        103f84:	eb6900a3 	bl	1b44218 <TLaserWriterLSDriver::$ResetPrinter(unsigned char)>
        103f88:	e3a009c2 	mov	r0, #3178496	; 0x308000
        103f8c:	e2800501 	add	r0, r0, #4194304	; 0x400000
        103f90:	e5941014 	ldr	r1, [r4, #20]	; fField20
        103f94:	eb6b6bed 	bl	1bdef50 <$PrReleaseControl(unsigned long, TPrinter *)>
        103f98:	e1a00004 	mov	r0, r4
        103f9c:	eb69009a 	bl	1b4420c <TLaserWriterLSDriver::$Reprint(void)>
        103fa0:	ea000005 	b	103fbc <TLaserWriterLSDriver::DoHandleProblem(long)+0x110>
        103fa4:	e3a00000 	mov	r0, #0	; 0x0
        103fa8:	e5c40178 	strb	r0, [r4, #376]	; fField376
        103fac:	e1a00004 	mov	r0, r4
        103fb0:	e3a01001 	mov	r1, #1	; 0x1
        103fb4:	eb690097 	bl	1b44218 <TLaserWriterLSDriver::$ResetPrinter(unsigned char)>
        103fb8:	e5c49178 	strb	r9, [r4, #376]	; fField376
        103fbc:	e1a00008 	mov	r0, r8
        103fc0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::DoorOpen(void)
 * Address: 00103fc4
 */
TLaserWriterLSDriver::DoorOpen(void) {
    /*
        103fc4:	e1a0c00d 	mov	ip, sp
        103fc8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        103fcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        103fd0:	e1a04000 	mov	r4, r0
        103fd4:	e3a05000 	mov	r5, #0	; 0x0
        103fd8:	eb68eff1 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        103fdc:	e3300000 	teq	r0, #0	; 0x0
        103fe0:	0a000008 	beq	104008 <TLaserWriterLSDriver::DoorOpen(void)+0x44>
        103fe4:	e1a00004 	mov	r0, r4
        103fe8:	e3a02000 	mov	r2, #0	; 0x0
        103fec:	e3a01001 	mov	r1, #1	; 0x1
        103ff0:	eb68f433 	bl	1b410c4 <TLaserWriterLSDriver::$GetStatusRegister1(unsigned char, char *)>
        103ff4:	e2000004 	and	r0, r0, #4	; 0x4
        103ff8:	e3300004 	teq	r0, #4	; 0x4
        103ffc:	13a00000 	movne	r0, #0	; 0x0
        104000:	03a00001 	moveq	r0, #1	; 0x1
        104004:	e20050ff 	and	r5, r0, #255	; 0xff
        104008:	e1a00005 	mov	r0, r5
        10400c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::DoSend(char *, long)
 * Address: 00104010
 */
TLaserWriterLSDriver::DoSend(char *, long) {
    /*
        104010:	e1a0c00d 	mov	ip, sp
        104014:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        104018:	e24cb004 	sub	fp, ip, #4	; 0x4
        10401c:	e1a04000 	mov	r4, r0
        104020:	e1a06001 	mov	r6, r1
        104024:	e1a05002 	mov	r5, r2
        104028:	e3a09000 	mov	r9, #0	; 0x0
        10402c:	e3a089e1 	mov	r8, #3686400	; 0x384000
        104030:	e590701c 	ldr	r7, [r0, #28]	; fField28
        104034:	eb68efda 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104038:	e3300000 	teq	r0, #0	; 0x0
        10403c:	0a000015 	beq	104098 <TLaserWriterLSDriver::DoSend(char *, long)+0x88>
        104040:	e1a03008 	mov	r3, r8
        104044:	e52d5004 	str	r5, [sp, -#4]!
        104048:	e92d0008 	stmdb	sp!, {r3}
        10404c:	e1a03009 	mov	r3, r9
        104050:	e28d2004 	add	r2, sp, #4	; 0x4
        104054:	e1a01006 	mov	r1, r6
        104058:	e5940018 	ldr	r0, [r4, #24]	; fField24
        10405c:	eb6adb3c 	bl	1bbad54 <TEndpoint::$Snd(unsigned char *, long &, unsigned long, unsigned long)>
        104060:	e28dd004 	add	sp, sp, #4	; 0x4
        104064:	e1b07000 	movs	r7, r0
        104068:	0a000009 	beq	104094 <TLaserWriterLSDriver::DoSend(char *, long)+0x84>
        10406c:	e287cc27 	add	ip, r7, #9984	; 0x2700
        104070:	e37c0037 	cmn	ip, #55	; 0x37
        104074:	e1a00004 	mov	r0, r4
        104078:	1a000002 	bne	104088 <TLaserWriterLSDriver::DoSend(char *, long)+0x78>
        10407c:	e3a01000 	mov	r1, #0	; 0x0
        104080:	eb68eba1 	bl	1b3ef0c <TLaserWriterLSDriver::$CancelJob(unsigned char)>
        104084:	ea000002 	b	104094 <TLaserWriterLSDriver::DoSend(char *, long)+0x84>
        104088:	e3a01e42 	mov	r1, #1056	; 0x420
        10408c:	e2411a0b 	sub	r1, r1, #45056	; 0xb000
        104090:	eb69047f 	bl	1b45294 <TLaserWriterLSDriver::$SetSoftError(long)>
        104094:	e28dd004 	add	sp, sp, #4	; 0x4
        104098:	e1a00007 	mov	r0, r7
        10409c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::ErrorIsFatal(long)
 * Address: 001040a0
 */
TLaserWriterLSDriver::ErrorIsFatal(long) {
    /*
        1040a0:	e291cb2b 	adds	ip, r1, #44032	; 0xac00
        1040a4:	d37c0043 	cmnle	ip, #67	; 0x43
        1040a8:	ba000003 	blt	1040bc <TLaserWriterLSDriver::ErrorIsFatal(long)+0x1c>
        1040ac:	e291ccab 	adds	ip, r1, #43776	; 0xab00
        1040b0:	d37c00e0 	cmnle	ip, #224	; 0xe0
        1040b4:	d3a00001 	movle	r0, #1	; 0x1
        1040b8:	da000000 	ble	1040c0 <TLaserWriterLSDriver::ErrorIsFatal(long)+0x20>
        1040bc:	e3a00000 	mov	r0, #0	; 0x0
        1040c0:	e20000ff 	and	r0, r0, #255	; 0xff
        1040c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLaserWriterLSDriver::BreakOccurred(void)
 * Address: 001040c8
 */
TLaserWriterLSDriver::BreakOccurred(void) {
    /*
        1040c8:	e3a01001 	mov	r1, #1	; 0x1
        1040cc:	e5c01179 	strb	r1, [r0, #377]	; fField377
        1040d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLaserWriterLSDriver::ErrorIsProblem(long)
 * Address: 001040d4
 */
TLaserWriterLSDriver::ErrorIsProblem(long) {
    /*
        1040d4:	e291cb2b 	adds	ip, r1, #44032	; 0xac00
        1040d8:	d37c00a7 	cmnle	ip, #167	; 0xa7
        1040dc:	ba000003 	blt	1040f0 <TLaserWriterLSDriver::ErrorIsProblem(long)+0x1c>
        1040e0:	e291cb2b 	adds	ip, r1, #44032	; 0xac00
        1040e4:	d37c0044 	cmnle	ip, #68	; 0x44
        1040e8:	d3a00001 	movle	r0, #1	; 0x1
        1040ec:	da000000 	ble	1040f4 <TLaserWriterLSDriver::ErrorIsProblem(long)+0x20>
        1040f0:	e3a00000 	mov	r0, #0	; 0x0
        1040f4:	e20000ff 	and	r0, r0, #255	; 0xff
        1040f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLaserWriterLSDriver::ExtinguishLEDs(char)
 * Address: 001040fc
 */
TLaserWriterLSDriver::ExtinguishLEDs(char) {
    /*
        1040fc:	e20110ff 	and	r1, r1, #255	; 0xff
        104100:	e5d02022 	ldrb	r2, [r0, #34]	; fField34
        104104:	e1c21001 	bic	r1, r2, r1
        104108:	e5c01022 	strb	r1, [r0, #34]	; fField34
        10410c:	e20120ff 	and	r2, r1, #255	; 0xff
        104110:	e3a01084 	mov	r1, #132	; 0x84
        104114:	ea690051 	b	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
    */
}

/**
 * Symbol: TLaserWriterLSDriver::FlushBuffer(void)
 * Address: 00104118
 */
TLaserWriterLSDriver::FlushBuffer(void) {
    /*
        104118:	e1a0c00d 	mov	ip, sp
        10411c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        104120:	e24cb004 	sub	fp, ip, #4	; 0x4
        104124:	e1a04000 	mov	r4, r0
        104128:	eb68ef9d 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        10412c:	e3300000 	teq	r0, #0	; 0x0
        104130:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        104134:	e24dd018 	sub	sp, sp, #24	; 0x18
        104138:	e1a0000d 	mov	r0, sp
        10413c:	eb6ac668 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        104140:	e1a0000d 	mov	r0, sp
        104144:	eb6ad2cc 	bl	1bb8c7c <TOptionArray::$Init(void)>
        104148:	e3300000 	teq	r0, #0	; 0x0
        10414c:	1a00000b 	bne	104180 <TLaserWriterLSDriver::FlushBuffer(void)+0x68>
        104150:	e24dd010 	sub	sp, sp, #16	; 0x10
        104154:	e1a0000d 	mov	r0, sp
        104158:	eb6adf23 	bl	1bbbdec <TCMOSerialDiscard::$__ct(void)>
        10415c:	e59d0008 	ldr	r0, [sp, #8]
        104160:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        104164:	e3800c02 	orr	r0, r0, #512	; 0x200
        104168:	e58d0008 	str	r0, [sp, #8]
        10416c:	e1a0200d 	mov	r2, sp
        104170:	e59d1010 	ldr	r1, [sp, #16]
        104174:	e28d0010 	add	r0, sp, #16	; 0x10
        104178:	eb6ad6c9 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        10417c:	e28dd010 	add	sp, sp, #16	; 0x10
        104180:	e3300000 	teq	r0, #0	; 0x0
        104184:	1a000004 	bne	10419c <TLaserWriterLSDriver::FlushBuffer(void)+0x84>
        104188:	e1a0200d 	mov	r2, sp
        10418c:	e3a03000 	mov	r3, #0	; 0x0
        104190:	e3a01c05 	mov	r1, #1280	; 0x500
        104194:	e5940018 	ldr	r0, [r4, #24]	; fField24
        104198:	eb6ad6ce 	bl	1bb9cd8 <TEndpoint::$OptMgmt(unsigned long, TOptionArray *, unsigned long)>
        10419c:	e3300000 	teq	r0, #0	; 0x0
        1041a0:	159f1014 	ldrne	r1, [pc, #14]	; 1041bc <TLaserWriterLSDriver::FlushBuffer(void)+0xa4>
        1041a4:	11a00004 	movne	r0, r4
        1041a8:	1b690439 	blne	1b45294 <TLaserWriterLSDriver::$SetSoftError(long)>
        1041ac:	e1a0000d 	mov	r0, sp
        1041b0:	e3a01000 	mov	r1, #0	; 0x0
        1041b4:	eb6aca5c 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        1041b8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1041bc:	ffff541f 	swinv	0x00ff541f
    */
}

/**
 * Symbol: TLaserWriterLSDriver::ForceLEDs(char)
 * Address: 001041c0
 */
TLaserWriterLSDriver::ForceLEDs(char) {
    /*
        1041c0:	e20110ff 	and	r1, r1, #255	; 0xff
        1041c4:	e5d02022 	ldrb	r2, [r0, #34]	; fField34
        1041c8:	e1320001 	teq	r2, r1
        1041cc:	13c22007 	bicne	r2, r2, #7	; 0x7
        1041d0:	15c02022 	strneb	r2, [r0, #34]	; fField34
        1041d4:	1a68f7d4 	bne	1b4212c <TLaserWriterLSDriver::$LightLEDs(char)>
        1041d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLaserWriterLSDriver::GetBandPrefs(DotPrinterPrefs *)
 * Address: 001041dc
 */
TLaserWriterLSDriver::GetBandPrefs(DotPrinterPrefs *) {
    /*
        1041dc:	e3a00019 	mov	r0, #25	; 0x19
        1041e0:	e5810000 	str	r0, [r1]
        1041e4:	e3a00032 	mov	r0, #50	; 0x32
        1041e8:	e5810004 	str	r0, [r1, #4]
        1041ec:	e3a00000 	mov	r0, #0	; 0x0
        1041f0:	e5c10008 	strb	r0, [r1, #8]
        1041f4:	e3a00001 	mov	r0, #1	; 0x1
        1041f8:	e5c10009 	strb	r0, [r1, #9]
        1041fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLaserWriterLSDriver::GetControllerStatus(char &)
 * Address: 00104200
 */
TLaserWriterLSDriver::GetControllerStatus(char &) {
    /*
        104200:	e1a0c00d 	mov	ip, sp
        104204:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        104208:	e24cb004 	sub	fp, ip, #4	; 0x4
        10420c:	e1a04000 	mov	r4, r0
        104210:	e1a05001 	mov	r5, r1
        104214:	eb68ef72 	bl	1b3ffe4 <TLaserWriterLSDriver::$DoGetControllerStatus(void)>
        104218:	e3100008 	tst	r0, #8	; 0x8
        10421c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        104220:	e5d40022 	ldrb	r0, [r4, #34]	; fField34
        104224:	e2000001 	and	r0, r0, #1	; 0x1
        104228:	e5d51000 	ldrb	r1, [r5]
        10422c:	e1800001 	orr	r0, r0, r1
        104230:	e5c50000 	strb	r0, [r5]
        104234:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::GetEngineRegister(long)
 * Address: 00104238
 */
TLaserWriterLSDriver::GetEngineRegister(long) {
    /*
        104238:	e1a0c00d 	mov	ip, sp
        10423c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        104240:	e24cb004 	sub	fp, ip, #4	; 0x4
        104244:	e1a04000 	mov	r4, r0
        104248:	e1a05001 	mov	r5, r1
        10424c:	e24dd004 	sub	sp, sp, #4	; 0x4
        104250:	e3a06000 	mov	r6, #0	; 0x0
        104254:	eb68ef52 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104258:	e3300000 	teq	r0, #0	; 0x0
        10425c:	0a000009 	beq	104288 <TLaserWriterLSDriver::GetEngineRegister(long)+0x50>
        104260:	e1a02005 	mov	r2, r5
        104264:	e1a00004 	mov	r0, r4
        104268:	e3a01083 	mov	r1, #131	; 0x83
        10426c:	eb68fffb 	bl	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
        104270:	e1a0100d 	mov	r1, sp
        104274:	e1a00004 	mov	r0, r4
        104278:	eb68fbd9 	bl	1b431e4 <TLaserWriterLSDriver::$Receive(void *)>
        10427c:	e3300000 	teq	r0, #0	; 0x0
        104280:	05dd0000 	ldreqb	r0, [sp]
        104284:	0a000000 	beq	10428c <TLaserWriterLSDriver::GetEngineRegister(long)+0x54>
        104288:	e1a00006 	mov	r0, r6
        10428c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::GetExceptionStatus(void)
 * Address: 00104290
 */
TLaserWriterLSDriver::GetExceptionStatus(void) {
    /*
        104290:	e1a0c00d 	mov	ip, sp
        104294:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        104298:	e24cb004 	sub	fp, ip, #4	; 0x4
        10429c:	e1a04000 	mov	r4, r0
        1042a0:	e3a00000 	mov	r0, #0	; 0x0
        1042a4:	e56d0004 	strb	r0, [sp, -#4]!
        1042a8:	e3a05000 	mov	r5, #0	; 0x0
        1042ac:	e1a00004 	mov	r0, r4
        1042b0:	eb68ef3b 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        1042b4:	e3300000 	teq	r0, #0	; 0x0
        1042b8:	0a000011 	beq	104304 <TLaserWriterLSDriver::GetExceptionStatus(void)+0x74>
        1042bc:	e1a00004 	mov	r0, r4
        1042c0:	e3a02000 	mov	r2, #0	; 0x0
        1042c4:	e3a0108e 	mov	r1, #142	; 0x8e
        1042c8:	eb68ffe4 	bl	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
        1042cc:	e1a0100d 	mov	r1, sp
        1042d0:	e1a00004 	mov	r0, r4
        1042d4:	eb68fbc2 	bl	1b431e4 <TLaserWriterLSDriver::$Receive(void *)>
        1042d8:	e3300000 	teq	r0, #0	; 0x0
        1042dc:	1a000008 	bne	104304 <TLaserWriterLSDriver::GetExceptionStatus(void)+0x74>
        1042e0:	e5dd0000 	ldrb	r0, [sp]
        1042e4:	e3300000 	teq	r0, #0	; 0x0
        1042e8:	1a000004 	bne	104300 <TLaserWriterLSDriver::GetExceptionStatus(void)+0x70>
        1042ec:	e1a0100d 	mov	r1, sp
        1042f0:	e1a00004 	mov	r0, r4
        1042f4:	eb68fbba 	bl	1b431e4 <TLaserWriterLSDriver::$Receive(void *)>
        1042f8:	e3300000 	teq	r0, #0	; 0x0
        1042fc:	1a000000 	bne	104304 <TLaserWriterLSDriver::GetExceptionStatus(void)+0x74>
        104300:	e5dd5000 	ldrb	r5, [sp]
        104304:	e1a00005 	mov	r0, r5
        104308:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::GetMinimalStatus(void)
 * Address: 0010430c
 */
TLaserWriterLSDriver::GetMinimalStatus(void) {
    /*
        10430c:	e1a0c00d 	mov	ip, sp
        104310:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        104314:	e24cb004 	sub	fp, ip, #4	; 0x4
        104318:	e1a04000 	mov	r4, r0
        10431c:	eb68ef20 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104320:	e3300000 	teq	r0, #0	; 0x0
        104324:	0a000003 	beq	104338 <TLaserWriterLSDriver::GetMinimalStatus(void)+0x2c>
        104328:	e1a00004 	mov	r0, r4
        10432c:	e3a02000 	mov	r2, #0	; 0x0
        104330:	e3a01000 	mov	r1, #0	; 0x0
        104334:	eb68f362 	bl	1b410c4 <TLaserWriterLSDriver::$GetStatusRegister1(unsigned char, char *)>
        104338:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        10433c:	e3300000 	teq	r0, #0	; 0x0
        104340:	13a00001 	movne	r0, #1	; 0x1
        104344:	e20000ff 	and	r0, r0, #255	; 0xff
        104348:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::GetPageInfo(PrPageInfo *)
 * Address: 0010434c
 */
TLaserWriterLSDriver::GetPageInfo(PrPageInfo *) {
    /*
        10434c:	e1a0c00d 	mov	ip, sp
        104350:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        104354:	e24cb004 	sub	fp, ip, #4	; 0x4
        104358:	e1a04000 	mov	r4, r0
        10435c:	e1a05001 	mov	r5, r1
        104360:	e5900010 	ldr	r0, [r0, #16]
        104364:	e59f1050 	ldr	r1, [pc, #50]	; 1043bc <TLaserWriterLSDriver::GetPageInfo(PrPageInfo *)+0x70>
        104368:	e5911000 	ldr	r1, [r1]
        10436c:	e5911000 	ldr	r1, [r1]
        104370:	e5900008 	ldr	r0, [r0, #8]
        104374:	e5900000 	ldr	r0, [r0]
        104378:	eb6affac 	bl	1bc4230 <$EQRef__FlT1>
        10437c:	e1b01000 	movs	r1, r0
        104380:	e3a00009 	mov	r0, #9	; 0x9
        104384:	0a00000d 	beq	1043c0 <TLaserWriterLSDriver::GetPageInfo(PrPageInfo *)+0x74>
        104388:	e3a01020 	mov	r1, #32	; 0x20
        10438c:	e5c4117f 	strb	r1, [r4, #383]	; fField383
        104390:	e5c4017e 	strb	r0, [r4, #382]	; fField382
        104394:	e3a01034 	mov	r1, #52	; 0x34
        104398:	e5c4117d 	strb	r1, [r4, #381]	; fField381
        10439c:	e3a0100d 	mov	r1, #13	; 0xd
        1043a0:	e5c4117c 	strb	r1, [r4, #380]	; fField380
        1043a4:	e3a020ab 	mov	r2, #171	; 0xab
        1043a8:	e5c42183 	strb	r2, [r4, #387]	; fField387
        1043ac:	e5c40182 	strb	r0, [r4, #386]	; fField386
        1043b0:	e3a00f6b 	mov	r0, #428	; 0x1ac
        1043b4:	e2800b03 	add	r0, r0, #3072	; 0xc00
        1043b8:	ea00000c 	b	1043f0 <TLaserWriterLSDriver::GetPageInfo(PrPageInfo *)+0xa4>
        1043bc:	00681d08 	rsbeq	r1, r8, r8, lsl #26
        1043c0:	e3a01060 	mov	r1, #96	; 0x60
        1043c4:	e5c4117f 	strb	r1, [r4, #383]	; fField383
        1043c8:	e5c4017e 	strb	r0, [r4, #382]	; fField382
        1043cc:	e3a0106c 	mov	r1, #108	; 0x6c
        1043d0:	e5c4117d 	strb	r1, [r4, #381]	; fField381
        1043d4:	e3a0100c 	mov	r1, #12	; 0xc
        1043d8:	e5c4117c 	strb	r1, [r4, #380]	; fField380
        1043dc:	e3a020f6 	mov	r2, #246	; 0xf6
        1043e0:	e5c42183 	strb	r2, [r4, #387]	; fField387
        1043e4:	e5c40182 	strb	r0, [r4, #386]	; fField386
        1043e8:	e3a000e4 	mov	r0, #228	; 0xe4
        1043ec:	e2800b03 	add	r0, r0, #3072	; 0xc00
        1043f0:	e5c40181 	strb	r0, [r4, #385]	; fField385
        1043f4:	e5c41180 	strb	r1, [r4, #384]	; fField384
        1043f8:	e2850008 	add	r0, r5, #8	; 0x8
        1043fc:	e594117c 	ldr	r1, [r4, #380]	; fField380
        104400:	e5801000 	str	r1, [r0]
        104404:	e3a0074b 	mov	r0, #19660800	; 0x12c0000
        104408:	e5850004 	str	r0, [r5, #4]
        10440c:	e5850000 	str	r0, [r5]
        104410:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::CancelJob(unsigned char)
 * Address: 00104414
 */
TLaserWriterLSDriver::CancelJob(unsigned char) {
    /*
        104414:	e1a0c00d 	mov	ip, sp
        104418:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        10441c:	e24cb004 	sub	fp, ip, #4	; 0x4
        104420:	e1a04000 	mov	r4, r0
        104424:	e31100ff 	tst	r1, #255	; 0xff
        104428:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        10442c:	e1a00004 	mov	r0, r4
        104430:	e3a01000 	mov	r1, #0	; 0x0
        104434:	eb68ff77 	bl	1b44218 <TLaserWriterLSDriver::$ResetPrinter(unsigned char)>
        104438:	e1a00004 	mov	r0, r4
        10443c:	e3a0101c 	mov	r1, #28	; 0x1c
        104440:	e2411b2b 	sub	r1, r1, #44032	; 0xac00
        104444:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        104448:	ea690391 	b	1b45294 <TLaserWriterLSDriver::$SetSoftError(long)>
    */
}

/**
 * Symbol: TLaserWriterLSDriver::GetStatus(unsigned char)
 * Address: 0010444c
 */
TLaserWriterLSDriver::GetStatus(unsigned char) {
    /*
        10444c:	e1a0c00d 	mov	ip, sp
        104450:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        104454:	e24cb004 	sub	fp, ip, #4	; 0x4
        104458:	e1a04000 	mov	r4, r0
        10445c:	e20170ff 	and	r7, r1, #255	; 0xff
        104460:	e3a06000 	mov	r6, #0	; 0x0
        104464:	e56d6004 	strb	r6, [sp, -#4]!
        104468:	e3a05001 	mov	r5, #1	; 0x1
        10446c:	eb68eecc 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104470:	e3300000 	teq	r0, #0	; 0x0
        104474:	0a00001b 	beq	1044e8 <TLaserWriterLSDriver::GetStatus(unsigned char)+0x9c>
        104478:	e3370000 	teq	r7, #0	; 0x0
        10447c:	1a000003 	bne	104490 <TLaserWriterLSDriver::GetStatus(unsigned char)+0x44>
        104480:	e1a00004 	mov	r0, r4
        104484:	eb68f2ff 	bl	1b41088 <TLaserWriterLSDriver::$GetMinimalStatus(void)>
        104488:	e1a05000 	mov	r5, r0
        10448c:	ea000015 	b	1044e8 <TLaserWriterLSDriver::GetStatus(unsigned char)+0x9c>
        104490:	e1a0200d 	mov	r2, sp
        104494:	e584601c 	str	r6, [r4, #28]	; fField28
        104498:	e1a00004 	mov	r0, r4
        10449c:	e3a01001 	mov	r1, #1	; 0x1
        1044a0:	eb68f307 	bl	1b410c4 <TLaserWriterLSDriver::$GetStatusRegister1(unsigned char, char *)>
        1044a4:	e1a00004 	mov	r0, r4
        1044a8:	eb68f303 	bl	1b410bc <TLaserWriterLSDriver::$GetStatusRegister0(void)>
        1044ac:	e1a0100d 	mov	r1, sp
        1044b0:	e1a00004 	mov	r0, r4
        1044b4:	eb68eeef 	bl	1b40078 <TLaserWriterLSDriver::$GetControllerStatus(char &)>
        1044b8:	e5dd1000 	ldrb	r1, [sp]
        1044bc:	e1a00004 	mov	r0, r4
        1044c0:	eb68eee8 	bl	1b40068 <TLaserWriterLSDriver::$ForceLEDs(char)>
        1044c4:	e1a00004 	mov	r0, r4
        1044c8:	e3a01001 	mov	r1, #1	; 0x1
        1044cc:	eb690382 	bl	1b452dc <TLaserWriterLSDriver::$TestAndProcessPrinterBreak(unsigned char)>
        1044d0:	e1a00004 	mov	r0, r4
        1044d4:	eb68ea90 	bl	1b3ef1c <TLaserWriterLSDriver::$CheckMisprint(void)>
        1044d8:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        1044dc:	e3300000 	teq	r0, #0	; 0x0
        1044e0:	13a00001 	movne	r0, #1	; 0x1
        1044e4:	e20050ff 	and	r5, r0, #255	; 0xff
        1044e8:	e1a00005 	mov	r0, r5
        1044ec:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::GetStatusRegister0(void)
 * Address: 001044f0
 */
TLaserWriterLSDriver::GetStatusRegister0(void) {
    /*
        1044f0:	e1a0c00d 	mov	ip, sp
        1044f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1044f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1044fc:	e1a04000 	mov	r4, r0
        104500:	eb68eea7 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104504:	e3300000 	teq	r0, #0	; 0x0
        104508:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        10450c:	e1a00004 	mov	r0, r4
        104510:	e3a01001 	mov	r1, #1	; 0x1
        104514:	eb68f2d9 	bl	1b41080 <TLaserWriterLSDriver::$GetEngineRegister(long)>
        104518:	e3100012 	tst	r0, #18	; 0x12
        10451c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        104520:	e1a00004 	mov	r0, r4
        104524:	eb68f2e7 	bl	1b410c8 <TLaserWriterLSDriver::$GetStatusRegister2(void)>
        104528:	e1a00004 	mov	r0, r4
        10452c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        104530:	ea68f2e5 	b	1b410cc <TLaserWriterLSDriver::$GetStatusRegister3(void)>
    */
}

/**
 * Symbol: TLaserWriterLSDriver::GetStatusRegister1(unsigned char, char *)
 * Address: 00104534
 */
TLaserWriterLSDriver::GetStatusRegister1(unsigned char, char *) {
    /*
        104534:	e1a0c00d 	mov	ip, sp
        104538:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        10453c:	e24cb004 	sub	fp, ip, #4	; 0x4
        104540:	e1a05000 	mov	r5, r0
        104544:	e1a04002 	mov	r4, r2
        104548:	e20170ff 	and	r7, r1, #255	; 0xff
        10454c:	e3a06000 	mov	r6, #0	; 0x0
        104550:	eb68ee93 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104554:	e3300000 	teq	r0, #0	; 0x0
        104558:	0a000025 	beq	1045f4 <TLaserWriterLSDriver::GetStatusRegister1(unsigned char, char *)+0xc0>
        10455c:	e1a00005 	mov	r0, r5
        104560:	e3a01002 	mov	r1, #2	; 0x2
        104564:	eb68f2c5 	bl	1b41080 <TLaserWriterLSDriver::$GetEngineRegister(long)>
        104568:	e1a06000 	mov	r6, r0
        10456c:	e3100004 	tst	r0, #4	; 0x4
        104570:	11a00005 	movne	r0, r5
        104574:	13a010b5 	movne	r1, #181	; 0xb5
        104578:	12411cad 	subne	r1, r1, #44288	; 0xad00
        10457c:	1a00001b 	bne	1045f0 <TLaserWriterLSDriver::GetStatusRegister1(unsigned char, char *)+0xbc>
        104580:	e3160008 	tst	r6, #8	; 0x8
        104584:	0a000008 	beq	1045ac <TLaserWriterLSDriver::GetStatusRegister1(unsigned char, char *)+0x78>
        104588:	e1a00005 	mov	r0, r5
        10458c:	e3a010b6 	mov	r1, #182	; 0xb6
        104590:	e2411cad 	sub	r1, r1, #44288	; 0xad00
        104594:	eb69033e 	bl	1b45294 <TLaserWriterLSDriver::$SetSoftError(long)>
        104598:	e3340000 	teq	r4, #0	; 0x0
        10459c:	15d40000 	ldrneb	r0, [r4]
        1045a0:	13800004 	orrne	r0, r0, #4	; 0x4
        1045a4:	15c40000 	strneb	r0, [r4]
        1045a8:	ea000011 	b	1045f4 <TLaserWriterLSDriver::GetStatusRegister1(unsigned char, char *)+0xc0>
        1045ac:	e3370000 	teq	r7, #0	; 0x0
        1045b0:	0a00000f 	beq	1045f4 <TLaserWriterLSDriver::GetStatusRegister1(unsigned char, char *)+0xc0>
        1045b4:	e3160010 	tst	r6, #16	; 0x10
        1045b8:	0a000007 	beq	1045dc <TLaserWriterLSDriver::GetStatusRegister1(unsigned char, char *)+0xa8>
        1045bc:	e1a00005 	mov	r0, r5
        1045c0:	e3a01fee 	mov	r1, #952	; 0x3b8
        1045c4:	e2411a0b 	sub	r1, r1, #45056	; 0xb000
        1045c8:	eb690331 	bl	1b45294 <TLaserWriterLSDriver::$SetSoftError(long)>
        1045cc:	e3340000 	teq	r4, #0	; 0x0
        1045d0:	15d40000 	ldrneb	r0, [r4]
        1045d4:	13800002 	orrne	r0, r0, #2	; 0x2
        1045d8:	15c40000 	strneb	r0, [r4]
        1045dc:	e3160020 	tst	r6, #32	; 0x20
        1045e0:	0a000003 	beq	1045f4 <TLaserWriterLSDriver::GetStatusRegister1(unsigned char, char *)+0xc0>
        1045e4:	e1a00005 	mov	r0, r5
        1045e8:	e3a010ba 	mov	r1, #186	; 0xba
        1045ec:	e2411cad 	sub	r1, r1, #44288	; 0xad00
        1045f0:	eb690327 	bl	1b45294 <TLaserWriterLSDriver::$SetSoftError(long)>
        1045f4:	e1a00006 	mov	r0, r6
        1045f8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::GetStatusRegister2(void)
 * Address: 001045fc
 */
TLaserWriterLSDriver::GetStatusRegister2(void) {
    /*
        1045fc:	e1a0c00d 	mov	ip, sp
        104600:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        104604:	e24cb004 	sub	fp, ip, #4	; 0x4
        104608:	e1a04000 	mov	r4, r0
        10460c:	eb68ee64 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104610:	e3300000 	teq	r0, #0	; 0x0
        104614:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        104618:	e1a00004 	mov	r0, r4
        10461c:	e3a01004 	mov	r1, #4	; 0x4
        104620:	eb68f296 	bl	1b41080 <TLaserWriterLSDriver::$GetEngineRegister(long)>
        104624:	e3100040 	tst	r0, #64	; 0x40
        104628:	02001020 	andeq	r1, r0, #32	; 0x20
        10462c:	03310000 	teqeq	r1, #0	; 0x0
        104630:	02000010 	andeq	r0, r0, #16	; 0x10
        104634:	03300000 	teqeq	r0, #0	; 0x0
        104638:	11a00004 	movne	r0, r4
        10463c:	13a01e42 	movne	r1, #1056	; 0x420
        104640:	12411a0b 	subne	r1, r1, #45056	; 0xb000
        104644:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        104648:	1a690311 	bne	1b45294 <TLaserWriterLSDriver::$SetSoftError(long)>
        10464c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::GetStatusRegister3(void)
 * Address: 00104650
 */
TLaserWriterLSDriver::GetStatusRegister3(void) {
    /*
        104650:	e1a0c00d 	mov	ip, sp
        104654:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        104658:	e24cb004 	sub	fp, ip, #4	; 0x4
        10465c:	e1a04000 	mov	r4, r0
        104660:	e3a05000 	mov	r5, #0	; 0x0
        104664:	eb68ee4e 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104668:	e3300000 	teq	r0, #0	; 0x0
        10466c:	0a000012 	beq	1046bc <TLaserWriterLSDriver::GetStatusRegister3(void)+0x6c>
        104670:	e1a00004 	mov	r0, r4
        104674:	e3a01007 	mov	r1, #7	; 0x7
        104678:	eb68f280 	bl	1b41080 <TLaserWriterLSDriver::$GetEngineRegister(long)>
        10467c:	e1a05000 	mov	r5, r0
        104680:	e3100040 	tst	r0, #64	; 0x40
        104684:	11a00004 	movne	r0, r4
        104688:	13a01e42 	movne	r1, #1056	; 0x420
        10468c:	12411a0b 	subne	r1, r1, #45056	; 0xb000
        104690:	1b6902ff 	blne	1b45294 <TLaserWriterLSDriver::$SetSoftError(long)>
        104694:	e3150010 	tst	r5, #16	; 0x10
        104698:	11a00004 	movne	r0, r4
        10469c:	13a010b6 	movne	r1, #182	; 0xb6
        1046a0:	12411cad 	subne	r1, r1, #44288	; 0xad00
        1046a4:	1b6902fa 	blne	1b45294 <TLaserWriterLSDriver::$SetSoftError(long)>
        1046a8:	e3150008 	tst	r5, #8	; 0x8
        1046ac:	11a00004 	movne	r0, r4
        1046b0:	13a010b9 	movne	r1, #185	; 0xb9
        1046b4:	12411cad 	subne	r1, r1, #44288	; 0xad00
        1046b8:	1b6902f5 	blne	1b45294 <TLaserWriterLSDriver::$SetSoftError(long)>
        1046bc:	e1a00005 	mov	r0, r5
        1046c0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::GetStatusRegister18(void)
 * Address: 001046c4
 */
TLaserWriterLSDriver::GetStatusRegister18(void) {
    /*
        1046c4:	e1a0c00d 	mov	ip, sp
        1046c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1046cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1046d0:	e1a04000 	mov	r4, r0
        1046d4:	eb68ee32 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        1046d8:	e3300000 	teq	r0, #0	; 0x0
        1046dc:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1046e0:	e5d40020 	ldrb	r0, [r4, #32]	; fField32
        1046e4:	e3c00003 	bic	r0, r0, #3	; 0x3
        1046e8:	e5c40020 	strb	r0, [r4, #32]	; fField32
        1046ec:	e1a00004 	mov	r0, r4
        1046f0:	e3a01025 	mov	r1, #37	; 0x25
        1046f4:	eb68f261 	bl	1b41080 <TLaserWriterLSDriver::$GetEngineRegister(long)>
        1046f8:	e3100020 	tst	r0, #32	; 0x20
        1046fc:	15d41020 	ldrneb	r1, [r4, #32]	; fField32
        104700:	13811002 	orrne	r1, r1, #2	; 0x2
        104704:	15c41020 	strneb	r1, [r4, #32]	; fField32
        104708:	e3100040 	tst	r0, #64	; 0x40
        10470c:	15d40020 	ldrneb	r0, [r4, #32]	; fField32
        104710:	13800001 	orrne	r0, r0, #1	; 0x1
        104714:	15c40020 	strneb	r0, [r4, #32]	; fField32
        104718:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::GetStatusRegister21(void)
 * Address: 0010471c
 */
TLaserWriterLSDriver::GetStatusRegister21(void) {
    /*
        10471c:	e1a0c00d 	mov	ip, sp
        104720:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        104724:	e24cb004 	sub	fp, ip, #4	; 0x4
        104728:	e1a04000 	mov	r4, r0
        10472c:	eb68ee1c 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104730:	e3300000 	teq	r0, #0	; 0x0
        104734:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        104738:	e1a00004 	mov	r0, r4
        10473c:	e3a0102a 	mov	r1, #42	; 0x2a
        104740:	eb68f24e 	bl	1b41080 <TLaserWriterLSDriver::$GetEngineRegister(long)>
        104744:	e3a01000 	mov	r1, #0	; 0x0
        104748:	e5c41021 	strb	r1, [r4, #33]	; fField33
        10474c:	e3100020 	tst	r0, #32	; 0x20
        104750:	13a01002 	movne	r1, #2	; 0x2
        104754:	15c41021 	strneb	r1, [r4, #33]	; fField33
        104758:	e3100040 	tst	r0, #64	; 0x40
        10475c:	15d40021 	ldrneb	r0, [r4, #33]	; fField33
        104760:	13800001 	orrne	r0, r0, #1	; 0x1
        104764:	15c40021 	strneb	r0, [r4, #33]	; fField33
        104768:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::ImageBand(PixelMap *, Rect const *)
 * Address: 0010476c
 */
TLaserWriterLSDriver::ImageBand(PixelMap *, Rect const *) {
    /*
        10476c:	e1a0c00d 	mov	ip, sp
        104770:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        104774:	e24cb004 	sub	fp, ip, #4	; 0x4
        104778:	e1a04000 	mov	r4, r0
        10477c:	e1a06001 	mov	r6, r1
        104780:	e1a05002 	mov	r5, r2
        104784:	e3a01000 	mov	r1, #0	; 0x0
        104788:	eb68fa84 	bl	1b431a0 <TLaserWriterLSDriver::$PrinterCanPrint(unsigned char)>
        10478c:	e3300000 	teq	r0, #0	; 0x0
        104790:	0a000019 	beq	1047fc <TLaserWriterLSDriver::ImageBand(PixelMap *, Rect const *)+0x90>
        104794:	e1a00004 	mov	r0, r4
        104798:	eb68ee03 	bl	1b3ffac <TLaserWriterLSDriver::$ContinueRendering(void)>
        10479c:	e3300000 	teq	r0, #0	; 0x0
        1047a0:	0a000015 	beq	1047fc <TLaserWriterLSDriver::ImageBand(PixelMap *, Rect const *)+0x90>
        1047a4:	e1a00004 	mov	r0, r4
        1047a8:	eb68e5ce 	bl	1b3dee8 <TLaserWriterLSDriver::$BlinkLED(void)>
        1047ac:	e5951004 	ldr	r1, [r5, #4]
        1047b0:	e1a01841 	mov	r1, r1, asr #16
        1047b4:	e5950000 	ldr	r0, [r5]
        1047b8:	e0510840 	subs	r0, r1, r0, asr #16
        1047bc:	0a00000e 	beq	1047fc <TLaserWriterLSDriver::ImageBand(PixelMap *, Rect const *)+0x90>
        1047c0:	e1a01005 	mov	r1, r5
        1047c4:	e1a00004 	mov	r0, r4
        1047c8:	eb68fea3 	bl	1b4425c <TLaserWriterLSDriver::$SendBlankLines(Rect const *)>
        1047cc:	e5960000 	ldr	r0, [r6]
        1047d0:	e5961008 	ldr	r1, [r6, #8]
        1047d4:	e5952000 	ldr	r2, [r5]
        1047d8:	e1a02842 	mov	r2, r2, asr #16
        1047dc:	e0422841 	sub	r2, r2, r1, asr #16
        1047e0:	e5961004 	ldr	r1, [r6, #4]
        1047e4:	e1a01841 	mov	r1, r1, asr #16
        1047e8:	e0230291 	mla	r3, r1, r2, r0
        1047ec:	e1a02005 	mov	r2, r5
        1047f0:	e1a01006 	mov	r1, r6
        1047f4:	e1a00004 	mov	r0, r4
        1047f8:	eb68fe92 	bl	1b44248 <TLaserWriterLSDriver::$ScanlineLoop(PixelMap *, Rect const *, char *)>
        1047fc:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        104800:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::InitializeConnection(void)
 * Address: 00104804
 */
TLaserWriterLSDriver::InitializeConnection(void) {
    /*
        104804:	e1a0c00d 	mov	ip, sp
        104808:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        10480c:	e24cb004 	sub	fp, ip, #4	; 0x4
        104810:	e1a04000 	mov	r4, r0
        104814:	e3a06000 	mov	r6, #0	; 0x0
        104818:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        10481c:	e1a0000d 	mov	r0, sp
        104820:	eb6ac4af 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        104824:	e1a0000d 	mov	r0, sp
        104828:	eb6ad113 	bl	1bb8c7c <TOptionArray::$Init(void)>
        10482c:	e1b05000 	movs	r5, r0
        104830:	1a000054 	bne	104988 <TLaserWriterLSDriver::InitializeConnection(void)+0x184>
        104834:	e24dd00c 	sub	sp, sp, #12	; 0xc
        104838:	e1a0000d 	mov	r0, sp
        10483c:	e3a01303 	mov	r1, #201326592	; 0xc000000
        104840:	eb6ac8b8 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        104844:	e1a0000d 	mov	r0, sp
        104848:	e59f1048 	ldr	r1, [pc, #48]	; 104898 <TLaserWriterLSDriver::InitializeConnection(void)+0x94>
        10484c:	eb6ad938 	bl	1bbad34 <TOption::$SetAsService(unsigned long)>
        104850:	e1a0200d 	mov	r2, sp
        104854:	e59d100c 	ldr	r1, [sp, #12]
        104858:	e28d000c 	add	r0, sp, #12	; 0xc
        10485c:	eb6ad510 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        104860:	e1a05000 	mov	r5, r0
        104864:	e3a07001 	mov	r7, #1	; 0x1
        104868:	e3500000 	cmp	r0, #0	; 0x0
        10486c:	1a00000a 	bne	10489c <TLaserWriterLSDriver::InitializeConnection(void)+0x98>
        104870:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        104874:	e1a0000d 	mov	r0, sp
        104878:	eb6add5c 	bl	1bbbdf0 <TCMOSerialIOParms::$__ct(void)>
        10487c:	e58d7018 	str	r7, [sp, #24]	; fField24
        104880:	e1a0200d 	mov	r2, sp
        104884:	e59d1028 	ldr	r1, [sp, #40]
        104888:	e28d0028 	add	r0, sp, #40	; 0x28
        10488c:	eb6ad504 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        104890:	e28dd01c 	add	sp, sp, #28	; 0x1c
        104894:	ea000001 	b	1048a0 <TLaserWriterLSDriver::InitializeConnection(void)+0x9c>
        104898:	61736572 	cmnvs	r3, r2, ror r5
        10489c:	1a000011 	bne	1048e8 <TLaserWriterLSDriver::InitializeConnection(void)+0xe4>
        1048a0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1048a4:	e1a0000d 	mov	r0, sp
        1048a8:	eb6add45 	bl	1bbbdc4 <TCMOBreakFraming::$__ct(void)>
        1048ac:	e3a000a0 	mov	r0, #160	; 0xa0
        1048b0:	e58d000c 	str	r0, [sp, #12]
        1048b4:	e3a00050 	mov	r0, #80	; 0x50
        1048b8:	e58d0010 	str	r0, [sp, #16]
        1048bc:	e5cd7014 	strb	r7, [sp, #20]	; fField20
        1048c0:	e59d0008 	ldr	r0, [sp, #8]
        1048c4:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        1048c8:	e3800c02 	orr	r0, r0, #512	; 0x200
        1048cc:	e58d0008 	str	r0, [sp, #8]
        1048d0:	e1a0200d 	mov	r2, sp
        1048d4:	e59d1028 	ldr	r1, [sp, #40]
        1048d8:	e28d0028 	add	r0, sp, #40	; 0x28
        1048dc:	eb6ad4f0 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1048e0:	e1a05000 	mov	r5, r0
        1048e4:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1048e8:	e3350000 	teq	r5, #0	; 0x0
        1048ec:	1a00000e 	bne	10492c <TLaserWriterLSDriver::InitializeConnection(void)+0x128>
        1048f0:	e24dd014 	sub	sp, sp, #20	; 0x14
        1048f4:	e1a0000d 	mov	r0, sp
        1048f8:	eb6ae14b 	bl	1bbce2c <TCMOSerialEventEnables::$__ct(void)>
        1048fc:	e3a00002 	mov	r0, #2	; 0x2
        104900:	e58d000c 	str	r0, [sp, #12]
        104904:	e59d0008 	ldr	r0, [sp, #8]
        104908:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        10490c:	e3800c02 	orr	r0, r0, #512	; 0x200
        104910:	e58d0008 	str	r0, [sp, #8]
        104914:	e1a0200d 	mov	r2, sp
        104918:	e59d1020 	ldr	r1, [sp, #32]	; fField32
        10491c:	e28d0020 	add	r0, sp, #32	; 0x20
        104920:	eb6ad4df 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        104924:	e1a05000 	mov	r5, r0
        104928:	e28dd014 	add	sp, sp, #20	; 0x14
        10492c:	e3350000 	teq	r5, #0	; 0x0
        104930:	1a000013 	bne	104984 <TLaserWriterLSDriver::InitializeConnection(void)+0x180>
        104934:	e28d1024 	add	r1, sp, #36	; 0x24
        104938:	e28d000c 	add	r0, sp, #12	; 0xc
        10493c:	e3a02000 	mov	r2, #0	; 0x0
        104940:	eb6acc96 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
        104944:	e1b05000 	movs	r5, r0
        104948:	1a00000d 	bne	104984 <TLaserWriterLSDriver::InitializeConnection(void)+0x180>
        10494c:	e3a0001c 	mov	r0, #28	; 0x1c
        104950:	eb6b2778 	bl	1bce738 <$__nw(unsigned int)>
        104954:	e1b05000 	movs	r5, r0
        104958:	0a000003 	beq	10496c <TLaserWriterLSDriver::InitializeConnection(void)+0x168>
        10495c:	e1a00005 	mov	r0, r5
        104960:	eb6ac461 	bl	1bb5aec <TEndpointClient::$__ct(void)>
        104964:	e59f0044 	ldr	r0, [pc, #44]	; 1049b0 <TLaserWriterLSDriver::InitializeConnection(void)+0x1ac>
        104968:	e5850000 	str	r0, [r5]
        10496c:	e1a06005 	mov	r6, r5
        104970:	e1a01004 	mov	r1, r4
        104974:	e1a00005 	mov	r0, r5
        104978:	e59d2024 	ldr	r2, [sp, #36]	; fField36
        10497c:	eb68f1d6 	bl	1b410dc <TLSEndpointClient::$ILSEndpointClient(TLaserWriterLSDriver *, TEndpoint *)>
        104980:	e1a05000 	mov	r5, r0
        104984:	e28dd00c 	add	sp, sp, #12	; 0xc
        104988:	e1a0000d 	mov	r0, sp
        10498c:	e3a01000 	mov	r1, #0	; 0x0
        104990:	eb6ac865 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        104994:	e5bd0018 	ldr	r0, [sp, #24]!	; fField24
        104998:	e3300000 	teq	r0, #0	; 0x0
        10499c:	0a000001 	beq	1049a8 <TLaserWriterLSDriver::InitializeConnection(void)+0x1a4>
        1049a0:	e3350000 	teq	r5, #0	; 0x0
        1049a4:	0a000002 	beq	1049b4 <TLaserWriterLSDriver::InitializeConnection(void)+0x1b0>
        1049a8:	e3a05000 	mov	r5, #0	; 0x0
        1049ac:	ea000009 	b	1049d8 <TLaserWriterLSDriver::InitializeConnection(void)+0x1d4>
        1049b0:	0001e8c8 	andeq	lr, r1, r8, asr #17
        1049b4:	e1a01006 	mov	r1, r6
        1049b8:	eb6ad094 	bl	1bb8c10 <TEndpoint::$EasyOpen(unsigned long)>
        1049bc:	e3300000 	teq	r0, #0	; 0x0
        1049c0:	13a00000 	movne	r0, #0	; 0x0
        1049c4:	03a00001 	moveq	r0, #1	; 0x1
        1049c8:	e21050ff 	ands	r5, r0, #255	; 0xff
        1049cc:	159d0000 	ldrne	r0, [sp]
        1049d0:	15a40018 	strne	r0, [r4, #24]!	; fField24
        1049d4:	1a000002 	bne	1049e4 <TLaserWriterLSDriver::InitializeConnection(void)+0x1e0>
        1049d8:	e59d0000 	ldr	r0, [sp]
        1049dc:	e3300000 	teq	r0, #0	; 0x0
        1049e0:	1b6acc82 	blne	1bb7bf0 <TEndpoint::$Delete(void)>
        1049e4:	e1a00005 	mov	r0, r5
        1049e8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::InitializeFields(void)
 * Address: 001049ec
 */
TLaserWriterLSDriver::InitializeFields(void) {
    /*
        1049ec:	e1a0c00d 	mov	ip, sp
        1049f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1049f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1049f8:	e1a04000 	mov	r4, r0
        1049fc:	e3a00000 	mov	r0, #0	; 0x0
        104a00:	e5840018 	str	r0, [r4, #24]	; fField24
        104a04:	e584001c 	str	r0, [r4, #28]	; fField28
        104a08:	e5c40178 	strb	r0, [r4, #376]	; fField376
        104a0c:	e5c40179 	strb	r0, [r4, #377]	; fField377
        104a10:	e5c40020 	strb	r0, [r4, #32]	; fField32
        104a14:	e2840f5b 	add	r0, r4, #364	; 0x16c
        104a18:	eb6b3bee 	bl	1bd39d8 <$GetGlobalTime>
        104a1c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        104a20:	e1a0100d 	mov	r1, sp
        104a24:	e1a00004 	mov	r0, r4
        104a28:	eb68f19a 	bl	1b41098 <TLaserWriterLSDriver::$GetPageInfo(PrPageInfo *)>
        104a2c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::CassettePaperMatches(void)
 * Address: 00104a30
 */
TLaserWriterLSDriver::CassettePaperMatches(void) {
    /*
        104a30:	e1a0c00d 	mov	ip, sp
        104a34:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        104a38:	e24cb004 	sub	fp, ip, #4	; 0x4
        104a3c:	e1a04000 	mov	r4, r0
        104a40:	e3a05000 	mov	r5, #0	; 0x0
        104a44:	e5d00020 	ldrb	r0, [r0, #32]	; fField32
        104a48:	e3100002 	tst	r0, #2	; 0x2
        104a4c:	0a00001c 	beq	104ac4 <TLaserWriterLSDriver::CassettePaperMatches(void)+0x94>
        104a50:	e1a00004 	mov	r0, r4
        104a54:	e3a0100b 	mov	r1, #11	; 0xb
        104a58:	eb68f188 	bl	1b41080 <TLaserWriterLSDriver::$GetEngineRegister(long)>
        104a5c:	e1a000c0 	mov	r0, r0, asr #1
        104a60:	e20060ff 	and	r6, r0, #255	; 0xff
        104a64:	e1a00004 	mov	r0, r4
        104a68:	eb68ed4d 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104a6c:	e3300000 	teq	r0, #0	; 0x0
        104a70:	0a00000d 	beq	104aac <TLaserWriterLSDriver::CassettePaperMatches(void)+0x7c>
        104a74:	e3360001 	teq	r6, #1	; 0x1
        104a78:	0a000006 	beq	104a98 <TLaserWriterLSDriver::CassettePaperMatches(void)+0x68>
        104a7c:	e3360004 	teq	r6, #4	; 0x4
        104a80:	05940182 	ldreq	r0, [r4, #386]	; fField386
        104a84:	01a00840 	moveq	r0, r0, asr #16
        104a88:	0240ce9f 	subeq	ip, r0, #2544	; 0x9f0
        104a8c:	033c0006 	teqeq	ip, #6	; 0x6
        104a90:	0a00000b 	beq	104ac4 <TLaserWriterLSDriver::CassettePaperMatches(void)+0x94>
        104a94:	ea000004 	b	104aac <TLaserWriterLSDriver::CassettePaperMatches(void)+0x7c>
        104a98:	e5940182 	ldr	r0, [r4, #386]	; fField386
        104a9c:	e1a00840 	mov	r0, r0, asr #16
        104aa0:	e240ce9a 	sub	ip, r0, #2464	; 0x9a0
        104aa4:	e33c000b 	teq	ip, #11	; 0xb
        104aa8:	0a000005 	beq	104ac4 <TLaserWriterLSDriver::CassettePaperMatches(void)+0x94>
        104aac:	e1a00004 	mov	r0, r4
        104ab0:	e3a010b9 	mov	r1, #185	; 0xb9
        104ab4:	e2411cad 	sub	r1, r1, #44288	; 0xad00
        104ab8:	eb68ed4b 	bl	1b3ffec <TLaserWriterLSDriver::$DoHandleProblem(long)>
        104abc:	e3300000 	teq	r0, #0	; 0x0
        104ac0:	1a000000 	bne	104ac8 <TLaserWriterLSDriver::CassettePaperMatches(void)+0x98>
        104ac4:	e3a05001 	mov	r5, #1	; 0x1
        104ac8:	e1a00005 	mov	r0, r5
        104acc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::IsProblemResolved(void)
 * Address: 00104ad0
 */
TLaserWriterLSDriver::IsProblemResolved(void) {
    /*
        104ad0:	e1a0c00d 	mov	ip, sp
        104ad4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        104ad8:	e24cb004 	sub	fp, ip, #4	; 0x4
        104adc:	e3a04000 	mov	r4, #0	; 0x0
        104ae0:	e5901174 	ldr	r1, [r0, #372]	; fField372
        104ae4:	e281104b 	add	r1, r1, #75	; 0x4b
        104ae8:	e2811b2b 	add	r1, r1, #44032	; 0xac00
        104aec:	e3510005 	cmp	r1, #5	; 0x5
        104af0:	908ff101 	addls	pc, pc, r1, lsl #2
        104af4:	ea000018 	b	104b5c <TLaserWriterLSDriver::IsProblemResolved(void)+0x8c>
        104af8:	ea00000f 	b	104b3c <TLaserWriterLSDriver::IsProblemResolved(void)+0x6c>
        104afc:	ea00000a 	b	104b2c <TLaserWriterLSDriver::IsProblemResolved(void)+0x5c>
        104b00:	ea000015 	b	104b5c <TLaserWriterLSDriver::IsProblemResolved(void)+0x8c>
        104b04:	ea000004 	b	104b1c <TLaserWriterLSDriver::IsProblemResolved(void)+0x4c>
        104b08:	ea00000f 	b	104b4c <TLaserWriterLSDriver::IsProblemResolved(void)+0x7c>
        104b0c:	eb68f589 	bl	1b42138 <TLaserWriterLSDriver::$NoPaperTray(void)>
        104b10:	e3300000 	teq	r0, #0	; 0x0
        104b14:	0a000010 	beq	104b5c <TLaserWriterLSDriver::IsProblemResolved(void)+0x8c>
        104b18:	ea00000e 	b	104b58 <TLaserWriterLSDriver::IsProblemResolved(void)+0x88>
        104b1c:	eb68f999 	bl	1b43188 <TLaserWriterLSDriver::$OutOfPaper(void)>
        104b20:	e3300000 	teq	r0, #0	; 0x0
        104b24:	0a00000c 	beq	104b5c <TLaserWriterLSDriver::IsProblemResolved(void)+0x8c>
        104b28:	ea00000a 	b	104b58 <TLaserWriterLSDriver::IsProblemResolved(void)+0x88>
        104b2c:	eb68f57d 	bl	1b42128 <TLaserWriterLSDriver::$Jammed(void)>
        104b30:	e3300000 	teq	r0, #0	; 0x0
        104b34:	0a000008 	beq	104b5c <TLaserWriterLSDriver::IsProblemResolved(void)+0x8c>
        104b38:	ea000006 	b	104b58 <TLaserWriterLSDriver::IsProblemResolved(void)+0x88>
        104b3c:	eb68ed2b 	bl	1b3fff0 <TLaserWriterLSDriver::$DoorOpen(void)>
        104b40:	e3300000 	teq	r0, #0	; 0x0
        104b44:	0a000004 	beq	104b5c <TLaserWriterLSDriver::IsProblemResolved(void)+0x8c>
        104b48:	ea000002 	b	104b58 <TLaserWriterLSDriver::IsProblemResolved(void)+0x88>
        104b4c:	eb6905eb 	bl	1b46300 <TLaserWriterLSDriver::$WrongPaperTray(void)>
        104b50:	e3300000 	teq	r0, #0	; 0x0
        104b54:	0a000000 	beq	104b5c <TLaserWriterLSDriver::IsProblemResolved(void)+0x8c>
        104b58:	e3a04001 	mov	r4, #1	; 0x1
        104b5c:	e1a00004 	mov	r0, r4
        104b60:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::Jammed(void)
 * Address: 00104b64
 */
TLaserWriterLSDriver::Jammed(void) {
    /*
        104b64:	e1a0c00d 	mov	ip, sp
        104b68:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        104b6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        104b70:	e1a04000 	mov	r4, r0
        104b74:	e3a05000 	mov	r5, #0	; 0x0
        104b78:	e56d5004 	strb	r5, [sp, -#4]!
        104b7c:	eb68ed08 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104b80:	e3300000 	teq	r0, #0	; 0x0
        104b84:	0a000017 	beq	104be8 <TLaserWriterLSDriver::Jammed(void)+0x84>
        104b88:	e1a0200d 	mov	r2, sp
        104b8c:	e1a00004 	mov	r0, r4
        104b90:	e3a01001 	mov	r1, #1	; 0x1
        104b94:	eb68f14a 	bl	1b410c4 <TLaserWriterLSDriver::$GetStatusRegister1(unsigned char, char *)>
        104b98:	e2000008 	and	r0, r0, #8	; 0x8
        104b9c:	e3300008 	teq	r0, #8	; 0x8
        104ba0:	13a00000 	movne	r0, #0	; 0x0
        104ba4:	03a00001 	moveq	r0, #1	; 0x1
        104ba8:	e21050ff 	ands	r5, r0, #255	; 0xff
        104bac:	1a000006 	bne	104bcc <TLaserWriterLSDriver::Jammed(void)+0x68>
        104bb0:	e1a00004 	mov	r0, r4
        104bb4:	eb68f144 	bl	1b410cc <TLaserWriterLSDriver::$GetStatusRegister3(void)>
        104bb8:	e2000010 	and	r0, r0, #16	; 0x10
        104bbc:	e3300010 	teq	r0, #16	; 0x10
        104bc0:	13a00000 	movne	r0, #0	; 0x0
        104bc4:	03a00001 	moveq	r0, #1	; 0x1
        104bc8:	e20050ff 	and	r5, r0, #255	; 0xff
        104bcc:	e3350000 	teq	r5, #0	; 0x0
        104bd0:	e5dd1000 	ldrb	r1, [sp]
        104bd4:	e1a00004 	mov	r0, r4
        104bd8:	0a000001 	beq	104be4 <TLaserWriterLSDriver::Jammed(void)+0x80>
        104bdc:	eb68ed21 	bl	1b40068 <TLaserWriterLSDriver::$ForceLEDs(char)>
        104be0:	ea000000 	b	104be8 <TLaserWriterLSDriver::Jammed(void)+0x84>
        104be4:	eb68ed1b 	bl	1b40058 <TLaserWriterLSDriver::$ExtinguishLEDs(char)>
        104be8:	e1a00005 	mov	r0, r5
        104bec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::LightLEDs(char)
 * Address: 00104bf0
 */
TLaserWriterLSDriver::LightLEDs(char) {
    /*
        104bf0:	e20110ff 	and	r1, r1, #255	; 0xff
        104bf4:	e5d02022 	ldrb	r2, [r0, #34]	; fField34
        104bf8:	e1821001 	orr	r1, r2, r1
        104bfc:	e5c01022 	strb	r1, [r0, #34]	; fField34
        104c00:	e20120ff 	and	r2, r1, #255	; 0xff
        104c04:	e3a01084 	mov	r1, #132	; 0x84
        104c08:	ea68fd94 	b	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
    */
}

/**
 * Symbol: TLaserWriterLSDriver::NoPaperTray(void)
 * Address: 00104c0c
 */
TLaserWriterLSDriver::NoPaperTray(void) {
    /*
        104c0c:	e1a0c00d 	mov	ip, sp
        104c10:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        104c14:	e24cb004 	sub	fp, ip, #4	; 0x4
        104c18:	e1a04000 	mov	r4, r0
        104c1c:	e3a05000 	mov	r5, #0	; 0x0
        104c20:	eb68ecdf 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104c24:	e3300000 	teq	r0, #0	; 0x0
        104c28:	0a00000e 	beq	104c68 <TLaserWriterLSDriver::NoPaperTray(void)+0x5c>
        104c2c:	e1a00004 	mov	r0, r4
        104c30:	e3a02000 	mov	r2, #0	; 0x0
        104c34:	e3a01001 	mov	r1, #1	; 0x1
        104c38:	eb68f121 	bl	1b410c4 <TLaserWriterLSDriver::$GetStatusRegister1(unsigned char, char *)>
        104c3c:	e2000020 	and	r0, r0, #32	; 0x20
        104c40:	e3300020 	teq	r0, #32	; 0x20
        104c44:	13a00000 	movne	r0, #0	; 0x0
        104c48:	03a00001 	moveq	r0, #1	; 0x1
        104c4c:	e21050ff 	ands	r5, r0, #255	; 0xff
        104c50:	e1a00004 	mov	r0, r4
        104c54:	e3a01002 	mov	r1, #2	; 0x2
        104c58:	0a000001 	beq	104c64 <TLaserWriterLSDriver::NoPaperTray(void)+0x58>
        104c5c:	eb68ed01 	bl	1b40068 <TLaserWriterLSDriver::$ForceLEDs(char)>
        104c60:	ea000000 	b	104c68 <TLaserWriterLSDriver::NoPaperTray(void)+0x5c>
        104c64:	eb68ecfb 	bl	1b40058 <TLaserWriterLSDriver::$ExtinguishLEDs(char)>
        104c68:	e1a00005 	mov	r0, r5
        104c6c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::Open(void)
 * Address: 00104c70
 */
TLaserWriterLSDriver::Open(void) {
    /*
        104c70:	e1a0c00d 	mov	ip, sp
        104c74:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        104c78:	e24cb004 	sub	fp, ip, #4	; 0x4
        104c7c:	e1a04000 	mov	r4, r0
        104c80:	e3a07001 	mov	r7, #1	; 0x1
        104c84:	e3a06000 	mov	r6, #0	; 0x0
        104c88:	eb68f118 	bl	1b410f0 <TLaserWriterLSDriver::$InitializeFields(void)>
        104c8c:	e1a00004 	mov	r0, r4
        104c90:	eb68f115 	bl	1b410ec <TLaserWriterLSDriver::$InitializeConnection(void)>
        104c94:	e3a0801e 	mov	r8, #30	; 0x1e
        104c98:	e2488b2b 	sub	r8, r8, #44032	; 0xac00
        104c9c:	e3300000 	teq	r0, #0	; 0x0
        104ca0:	0a000019 	beq	104d0c <TLaserWriterLSDriver::Open(void)+0x9c>
        104ca4:	e3a09000 	mov	r9, #0	; 0x0
        104ca8:	e3a05965 	mov	r5, #1654784	; 0x194000
        104cac:	e2855401 	add	r5, r5, #16777216	; 0x1000000
        104cb0:	e1a00004 	mov	r0, r4
        104cb4:	eb68ecb4 	bl	1b3ff8c <TLaserWriterLSDriver::$ConnectToPrinter(void)>
        104cb8:	e3300000 	teq	r0, #0	; 0x0
        104cbc:	1a000006 	bne	104cdc <TLaserWriterLSDriver::Open(void)+0x6c>
        104cc0:	e1a00005 	mov	r0, r5
        104cc4:	e5941014 	ldr	r1, [r4, #20]	; fField20
        104cc8:	eb6b68a0 	bl	1bdef50 <$PrReleaseControl(unsigned long, TPrinter *)>
        104ccc:	e584901c 	str	r9, [r4, #28]	; fField28
        104cd0:	e1a00004 	mov	r0, r4
        104cd4:	eb68ecac 	bl	1b3ff8c <TLaserWriterLSDriver::$ConnectToPrinter(void)>
        104cd8:	e3a07000 	mov	r7, #0	; 0x0
        104cdc:	e3300000 	teq	r0, #0	; 0x0
        104ce0:	1a000002 	bne	104cf0 <TLaserWriterLSDriver::Open(void)+0x80>
        104ce4:	e3370000 	teq	r7, #0	; 0x0
        104ce8:	1afffff0 	bne	104cb0 <TLaserWriterLSDriver::Open(void)+0x40>
        104cec:	ea000004 	b	104d04 <TLaserWriterLSDriver::Open(void)+0x94>
        104cf0:	e3300000 	teq	r0, #0	; 0x0
        104cf4:	0a000002 	beq	104d04 <TLaserWriterLSDriver::Open(void)+0x94>
        104cf8:	e1a00004 	mov	r0, r4
        104cfc:	eb68f923 	bl	1b43190 <TLaserWriterLSDriver::$PreparePrinter(void)>
        104d00:	ea000002 	b	104d10 <TLaserWriterLSDriver::Open(void)+0xa0>
        104d04:	e1a00004 	mov	r0, r4
        104d08:	eb68f936 	bl	1b431e8 <TLaserWriterLSDriver::$ReleaseConnection(void)>
        104d0c:	e1a06008 	mov	r6, r8
        104d10:	e1a00006 	mov	r0, r6
        104d14:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::OpenPage(void)
 * Address: 00104d18
 */
TLaserWriterLSDriver::OpenPage(void) {
    /*
        104d18:	e1a0c00d 	mov	ip, sp
        104d1c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        104d20:	e24cb004 	sub	fp, ip, #4	; 0x4
        104d24:	e1a04000 	mov	r4, r0
        104d28:	e3a00000 	mov	r0, #0	; 0x0
        104d2c:	e5840168 	str	r0, [r4, #360]	; fField360
        104d30:	e1a00004 	mov	r0, r4
        104d34:	eb68ec9c 	bl	1b3ffac <TLaserWriterLSDriver::$ContinueRendering(void)>
        104d38:	e3300000 	teq	r0, #0	; 0x0
        104d3c:	0a000007 	beq	104d60 <TLaserWriterLSDriver::OpenPage(void)+0x48>
        104d40:	e1a00004 	mov	r0, r4
        104d44:	eb68fd41 	bl	1b44250 <TLaserWriterLSDriver::$SelectPaperSource(void)>
        104d48:	e1a00004 	mov	r0, r4
        104d4c:	e3a01001 	mov	r1, #1	; 0x1
        104d50:	eb68f912 	bl	1b431a0 <TLaserWriterLSDriver::$PrinterCanPrint(unsigned char)>
        104d54:	e3300000 	teq	r0, #0	; 0x0
        104d58:	11a00004 	movne	r0, r4
        104d5c:	1b68fd2b 	blne	1b44210 <TLaserWriterLSDriver::$ResetBuffer(void)>
        104d60:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        104d64:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::OutOfPaper(void)
 * Address: 00104d68
 */
TLaserWriterLSDriver::OutOfPaper(void) {
    /*
        104d68:	e1a0c00d 	mov	ip, sp
        104d6c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        104d70:	e24cb004 	sub	fp, ip, #4	; 0x4
        104d74:	e1a04000 	mov	r4, r0
        104d78:	e3a05000 	mov	r5, #0	; 0x0
        104d7c:	eb68ec88 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104d80:	e3300000 	teq	r0, #0	; 0x0
        104d84:	0a000010 	beq	104dcc <TLaserWriterLSDriver::OutOfPaper(void)+0x64>
        104d88:	e1a00004 	mov	r0, r4
        104d8c:	eb68fd2f 	bl	1b44250 <TLaserWriterLSDriver::$SelectPaperSource(void)>
        104d90:	e1a00004 	mov	r0, r4
        104d94:	e3a02000 	mov	r2, #0	; 0x0
        104d98:	e3a01001 	mov	r1, #1	; 0x1
        104d9c:	eb68f0c8 	bl	1b410c4 <TLaserWriterLSDriver::$GetStatusRegister1(unsigned char, char *)>
        104da0:	e2000010 	and	r0, r0, #16	; 0x10
        104da4:	e3300010 	teq	r0, #16	; 0x10
        104da8:	13a00000 	movne	r0, #0	; 0x0
        104dac:	03a00001 	moveq	r0, #1	; 0x1
        104db0:	e21050ff 	ands	r5, r0, #255	; 0xff
        104db4:	e1a00004 	mov	r0, r4
        104db8:	e3a01002 	mov	r1, #2	; 0x2
        104dbc:	0a000001 	beq	104dc8 <TLaserWriterLSDriver::OutOfPaper(void)+0x60>
        104dc0:	eb68eca8 	bl	1b40068 <TLaserWriterLSDriver::$ForceLEDs(char)>
        104dc4:	ea000000 	b	104dcc <TLaserWriterLSDriver::OutOfPaper(void)+0x64>
        104dc8:	eb68eca2 	bl	1b40058 <TLaserWriterLSDriver::$ExtinguishLEDs(char)>
        104dcc:	e1a00005 	mov	r0, r5
        104dd0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::PreparePrinter(void)
 * Address: 00104dd4
 */
TLaserWriterLSDriver::PreparePrinter(void) {
    /*
        104dd4:	e1a0c00d 	mov	ip, sp
        104dd8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        104ddc:	e24cb004 	sub	fp, ip, #4	; 0x4
        104de0:	e1a04000 	mov	r4, r0
        104de4:	eb68ec6e 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104de8:	e3300000 	teq	r0, #0	; 0x0
        104dec:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        104df0:	e1a00004 	mov	r0, r4
        104df4:	eb690121 	bl	1b45280 <TLaserWriterLSDriver::$SetLeftMargin(void)>
        104df8:	e1a00004 	mov	r0, r4
        104dfc:	eb690126 	bl	1b4529c <TLaserWriterLSDriver::$SetTopMargin(void)>
        104e00:	e1a00004 	mov	r0, r4
        104e04:	eb69011f 	bl	1b45288 <TLaserWriterLSDriver::$SetPaperSize(void)>
        104e08:	e1a00004 	mov	r0, r4
        104e0c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        104e10:	ea69011d 	b	1b4528c <TLaserWriterLSDriver::$SetScanlineWidth(void)>
    */
}

/**
 * Symbol: TLaserWriterLSDriver::PrinterBufferHasRoom(void)
 * Address: 00104e14
 */
TLaserWriterLSDriver::PrinterBufferHasRoom(void) {
    /*
        104e14:	e1a0c00d 	mov	ip, sp
        104e18:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        104e1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        104e20:	e1a04000 	mov	r4, r0
        104e24:	e3a05000 	mov	r5, #0	; 0x0
        104e28:	eb68ec5d 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104e2c:	e3300000 	teq	r0, #0	; 0x0
        104e30:	0a000006 	beq	104e50 <TLaserWriterLSDriver::PrinterBufferHasRoom(void)+0x3c>
        104e34:	e1a00004 	mov	r0, r4
        104e38:	e3a01001 	mov	r1, #1	; 0x1
        104e3c:	eb690126 	bl	1b452dc <TLaserWriterLSDriver::$TestAndProcessPrinterBreak(unsigned char)>
        104e40:	e2000001 	and	r0, r0, #1	; 0x1
        104e44:	e2500001 	subs	r0, r0, #1	; 0x1
        104e48:	13a00001 	movne	r0, #1	; 0x1
        104e4c:	e20050ff 	and	r5, r0, #255	; 0xff
        104e50:	e1a00005 	mov	r0, r5
        104e54:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::PrinterCanPrint(unsigned char)
 * Address: 00104e58
 */
TLaserWriterLSDriver::PrinterCanPrint(unsigned char) {
    /*
        104e58:	e1a0c00d 	mov	ip, sp
        104e5c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        104e60:	e24cb004 	sub	fp, ip, #4	; 0x4
        104e64:	e1a04000 	mov	r4, r0
        104e68:	e20160ff 	and	r6, r1, #255	; 0xff
        104e6c:	e3a05001 	mov	r5, #1	; 0x1
        104e70:	eb68ec4b 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104e74:	e3300000 	teq	r0, #0	; 0x0
        104e78:	0a00000e 	beq	104eb8 <TLaserWriterLSDriver::PrinterCanPrint(unsigned char)+0x60>
        104e7c:	e1a01006 	mov	r1, r6
        104e80:	e1a00004 	mov	r0, r4
        104e84:	eb68f08b 	bl	1b410b8 <TLaserWriterLSDriver::$GetStatus(unsigned char)>
        104e88:	e3300000 	teq	r0, #0	; 0x0
        104e8c:	0a00000a 	beq	104ebc <TLaserWriterLSDriver::PrinterCanPrint(unsigned char)+0x64>
        104e90:	e594101c 	ldr	r1, [r4, #28]	; fField28
        104e94:	e1a00004 	mov	r0, r4
        104e98:	eb68ec6d 	bl	1b40054 <TLaserWriterLSDriver::$ErrorIsProblem(long)>
        104e9c:	e3300000 	teq	r0, #0	; 0x0
        104ea0:	0a000004 	beq	104eb8 <TLaserWriterLSDriver::PrinterCanPrint(unsigned char)+0x60>
        104ea4:	e594101c 	ldr	r1, [r4, #28]	; fField28
        104ea8:	e1a00004 	mov	r0, r4
        104eac:	eb68ec4e 	bl	1b3ffec <TLaserWriterLSDriver::$DoHandleProblem(long)>
        104eb0:	e3300001 	teq	r0, #1	; 0x1
        104eb4:	1a000000 	bne	104ebc <TLaserWriterLSDriver::PrinterCanPrint(unsigned char)+0x64>
        104eb8:	e3a05000 	mov	r5, #0	; 0x0
        104ebc:	e1a00005 	mov	r0, r5
        104ec0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::CheckMisprint(void)
 * Address: 00104ec4
 */
TLaserWriterLSDriver::CheckMisprint(void) {
    /*
        104ec4:	e1a0c00d 	mov	ip, sp
        104ec8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        104ecc:	e24cb004 	sub	fp, ip, #4	; 0x4
        104ed0:	e1a04000 	mov	r4, r0
        104ed4:	e590001c 	ldr	r0, [r0, #28]	; fField28
        104ed8:	e3300000 	teq	r0, #0	; 0x0
        104edc:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        104ee0:	e1a00004 	mov	r0, r4
        104ee4:	e3a01001 	mov	r1, #1	; 0x1
        104ee8:	eb68f064 	bl	1b41080 <TLaserWriterLSDriver::$GetEngineRegister(long)>
        104eec:	e3100010 	tst	r0, #16	; 0x10
        104ef0:	11a00004 	movne	r0, r4
        104ef4:	13a0105d 	movne	r1, #93	; 0x5d
        104ef8:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        104efc:	1a68f05f 	bne	1b41080 <TLaserWriterLSDriver::$GetEngineRegister(long)>
        104f00:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::PrintPage(unsigned char)
 * Address: 00104f04
 */
TLaserWriterLSDriver::PrintPage(unsigned char) {
    /*
        104f04:	e1a0c00d 	mov	ip, sp
        104f08:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        104f0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        104f10:	e1a04000 	mov	r4, r0
        104f14:	e20160ff 	and	r6, r1, #255	; 0xff
        104f18:	e3a05000 	mov	r5, #0	; 0x0
        104f1c:	eb68ec20 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104f20:	e3300000 	teq	r0, #0	; 0x0
        104f24:	0a000011 	beq	104f70 <TLaserWriterLSDriver::PrintPage(unsigned char)+0x6c>
        104f28:	e1a00004 	mov	r0, r4
        104f2c:	e3a01001 	mov	r1, #1	; 0x1
        104f30:	eb68f89a 	bl	1b431a0 <TLaserWriterLSDriver::$PrinterCanPrint(unsigned char)>
        104f34:	e1b05000 	movs	r5, r0
        104f38:	0a00000c 	beq	104f70 <TLaserWriterLSDriver::PrintPage(unsigned char)+0x6c>
        104f3c:	e3360000 	teq	r6, #0	; 0x0
        104f40:	11a00004 	movne	r0, r4
        104f44:	1b68fcc7 	blne	1b44268 <TLaserWriterLSDriver::$SendEndOfPage(void)>
        104f48:	e1a00004 	mov	r0, r4
        104f4c:	e3a01001 	mov	r1, #1	; 0x1
        104f50:	eb68ec44 	bl	1b40068 <TLaserWriterLSDriver::$ForceLEDs(char)>
        104f54:	e1a00004 	mov	r0, r4
        104f58:	e3a02001 	mov	r2, #1	; 0x1
        104f5c:	e3a0108a 	mov	r1, #138	; 0x8a
        104f60:	eb68fcbe 	bl	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
        104f64:	e5d40020 	ldrb	r0, [r4, #32]	; fField32
        104f68:	e3800020 	orr	r0, r0, #32	; 0x20
        104f6c:	e5c40020 	strb	r0, [r4, #32]	; fField32
        104f70:	e1a00005 	mov	r0, r5
        104f74:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::ProblemIsFatal(void)
 * Address: 00104f78
 */
TLaserWriterLSDriver::ProblemIsFatal(void) {
    /*
        104f78:	e5d00178 	ldrb	r0, [r0, #376]	; fField376
        104f7c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLaserWriterLSDriver::ProcessPrinterBreak(unsigned char)
 * Address: 00104f80
 */
TLaserWriterLSDriver::ProcessPrinterBreak(unsigned char) {
    /*
        104f80:	e1a0c00d 	mov	ip, sp
        104f84:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        104f88:	e24cb004 	sub	fp, ip, #4	; 0x4
        104f8c:	e1a04000 	mov	r4, r0
        104f90:	e20160ff 	and	r6, r1, #255	; 0xff
        104f94:	e3a05000 	mov	r5, #0	; 0x0
        104f98:	eb68ec01 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        104f9c:	e3300000 	teq	r0, #0	; 0x0
        104fa0:	01a00005 	moveq	r0, r5
        104fa4:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        104fa8:	e1a00004 	mov	r0, r4
        104fac:	eb68f034 	bl	1b41084 <TLaserWriterLSDriver::$GetExceptionStatus(void)>
        104fb0:	e1a05000 	mov	r5, r0
        104fb4:	e3100002 	tst	r0, #2	; 0x2
        104fb8:	11a00004 	movne	r0, r4
        104fbc:	13a01e42 	movne	r1, #1056	; 0x420
        104fc0:	12411a0b 	subne	r1, r1, #45056	; 0xb000
        104fc4:	1b6900b2 	blne	1b45294 <TLaserWriterLSDriver::$SetSoftError(long)>
        104fc8:	e3150004 	tst	r5, #4	; 0x4
        104fcc:	15d40020 	ldrneb	r0, [r4, #32]	; fField32
        104fd0:	13c00020 	bicne	r0, r0, #32	; 0x20
        104fd4:	15c40020 	strneb	r0, [r4, #32]	; fField32
        104fd8:	e1b00006 	movs	r0, r6
        104fdc:	12050007 	andne	r0, r5, #7	; 0x7
        104fe0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::Receive(void *)
 * Address: 00104fe4
 */
TLaserWriterLSDriver::Receive(void *) {
    /*
        104fe4:	e1a0c00d 	mov	ip, sp
        104fe8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        104fec:	e24cb004 	sub	fp, ip, #4	; 0x4
        104ff0:	e1a04000 	mov	r4, r0
        104ff4:	e1a05001 	mov	r5, r1
        104ff8:	e590601c 	ldr	r6, [r0, #28]	; fField28
        104ffc:	eb68ebe8 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        105000:	e3300000 	teq	r0, #0	; 0x0
        105004:	0a00001c 	beq	10507c <TLaserWriterLSDriver::Receive(void *)+0x98>
        105008:	e24dd008 	sub	sp, sp, #8	; 0x8
        10500c:	e3a00001 	mov	r0, #1	; 0x1
        105010:	e3a01001 	mov	r1, #1	; 0x1
        105014:	e58d0004 	str	r0, [sp, #4]
        105018:	e3a00000 	mov	r0, #0	; 0x0
        10501c:	e3a039c2 	mov	r3, #3178496	; 0x308000
        105020:	e2833501 	add	r3, r3, #4194304	; 0x400000
        105024:	e58d0000 	str	r0, [sp]
        105028:	e1a0200d 	mov	r2, sp
        10502c:	e92d000c 	stmdb	sp!, {r2, r3}
        105030:	e1a03001 	mov	r3, r1
        105034:	e28d200c 	add	r2, sp, #12	; 0xc
        105038:	e1a01005 	mov	r1, r5
        10503c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        105040:	eb6ad328 	bl	1bb9ce8 <TEndpoint::$Rcv(unsigned char *, long &, long, unsigned long *, unsigned long)>
        105044:	e28dd008 	add	sp, sp, #8	; 0x8
        105048:	e1b06000 	movs	r6, r0
        10504c:	0a000009 	beq	105078 <TLaserWriterLSDriver::Receive(void *)+0x94>
        105050:	e286cc27 	add	ip, r6, #9984	; 0x2700
        105054:	e37c0037 	cmn	ip, #55	; 0x37
        105058:	e1a00004 	mov	r0, r4
        10505c:	1a000002 	bne	10506c <TLaserWriterLSDriver::Receive(void *)+0x88>
        105060:	e3a01000 	mov	r1, #0	; 0x0
        105064:	eb68e7a8 	bl	1b3ef0c <TLaserWriterLSDriver::$CancelJob(unsigned char)>
        105068:	ea000002 	b	105078 <TLaserWriterLSDriver::Receive(void *)+0x94>
        10506c:	e3a01e42 	mov	r1, #1056	; 0x420
        105070:	e2411a0b 	sub	r1, r1, #45056	; 0xb000
        105074:	eb690086 	bl	1b45294 <TLaserWriterLSDriver::$SetSoftError(long)>
        105078:	e28dd008 	add	sp, sp, #8	; 0x8
        10507c:	e1a00006 	mov	r0, r6
        105080:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::ReleaseConnection(void)
 * Address: 00105084
 */
TLaserWriterLSDriver::ReleaseConnection(void) {
    /*
        105084:	e1a0c00d 	mov	ip, sp
        105088:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        10508c:	e24cb004 	sub	fp, ip, #4	; 0x4
        105090:	e3a01000 	mov	r1, #0	; 0x0
        105094:	e5900018 	ldr	r0, [r0, #24]	; fField24
        105098:	e3300000 	teq	r0, #0	; 0x0
        10509c:	0a000001 	beq	1050a8 <TLaserWriterLSDriver::ReleaseConnection(void)+0x24>
        1050a0:	eb6aced8 	bl	1bb8c08 <TEndpoint::$EasyClose(void)>
        1050a4:	e1a01000 	mov	r1, r0
        1050a8:	e1a00001 	mov	r0, r1
        1050ac:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::Reprint(void)
 * Address: 001050b0
 */
TLaserWriterLSDriver::Reprint(void) {
    /*
        1050b0:	e1a0c00d 	mov	ip, sp
        1050b4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1050b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1050bc:	e1a04000 	mov	r4, r0
        1050c0:	eb68fc52 	bl	1b44210 <TLaserWriterLSDriver::$ResetBuffer(void)>
        1050c4:	e1a00004 	mov	r0, r4
        1050c8:	e3a01000 	mov	r1, #0	; 0x0
        1050cc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1050d0:	ea68f833 	b	1b431a4 <TLaserWriterLSDriver::$PrintPage(unsigned char)>
    */
}

/**
 * Symbol: TLaserWriterLSDriver::ResetBuffer(void)
 * Address: 001050d4
 */
TLaserWriterLSDriver::ResetBuffer(void) {
    /*
        1050d4:	e1a0c00d 	mov	ip, sp
        1050d8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1050dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1050e0:	e1a04000 	mov	r4, r0
        1050e4:	eb68ebae 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        1050e8:	e3300000 	teq	r0, #0	; 0x0
        1050ec:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1050f0:	e1a00004 	mov	r0, r4
        1050f4:	e3a02000 	mov	r2, #0	; 0x0
        1050f8:	e3a01081 	mov	r1, #129	; 0x81
        1050fc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        105100:	ea68fc56 	b	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
    */
}

/**
 * Symbol: TLaserWriterLSDriver::ResetPrinter(unsigned char)
 * Address: 00105104
 */
TLaserWriterLSDriver::ResetPrinter(unsigned char) {
    /*
        105104:	e1a0c00d 	mov	ip, sp
        105108:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        10510c:	e24cb004 	sub	fp, ip, #4	; 0x4
        105110:	e1a04000 	mov	r4, r0
        105114:	e20150ff 	and	r5, r1, #255	; 0xff
        105118:	eb68eba1 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        10511c:	e3300000 	teq	r0, #0	; 0x0
        105120:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        105124:	e1a00004 	mov	r0, r4
        105128:	e3a02000 	mov	r2, #0	; 0x0
        10512c:	e3a01081 	mov	r1, #129	; 0x81
        105130:	eb68fc4a 	bl	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
        105134:	e3350000 	teq	r5, #0	; 0x0
        105138:	0a000012 	beq	105188 <TLaserWriterLSDriver::ResetPrinter(unsigned char)+0x84>
        10513c:	e1a00004 	mov	r0, r4
        105140:	e3a02008 	mov	r2, #8	; 0x8
        105144:	e3a01084 	mov	r1, #132	; 0x84
        105148:	eb68fc44 	bl	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
        10514c:	e5941014 	ldr	r1, [r4, #20]	; fField20
        105150:	e59f003c 	ldr	r0, [pc, #3c]	; 105194 <TLaserWriterLSDriver::ResetPrinter(unsigned char)+0x90>
        105154:	eb6b677d 	bl	1bdef50 <$PrReleaseControl(unsigned long, TPrinter *)>
        105158:	e1a00004 	mov	r0, r4
        10515c:	e3a02001 	mov	r2, #1	; 0x1
        105160:	e3a01084 	mov	r1, #132	; 0x84
        105164:	eb68fc3d 	bl	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
        105168:	e594501c 	ldr	r5, [r4, #28]	; fField28
        10516c:	e1a00004 	mov	r0, r4
        105170:	e3a0103e 	mov	r1, #62	; 0x3e
        105174:	eb68efc1 	bl	1b41080 <TLaserWriterLSDriver::$GetEngineRegister(long)>
        105178:	e1a00004 	mov	r0, r4
        10517c:	e3a0103e 	mov	r1, #62	; 0x3e
        105180:	eb68efbe 	bl	1b41080 <TLaserWriterLSDriver::$GetEngineRegister(long)>
        105184:	e584501c 	str	r5, [r4, #28]	; fField28
        105188:	e1a00004 	mov	r0, r4
        10518c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        105190:	ea68ebb3 	b	1b40064 <TLaserWriterLSDriver::$FlushBuffer(void)>
        105194:	0010df88 	andeqs	sp, r0, r8, lsl #31
    */
}

/**
 * Symbol: TLaserWriterLSDriver::ScanlineLoop(PixelMap *, Rect const *, char *)
 * Address: 00105198
 */
TLaserWriterLSDriver::ScanlineLoop(PixelMap *, Rect const *, char *) {
    /*
        105198:	e1a0c00d 	mov	ip, sp
        10519c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1051a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1051a4:	e1a04000 	mov	r4, r0
        1051a8:	e1a06001 	mov	r6, r1
        1051ac:	e1a05003 	mov	r5, r3
        1051b0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1051b4:	e5920004 	ldr	r0, [r2, #4]
        1051b8:	e1a00840 	mov	r0, r0, asr #16
        1051bc:	e5921000 	ldr	r1, [r2]
        1051c0:	e0407841 	sub	r7, r0, r1, asr #16
        1051c4:	e596000e 	ldr	r0, [r6, #14]
        1051c8:	e1a00840 	mov	r0, r0, asr #16
        1051cc:	e596100a 	ldr	r1, [r6, #10]
        1051d0:	e0400841 	sub	r0, r0, r1, asr #16
        1051d4:	e1a0a1c0 	mov	sl, r0, asr #3
        1051d8:	e3a08000 	mov	r8, #0	; 0x0
        1051dc:	e284902a 	add	r9, r4, #42	; 0x2a
        1051e0:	e2841028 	add	r1, r4, #40	; 0x28
        1051e4:	e58d1000 	str	r1, [sp]
        1051e8:	ea000014 	b	105240 <TLaserWriterLSDriver::ScanlineLoop(PixelMap *, Rect const *, char *)+0xa8>
        1051ec:	e1a00004 	mov	r0, r4
        1051f0:	eb68e33c 	bl	1b3dee8 <TLaserWriterLSDriver::$BlinkLED(void)>
        1051f4:	e1a02009 	mov	r2, r9
        1051f8:	e1a03008 	mov	r3, r8
        1051fc:	e1a01005 	mov	r1, r5
        105200:	e1a0000a 	mov	r0, sl
        105204:	eb6ba95f 	bl	1bef788 <$EncodeLine__FlPcN22>
        105208:	e1a02000 	mov	r2, r0
        10520c:	e1a00004 	mov	r0, r4
        105210:	e59d1000 	ldr	r1, [sp]
        105214:	eb68fc12 	bl	1b44264 <TLaserWriterLSDriver::$SendData(char *, long)>
        105218:	e1a00004 	mov	r0, r4
        10521c:	eb68e331 	bl	1b3dee8 <TLaserWriterLSDriver::$BlinkLED(void)>
        105220:	e1a00004 	mov	r0, r4
        105224:	eb68f7dc 	bl	1b4319c <TLaserWriterLSDriver::$PrinterBufferHasRoom(void)>
        105228:	e3300000 	teq	r0, #0	; 0x0
        10522c:	0a00000a 	beq	10525c <TLaserWriterLSDriver::ScanlineLoop(PixelMap *, Rect const *, char *)+0xc4>
        105230:	e1a08005 	mov	r8, r5
        105234:	e5960004 	ldr	r0, [r6, #4]
        105238:	e0855840 	add	r5, r5, r0, asr #16
        10523c:	e2477001 	sub	r7, r7, #1	; 0x1
        105240:	e3570000 	cmp	r7, #0	; 0x0
        105244:	da000003 	ble	105258 <TLaserWriterLSDriver::ScanlineLoop(PixelMap *, Rect const *, char *)+0xc0>
        105248:	e1a00004 	mov	r0, r4
        10524c:	eb68eb54 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        105250:	e3300000 	teq	r0, #0	; 0x0
        105254:	1affffe4 	bne	1051ec <TLaserWriterLSDriver::ScanlineLoop(PixelMap *, Rect const *, char *)+0x54>
        105258:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10525c:	e1a00004 	mov	r0, r4
        105260:	e3a01e42 	mov	r1, #1056	; 0x420
        105264:	e2411a0b 	sub	r1, r1, #45056	; 0xb000
        105268:	eb690009 	bl	1b45294 <TLaserWriterLSDriver::$SetSoftError(long)>
        10526c:	eafffff9 	b	105258 <TLaserWriterLSDriver::ScanlineLoop(PixelMap *, Rect const *, char *)+0xc0>
    */
}

/**
 * Symbol: TLaserWriterLSDriver::SelectCassette(void)
 * Address: 00105270
 */
TLaserWriterLSDriver::SelectCassette(void) {
    /*
        105270:	e1a0c00d 	mov	ip, sp
        105274:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        105278:	e24cb004 	sub	fp, ip, #4	; 0x4
        10527c:	e1a04000 	mov	r4, r0
        105280:	e3a0504c 	mov	r5, #76	; 0x4c
        105284:	eb68eb46 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        105288:	e3300000 	teq	r0, #0	; 0x0
        10528c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        105290:	e1a00004 	mov	r0, r4
        105294:	eb68e71e 	bl	1b3ef14 <TLaserWriterLSDriver::$CassettePaperMatches(void)>
        105298:	e3300000 	teq	r0, #0	; 0x0
        10529c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1052a0:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1052a4:	e330000d 	teq	r0, #13	; 0xd
        1052a8:	03a05051 	moveq	r5, #81	; 0x51
        1052ac:	e1a01005 	mov	r1, r5
        1052b0:	e1a00004 	mov	r0, r4
        1052b4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1052b8:	ea68ef70 	b	1b41080 <TLaserWriterLSDriver::$GetEngineRegister(long)>
    */
}

/**
 * Symbol: TLaserWriterLSDriver::CheckSumData(char *, long)
 * Address: 001052bc
 */
TLaserWriterLSDriver::CheckSumData(char *, long) {
    /*
        1052bc:	e0813002 	add	r3, r1, r2
        1052c0:	e3a00000 	mov	r0, #0	; 0x0
        1052c4:	e1b0c002 	movs	ip, r2
        1052c8:	e2422001 	sub	r2, r2, #1	; 0x1
        1052cc:	0a000005 	beq	1052e8 <TLaserWriterLSDriver::CheckSumData(char *, long)+0x2c>
        1052d0:	e4d1c001 	ldrb	ip, [r1], #1
        1052d4:	e02c0000 	eor	r0, ip, r0
        1052d8:	e20000ff 	and	r0, r0, #255	; 0xff
        1052dc:	e1b0c002 	movs	ip, r2
        1052e0:	e2422001 	sub	r2, r2, #1	; 0x1
        1052e4:	1afffff9 	bne	1052d0 <TLaserWriterLSDriver::CheckSumData(char *, long)+0x14>
        1052e8:	e5c30000 	strb	r0, [r3]
        1052ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLaserWriterLSDriver::SelectPaperSource(void)
 * Address: 001052f0
 */
TLaserWriterLSDriver::SelectPaperSource(void) {
    /*
        1052f0:	e1a0c00d 	mov	ip, sp
        1052f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1052f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1052fc:	e1a04000 	mov	r4, r0
        105300:	e5900024 	ldr	r0, [r0, #36]	; fField36
        105304:	e3300029 	teq	r0, #41	; 0x29
        105308:	0a000009 	beq	105334 <TLaserWriterLSDriver::SelectPaperSource(void)+0x44>
        10530c:	e1a00004 	mov	r0, r4
        105310:	eb690402 	bl	1b46320 <TLaserWriterLSDriver::$GetStatusRegister21(void)>
        105314:	e5d40021 	ldrb	r0, [r4, #33]	; fField33
        105318:	e3100001 	tst	r0, #1	; 0x1
        10531c:	1a000007 	bne	105340 <TLaserWriterLSDriver::SelectPaperSource(void)+0x50>
        105320:	e5d41020 	ldrb	r1, [r4, #32]	; fField32
        105324:	e3110002 	tst	r1, #2	; 0x2
        105328:	12000002 	andne	r0, r0, #2	; 0x2
        10532c:	13300000 	teqne	r0, #0	; 0x0
        105330:	0a000002 	beq	105340 <TLaserWriterLSDriver::SelectPaperSource(void)+0x50>
        105334:	e1a00004 	mov	r0, r4
        105338:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        10533c:	ea68fbc2 	b	1b4424c <TLaserWriterLSDriver::$SelectCassette(void)>
        105340:	e1a00004 	mov	r0, r4
        105344:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        105348:	ea68fbc1 	b	1b44254 <TLaserWriterLSDriver::$SelectTray(void)>
    */
}

/**
 * Symbol: TLaserWriterLSDriver::SelectTray(void)
 * Address: 0010534c
 */
TLaserWriterLSDriver::SelectTray(void) {
    /*
        10534c:	e1a0c00d 	mov	ip, sp
        105350:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        105354:	e24cb004 	sub	fp, ip, #4	; 0x4
        105358:	e1a04000 	mov	r4, r0
        10535c:	eb68eb10 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        105360:	e3300000 	teq	r0, #0	; 0x0
        105364:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        105368:	e5940024 	ldr	r0, [r4, #36]	; fField36
        10536c:	e3300029 	teq	r0, #41	; 0x29
        105370:	e1a00004 	mov	r0, r4
        105374:	13a01052 	movne	r1, #82	; 0x52
        105378:	03a0104f 	moveq	r1, #79	; 0x4f
        10537c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        105380:	ea68ef3e 	b	1b41080 <TLaserWriterLSDriver::$GetEngineRegister(long)>
    */
}

/**
 * Symbol: TLaserWriterLSDriver::Send(char *, long)
 * Address: 00105384
 */
TLaserWriterLSDriver::Send(char *, long) {
    /*
        105384:	e1a0c00d 	mov	ip, sp
        105388:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        10538c:	e24cb004 	sub	fp, ip, #4	; 0x4
        105390:	e1a04000 	mov	r4, r0
        105394:	e1a06001 	mov	r6, r1
        105398:	e1a05002 	mov	r5, r2
        10539c:	e590701c 	ldr	r7, [r0, #28]	; fField28
        1053a0:	eb68eaff 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        1053a4:	e3300000 	teq	r0, #0	; 0x0
        1053a8:	0a000008 	beq	1053d0 <TLaserWriterLSDriver::Send(char *, long)+0x4c>
        1053ac:	e1a02005 	mov	r2, r5
        1053b0:	e1a01006 	mov	r1, r6
        1053b4:	e1a00004 	mov	r0, r4
        1053b8:	eb68e6d8 	bl	1b3ef20 <TLaserWriterLSDriver::$CheckSumData(char *, long)>
        1053bc:	e2852001 	add	r2, r5, #1	; 0x1
        1053c0:	e1a01006 	mov	r1, r6
        1053c4:	e1a00004 	mov	r0, r4
        1053c8:	eb68eb0b 	bl	1b3fffc <TLaserWriterLSDriver::$DoSend(char *, long)>
        1053cc:	e1a07000 	mov	r7, r0
        1053d0:	e1a00007 	mov	r0, r7
        1053d4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::SendBlankLines(Rect const *)
 * Address: 001053d8
 */
TLaserWriterLSDriver::SendBlankLines(Rect const *) {
    /*
        1053d8:	e1a0c00d 	mov	ip, sp
        1053dc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1053e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1053e4:	e1a04000 	mov	r4, r0
        1053e8:	e1a05001 	mov	r5, r1
        1053ec:	e59f1030 	ldr	r1, [pc, #30]	; 105424 <TLaserWriterLSDriver::SendBlankLines(Rect const *)+0x4c>
        1053f0:	e5902168 	ldr	r2, [r0, #360]	; fField360
        1053f4:	e5950000 	ldr	r0, [r5]
        1053f8:	e1a00840 	mov	r0, r0, asr #16
        1053fc:	e1520000 	cmp	r2, r0
        105400:	aa00003e 	bge	105500 <TLaserWriterLSDriver::SendBlankLines(Rect const *)+0x128>
        105404:	e0406002 	sub	r6, r0, r2
        105408:	e2840028 	add	r0, r4, #40	; 0x28
        10540c:	e1a07000 	mov	r7, r0
        105410:	e3a0a0a0 	mov	sl, #160	; 0xa0
        105414:	e3a09050 	mov	r9, #80	; 0x50
        105418:	e3a08001 	mov	r8, #1	; 0x1
        10541c:	e5801000 	str	r1, [r0]
        105420:	ea000030 	b	1054e8 <TLaserWriterLSDriver::SendBlankLines(Rect const *)+0x110>
        105424:	4fff8030 	swimi	0x00ff8030
        105428:	e3560001 	cmp	r6, #1	; 0x1
        10542c:	da000024 	ble	1054c4 <TLaserWriterLSDriver::SendBlankLines(Rect const *)+0xec>
        105430:	e24dd018 	sub	sp, sp, #24	; 0x18
        105434:	e1a0000d 	mov	r0, sp
        105438:	eb6ac1a9 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        10543c:	e1a0000d 	mov	r0, sp
        105440:	eb6ace0d 	bl	1bb8c7c <TOptionArray::$Init(void)>
        105444:	e3300000 	teq	r0, #0	; 0x0
        105448:	1a000010 	bne	105490 <TLaserWriterLSDriver::SendBlankLines(Rect const *)+0xb8>
        10544c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        105450:	e1a0000d 	mov	r0, sp
        105454:	eb6ada5a 	bl	1bbbdc4 <TCMOBreakFraming::$__ct(void)>
        105458:	e58d9010 	str	r9, [sp, #16]
        10545c:	e58da00c 	str	sl, [sp, #12]
        105460:	e5cd8014 	strb	r8, [sp, #20]	; fField20
        105464:	e2460001 	sub	r0, r6, #1	; 0x1
        105468:	e58d0018 	str	r0, [sp, #24]	; fField24
        10546c:	e59d0008 	ldr	r0, [sp, #8]
        105470:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        105474:	e3800c02 	orr	r0, r0, #512	; 0x200
        105478:	e58d0008 	str	r0, [sp, #8]
        10547c:	e1a0200d 	mov	r2, sp
        105480:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        105484:	e28d001c 	add	r0, sp, #28	; 0x1c
        105488:	eb6ad205 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        10548c:	e28dd01c 	add	sp, sp, #28	; 0x1c
        105490:	e3300000 	teq	r0, #0	; 0x0
        105494:	1a000004 	bne	1054ac <TLaserWriterLSDriver::SendBlankLines(Rect const *)+0xd4>
        105498:	e1a0200d 	mov	r2, sp
        10549c:	e3a03000 	mov	r3, #0	; 0x0
        1054a0:	e3a01c05 	mov	r1, #1280	; 0x500
        1054a4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1054a8:	eb6ad20a 	bl	1bb9cd8 <TEndpoint::$OptMgmt(unsigned long, TOptionArray *, unsigned long)>
        1054ac:	e3300000 	teq	r0, #0	; 0x0
        1054b0:	03a06001 	moveq	r6, #1	; 0x1
        1054b4:	e1a0000d 	mov	r0, sp
        1054b8:	e3a01000 	mov	r1, #0	; 0x0
        1054bc:	eb6ac59a 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        1054c0:	e28dd018 	add	sp, sp, #24	; 0x18
        1054c4:	e206000f 	and	r0, r6, #15	; 0xf
        1054c8:	e330000f 	teq	r0, #15	; 0xf
        1054cc:	01a00004 	moveq	r0, r4
        1054d0:	0b68e284 	bleq	1b3dee8 <TLaserWriterLSDriver::$BlinkLED(void)>
        1054d4:	e1a01007 	mov	r1, r7
        1054d8:	e1a00004 	mov	r0, r4
        1054dc:	e3a02004 	mov	r2, #4	; 0x4
        1054e0:	eb68eac5 	bl	1b3fffc <TLaserWriterLSDriver::$DoSend(char *, long)>
        1054e4:	e2466001 	sub	r6, r6, #1	; 0x1
        1054e8:	e3360000 	teq	r6, #0	; 0x0
        1054ec:	0a000003 	beq	105500 <TLaserWriterLSDriver::SendBlankLines(Rect const *)+0x128>
        1054f0:	e1a00004 	mov	r0, r4
        1054f4:	eb68eaaa 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        1054f8:	e3300000 	teq	r0, #0	; 0x0
        1054fc:	1affffc9 	bne	105428 <TLaserWriterLSDriver::SendBlankLines(Rect const *)+0x50>
        105500:	e5950004 	ldr	r0, [r5, #4]
        105504:	e1a00840 	mov	r0, r0, asr #16
        105508:	e5a40168 	str	r0, [r4, #360]!	; fField360
        10550c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::SendCommand(long, long)
 * Address: 00105510
 */
TLaserWriterLSDriver::SendCommand(long, long) {
    /*
        105510:	e1a0c00d 	mov	ip, sp
        105514:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        105518:	e24cb004 	sub	fp, ip, #4	; 0x4
        10551c:	e1a04000 	mov	r4, r0
        105520:	e1a05001 	mov	r5, r1
        105524:	e1a06002 	mov	r6, r2
        105528:	eb68ea9d 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        10552c:	e3300000 	teq	r0, #0	; 0x0
        105530:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        105534:	e56d5004 	strb	r5, [sp, -#4]!
        105538:	e5cd6001 	strb	r6, [sp, #1]
        10553c:	e1a0100d 	mov	r1, sp
        105540:	e1a00004 	mov	r0, r4
        105544:	e3a02002 	mov	r2, #2	; 0x2
        105548:	eb68fb42 	bl	1b44258 <TLaserWriterLSDriver::$Send(char *, long)>
        10554c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::SendData(char *, long)
 * Address: 00105550
 */
TLaserWriterLSDriver::SendData(char *, long) {
    /*
        105550:	e1a0c00d 	mov	ip, sp
        105554:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        105558:	e24cb004 	sub	fp, ip, #4	; 0x4
        10555c:	e1a05000 	mov	r5, r0
        105560:	e1a04001 	mov	r4, r1
        105564:	e1a06002 	mov	r6, r2
        105568:	eb68ea8d 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        10556c:	e3300000 	teq	r0, #0	; 0x0
        105570:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        105574:	e2660000 	rsb	r0, r6, #0	; 0x0
        105578:	e1a01440 	mov	r1, r0, asr #8
        10557c:	e201100f 	and	r1, r1, #15	; 0xf
        105580:	e3811040 	orr	r1, r1, #64	; 0x40
        105584:	e5c41000 	strb	r1, [r4]
        105588:	e5c40001 	strb	r0, [r4, #1]
        10558c:	e2862002 	add	r2, r6, #2	; 0x2
        105590:	e1a01004 	mov	r1, r4
        105594:	e1a00005 	mov	r0, r5
        105598:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        10559c:	ea68fb2d 	b	1b44258 <TLaserWriterLSDriver::$Send(char *, long)>
    */
}

/**
 * Symbol: TLaserWriterLSDriver::SendEndOfPage(void)
 * Address: 001055a0
 */
TLaserWriterLSDriver::SendEndOfPage(void) {
    /*
        1055a0:	e1a0c00d 	mov	ip, sp
        1055a4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1055a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1055ac:	e1a04000 	mov	r4, r0
        1055b0:	eb68ea7b 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        1055b4:	e3300000 	teq	r0, #0	; 0x0
        1055b8:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1055bc:	e1a00004 	mov	r0, r4
        1055c0:	e3a0208b 	mov	r2, #139	; 0x8b
        1055c4:	e3a0108b 	mov	r1, #139	; 0x8b
        1055c8:	eb68fb24 	bl	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
        1055cc:	e1a00004 	mov	r0, r4
        1055d0:	e3a0208b 	mov	r2, #139	; 0x8b
        1055d4:	e3a0108b 	mov	r1, #139	; 0x8b
        1055d8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1055dc:	ea68fb1f 	b	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
    */
}

/**
 * Symbol: TLaserWriterLSDriver::SetLeftMargin(void)
 * Address: 001055e0
 */
TLaserWriterLSDriver::SetLeftMargin(void) {
    /*
        1055e0:	e1a0c00d 	mov	ip, sp
        1055e4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1055e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1055ec:	e1a04000 	mov	r4, r0
        1055f0:	eb68ea6b 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        1055f4:	e3300000 	teq	r0, #0	; 0x0
        1055f8:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1055fc:	e3a000b7 	mov	r0, #183	; 0xb7
        105600:	e5941024 	ldr	r1, [r4, #36]	; fField36
        105604:	e3310029 	teq	r1, #41	; 0x29
        105608:	03a00e1a 	moveq	r0, #416	; 0x1a0
        10560c:	e5942182 	ldr	r2, [r4, #386]	; fField386
        105610:	e1a02842 	mov	r2, r2, asr #16
        105614:	e594117e 	ldr	r1, [r4, #382]	; fField382
        105618:	e0421841 	sub	r1, r2, r1, asr #16
        10561c:	e0810000 	add	r0, r1, r0
        105620:	e1a00240 	mov	r0, r0, asr #4
        105624:	e2602000 	rsb	r2, r0, #0	; 0x0
        105628:	e1a00004 	mov	r0, r4
        10562c:	e3a01087 	mov	r1, #135	; 0x87
        105630:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        105634:	ea68fb09 	b	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
    */
}

/**
 * Symbol: TLaserWriterLSDriver::SetPaperSize(void)
 * Address: 00105638
 */
TLaserWriterLSDriver::SetPaperSize(void) {
    /*
        105638:	e1a0c00d 	mov	ip, sp
        10563c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        105640:	e24cb004 	sub	fp, ip, #4	; 0x4
        105644:	e1a04000 	mov	r4, r0
        105648:	eb68ea55 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        10564c:	e3300000 	teq	r0, #0	; 0x0
        105650:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        105654:	e3a05042 	mov	r5, #66	; 0x42
        105658:	e3a06000 	mov	r6, #0	; 0x0
        10565c:	e1a00004 	mov	r0, r4
        105660:	e3a0109d 	mov	r1, #157	; 0x9d
        105664:	eb68ee85 	bl	1b41080 <TLaserWriterLSDriver::$GetEngineRegister(long)>
        105668:	e3a00001 	mov	r0, #1	; 0x1
        10566c:	e1100005 	tst	r0, r5
        105670:	12866001 	addne	r6, r6, #1	; 0x1
        105674:	e1a00080 	mov	r0, r0, lsl #1
        105678:	e3500c01 	cmp	r0, #256	; 0x100
        10567c:	bafffffa 	blt	10566c <TLaserWriterLSDriver::SetPaperSize(void)+0x34>
        105680:	e3160001 	tst	r6, #1	; 0x1
        105684:	03855001 	orreq	r5, r5, #1	; 0x1
        105688:	e1a01005 	mov	r1, r5
        10568c:	e1a00004 	mov	r0, r4
        105690:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        105694:	ea68ee79 	b	1b41080 <TLaserWriterLSDriver::$GetEngineRegister(long)>
    */
}

/**
 * Symbol: TLaserWriterLSDriver::SetScanlineWidth(void)
 * Address: 00105698
 */
TLaserWriterLSDriver::SetScanlineWidth(void) {
    /*
        105698:	e1a0c00d 	mov	ip, sp
        10569c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1056a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1056a4:	e1a04000 	mov	r4, r0
        1056a8:	eb68ea3d 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        1056ac:	e3300000 	teq	r0, #0	; 0x0
        1056b0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1056b4:	e594017e 	ldr	r0, [r4, #382]	; fField382
        1056b8:	e1a00840 	mov	r0, r0, asr #16
        1056bc:	e2800007 	add	r0, r0, #7	; 0x7
        1056c0:	e1a001c0 	mov	r0, r0, asr #3
        1056c4:	e2605000 	rsb	r5, r0, #0	; 0x0
        1056c8:	e20520ff 	and	r2, r5, #255	; 0xff
        1056cc:	e1a00004 	mov	r0, r4
        1056d0:	e3a01088 	mov	r1, #136	; 0x88
        1056d4:	eb68fae1 	bl	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
        1056d8:	e1a02445 	mov	r2, r5, asr #8
        1056dc:	e1a00004 	mov	r0, r4
        1056e0:	e3a01089 	mov	r1, #137	; 0x89
        1056e4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1056e8:	ea68fadc 	b	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
    */
}

/**
 * Symbol: TLaserWriterLSDriver::CleanupPrinter(void)
 * Address: 001056ec
 */
TLaserWriterLSDriver::CleanupPrinter(void) {
    /*
        1056ec:	e1a0c00d 	mov	ip, sp
        1056f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1056f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1056f8:	e1a04000 	mov	r4, r0
        1056fc:	eb68fefd 	bl	1b452f8 <TLaserWriterLSDriver::$WaitForPage(void)>
        105700:	e5d40022 	ldrb	r0, [r4, #34]	; fField34
        105704:	e3100006 	tst	r0, #6	; 0x6
        105708:	01a00004 	moveq	r0, r4
        10570c:	03a01001 	moveq	r1, #1	; 0x1
        105710:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        105714:	0a68f284 	beq	1b4212c <TLaserWriterLSDriver::$LightLEDs(char)>
        105718:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::SetSoftError(long)
 * Address: 0010571c
 */
TLaserWriterLSDriver::SetSoftError(long) {
    /*
        10571c:	e1a0c00d 	mov	ip, sp
        105720:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        105724:	e24cb004 	sub	fp, ip, #4	; 0x4
        105728:	e1a04000 	mov	r4, r0
        10572c:	e1a05001 	mov	r5, r1
        105730:	e590101c 	ldr	r1, [r0, #28]	; fField28
        105734:	eb68ea43 	bl	1b40048 <TLaserWriterLSDriver::$ErrorIsFatal(long)>
        105738:	e3300000 	teq	r0, #0	; 0x0
        10573c:	05a4501c 	streq	r5, [r4, #28]!	; fField28
        105740:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::SetState(void)
 * Address: 00105744
 */
TLaserWriterLSDriver::SetState(void) {
    /*
        105744:	e1a0c00d 	mov	ip, sp
        105748:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        10574c:	e24cb004 	sub	fp, ip, #4	; 0x4
        105750:	e1a04000 	mov	r4, r0
        105754:	eb68ea12 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        105758:	e3300000 	teq	r0, #0	; 0x0
        10575c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        105760:	e1a00004 	mov	r0, r4
        105764:	e3a0103e 	mov	r1, #62	; 0x3e
        105768:	eb68ee44 	bl	1b41080 <TLaserWriterLSDriver::$GetEngineRegister(long)>
        10576c:	e5840024 	str	r0, [r4, #36]	; fField36
        105770:	e1a00004 	mov	r0, r4
        105774:	eb68ea0a 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        105778:	e3300000 	teq	r0, #0	; 0x0
        10577c:	11a00004 	movne	r0, r4
        105780:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        105784:	1a68ee4d 	bne	1b410c0 <TLaserWriterLSDriver::$GetStatusRegister18(void)>
        105788:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::SetTopMargin(void)
 * Address: 0010578c
 */
TLaserWriterLSDriver::SetTopMargin(void) {
    /*
        10578c:	e1a0c00d 	mov	ip, sp
        105790:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        105794:	e24cb004 	sub	fp, ip, #4	; 0x4
        105798:	e1a04000 	mov	r4, r0
        10579c:	eb68ea00 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        1057a0:	e3300000 	teq	r0, #0	; 0x0
        1057a4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1057a8:	e5940180 	ldr	r0, [r4, #384]	; fField384
        1057ac:	e1a00840 	mov	r0, r0, asr #16
        1057b0:	e594117c 	ldr	r1, [r4, #380]	; fField380
        1057b4:	e0400841 	sub	r0, r0, r1, asr #16
        1057b8:	e1a000c0 	mov	r0, r0, asr #1
        1057bc:	e2605000 	rsb	r5, r0, #0	; 0x0
        1057c0:	e20520ff 	and	r2, r5, #255	; 0xff
        1057c4:	e1a00004 	mov	r0, r4
        1057c8:	e3a01085 	mov	r1, #133	; 0x85
        1057cc:	eb68faa3 	bl	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
        1057d0:	e1a02445 	mov	r2, r5, asr #8
        1057d4:	e1a00004 	mov	r0, r4
        1057d8:	e3a01086 	mov	r1, #134	; 0x86
        1057dc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1057e0:	ea68fa9e 	b	1b44260 <TLaserWriterLSDriver::$SendCommand(long, long)>
    */
}

/**
 * Symbol: TLaserWriterLSDriver::TestAndProcessPrinterBreak(unsigned char)
 * Address: 001057e4
 */
TLaserWriterLSDriver::TestAndProcessPrinterBreak(unsigned char) {
    /*
        1057e4:	e1a0c00d 	mov	ip, sp
        1057e8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1057ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1057f0:	e1a04000 	mov	r4, r0
        1057f4:	e20160ff 	and	r6, r1, #255	; 0xff
        1057f8:	e3a05000 	mov	r5, #0	; 0x0
        1057fc:	eb68e9e8 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        105800:	e3300000 	teq	r0, #0	; 0x0
        105804:	0a000007 	beq	105828 <TLaserWriterLSDriver::TestAndProcessPrinterBreak(unsigned char)+0x44>
        105808:	e1a00004 	mov	r0, r4
        10580c:	eb68feb3 	bl	1b452e0 <TLaserWriterLSDriver::$TestForPrinterBreak(void)>
        105810:	e3300000 	teq	r0, #0	; 0x0
        105814:	0a000003 	beq	105828 <TLaserWriterLSDriver::TestAndProcessPrinterBreak(unsigned char)+0x44>
        105818:	e1a01006 	mov	r1, r6
        10581c:	e1a00004 	mov	r0, r4
        105820:	eb68f662 	bl	1b431b0 <TLaserWriterLSDriver::$ProcessPrinterBreak(unsigned char)>
        105824:	e1a05000 	mov	r5, r0
        105828:	e1a00005 	mov	r0, r5
        10582c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::TestForPrinterBreak(void)
 * Address: 00105830
 */
TLaserWriterLSDriver::TestForPrinterBreak(void) {
    /*
        105830:	e5d01179 	ldrb	r1, [r0, #377]	; fField377
        105834:	e3a02000 	mov	r2, #0	; 0x0
        105838:	e5c02179 	strb	r2, [r0, #377]	; fField377
        10583c:	e1a00001 	mov	r0, r1
        105840:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLaserWriterLSDriver::WaitForPage(void)
 * Address: 00105844
 */
TLaserWriterLSDriver::WaitForPage(void) {
    /*
        105844:	e1a0c00d 	mov	ip, sp
        105848:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        10584c:	e24cb004 	sub	fp, ip, #4	; 0x4
        105850:	e1a04000 	mov	r4, r0
        105854:	e3a0595e 	mov	r5, #1540096	; 0x178000
        105858:	e285551a 	add	r5, r5, #109051904	; 0x6800000
        10585c:	e59f800c 	ldr	r8, [pc, #c]	; 105870 <TLaserWriterLSDriver::WaitForPage(void)+0x2c>
        105860:	e3a07001 	mov	r7, #1	; 0x1
        105864:	e3a06e42 	mov	r6, #1056	; 0x420
        105868:	e2466a0b 	sub	r6, r6, #45056	; 0xb000
        10586c:	ea000017 	b	1058d0 <TLaserWriterLSDriver::WaitForPage(void)+0x8c>
        105870:	ffffd8db 	swinv	0x00ffd8db
        105874:	e1a01005 	mov	r1, r5
        105878:	e5940018 	ldr	r0, [r4, #24]	; fField24
        10587c:	eb6ad53c 	bl	1bbad74 <TEndpoint::$WaitForEvent(unsigned long)>
        105880:	e1300008 	teq	r0, r8
        105884:	1a00000a 	bne	1058b4 <TLaserWriterLSDriver::WaitForPage(void)+0x70>
        105888:	e24dd004 	sub	sp, sp, #4	; 0x4
        10588c:	e1a0100d 	mov	r1, sp
        105890:	e1a00004 	mov	r0, r4
        105894:	eb68f652 	bl	1b431e4 <TLaserWriterLSDriver::$Receive(void *)>
        105898:	e3300000 	teq	r0, #0	; 0x0
        10589c:	1a000003 	bne	1058b0 <TLaserWriterLSDriver::WaitForPage(void)+0x6c>
        1058a0:	e5dd1000 	ldrb	r1, [sp]
        1058a4:	e3310000 	teq	r1, #0	; 0x0
        1058a8:	1584601c 	strne	r6, [r4, #28]	; fField28
        1058ac:	05c47179 	streqb	r7, [r4, #377]	; fField377
        1058b0:	e28dd004 	add	sp, sp, #4	; 0x4
        1058b4:	e3300000 	teq	r0, #0	; 0x0
        1058b8:	01a00004 	moveq	r0, r4
        1058bc:	03a01001 	moveq	r1, #1	; 0x1
        1058c0:	0b68fe85 	bleq	1b452dc <TLaserWriterLSDriver::$TestAndProcessPrinterBreak(unsigned char)>
        1058c4:	e1a00004 	mov	r0, r4
        1058c8:	e3a01000 	mov	r1, #0	; 0x0
        1058cc:	eb68f633 	bl	1b431a0 <TLaserWriterLSDriver::$PrinterCanPrint(unsigned char)>
        1058d0:	e1a00004 	mov	r0, r4
        1058d4:	eb68e9b2 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        1058d8:	e3300000 	teq	r0, #0	; 0x0
        1058dc:	15d40020 	ldrneb	r0, [r4, #32]	; fField32
        1058e0:	12000020 	andne	r0, r0, #32	; 0x20
        1058e4:	13300000 	teqne	r0, #0	; 0x0
        1058e8:	1affffe1 	bne	105874 <TLaserWriterLSDriver::WaitForPage(void)+0x30>
        1058ec:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::WrongPaperTray(void)
 * Address: 001058f0
 */
TLaserWriterLSDriver::WrongPaperTray(void) {
    /*
        1058f0:	e1a0c00d 	mov	ip, sp
        1058f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1058f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1058fc:	e1a04000 	mov	r4, r0
        105900:	e3a05000 	mov	r5, #0	; 0x0
        105904:	eb68e9a6 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        105908:	e3300000 	teq	r0, #0	; 0x0
        10590c:	0a000006 	beq	10592c <TLaserWriterLSDriver::WrongPaperTray(void)+0x3c>
        105910:	e1a00004 	mov	r0, r4
        105914:	eb68edec 	bl	1b410cc <TLaserWriterLSDriver::$GetStatusRegister3(void)>
        105918:	e2000008 	and	r0, r0, #8	; 0x8
        10591c:	e3300008 	teq	r0, #8	; 0x8
        105920:	13a00000 	movne	r0, #0	; 0x0
        105924:	03a00001 	moveq	r0, #1	; 0x1
        105928:	e20050ff 	and	r5, r0, #255	; 0xff
        10592c:	e1a00005 	mov	r0, r5
        105930:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TLaserWriterLSDriver::FaxEndPage(long)
 * Address: 00105934
 */
TLaserWriterLSDriver::FaxEndPage(long) {
    /*
        105934:	e3a00000 	mov	r0, #0	; 0x0
        105938:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLaserWriterLSDriver::ClearState(void)
 * Address: 0010596c
 */
TLaserWriterLSDriver::ClearState(void) {
    /*
        10596c:	e5d01020 	ldrb	r1, [r0, #32]	; fField32
        105970:	e3c11020 	bic	r1, r1, #32	; 0x20
        105974:	e5c01020 	strb	r1, [r0, #32]	; fField32
        105978:	e3a01001 	mov	r1, #1	; 0x1
        10597c:	e5c01022 	strb	r1, [r0, #34]	; fField34
        105980:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLaserWriterLSDriver::Close(void)
 * Address: 00105984
 */
TLaserWriterLSDriver::Close(void) {
    /*
        105984:	e1a0c00d 	mov	ip, sp
        105988:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        10598c:	e24cb004 	sub	fp, ip, #4	; 0x4
        105990:	e1a04000 	mov	r4, r0
        105994:	eb68e982 	bl	1b3ffa4 <TLaserWriterLSDriver::$ContinueIO(void)>
        105998:	e3300000 	teq	r0, #0	; 0x0
        10599c:	11a00004 	movne	r0, r4
        1059a0:	1b68e565 	blne	1b3ef3c <TLaserWriterLSDriver::$CleanupPrinter(void)>
        1059a4:	e1a00004 	mov	r0, r4
        1059a8:	eb68f60e 	bl	1b431e8 <TLaserWriterLSDriver::$ReleaseConnection(void)>
        1059ac:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        1059b0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__20TLaserWriterLSDriverSFv
 * Address: 003883dc
 */
void TLaserWriterLSDriver::ClassInfo() {
    /*
        3883dc:	e24f0044 	sub	r0, pc, #68	; 0x44
        3883e0:	e1a0f00e 	mov	pc, lr
        3883e4:	e3a00000 	mov	r0, #0	; 0x0
        3883e8:	e1a0f00e 	mov	pc, lr
        3883ec:	544c6173 	strplb	r6, [ip], -#371
        3883f0:	65725772 	ldrvsb	r5, [r2, -#1906]!
        3883f4:	69746572 	ldmvsdb	r4!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        3883f8:	4c534472 	mrrcmi	4, 7, r4, r3, cr2
        3883fc:	69766572 	ldmvsdb	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        388400:	0054446f 	subeqs	r4, r4, pc, ror #8
        388404:	74507269 	ldrvcb	r7, [r0], -#617	; fField617
        388408:	6e746572 	mrcvs	5, 3, r6, cr4, cr2, {3}
        38840c:	44726976 	ldrmibt	r6, [r2], -#2422
        388410:	65720000 	ldrvsb	r0, [r2]!
        388414:	00000000 	andeq	r0, r0, r0
        388418:	eaffffef 	b	3883dc <ClassInfo__20TLaserWriterLSDriverSFv>
        38841c:	ea5edeed 	b	1b3ffd8 <TLaserWriterLSDriver::$Delete(void)>
        388420:	ea5ee74c 	b	1b42158 <TLaserWriterLSDriver::$Open(void)>
        388424:	ea5edacc 	b	1b3ef5c <TLaserWriterLSDriver::$Close(void)>
        388428:	ea5ee752 	b	1b42178 <TLaserWriterLSDriver::$OpenPage(void)>
        38842c:	ea5edad2 	b	1b3ef7c <TLaserWriterLSDriver::$ClosePage(void)>
        388430:	ea5ee32c 	b	1b410e8 <TLaserWriterLSDriver::$ImageBand(PixelMap *, Rect const *)>
        388434:	ea5edab4 	b	1b3ef0c <TLaserWriterLSDriver::$CancelJob(unsigned char)>
        388438:	ea5ee737 	b	1b4211c <TLaserWriterLSDriver::$IsProblemResolved(void)>
        38843c:	ea5ee315 	b	1b41098 <TLaserWriterLSDriver::$GetPageInfo(PrPageInfo *)>
        388440:	ea5edf0b 	b	1b40074 <TLaserWriterLSDriver::$GetBandPrefs(DotPrinterPrefs *)>
        388444:	ea5ef7b3 	b	1b46318 <TLaserWriterLSDriver::$FaxEndPage(long)>
        388448:	00000000 	andeq	r0, r0, r0
        38844c:	00000048 	andeq	r0, r0, r8, asr #32
        388450:	0000004b 	andeq	r0, r0, fp, asr #32
        388454:	00000059 	andeq	r0, r0, r9, asr r0
        388458:	00000058 	andeq	r0, r0, r8, asr r0
        38845c:	00000088 	andeq	r0, r0, r8, lsl #1
        388460:	ea5efbdd 	b	1b473dc <$Sizeof__6ThpPCLSFv>
        38846c:	e1a0f00e 	mov	pc, lr
        388470:	ea5efbda 	b	1b473e0 <ThpPCL::$Delete(void)>
        388474:	00020000 	andeq	r0, r2, r0
        388480:	ea000001 	b	38848c <ClassInfo__6ThpPCLSFv+0x8>
    */
}

