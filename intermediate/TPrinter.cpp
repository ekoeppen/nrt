#include "DDKIncludes/Printing/DotDrivers.h"

/**
 * Symbol: TPrinter::OpenPort(PrPageInfo const &)
 * Address: 0021bc28
 */
TPrinter::OpenPort(PrPageInfo const &) {
    /*
        21bc28:	e1a0c00d 	mov	ip, sp
        21bc2c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        21bc30:	e24cb004 	sub	fp, ip, #4	; 0x4
        21bc34:	e1a05000 	mov	r5, r0
        21bc38:	e1a04001 	mov	r4, r1
        21bc3c:	e591000a 	ldr	r0, [r1, #10]
        21bc40:	e1a00820 	mov	r0, r0, lsr #16
        21bc44:	e1a00800 	mov	r0, r0, lsl #16
        21bc48:	e5911000 	ldr	r1, [r1]
        21bc4c:	eb67151b 	bl	1be10c0 <$FixedDivide>
        21bc50:	e1a08000 	mov	r8, r0
        21bc54:	e5941004 	ldr	r1, [r4, #4]	; TPrinter
        21bc58:	e5940008 	ldr	r0, [r4, #8]	; fConnect
        21bc5c:	e1a00820 	mov	r0, r0, lsr #16
        21bc60:	e1a00800 	mov	r0, r0, lsl #16
        21bc64:	eb671515 	bl	1be10c0 <$FixedDivide>
        21bc68:	e1a07000 	mov	r7, r0
        21bc6c:	e3a06000 	mov	r6, #0	; 0x0
        21bc70:	e1a00008 	mov	r0, r8
        21bc74:	e3a01712 	mov	r1, #4718592	; 0x480000
        21bc78:	e52d6008 	str	r6, [sp, -#8]!	; fConnect
        21bc7c:	eb671510 	bl	1be10c4 <$FixedMultiply>
        21bc80:	e2800902 	add	r0, r0, #32768	; 0x8000
        21bc84:	e1a00840 	mov	r0, r0, asr #16
        21bc88:	e5cd0007 	strb	r0, [sp, #7]
        21bc8c:	e1a00440 	mov	r0, r0, asr #8
        21bc90:	e5cd0006 	strb	r0, [sp, #6]
        21bc94:	e1a00007 	mov	r0, r7
        21bc98:	e3a01712 	mov	r1, #4718592	; 0x480000
        21bc9c:	eb671508 	bl	1be10c4 <$FixedMultiply>
        21bca0:	e2800902 	add	r0, r0, #32768	; 0x8000
        21bca4:	e1a00840 	mov	r0, r0, asr #16
        21bca8:	e5cd0005 	strb	r0, [sp, #5]
        21bcac:	e1a00440 	mov	r0, r0, asr #8
        21bcb0:	e5cd0004 	strb	r0, [sp, #4]	; TPrinter
        21bcb4:	e24dd008 	sub	sp, sp, #8	; 0x8
        21bcb8:	e5943008 	ldr	r3, [r4, #8]	; fConnect
        21bcbc:	e1a03843 	mov	r3, r3, asr #16
        21bcc0:	e92d0008 	stmdb	sp!, {r3}
        21bcc4:	e594300a 	ldr	r3, [r4, #10]
        21bcc8:	e1a03843 	mov	r3, r3, asr #16
        21bccc:	e28d0004 	add	r0, sp, #4	; 0x4
        21bcd0:	e3a02000 	mov	r2, #0	; 0x0
        21bcd4:	e3a01000 	mov	r1, #0	; 0x0
        21bcd8:	eb64e34b 	bl	1b54a0c <$SetRect__FP4RectlN32>
        21bcdc:	e28dd004 	add	sp, sp, #4	; 0x4
        21bce0:	e2850028 	add	r0, r5, #40	; 0x28
        21bce4:	e28d1008 	add	r1, sp, #8	; 0x8
        21bce8:	e8915000 	ldmia	r1, {ip, lr}
        21bcec:	e8805000 	stmia	r0, {ip, lr}
        21bcf0:	e2851030 	add	r1, r5, #48	; 0x30
        21bcf4:	e89d5000 	ldmia	sp, {ip, lr}
        21bcf8:	e8815000 	stmia	r1, {ip, lr}
        21bcfc:	e59d100c 	ldr	r1, [sp, #12]	; fPrinter
        21bd00:	e59d0008 	ldr	r0, [sp, #8]	; fConnect
        21bd04:	e0410000 	sub	r0, r1, r0
        21bd08:	e1a01800 	mov	r1, r0, lsl #16
        21bd0c:	e59d0004 	ldr	r0, [sp, #4]	; TPrinter
        21bd10:	e59d2000 	ldr	r2, [sp]
        21bd14:	e0400002 	sub	r0, r0, r2
        21bd18:	e1a00800 	mov	r0, r0, lsl #16
        21bd1c:	eb6714e7 	bl	1be10c0 <$FixedDivide>
        21bd20:	e5850038 	str	r0, [r5, #56]	; printerPageSize
        21bd24:	e59d100e 	ldr	r1, [sp, #14]
        21bd28:	e59d000a 	ldr	r0, [sp, #10]
        21bd2c:	e0410000 	sub	r0, r1, r0
        21bd30:	e1a01800 	mov	r1, r0, lsl #16
        21bd34:	e59d0006 	ldr	r0, [sp, #6]
        21bd38:	e59d2002 	ldr	r2, [sp, #2]
        21bd3c:	e0400002 	sub	r0, r0, r2
        21bd40:	e1a00800 	mov	r0, r0, lsl #16
        21bd44:	eb6714dd 	bl	1be10c0 <$FixedDivide>
        21bd48:	e585003c 	str	r0, [r5, #60]	; scaleRatios
        21bd4c:	e1a00005 	mov	r0, r5
        21bd50:	eb6494d3 	bl	1b410a4 <TPrinter::$GetPrinterPort(void)>
        21bd54:	e1a04000 	mov	r4, r0
        21bd58:	eb674e92 	bl	1bef7a8 <$OpenPort(GrafPort *)>
        21bd5c:	e5846000 	str	r6, [r4]
        21bd60:	e2840008 	add	r0, r4, #8	; 0x8
        21bd64:	e28d1008 	add	r1, sp, #8	; 0x8
        21bd68:	e8915000 	ldmia	r1, {ip, lr}
        21bd6c:	e8805000 	stmia	r0, {ip, lr}
        21bd70:	e3a00105 	mov	r0, #1073741825	; 0x40000001
        21bd74:	e5840010 	str	r0, [r4, #16]	; TPrinter
        21bd78:	e5c46015 	strb	r6, [r4, #21]	; fField21
        21bd7c:	e5c46014 	strb	r6, [r4, #20]	; fVersion
        21bd80:	e5c46017 	strb	r6, [r4, #23]	; fField23
        21bd84:	e5c46016 	strb	r6, [r4, #22]	; fField22
        21bd88:	e5846018 	str	r6, [r4, #24]	; fConnectInfo
        21bd8c:	e284001c 	add	r0, r4, #28	; 0x1c
        21bd90:	e28d1008 	add	r1, sp, #8	; 0x8
        21bd94:	e8915000 	ldmia	r1, {ip, lr}
        21bd98:	e8805000 	stmia	r0, {ip, lr}
        21bd9c:	e28d1008 	add	r1, sp, #8	; 0x8
        21bda0:	e5940024 	ldr	r0, [r4, #36]	; fPrintQuality
        21bda4:	eb64defc 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        21bda8:	e24dd008 	sub	sp, sp, #8	; 0x8
        21bdac:	e3a03902 	mov	r3, #32768	; 0x8000
        21bdb0:	e2433001 	sub	r3, r3, #1	; 0x1
        21bdb4:	e92d0008 	stmdb	sp!, {r3}
        21bdb8:	e28d0004 	add	r0, sp, #4	; 0x4
        21bdbc:	e3a02001 	mov	r2, #1	; 0x1
        21bdc0:	e2422902 	sub	r2, r2, #32768	; 0x8000
        21bdc4:	e1a01002 	mov	r1, r2
        21bdc8:	eb64e30f 	bl	1b54a0c <$SetRect__FP4RectlN32>
        21bdcc:	e28dd004 	add	sp, sp, #4	; 0x4
        21bdd0:	e1a0100d 	mov	r1, sp
        21bdd4:	e5940028 	ldr	r0, [r4, #40]	; fPortrait
        21bdd8:	eb64deef 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        21bddc:	e5a45054 	str	r5, [r4, #84]!	; fField84
        21bde0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPrinter::ClosePort(void)
 * Address: 0021bde4
 */
TPrinter::ClosePort(void) {
    /*
        21bde4:	e1a0c00d 	mov	ip, sp
        21bde8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        21bdec:	e24cb004 	sub	fp, ip, #4	; 0x4
        21bdf0:	eb6494aa 	bl	1b410a0 <TPrinter::$GetPort(void)>
        21bdf4:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        21bdf8:	ea64c629 	b	1b4d6a4 <$ClosePort(GrafPort *)>
    */
}

/**
 * Symbol: TPrinter::GetPrinterPort(void)
 * Address: 0021bdfc
 */
TPrinter::GetPrinterPort(void) {
    /*
        21bdfc:	e2800040 	add	r0, r0, #64	; 0x40
        21be00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPrinter::GetPort(void)
 * Address: 0021be04
 */
TPrinter::GetPort(void) {
    /*
        21be04:	e2800040 	add	r0, r0, #64	; 0x40
        21be08:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPrinter::GetScalerInfo(void)
 * Address: 0021be0c
 */
TPrinter::GetScalerInfo(void) {
    /*
        21be0c:	e2800028 	add	r0, r0, #40	; 0x28
        21be10:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPrinter::SetScalerInfo(PrPageInfo const &)
 * Address: 0021be14
 */
TPrinter::SetScalerInfo(PrPageInfo const &) {
    /*
        21be14:	e1a0c00d 	mov	ip, sp
        21be18:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21be1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21be20:	e1a05000 	mov	r5, r0
        21be24:	e1a04001 	mov	r4, r1
        21be28:	e591000a 	ldr	r0, [r1, #10]
        21be2c:	e1a00820 	mov	r0, r0, lsr #16
        21be30:	e1a00800 	mov	r0, r0, lsl #16
        21be34:	e5911000 	ldr	r1, [r1]
        21be38:	eb6714a0 	bl	1be10c0 <$FixedDivide>
        21be3c:	e1a07000 	mov	r7, r0
        21be40:	e5941004 	ldr	r1, [r4, #4]	; TPrinter
        21be44:	e5940008 	ldr	r0, [r4, #8]	; fConnect
        21be48:	e1a00820 	mov	r0, r0, lsr #16
        21be4c:	e1a00800 	mov	r0, r0, lsl #16
        21be50:	eb67149a 	bl	1be10c0 <$FixedDivide>
        21be54:	e1a06000 	mov	r6, r0
        21be58:	e3a00000 	mov	r0, #0	; 0x0
        21be5c:	e52d0008 	str	r0, [sp, -#8]!	; fConnect
        21be60:	e1a00007 	mov	r0, r7
        21be64:	e3a01712 	mov	r1, #4718592	; 0x480000
        21be68:	eb671495 	bl	1be10c4 <$FixedMultiply>
        21be6c:	e2800902 	add	r0, r0, #32768	; 0x8000
        21be70:	e1a00840 	mov	r0, r0, asr #16
        21be74:	e5cd0007 	strb	r0, [sp, #7]
        21be78:	e1a00440 	mov	r0, r0, asr #8
        21be7c:	e5cd0006 	strb	r0, [sp, #6]
        21be80:	e1a00006 	mov	r0, r6
        21be84:	e3a01712 	mov	r1, #4718592	; 0x480000
        21be88:	eb67148d 	bl	1be10c4 <$FixedMultiply>
        21be8c:	e2800902 	add	r0, r0, #32768	; 0x8000
        21be90:	e1a00840 	mov	r0, r0, asr #16
        21be94:	e5cd0005 	strb	r0, [sp, #5]
        21be98:	e1a00440 	mov	r0, r0, asr #8
        21be9c:	e5cd0004 	strb	r0, [sp, #4]	; TPrinter
        21bea0:	e24dd008 	sub	sp, sp, #8	; 0x8
        21bea4:	e5943008 	ldr	r3, [r4, #8]	; fConnect
        21bea8:	e1a03843 	mov	r3, r3, asr #16
        21beac:	e92d0008 	stmdb	sp!, {r3}
        21beb0:	e594300a 	ldr	r3, [r4, #10]
        21beb4:	e1a03843 	mov	r3, r3, asr #16
        21beb8:	e28d0004 	add	r0, sp, #4	; 0x4
        21bebc:	e3a02000 	mov	r2, #0	; 0x0
        21bec0:	e3a01000 	mov	r1, #0	; 0x0
        21bec4:	eb64e2d0 	bl	1b54a0c <$SetRect__FP4RectlN32>
        21bec8:	e28dd004 	add	sp, sp, #4	; 0x4
        21becc:	e2850028 	add	r0, r5, #40	; 0x28
        21bed0:	e28d1008 	add	r1, sp, #8	; 0x8
        21bed4:	e8915000 	ldmia	r1, {ip, lr}
        21bed8:	e8805000 	stmia	r0, {ip, lr}
        21bedc:	e2850030 	add	r0, r5, #48	; 0x30
        21bee0:	e89d5000 	ldmia	sp, {ip, lr}
        21bee4:	e8805000 	stmia	r0, {ip, lr}
        21bee8:	e59d100c 	ldr	r1, [sp, #12]	; fPrinter
        21beec:	e59d0008 	ldr	r0, [sp, #8]	; fConnect
        21bef0:	e0410000 	sub	r0, r1, r0
        21bef4:	e1a01800 	mov	r1, r0, lsl #16
        21bef8:	e59d2004 	ldr	r2, [sp, #4]	; TPrinter
        21befc:	e59d0000 	ldr	r0, [sp]
        21bf00:	e0420000 	sub	r0, r2, r0
        21bf04:	e1a00800 	mov	r0, r0, lsl #16
        21bf08:	eb67146c 	bl	1be10c0 <$FixedDivide>
        21bf0c:	e5850038 	str	r0, [r5, #56]	; printerPageSize
        21bf10:	e59d100e 	ldr	r1, [sp, #14]
        21bf14:	e59d000a 	ldr	r0, [sp, #10]
        21bf18:	e0410000 	sub	r0, r1, r0
        21bf1c:	e1a01800 	mov	r1, r0, lsl #16
        21bf20:	e59d2006 	ldr	r2, [sp, #6]
        21bf24:	e59d0002 	ldr	r0, [sp, #2]
        21bf28:	e0420000 	sub	r0, r2, r0
        21bf2c:	e1a00800 	mov	r0, r0, lsl #16
        21bf30:	eb671462 	bl	1be10c0 <$FixedDivide>
        21bf34:	e5a5003c 	str	r0, [r5, #60]!	; scaleRatios
        21bf38:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPrinter::SetupConnect(PrintConnect *, RefVar const &)
 * Address: 0021bf3c
 */
TPrinter::SetupConnect(PrintConnect *, RefVar const &) {
    /*
        21bf3c:	e1a0c00d 	mov	ip, sp
        21bf40:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        21bf44:	e24cb004 	sub	fp, ip, #4	; 0x4
        21bf48:	e1a04001 	mov	r4, r1
        21bf4c:	e1a05002 	mov	r5, r2
        21bf50:	e3a08001 	mov	r8, #1	; 0x1
        21bf54:	e59f00c8 	ldr	r0, [pc, #c8]	; 21c024 <TPrinter::SetupConnect(PrintConnect *, RefVar const &)+0xe8>
        21bf58:	e5900000 	ldr	r0, [r0]
        21bf5c:	e5901000 	ldr	r1, [r0]
        21bf60:	e5920000 	ldr	r0, [r2]
        21bf64:	e5900000 	ldr	r0, [r0]
        21bf68:	eb66a0bc 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        21bf6c:	eb669876 	bl	1bc214c <$AllocateRefHandle(long)>
        21bf70:	e1a06000 	mov	r6, r0
        21bf74:	e5900000 	ldr	r0, [r0]
        21bf78:	e3a09000 	mov	r9, #0	; 0x0
        21bf7c:	e3300002 	teq	r0, #2	; 0x2
        21bf80:	0a000010 	beq	21bfc8 <TPrinter::SetupConnect(PrintConnect *, RefVar const &)+0x8c>
        21bf84:	e59f109c 	ldr	r1, [pc, #9c]	; 21c028 <TPrinter::SetupConnect(PrintConnect *, RefVar const &)+0xec>
        21bf88:	e5911000 	ldr	r1, [r1]
        21bf8c:	e5911000 	ldr	r1, [r1]
        21bf90:	eb66a0b2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        21bf94:	eb66986c 	bl	1bc214c <$AllocateRefHandle(long)>
        21bf98:	e1a07000 	mov	r7, r0
        21bf9c:	e59f0088 	ldr	r0, [pc, #88]	; 21c02c <TPrinter::SetupConnect(PrintConnect *, RefVar const &)+0xf0>
        21bfa0:	e5900000 	ldr	r0, [r0]
        21bfa4:	e5901000 	ldr	r1, [r0]
        21bfa8:	e5970000 	ldr	r0, [r7]
        21bfac:	eb66a09f 	bl	1bc4230 <$EQRef__FlT1>
        21bfb0:	e3300000 	teq	r0, #0	; 0x0
        21bfb4:	13a00000 	movne	r0, #0	; 0x0
        21bfb8:	03a00001 	moveq	r0, #1	; 0x1
        21bfbc:	e20080ff 	and	r8, r0, #255	; 0xff
        21bfc0:	e1a00007 	mov	r0, r7
        21bfc4:	eb669c7c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21bfc8:	e3380000 	teq	r8, #0	; 0x0
        21bfcc:	059f0058 	ldreq	r0, [pc, #58]	; 21c02c <TPrinter::SetupConnect(PrintConnect *, RefVar const &)+0xf0>
        21bfd0:	159f0058 	ldrne	r0, [pc, #58]	; 21c030 <TPrinter::SetupConnect(PrintConnect *, RefVar const &)+0xf4>
        21bfd4:	e5900000 	ldr	r0, [r0]
        21bfd8:	e5900000 	ldr	r0, [r0]
        21bfdc:	eb66985a 	bl	1bc214c <$AllocateRefHandle(long)>
        21bfe0:	e3a01801 	mov	r1, #65536	; 0x10000
        21bfe4:	e5841000 	str	r1, [r4]
        21bfe8:	e5952000 	ldr	r2, [r5]
        21bfec:	e5922000 	ldr	r2, [r2]
        21bff0:	e5941004 	ldr	r1, [r4, #4]	; TPrinter
        21bff4:	e5812000 	str	r2, [r1]
        21bff8:	e5902000 	ldr	r2, [r0]
        21bffc:	e5941008 	ldr	r1, [r4, #8]	; fConnect
        21c000:	e5812000 	str	r2, [r1]
        21c004:	e5c4900c 	strb	r9, [r4, #12]	; fPrinter
        21c008:	e3a01001 	mov	r1, #1	; 0x1
        21c00c:	e5849010 	str	r9, [r4, #16]	; TPrinter
        21c010:	e5c41014 	strb	r1, [r4, #20]	; fVersion
        21c014:	eb669c68 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21c018:	e1a00006 	mov	r0, r6
        21c01c:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        21c020:	ea669c65 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        21c024:	00683fd8 	ldreqd	r3, [r8], -#248
        21c028:	00683160 	rsbeq	r3, r8, r0, ror #2
        21c02c:	00681d08 	rsbeq	r1, r8, r8, lsl #26
        21c030:	00683508 	rsbeq	r3, r8, r8, lsl #10
    */
}

/**
 * Symbol: TPrinter::DoUserAbort(void)
 * Address: 0021c034
 */
TPrinter::DoUserAbort(void) {
    /*
        21c034:	e5d01014 	ldrb	r1, [r0, #20]	; fVersion
        21c038:	e3310000 	teq	r1, #0	; 0x0
        21c03c:	11a0f00e 	movne	pc, lr
        21c040:	e3a01001 	mov	r1, #1	; 0x1
        21c044:	e5c01014 	strb	r1, [r0, #20]	; fVersion
        21c048:	e5c01015 	strb	r1, [r0, #21]	; fField21
        21c04c:	ea648baf 	b	1b3ef10 <TPrinter::$CancelJob(unsigned char)>
    */
}

/**
 * Symbol: TPrinter::CheckUserAbort(void)
 * Address: 0021c050
 */
TPrinter::CheckUserAbort(void) {
    /*
        21c050:	e1a0c00d 	mov	ip, sp
        21c054:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21c058:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c05c:	e1a04000 	mov	r4, r0
        21c060:	e5d00014 	ldrb	r0, [r0, #20]	; fVersion
        21c064:	e3a0501c 	mov	r5, #28	; 0x1c
        21c068:	e2455b2b 	sub	r5, r5, #44032	; 0xac00
        21c06c:	e3300000 	teq	r0, #0	; 0x0
        21c070:	0a00000f 	beq	21c0b4 <TPrinter::CheckUserAbort(void)+0x64>
        21c074:	e5d40015 	ldrb	r0, [r4, #21]	; fField21
        21c078:	e3300000 	teq	r0, #0	; 0x0
        21c07c:	1a00000c 	bne	21c0b4 <TPrinter::CheckUserAbort(void)+0x64>
        21c080:	e3a00001 	mov	r0, #1	; 0x1
        21c084:	e5c40015 	strb	r0, [r4, #21]	; fField21
        21c088:	e5940010 	ldr	r0, [r4, #16]	; TPrinter
        21c08c:	e290cb2b 	adds	ip, r0, #44032	; 0xac00
        21c090:	d37c0043 	cmnle	ip, #67	; 0x43
        21c094:	ba000002 	blt	21c0a4 <TPrinter::CheckUserAbort(void)+0x54>
        21c098:	e290ccab 	adds	ip, r0, #43776	; 0xab00
        21c09c:	d37c00e0 	cmnle	ip, #224	; 0xe0
        21c0a0:	da000000 	ble	21c0a8 <TPrinter::CheckUserAbort(void)+0x58>
        21c0a4:	e5845010 	str	r5, [r4, #16]	; TPrinter
        21c0a8:	e1a00004 	mov	r0, r4
        21c0ac:	e3a01000 	mov	r1, #0	; 0x0
        21c0b0:	eb648b96 	bl	1b3ef10 <TPrinter::$CancelJob(unsigned char)>
        21c0b4:	e5b40010 	ldr	r0, [r4, #16]!	; TPrinter
        21c0b8:	e1300005 	teq	r0, r5
        21c0bc:	13a00000 	movne	r0, #0	; 0x0
        21c0c0:	03a00001 	moveq	r0, #1	; 0x1
        21c0c4:	e20000ff 	and	r0, r0, #255	; 0xff
        21c0c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPrinter::Constructor(char *)
 * Address: 00387f2c
 */
TPrinter::Constructor(char *) {
    /*
        387f2c:	e5900004 	ldr	r0, [r0, #4]	; TPrinter
        387f30:	e590c008 	ldr	ip, [r0, #8]	; fConnect
        387f34:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TPrinter::Delete(void)
 * Address: 00387f38
 */
void TPrinter::Delete(void) {
    /*
        387f38:	e5900004 	ldr	r0, [r0, #4]	; TPrinter
        387f3c:	e92d4001 	stmdb	sp!, {r0, lr}
        387f40:	e28fe004 	add	lr, pc, #4	; 0x4
        387f44:	e590c008 	ldr	ip, [r0, #8]	; fConnect
        387f48:	e28cf00c 	add	pc, ip, #12	; 0xc
        387f4c:	e8bd4001 	ldmia	sp!, {r0, lr}
        387f50:	ea612a81 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TPrinter::Open(RefVar const &)
 * Address: 00387f54
 */
NewtonErr	TPrinter::Open(void) {
    /*
        387f54:	e5900004 	ldr	r0, [r0, #4]	; TPrinter
        387f58:	e590c008 	ldr	ip, [r0, #8]	; fConnect
        387f5c:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TPrinter::Close(void)
 * Address: 00387f60
 */
NewtonErr	TPrinter::Close(void) {
    /*
        387f60:	e5900004 	ldr	r0, [r0, #4]	; TPrinter
        387f64:	e590c008 	ldr	ip, [r0, #8]	; fConnect
        387f68:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TPrinter::OpenPage(void)
 * Address: 00387f6c
 */
NewtonErr	TPrinter::OpenPage(void) {
    /*
        387f6c:	e5900004 	ldr	r0, [r0, #4]	; TPrinter
        387f70:	e590c008 	ldr	ip, [r0, #8]	; fConnect
        387f74:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TPrinter::ClosePage(void)
 * Address: 00387f78
 */
NewtonErr	TPrinter::ClosePage(void) {
    /*
        387f78:	e5900004 	ldr	r0, [r0, #4]	; TPrinter
        387f7c:	e590c008 	ldr	ip, [r0, #8]	; fConnect
        387f80:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TPrinter::RepeatPage(void)
 * Address: 00387f84
 */
TPrinter::RepeatPage(void) {
    /*
        387f84:	e5900004 	ldr	r0, [r0, #4]	; TPrinter
        387f88:	e590c008 	ldr	ip, [r0, #8]	; fConnect
        387f8c:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TPrinter::CancelJob(unsigned char)
 * Address: 00387f90
 */
void		TPrinter::CancelJob(Boolean asyncCancel) {
    /*
        387f90:	e5900004 	ldr	r0, [r0, #4]	; TPrinter
        387f94:	e590c008 	ldr	ip, [r0, #8]	; fConnect
        387f98:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TPrinter::IsProblemResolved(void)
 * Address: 00387f9c
 */
PrProblemResolution	TPrinter::IsProblemResolved(void) {
    /*
        387f9c:	e5900004 	ldr	r0, [r0, #4]	; TPrinter
        387fa0:	e590c008 	ldr	ip, [r0, #8]	; fConnect
        387fa4:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: TPrinter::SetPortraitOrientation(unsigned char)
 * Address: 00387fa8
 */
TPrinter::SetPortraitOrientation(unsigned char) {
    /*
        387fa8:	e5900004 	ldr	r0, [r0, #4]	; TPrinter
        387fac:	e590c008 	ldr	ip, [r0, #8]	; fConnect
        387fb0:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: TPrinter::FaxEndPage(long)
 * Address: 00387fb4
 */
NewtonErr 	TPrinter::FaxEndPage(long pageCount) {
    /*
        387fb4:	e5900004 	ldr	r0, [r0, #4]	; TPrinter
        387fb8:	e590c008 	ldr	ip, [r0, #8]	; fConnect
        387fbc:	e28cf030 	add	pc, ip, #48	; 0x30
        387fc0:	00000000 	andeq	r0, r0, r0
        387fc4:	00000048 	andeq	r0, r0, r8, asr #32
        387fc8:	00000050 	andeq	r0, r0, r0, asr r0
        387fcc:	00000055 	andeq	r0, r0, r5, asr r0
        387fd0:	00000054 	andeq	r0, r0, r4, asr r0
        387fd4:	00000084 	andeq	r0, r0, r4, lsl #1
        387fd8:	ea5ef4b9 	b	1b452c4 <$Sizeof__11TDotPrinterSFv>
        387fe4:	e1a0f00e 	mov	pc, lr
        387fe8:	ea5edff6 	b	1b3ffc8 <TDotPrinter::$Delete(void)>
        387fec:	00020000 	andeq	r0, r2, r0
        387ff8:	ea000001 	b	388004 <ClassInfo__11TDotPrinterSFv+0x8>
    */
}

