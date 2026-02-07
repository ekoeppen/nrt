#include "include/TCardPartHandler.h"

/**
 * Symbol: TCardPartHandler::__ct(void)
 * Address: 0004feb4
 */
TCardPartHandler::TCardPartHandler(void) {
    /*
         4feb4:	e1a0c00d 	mov	ip, sp
         4feb8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4febc:	e24cb004 	sub	fp, ip, #4	; 0x4
         4fec0:	e1b04000 	movs	r4, r0
         4fec4:	1a000003 	bne	4fed8 <TCardPartHandler::__ct(void)+0x24>
         4fec8:	e3a0003c 	mov	r0, #60	; 0x3c
         4fecc:	eb6dfa19 	bl	1bce738 <$__nw(unsigned int)>
         4fed0:	e1b04000 	movs	r4, r0
         4fed4:	0a000003 	beq	4fee8 <TCardPartHandler::__ct(void)+0x34>
         4fed8:	e1a00004 	mov	r0, r4
         4fedc:	eb6df5e7 	bl	1bcd680 <TPartHandler::$__ct(void)>
         4fee0:	e59f0008 	ldr	r0, [pc, #8]	; 4fef0 <TCardPartHandler::__ct(void)+0x3c>
         4fee4:	e5840000 	str	r0, [r4]
         4fee8:	e1a00004 	mov	r0, r4
         4feec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         4fef0:	0001e404 	andeq	lr, r1, r4, lsl #8
    */
}

/**
 * Symbol: TCardPartHandler::Init(unsigned long, char *, unsigned long)
 * Address: 0004fef4
 */
TCardPartHandler::Init(unsigned long, char *, unsigned long) {
    /*
         4fef4:	e5803038 	str	r3, [r0, #56]	; fField56
         4fef8:	ea6e16e0 	b	1bd5a80 <TPartHandler::$Init(unsigned long)>
    */
}

/**
 * Symbol: TCardPartHandler::Install(PartId const &, SourceType, PartInfo *)
 * Address: 0004ff30
 */
TCardPartHandler::Install(PartId const &, SourceType, PartInfo *) {
    /*
         4ff30:	e1a0c00d 	mov	ip, sp
         4ff34:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         4ff38:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         4ff3c:	e24cb014 	sub	fp, ip, #20	; 0x14
         4ff40:	e1a04000 	mov	r4, r0
         4ff44:	e3a07000 	mov	r7, #0	; 0x0
         4ff48:	e59b5014 	ldr	r5, [fp, #20]
         4ff4c:	e5d50020 	ldrb	r0, [r5, #32]
         4ff50:	e3300000 	teq	r0, #0	; 0x0
         4ff54:	15d50024 	ldrneb	r0, [r5, #36]
         4ff58:	13300000 	teqne	r0, #0	; 0x0
         4ff5c:	0a000036 	beq	5003c <TCardPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x10c>
         4ff60:	e595001c 	ldr	r0, [r5, #28]
         4ff64:	eb6e16e1 	bl	1bd5af0 <TClassInfo::$InterfaceName( const(void))>
         4ff68:	e28f1f0d 	add	r1, pc, #52	; 0x34
         4ff6c:	eb6d96cd 	bl	1bb5aa8 <$strcmp>
         4ff70:	e3300000 	teq	r0, #0	; 0x0
         4ff74:	1a000030 	bne	5003c <TCardPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x10c>
         4ff78:	e595001c 	ldr	r0, [r5, #28]
         4ff7c:	eb6e12bc 	bl	1bd4a74 <TClassInfo::$ImplementationName( const(void))>
         4ff80:	e5db000d 	ldrb	r0, [fp, #13]
         4ff84:	e3300001 	teq	r0, #1	; 0x1
         4ff88:	1a000009 	bne	4ffb4 <TCardPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x84>
         4ff8c:	e595201c 	ldr	r2, [r5, #28]
         4ff90:	e59b100e 	ldr	r1, [fp, #14]
         4ff94:	e1a01821 	mov	r1, r1, lsr #16
         4ff98:	e5940038 	ldr	r0, [r4, #56]	; fField56
         4ff9c:	eb6ba332 	bl	1b38c6c <TCardServer::$AddCardHandler(unsigned long, TClassInfo const *)>
         4ffa0:	ea000010 	b	4ffe8 <TCardPartHandler::Install(PartId const &, SourceType, PartInfo *)+0xb8>
         4ffa4:	54436172 	strplb	r6, [r3], -#370
         4ffa8:	6448616e 	strvsb	r6, [r8], -#366
         4ffac:	646c6572 	strvsbt	r6, [ip], -#1394
         4ffb0:	00000000 	andeq	r0, r0, r0
         4ffb4:	e3a06000 	mov	r6, #0	; 0x0
         4ffb8:	e59f8070 	ldr	r8, [pc, #70]	; 50030 <TCardPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x100>
         4ffbc:	e5980000 	ldr	r0, [r8]
         4ffc0:	e3500000 	cmp	r0, #0	; 0x0
         4ffc4:	9a000007 	bls	4ffe8 <TCardPartHandler::Install(PartId const &, SourceType, PartInfo *)+0xb8>
         4ffc8:	e595201c 	ldr	r2, [r5, #28]
         4ffcc:	e1a01006 	mov	r1, r6
         4ffd0:	e5940038 	ldr	r0, [r4, #56]	; fField56
         4ffd4:	eb6ba324 	bl	1b38c6c <TCardServer::$AddCardHandler(unsigned long, TClassInfo const *)>
         4ffd8:	e2866001 	add	r6, r6, #1	; 0x1
         4ffdc:	e5980000 	ldr	r0, [r8]
         4ffe0:	e1560000 	cmp	r6, r0
         4ffe4:	3afffff7 	bcc	4ffc8 <TCardPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x98>
         4ffe8:	e3a0000c 	mov	r0, #12	; 0xc
         4ffec:	eb6df9d1 	bl	1bce738 <$__nw(unsigned int)>
         4fff0:	e3300000 	teq	r0, #0	; 0x0
         4fff4:	0a00000e 	beq	50034 <TCardPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x104>
         4fff8:	e5db100c 	ldrb	r1, [fp, #12]
         4fffc:	e5c01000 	strb	r1, [r0]
         50000:	e5db100d 	ldrb	r1, [fp, #13]
         50004:	e5c01001 	strb	r1, [r0, #1]
         50008:	e59b100c 	ldr	r1, [fp, #12]
         5000c:	e5c01003 	strb	r1, [r0, #3]
         50010:	e1a01441 	mov	r1, r1, asr #8
         50014:	e5c01002 	strb	r1, [r0, #2]
         50018:	e5b5101c 	ldr	r1, [r5, #28]!
         5001c:	e5801008 	str	r1, [r0, #8]
         50020:	e1a01000 	mov	r1, r0
         50024:	e1a00004 	mov	r0, r4
         50028:	eb6e2f70 	bl	1bdbdf0 <TPartHandler::$SetRemoveObjPtr(long)>
         5002c:	ea000002 	b	5003c <TCardPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x10c>
         50030:	0c100ab4 	ldceq	10, cr0, [r0], -#720
         50034:	e3a070e9 	mov	r7, #233	; 0xe9
         50038:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
         5003c:	e1a00007 	mov	r0, r7
         50040:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCardPartHandler::Remove(PartId const &, unsigned long, long)
 * Address: 00050044
 */
TCardPartHandler::Remove(PartId const &, unsigned long, long) {
    /*
         50044:	e1a0c00d 	mov	ip, sp
         50048:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         5004c:	e24cb004 	sub	fp, ip, #4	; 0x4
         50050:	e1a05000 	mov	r5, r0
         50054:	e1b04003 	movs	r4, r3
         50058:	0a000019 	beq	500c4 <TCardPartHandler::Remove(PartId const &, unsigned long, long)+0x80>
         5005c:	e5940008 	ldr	r0, [r4, #8]
         50060:	eb6e1283 	bl	1bd4a74 <TClassInfo::$ImplementationName( const(void))>
         50064:	e5d40001 	ldrb	r0, [r4, #1]
         50068:	e3300001 	teq	r0, #1	; 0x1
         5006c:	1a000005 	bne	50088 <TCardPartHandler::Remove(PartId const &, unsigned long, long)+0x44>
         50070:	e5942008 	ldr	r2, [r4, #8]
         50074:	e5941002 	ldr	r1, [r4, #2]
         50078:	e1a01821 	mov	r1, r1, lsr #16
         5007c:	e5b50038 	ldr	r0, [r5, #56]!	; fField56
         50080:	eb6ba719 	bl	1b39cec <TCardServer::$RemoveCardHandler(unsigned long, TClassInfo const *)>
         50084:	ea00000c 	b	500bc <TCardPartHandler::Remove(PartId const &, unsigned long, long)+0x78>
         50088:	e3a06000 	mov	r6, #0	; 0x0
         5008c:	e59f7038 	ldr	r7, [pc, #38]	; 500cc <TCardPartHandler::Remove(PartId const &, unsigned long, long)+0x88>
         50090:	e5970000 	ldr	r0, [r7]
         50094:	e3500000 	cmp	r0, #0	; 0x0
         50098:	9a000007 	bls	500bc <TCardPartHandler::Remove(PartId const &, unsigned long, long)+0x78>
         5009c:	e5942008 	ldr	r2, [r4, #8]
         500a0:	e1a01006 	mov	r1, r6
         500a4:	e5950038 	ldr	r0, [r5, #56]	; fField56
         500a8:	eb6ba70f 	bl	1b39cec <TCardServer::$RemoveCardHandler(unsigned long, TClassInfo const *)>
         500ac:	e2866001 	add	r6, r6, #1	; 0x1
         500b0:	e5970000 	ldr	r0, [r7]
         500b4:	e1560000 	cmp	r6, r0
         500b8:	3afffff7 	bcc	5009c <TCardPartHandler::Remove(PartId const &, unsigned long, long)+0x58>
         500bc:	e1a00004 	mov	r0, r4
         500c0:	eb6df586 	bl	1bcd6e0 <$__dl(void *)>
         500c4:	e3a00000 	mov	r0, #0	; 0x0
         500c8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         500cc:	0c100ab4 	ldceq	10, cr0, [r0], -#720
    */
}

