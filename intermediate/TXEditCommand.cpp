#include "include/TXEditCommand.h"

/**
 * Symbol: TXEditCommand::GetContainerStream(TXOffsetRange *, unsigned char)
 * Address: 00232d50
 */
TXEditCommand::GetContainerStream(TXOffsetRange *, unsigned char) {
    /*
        232d50:	e1a0c00d 	mov	ip, sp
        232d54:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        232d58:	e24cb004 	sub	fp, ip, #4	; 0x4
        232d5c:	e1a05000 	mov	r5, r0
        232d60:	e1a04001 	mov	r4, r1
        232d64:	e20270ff 	and	r7, r2, #255	; 0xff
        232d68:	e1a02007 	mov	r2, r7
        232d6c:	e5903000 	ldr	r3, [r0]
        232d70:	e1a0e00f 	mov	lr, pc
        232d74:	e283f028 	add	pc, r3, #40	; 0x28
        232d78:	e1b06000 	movs	r6, r0
        232d7c:	0a000010 	beq	232dc4 <TXEditCommand::GetContainerStream(TXOffsetRange *, unsigned char)+0x74>
        232d80:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        232d84:	e1a01006 	mov	r1, r6
        232d88:	e1a0000d 	mov	r0, sp
        232d8c:	eb655df2 	bl	1b8a55c <TXLocalContainer::$__ct(TXStream *)>
        232d90:	e1a03007 	mov	r3, r7
        232d94:	e1a0200d 	mov	r2, sp
        232d98:	e1a01004 	mov	r1, r4
        232d9c:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        232da0:	eb65b494 	bl	1b9fff8 <Textension::$Export(TXOffsetRange *, TXContainer *, unsigned char)>
        232da4:	e3300000 	teq	r0, #0	; 0x0
        232da8:	0a000004 	beq	232dc0 <TXEditCommand::GetContainerStream(TXOffsetRange *, unsigned char)+0x70>
        232dac:	e1a00006 	mov	r0, r6
        232db0:	e3a01001 	mov	r1, #1	; 0x1
        232db4:	e1a0e00f 	mov	lr, pc
        232db8:	e596f000 	ldr	pc, [r6]
        232dbc:	e3a06000 	mov	r6, #0	; 0x0
        232dc0:	e28dd03c 	add	sp, sp, #60	; 0x3c
        232dc4:	e1a00006 	mov	r0, r6
        232dc8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXEditCommand::GetUndoParams(unsigned char *)
 * Address: 00232dcc
 */
TXEditCommand::GetUndoParams(unsigned char *) {
    /*
        232dcc:	e5900008 	ldr	r0, [r0, #8]	; fField8
        232dd0:	e3300002 	teq	r0, #2	; 0x2
        232dd4:	03a00002 	moveq	r0, #2	; 0x2
        232dd8:	0a000002 	beq	232de8 <TXEditCommand::GetUndoParams(unsigned char *)+0x1c>
        232ddc:	e3300003 	teq	r0, #3	; 0x3
        232de0:	13a00007 	movne	r0, #7	; 0x7
        232de4:	03a00004 	moveq	r0, #4	; 0x4
        232de8:	e5c10000 	strb	r0, [r1]
        232dec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXEditCommand::SaveUndoContainer(unsigned char)
 * Address: 00232df0
 */
TXEditCommand::SaveUndoContainer(unsigned char) {
    /*
        232df0:	e1a0c00d 	mov	ip, sp
        232df4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        232df8:	e24cb004 	sub	fp, ip, #4	; 0x4
        232dfc:	e1a04000 	mov	r4, r0
        232e00:	e20150ff 	and	r5, r1, #255	; 0xff
        232e04:	e2801028 	add	r1, r0, #40	; 0x28
        232e08:	e9311008 	ldmdb	r1!, {r3, ip}
        232e0c:	e92d1008 	stmdb	sp!, {r3, ip}
        232e10:	e9311008 	ldmdb	r1!, {r3, ip}
        232e14:	e92d1008 	stmdb	sp!, {r3, ip}
        232e18:	e3a07000 	mov	r7, #0	; 0x0
        232e1c:	e3350004 	teq	r5, #4	; 0x4
        232e20:	0a000005 	beq	232e3c <TXEditCommand::SaveUndoContainer(unsigned char)+0x4c>
        232e24:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        232e28:	e59d1000 	ldr	r1, [sp]
        232e2c:	e1300001 	teq	r0, r1
        232e30:	03a00001 	moveq	r0, #1	; 0x1
        232e34:	05c40058 	streqb	r0, [r4, #88]	; fField88
        232e38:	0a000007 	beq	232e5c <TXEditCommand::SaveUndoContainer(unsigned char)+0x6c>
        232e3c:	e1a02005 	mov	r2, r5
        232e40:	e1a0100d 	mov	r1, sp
        232e44:	e1a00004 	mov	r0, r4
        232e48:	e5943000 	ldr	r3, [r4]
        232e4c:	e1a0e00f 	mov	lr, pc
        232e50:	e283f02c 	add	pc, r3, #44	; 0x2c
        232e54:	e5840054 	str	r0, [r4, #84]	; fField84
        232e58:	e5c47058 	strb	r7, [r4, #88]	; fField88
        232e5c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        232e60:	e2846028 	add	r6, r4, #40	; 0x28
        232e64:	e3300003 	teq	r0, #3	; 0x3
        232e68:	01a0000d 	moveq	r0, sp
        232e6c:	08b01008 	ldmeqia	r0!, {r3, ip}
        232e70:	08a61008 	stmeqia	r6!, {r3, ip}
        232e74:	08901008 	ldmeqia	r0, {r3, ip}
        232e78:	08861008 	stmeqia	r6, {r3, ip}
        232e7c:	0a000012 	beq	232ecc <TXEditCommand::SaveUndoContainer(unsigned char)+0xdc>
        232e80:	e24dd010 	sub	sp, sp, #16	; 0x10
        232e84:	e3a03000 	mov	r3, #0	; 0x0
        232e88:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        232e8c:	e92d0008 	stmdb	sp!, {r3}
        232e90:	e1a02001 	mov	r2, r1
        232e94:	e28d0004 	add	r0, sp, #4	; 0x4
        232e98:	eb000467 	bl	23403c <TXOffsetRange::__ct(long, long, unsigned char, unsigned char)>
        232e9c:	e28dd004 	add	sp, sp, #4	; 0x4
        232ea0:	e1a0100d 	mov	r1, sp
        232ea4:	e1a00004 	mov	r0, r4
        232ea8:	e3a02004 	mov	r2, #4	; 0x4
        232eac:	e5943000 	ldr	r3, [r4]
        232eb0:	e1a0e00f 	mov	lr, pc
        232eb4:	e283f02c 	add	pc, r3, #44	; 0x2c
        232eb8:	e5840060 	str	r0, [r4, #96]	; fField96
        232ebc:	e1a0000d 	mov	r0, sp
        232ec0:	e890500c 	ldmia	r0, {r2, r3, ip, lr}
        232ec4:	e886500c 	stmia	r6, {r2, r3, ip, lr}
        232ec8:	e28dd010 	add	sp, sp, #16	; 0x10
        232ecc:	e3350007 	teq	r5, #7	; 0x7
        232ed0:	0a000005 	beq	232eec <TXEditCommand::SaveUndoContainer(unsigned char)+0xfc>
        232ed4:	e5940054 	ldr	r0, [r4, #84]	; fField84
        232ed8:	e3300000 	teq	r0, #0	; 0x0
        232edc:	159d0008 	ldrne	r0, [sp, #8]	; fField8
        232ee0:	159d1000 	ldrne	r1, [sp]
        232ee4:	11300001 	teqne	r0, r1
        232ee8:	05c4700c 	streqb	r7, [r4, #12]	; fField12
        232eec:	e5d40058 	ldrb	r0, [r4, #88]	; fField88
        232ef0:	e3300000 	teq	r0, #0	; 0x0
        232ef4:	05b40054 	ldreq	r0, [r4, #84]!	; fField84
        232ef8:	03300000 	teqeq	r0, #0	; 0x0
        232efc:	13a00000 	movne	r0, #0	; 0x0
        232f00:	03a000e9 	moveq	r0, #233	; 0xe9
        232f04:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        232f08:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXEditCommand::SaveRedoContainer(void)
 * Address: 00232f0c
 */
TXEditCommand::SaveRedoContainer(void) {
    /*
        232f0c:	e1a0c00d 	mov	ip, sp
        232f10:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        232f14:	e24cb004 	sub	fp, ip, #4	; 0x4
        232f18:	e1a04000 	mov	r4, r0
        232f1c:	e24dd010 	sub	sp, sp, #16	; 0x10
        232f20:	e2802048 	add	r2, r0, #72	; 0x48
        232f24:	e1a05002 	mov	r5, r2
        232f28:	e2801018 	add	r1, r0, #24	; 0x18
        232f2c:	e1a0000d 	mov	r0, sp
        232f30:	eb000430 	bl	233ff8 <TXOffsetRange::__ct(TXOffset const &, TXOffset const &)>
        232f34:	e5d42050 	ldrb	r2, [r4, #80]	; fField80
        232f38:	e1a0100d 	mov	r1, sp
        232f3c:	e1a00004 	mov	r0, r4
        232f40:	e5943000 	ldr	r3, [r4]
        232f44:	e1a0e00f 	mov	lr, pc
        232f48:	e283f02c 	add	pc, r3, #44	; 0x2c
        232f4c:	e584005c 	str	r0, [r4, #92]	; fField92
        232f50:	e24dd010 	sub	sp, sp, #16	; 0x10
        232f54:	e3a03000 	mov	r3, #0	; 0x0
        232f58:	e92d0008 	stmdb	sp!, {r3}
        232f5c:	e5951000 	ldr	r1, [r5]
        232f60:	e1a02001 	mov	r2, r1
        232f64:	e28d0004 	add	r0, sp, #4	; 0x4
        232f68:	eb000433 	bl	23403c <TXOffsetRange::__ct(long, long, unsigned char, unsigned char)>
        232f6c:	e28dd004 	add	sp, sp, #4	; 0x4
        232f70:	e1a0100d 	mov	r1, sp
        232f74:	e1a00004 	mov	r0, r4
        232f78:	e3a02004 	mov	r2, #4	; 0x4
        232f7c:	e5943000 	ldr	r3, [r4]
        232f80:	e1a0e00f 	mov	lr, pc
        232f84:	e283f02c 	add	pc, r3, #44	; 0x2c
        232f88:	e5840064 	str	r0, [r4, #100]	; fField100
        232f8c:	e2840038 	add	r0, r4, #56	; 0x38
        232f90:	e1a0100d 	mov	r1, sp
        232f94:	e891500c 	ldmia	r1, {r2, r3, ip, lr}
        232f98:	e880500c 	stmia	r0, {r2, r3, ip, lr}
        232f9c:	e5b4005c 	ldr	r0, [r4, #92]!	; fField92
        232fa0:	e3300000 	teq	r0, #0	; 0x0
        232fa4:	03a000e9 	moveq	r0, #233	; 0xe9
        232fa8:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        232fac:	13a00000 	movne	r0, #0	; 0x0
        232fb0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXEditCommand::DoMainAction(void)
 * Address: 00232fb4
 */
TXEditCommand::DoMainAction(void) {
    /*
        232fb4:	e1a0c00d 	mov	ip, sp
        232fb8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        232fbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        232fc0:	e3a02000 	mov	r2, #0	; 0x0
        232fc4:	e5903008 	ldr	r3, [r0, #8]	; fField8
        232fc8:	e2801018 	add	r1, r0, #24	; 0x18
        232fcc:	e3330002 	teq	r3, #2	; 0x2
        232fd0:	1a000004 	bne	232fe8 <TXEditCommand::DoMainAction(void)+0x34>
        232fd4:	e2803010 	add	r3, r0, #16	; 0x10
        232fd8:	e893000c 	ldmia	r3, {r2, r3}
        232fdc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        232fe0:	eb65b403 	bl	1b9fff4 <Textension::$UpdateRangeRuns(TXOffsetRange const &, TXAttrValues const *, long)>
        232fe4:	ea000005 	b	233000 <TXEditCommand::DoMainAction(void)+0x4c>
        232fe8:	e3330003 	teq	r3, #3	; 0x3
        232fec:	1a000004 	bne	233004 <TXEditCommand::DoMainAction(void)+0x50>
        232ff0:	e2803010 	add	r3, r0, #16	; 0x10
        232ff4:	e893000c 	ldmia	r3, {r2, r3}
        232ff8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        232ffc:	eb65b3fe 	bl	1b9fffc <Textension::$UpdateRangeRulers(TXOffsetRange const &, TXAttrValues const *, long)>
        233000:	e1a02000 	mov	r2, r0
        233004:	e1a00002 	mov	r0, r2
        233008:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXEditCommand::DoIt(int *)
 * Address: 0023300c
 */
TXEditCommand::DoIt(int *) {
    /*
        23300c:	e1a0c00d 	mov	ip, sp
        233010:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        233014:	e24cb004 	sub	fp, ip, #4	; 0x4
        233018:	e1a04000 	mov	r4, r0
        23301c:	e1a05001 	mov	r5, r1
        233020:	e5901000 	ldr	r1, [r0]
        233024:	e1a0e00f 	mov	lr, pc
        233028:	e281f010 	add	pc, r1, #16	; 0x10
        23302c:	e1a07000 	mov	r7, r0
        233030:	e5d40050 	ldrb	r0, [r4, #80]	; fField80
        233034:	e3100001 	tst	r0, #1	; 0x1
        233038:	e2846048 	add	r6, r4, #72	; 0x48
        23303c:	0a000009 	beq	233068 <TXEditCommand::DoIt(int *)+0x5c>
        233040:	e24dd010 	sub	sp, sp, #16	; 0x10
        233044:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        233048:	e5900014 	ldr	r0, [r0, #20]
        23304c:	e1a0100d 	mov	r1, sp
        233050:	eb657609 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        233054:	e28d0008 	add	r0, sp, #8	; 0x8
        233058:	e8905000 	ldmia	r0, {ip, lr}
        23305c:	e8865000 	stmia	r6, {ip, lr}
        233060:	e28dd010 	add	sp, sp, #16	; 0x10
        233064:	ea000002 	b	233074 <TXEditCommand::DoIt(int *)+0x68>
        233068:	e2840020 	add	r0, r4, #32	; 0x20
        23306c:	e8901008 	ldmia	r0, {r3, ip}
        233070:	e8861008 	stmia	r6, {r3, ip}
        233074:	e59f000c 	ldr	r0, [pc, #c]	; 233088 <TXEditCommand::DoIt(int *)+0x7c>
        233078:	e5900000 	ldr	r0, [r0]
        23307c:	e5850000 	str	r0, [r5]
        233080:	e1a00007 	mov	r0, r7
        233084:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        233088:	0c104d90 	ldceq	13, cr4, [r0], -#576
    */
}

/**
 * Symbol: TXEditCommand::UndoHilite(unsigned char)
 * Address: 0023308c
 */
TXEditCommand::UndoHilite(unsigned char) {
    /*
        23308c:	e20120ff 	and	r2, r1, #255	; 0xff
        233090:	e590c004 	ldr	ip, [r0, #4]	; fField4
        233094:	e2801018 	add	r1, r0, #24	; 0x18
        233098:	e1a0000c 	mov	r0, ip
        23309c:	e3a03001 	mov	r3, #1	; 0x1
        2330a0:	e59cc000 	ldr	ip, [ip]
        2330a4:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TXEditCommand::RedoHilite(unsigned char)
 * Address: 002330a8
 */
TXEditCommand::RedoHilite(unsigned char) {
    /*
        2330a8:	e1a0c00d 	mov	ip, sp
        2330ac:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2330b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2330b4:	e20120ff 	and	r2, r1, #255	; 0xff
        2330b8:	e24dd010 	sub	sp, sp, #16	; 0x10
        2330bc:	e5901018 	ldr	r1, [r0, #24]	; fField24
        2330c0:	e58d1000 	str	r1, [sp]
        2330c4:	e3a01000 	mov	r1, #0	; 0x0
        2330c8:	e5cd1004 	strb	r1, [sp, #4]	; fField4
        2330cc:	e28de008 	add	lr, sp, #8	; 0x8
        2330d0:	e2801048 	add	r1, r0, #72	; 0x48
        2330d4:	e8911008 	ldmia	r1, {r3, ip}
        2330d8:	e88e1008 	stmia	lr, {r3, ip}
        2330dc:	e1a0100d 	mov	r1, sp
        2330e0:	e5b0c004 	ldr	ip, [r0, #4]!	; fField4
        2330e4:	e1a0000c 	mov	r0, ip
        2330e8:	e3a03001 	mov	r3, #1	; 0x1
        2330ec:	e59cc000 	ldr	ip, [ip]
        2330f0:	e1a0e00f 	mov	lr, pc
        2330f4:	e28cf008 	add	pc, ip, #8	; 0x8
        2330f8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXEditCommand::UndoIt(int *)
 * Address: 002330fc
 */
TXEditCommand::UndoIt(int *) {
    /*
        2330fc:	e1a0c00d 	mov	ip, sp
        233100:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        233104:	e24cb004 	sub	fp, ip, #4	; 0x4
        233108:	e1a04000 	mov	r4, r0
        23310c:	e1a05001 	mov	r5, r1
        233110:	e5d00058 	ldrb	r0, [r0, #88]	; fField88
        233114:	e3300000 	teq	r0, #0	; 0x0
        233118:	05940054 	ldreq	r0, [r4, #84]	; fField84
        23311c:	03300000 	teqeq	r0, #0	; 0x0
        233120:	03a00000 	moveq	r0, #0	; 0x0
        233124:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        233128:	e594005c 	ldr	r0, [r4, #92]	; fField92
        23312c:	e3300000 	teq	r0, #0	; 0x0
        233130:	1a000007 	bne	233154 <TXEditCommand::UndoIt(int *)+0x58>
        233134:	e5940008 	ldr	r0, [r4, #8]	; fField8
        233138:	e3300001 	teq	r0, #1	; 0x1
        23313c:	13300005 	teqne	r0, #5	; 0x5
        233140:	1a000003 	bne	233154 <TXEditCommand::UndoIt(int *)+0x58>
        233144:	e1a00004 	mov	r0, r4
        233148:	e5941000 	ldr	r1, [r4]
        23314c:	e1a0e00f 	mov	lr, pc
        233150:	e281f020 	add	pc, r1, #32	; 0x20
        233154:	e5940004 	ldr	r0, [r4, #4]	; fField4
        233158:	e5b09014 	ldr	r9, [r0, #20]!
        23315c:	e5d98019 	ldrb	r8, [r9, #25]
        233160:	e1a00009 	mov	r0, r9
        233164:	e3a01000 	mov	r1, #0	; 0x0
        233168:	e5992000 	ldr	r2, [r9]
        23316c:	e1a0e00f 	mov	lr, pc
        233170:	e282f004 	add	pc, r2, #4	; 0x4
        233174:	e2840028 	add	r0, r4, #40	; 0x28
        233178:	e930500c 	ldmdb	r0!, {r2, r3, ip, lr}
        23317c:	e92d500c 	stmdb	sp!, {r2, r3, ip, lr}
        233180:	e5940008 	ldr	r0, [r4, #8]	; fField8
        233184:	e2846028 	add	r6, r4, #40	; 0x28
        233188:	e3300003 	teq	r0, #3	; 0x3
        23318c:	1a000002 	bne	23319c <TXEditCommand::UndoIt(int *)+0xa0>
        233190:	e5967000 	ldr	r7, [r6]
        233194:	e596a008 	ldr	sl, [r6, #8]	; fField8
        233198:	ea000001 	b	2331a4 <TXEditCommand::UndoIt(int *)+0xa8>
        23319c:	e59d7000 	ldr	r7, [sp]
        2331a0:	e594a048 	ldr	sl, [r4, #72]	; fField72
        2331a4:	e5940054 	ldr	r0, [r4, #84]	; fField84
        2331a8:	e3300000 	teq	r0, #0	; 0x0
        2331ac:	0a000013 	beq	233200 <TXEditCommand::UndoIt(int *)+0x104>
        2331b0:	e3a01000 	mov	r1, #0	; 0x0
        2331b4:	e5902000 	ldr	r2, [r0]
        2331b8:	e1a0e00f 	mov	lr, pc
        2331bc:	e282f008 	add	pc, r2, #8	; 0x8
        2331c0:	e24dd060 	sub	sp, sp, #96	; 0x60
        2331c4:	e28d0024 	add	r0, sp, #36	; 0x24
        2331c8:	e5941054 	ldr	r1, [r4, #84]	; fField84
        2331cc:	eb655ce2 	bl	1b8a55c <TXLocalContainer::$__ct(TXStream *)>
        2331d0:	e28d1024 	add	r1, sp, #36	; 0x24
        2331d4:	e1a0000d 	mov	r0, sp
        2331d8:	e3a02007 	mov	r2, #7	; 0x7
        2331dc:	eb65b389 	bl	1ba0008 <TXReplaceParams::$__ct(TXContainer *, unsigned char)>
        2331e0:	e1a0300d 	mov	r3, sp
        2331e4:	e1a0200a 	mov	r2, sl
        2331e8:	e1a01007 	mov	r1, r7
        2331ec:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2331f0:	eb65b375 	bl	1b9ffcc <Textension::$ReplaceRange(long, long, TXReplaceParams *)>
        2331f4:	e1a07000 	mov	r7, r0
        2331f8:	e28dd060 	add	sp, sp, #96	; 0x60
        2331fc:	ea000009 	b	233228 <TXEditCommand::UndoIt(int *)+0x12c>
        233200:	e24dd024 	sub	sp, sp, #36	; 0x24
        233204:	e1a0000d 	mov	r0, sp
        233208:	eb65b37c 	bl	1ba0000 <TXReplaceParams::$__ct(void)>
        23320c:	e1a0300d 	mov	r3, sp
        233210:	e1a0200a 	mov	r2, sl
        233214:	e1a01007 	mov	r1, r7
        233218:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23321c:	eb65b36a 	bl	1b9ffcc <Textension::$ReplaceRange(long, long, TXReplaceParams *)>
        233220:	e1a07000 	mov	r7, r0
        233224:	e28dd024 	add	sp, sp, #36	; 0x24
        233228:	e3370000 	teq	r7, #0	; 0x0
        23322c:	1a000015 	bne	233288 <TXEditCommand::UndoIt(int *)+0x18c>
        233230:	e5940060 	ldr	r0, [r4, #96]	; fField96
        233234:	e3300000 	teq	r0, #0	; 0x0
        233238:	0a000014 	beq	233290 <TXEditCommand::UndoIt(int *)+0x194>
        23323c:	e3a01000 	mov	r1, #0	; 0x0
        233240:	e5902000 	ldr	r2, [r0]
        233244:	e1a0e00f 	mov	lr, pc
        233248:	e282f008 	add	pc, r2, #8	; 0x8
        23324c:	e24dd060 	sub	sp, sp, #96	; 0x60
        233250:	e28d0024 	add	r0, sp, #36	; 0x24
        233254:	e5941060 	ldr	r1, [r4, #96]	; fField96
        233258:	eb655cbf 	bl	1b8a55c <TXLocalContainer::$__ct(TXStream *)>
        23325c:	e28d1024 	add	r1, sp, #36	; 0x24
        233260:	e1a0000d 	mov	r0, sp
        233264:	e3a02007 	mov	r2, #7	; 0x7
        233268:	eb65b366 	bl	1ba0008 <TXReplaceParams::$__ct(TXContainer *, unsigned char)>
        23326c:	e4961008 	ldr	r1, [r6], #8	; fField8
        233270:	e5962000 	ldr	r2, [r6]
        233274:	e1a0300d 	mov	r3, sp
        233278:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23327c:	eb65b352 	bl	1b9ffcc <Textension::$ReplaceRange(long, long, TXReplaceParams *)>
        233280:	e1a07000 	mov	r7, r0
        233284:	e28dd060 	add	sp, sp, #96	; 0x60
        233288:	e3370000 	teq	r7, #0	; 0x0
        23328c:	1a000006 	bne	2332ac <TXEditCommand::UndoIt(int *)+0x1b0>
        233290:	e1a00004 	mov	r0, r4
        233294:	e3a01000 	mov	r1, #0	; 0x0
        233298:	e5942000 	ldr	r2, [r4]
        23329c:	e1a0e00f 	mov	lr, pc
        2332a0:	e282f01c 	add	pc, r2, #28	; 0x1c
        2332a4:	e3380002 	teq	r8, #2	; 0x2
        2332a8:	13a08001 	movne	r8, #1	; 0x1
        2332ac:	e1a01008 	mov	r1, r8
        2332b0:	e1a00009 	mov	r0, r9
        2332b4:	e5992000 	ldr	r2, [r9]
        2332b8:	e1a0e00f 	mov	lr, pc
        2332bc:	e282f004 	add	pc, r2, #4	; 0x4
        2332c0:	e59f000c 	ldr	r0, [pc, #c]	; 2332d4 <TXEditCommand::UndoIt(int *)+0x1d8>
        2332c4:	e5900000 	ldr	r0, [r0]
        2332c8:	e5850000 	str	r0, [r5]
        2332cc:	e1a00007 	mov	r0, r7
        2332d0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2332d4:	0c104d90 	ldceq	13, cr4, [r0], -#576
    */
}

/**
 * Symbol: TXEditCommand::RedoIt(int *)
 * Address: 002332d8
 */
TXEditCommand::RedoIt(int *) {
    /*
        2332d8:	e1a0c00d 	mov	ip, sp
        2332dc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2332e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2332e4:	e1a04000 	mov	r4, r0
        2332e8:	e1a05001 	mov	r5, r1
        2332ec:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2332f0:	e5b08014 	ldr	r8, [r0, #20]!
        2332f4:	e5d87019 	ldrb	r7, [r8, #25]
        2332f8:	e1a00008 	mov	r0, r8
        2332fc:	e3a01000 	mov	r1, #0	; 0x0
        233300:	e5982000 	ldr	r2, [r8]
        233304:	e1a0e00f 	mov	lr, pc
        233308:	e282f004 	add	pc, r2, #4	; 0x4
        23330c:	e2841028 	add	r1, r4, #40	; 0x28
        233310:	e931500c 	ldmdb	r1!, {r2, r3, ip, lr}
        233314:	e92d500c 	stmdb	sp!, {r2, r3, ip, lr}
        233318:	e5940008 	ldr	r0, [r4, #8]	; fField8
        23331c:	e3300001 	teq	r0, #1	; 0x1
        233320:	13300005 	teqne	r0, #5	; 0x5
        233324:	1a000030 	bne	2333ec <TXEditCommand::RedoIt(int *)+0x114>
        233328:	e594005c 	ldr	r0, [r4, #92]	; fField92
        23332c:	e3300000 	teq	r0, #0	; 0x0
        233330:	03a060e9 	moveq	r6, #233	; 0xe9
        233334:	02466b0a 	subeq	r6, r6, #10240	; 0x2800
        233338:	0a000042 	beq	233448 <TXEditCommand::RedoIt(int *)+0x170>
        23333c:	e3a01000 	mov	r1, #0	; 0x0
        233340:	e5902000 	ldr	r2, [r0]
        233344:	e1a0e00f 	mov	lr, pc
        233348:	e282f008 	add	pc, r2, #8	; 0x8
        23334c:	e24dd060 	sub	sp, sp, #96	; 0x60
        233350:	e28d0024 	add	r0, sp, #36	; 0x24
        233354:	e594105c 	ldr	r1, [r4, #92]	; fField92
        233358:	eb655c7f 	bl	1b8a55c <TXLocalContainer::$__ct(TXStream *)>
        23335c:	e28d1024 	add	r1, sp, #36	; 0x24
        233360:	e1a0000d 	mov	r0, sp
        233364:	e3a02007 	mov	r2, #7	; 0x7
        233368:	eb65b326 	bl	1ba0008 <TXReplaceParams::$__ct(TXContainer *, unsigned char)>
        23336c:	e59d1060 	ldr	r1, [sp, #96]	; fField96
        233370:	e59d2068 	ldr	r2, [sp, #104]
        233374:	e1a0300d 	mov	r3, sp
        233378:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23337c:	eb65b312 	bl	1b9ffcc <Textension::$ReplaceRange(long, long, TXReplaceParams *)>
        233380:	e1b06000 	movs	r6, r0
        233384:	1a000016 	bne	2333e4 <TXEditCommand::RedoIt(int *)+0x10c>
        233388:	e5940064 	ldr	r0, [r4, #100]	; fField100
        23338c:	e3300000 	teq	r0, #0	; 0x0
        233390:	0a000013 	beq	2333e4 <TXEditCommand::RedoIt(int *)+0x10c>
        233394:	e3a01000 	mov	r1, #0	; 0x0
        233398:	e5902000 	ldr	r2, [r0]
        23339c:	e1a0e00f 	mov	lr, pc
        2333a0:	e282f008 	add	pc, r2, #8	; 0x8
        2333a4:	e24dd060 	sub	sp, sp, #96	; 0x60
        2333a8:	e28d0024 	add	r0, sp, #36	; 0x24
        2333ac:	e5941064 	ldr	r1, [r4, #100]	; fField100
        2333b0:	eb655c69 	bl	1b8a55c <TXLocalContainer::$__ct(TXStream *)>
        2333b4:	e28d1024 	add	r1, sp, #36	; 0x24
        2333b8:	e1a0000d 	mov	r0, sp
        2333bc:	e3a02007 	mov	r2, #7	; 0x7
        2333c0:	eb65b310 	bl	1ba0008 <TXReplaceParams::$__ct(TXContainer *, unsigned char)>
        2333c4:	e2840038 	add	r0, r4, #56	; 0x38
        2333c8:	e4901008 	ldr	r1, [r0], #8	; fField8
        2333cc:	e5902000 	ldr	r2, [r0]
        2333d0:	e1a0300d 	mov	r3, sp
        2333d4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2333d8:	eb65b2fb 	bl	1b9ffcc <Textension::$ReplaceRange(long, long, TXReplaceParams *)>
        2333dc:	e1a06000 	mov	r6, r0
        2333e0:	e28dd060 	add	sp, sp, #96	; 0x60
        2333e4:	e28dd060 	add	sp, sp, #96	; 0x60
        2333e8:	ea00000d 	b	233424 <TXEditCommand::RedoIt(int *)+0x14c>
        2333ec:	e1a0100d 	mov	r1, sp
        2333f0:	e594c004 	ldr	ip, [r4, #4]	; fField4
        2333f4:	e1a0000c 	mov	r0, ip
        2333f8:	e3a03001 	mov	r3, #1	; 0x1
        2333fc:	e3a02000 	mov	r2, #0	; 0x0
        233400:	e59cc000 	ldr	ip, [ip]
        233404:	e1a0e00f 	mov	lr, pc
        233408:	e28cf008 	add	pc, ip, #8	; 0x8
        23340c:	e1a01005 	mov	r1, r5
        233410:	e1a00004 	mov	r0, r4
        233414:	e5942000 	ldr	r2, [r4]
        233418:	e1a0e00f 	mov	lr, pc
        23341c:	e282f004 	add	pc, r2, #4	; 0x4
        233420:	e1a06000 	mov	r6, r0
        233424:	e3360000 	teq	r6, #0	; 0x0
        233428:	1a000006 	bne	233448 <TXEditCommand::RedoIt(int *)+0x170>
        23342c:	e1a00004 	mov	r0, r4
        233430:	e3a01000 	mov	r1, #0	; 0x0
        233434:	e5942000 	ldr	r2, [r4]
        233438:	e1a0e00f 	mov	lr, pc
        23343c:	e282f024 	add	pc, r2, #36	; 0x24
        233440:	e3370002 	teq	r7, #2	; 0x2
        233444:	13a07001 	movne	r7, #1	; 0x1
        233448:	e1a01007 	mov	r1, r7
        23344c:	e1a00008 	mov	r0, r8
        233450:	e5982000 	ldr	r2, [r8]
        233454:	e1a0e00f 	mov	lr, pc
        233458:	e282f004 	add	pc, r2, #4	; 0x4
        23345c:	e59f000c 	ldr	r0, [pc, #c]	; 233470 <TXEditCommand::RedoIt(int *)+0x198>
        233460:	e5900000 	ldr	r0, [r0]
        233464:	e5850000 	str	r0, [r5]
        233468:	e1a00006 	mov	r0, r6
        23346c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        233470:	0c104d90 	ldceq	13, cr4, [r0], -#576
    */
}

/**
 * Symbol: TXEditCommand::__ct(void)
 * Address: 00233c44
 */
TXEditCommand::TXEditCommand(void) {
    /*
        233c44:	e1a0c00d 	mov	ip, sp
        233c48:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        233c4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        233c50:	e1b04000 	movs	r4, r0
        233c54:	1a000003 	bne	233c68 <TXEditCommand::__ct(void)+0x24>
        233c58:	e3a00068 	mov	r0, #104	; 0x68
        233c5c:	eb666ab5 	bl	1bce738 <$__nw(unsigned int)>
        233c60:	e1b04000 	movs	r4, r0
        233c64:	0a000009 	beq	233c90 <TXEditCommand::__ct(void)+0x4c>
        233c68:	e1a00004 	mov	r0, r4
        233c6c:	eb6551e8 	bl	1b88414 <TXCommand::$__ct(void)>
        233c70:	e59f0020 	ldr	r0, [pc, #20]	; 233c98 <TXEditCommand::__ct(void)+0x54>
        233c74:	e5840000 	str	r0, [r4]
        233c78:	e3a00000 	mov	r0, #0	; 0x0
        233c7c:	e5840054 	str	r0, [r4, #84]	; fField84
        233c80:	e584005c 	str	r0, [r4, #92]	; fField92
        233c84:	e5840060 	str	r0, [r4, #96]	; fField96
        233c88:	e5840064 	str	r0, [r4, #100]	; fField100
        233c8c:	e5840010 	str	r0, [r4, #16]	; fField16
        233c90:	e1a00004 	mov	r0, r4
        233c94:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        233c98:	0001d1d0 	ldreqd	sp, [r1], -r0
    */
}

/**
 * Symbol: TXEditCommand::ITXEditCommand(Textension *, int, unsigned char *)
 * Address: 00233c9c
 */
TXEditCommand::ITXEditCommand(Textension *, int, unsigned char *) {
    /*
        233c9c:	e1a0c00d 	mov	ip, sp
        233ca0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        233ca4:	e24cb004 	sub	fp, ip, #4	; 0x4
        233ca8:	e1a04000 	mov	r4, r0
        233cac:	e1a05002 	mov	r5, r2
        233cb0:	e1a06003 	mov	r6, r3
        233cb4:	eb6551d8 	bl	1b8841c <TXCommand::$ITXCommand(Textension *, int)>
        233cb8:	e3a08000 	mov	r8, #0	; 0x0
        233cbc:	e5c68000 	strb	r8, [r6]
        233cc0:	e3a07000 	mov	r7, #0	; 0x0
        233cc4:	e3350003 	teq	r5, #3	; 0x3
        233cc8:	13350002 	teqne	r5, #2	; 0x2
        233ccc:	0a000003 	beq	233ce0 <TXEditCommand::ITXEditCommand(Textension *, int, unsigned char *)+0x44>
        233cd0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        233cd4:	e2841018 	add	r1, r4, #24	; 0x18
        233cd8:	e5900014 	ldr	r0, [r0, #20]
        233cdc:	eb6572e6 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        233ce0:	e2841050 	add	r1, r4, #80	; 0x50
        233ce4:	e1a00004 	mov	r0, r4
        233ce8:	e5942000 	ldr	r2, [r4]
        233cec:	e1a0e00f 	mov	lr, pc
        233cf0:	e282f014 	add	pc, r2, #20	; 0x14
        233cf4:	e5d41050 	ldrb	r1, [r4, #80]	; fField80
        233cf8:	e3310000 	teq	r1, #0	; 0x0
        233cfc:	0a000010 	beq	233d44 <TXEditCommand::ITXEditCommand(Textension *, int, unsigned char *)+0xa8>
        233d00:	e1a00004 	mov	r0, r4
        233d04:	e5942000 	ldr	r2, [r4]
        233d08:	e1a0e00f 	mov	lr, pc
        233d0c:	e282f018 	add	pc, r2, #24	; 0x18
        233d10:	e1b07000 	movs	r7, r0
        233d14:	0a00000a 	beq	233d44 <TXEditCommand::ITXEditCommand(Textension *, int, unsigned char *)+0xa8>
        233d18:	e287cc27 	add	ip, r7, #9984	; 0x2700
        233d1c:	e37c0017 	cmn	ip, #23	; 0x17
        233d20:	1a000004 	bne	233d38 <TXEditCommand::ITXEditCommand(Textension *, int, unsigned char *)+0x9c>
        233d24:	e3a00001 	mov	r0, #1	; 0x1
        233d28:	e5c60000 	strb	r0, [r6]
        233d2c:	e5c4800c 	strb	r8, [r4, #12]	; fField12
        233d30:	e3a07000 	mov	r7, #0	; 0x0
        233d34:	ea000002 	b	233d44 <TXEditCommand::ITXEditCommand(Textension *, int, unsigned char *)+0xa8>
        233d38:	e3370000 	teq	r7, #0	; 0x0
        233d3c:	13a00004 	movne	r0, #4	; 0x4
        233d40:	15c4000d 	strneb	r0, [r4, #13]	; fField13
        233d44:	e1a00007 	mov	r0, r7
        233d48:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXEditCommand::ITXEditCommand(Textension *, int, TXAttrValues *, long, TXOffsetRange const &, unsigned char *)
 * Address: 00233d4c
 */
TXEditCommand::ITXEditCommand(Textension *, int, TXAttrValues *, long, TXOffsetRange const &, unsigned char *) {
    /*
        233d4c:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        233d50:	e59d4014 	ldr	r4, [sp, #20]
        233d54:	e59d5010 	ldr	r5, [sp, #16]	; fField16
        233d58:	e59dc00c 	ldr	ip, [sp, #12]	; fField12
        233d5c:	e2800010 	add	r0, r0, #16	; 0x10
        233d60:	e8801008 	stmia	r0, {r3, ip}
        233d64:	e2400010 	sub	r0, r0, #16	; 0x10
        233d68:	e280e018 	add	lr, r0, #24	; 0x18
        233d6c:	e8b51008 	ldmia	r5!, {r3, ip}
        233d70:	e8ae1008 	stmia	lr!, {r3, ip}
        233d74:	e8951008 	ldmia	r5, {r3, ip}
        233d78:	e88e1008 	stmia	lr, {r3, ip}
        233d7c:	e1a03004 	mov	r3, r4
        233d80:	e8bd4030 	ldmia	sp!, {r4, r5, lr}
        233d84:	ea6551a7 	b	1b88428 <TXEditCommand::$ITXEditCommand(Textension *, int, unsigned char *)>
    */
}

/**
 * Symbol: TXEditCommand::FreeContainerStream(TXStream *)
 * Address: 00233d88
 */
TXEditCommand::FreeContainerStream(TXStream *) {
    /*
        233d88:	e3310000 	teq	r1, #0	; 0x0
        233d8c:	01a0f00e 	moveq	pc, lr
        233d90:	e1a0c00d 	mov	ip, sp
        233d94:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        233d98:	e24cb004 	sub	fp, ip, #4	; 0x4
        233d9c:	e1a04001 	mov	r4, r1
        233da0:	e1a00001 	mov	r0, r1
        233da4:	e1a02001 	mov	r2, r1
        233da8:	e3a01000 	mov	r1, #0	; 0x0
        233dac:	e5922000 	ldr	r2, [r2]
        233db0:	e1a0e00f 	mov	lr, pc
        233db4:	e282f008 	add	pc, r2, #8	; 0x8
        233db8:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        233dbc:	e1a01004 	mov	r1, r4
        233dc0:	e1a0000d 	mov	r0, sp
        233dc4:	eb6559e4 	bl	1b8a55c <TXLocalContainer::$__ct(TXStream *)>
        233dc8:	e1a0000d 	mov	r0, sp
        233dcc:	e59d1000 	ldr	r1, [sp]
        233dd0:	e1a0e00f 	mov	lr, pc
        233dd4:	e281f03c 	add	pc, r1, #60	; 0x3c
        233dd8:	e1a00004 	mov	r0, r4
        233ddc:	e3a01001 	mov	r1, #1	; 0x1
        233de0:	e1a0e00f 	mov	lr, pc
        233de4:	e594f000 	ldr	pc, [r4]
        233de8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXEditCommand::__dt(void)
 * Address: 00233dec
 */
TXEditCommand::~TXEditCommand(void) {
    /*
        233dec:	e1a0c00d 	mov	ip, sp
        233df0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        233df4:	e24cb004 	sub	fp, ip, #4	; 0x4
        233df8:	e1a04000 	mov	r4, r0
        233dfc:	e1a05001 	mov	r5, r1
        233e00:	e59f2090 	ldr	r2, [pc, #90]	; 233e98 <TXEditCommand::__dt(void)+0xac>
        233e04:	e5802000 	str	r2, [r0]
        233e08:	e5901054 	ldr	r1, [r0, #84]	; fField84
        233e0c:	e1a0e00f 	mov	lr, pc
        233e10:	e282f030 	add	pc, r2, #48	; 0x30
        233e14:	e594105c 	ldr	r1, [r4, #92]	; fField92
        233e18:	e1a00004 	mov	r0, r4
        233e1c:	e5942000 	ldr	r2, [r4]
        233e20:	e1a0e00f 	mov	lr, pc
        233e24:	e282f030 	add	pc, r2, #48	; 0x30
        233e28:	e5941060 	ldr	r1, [r4, #96]	; fField96
        233e2c:	e3310000 	teq	r1, #0	; 0x0
        233e30:	0a000003 	beq	233e44 <TXEditCommand::__dt(void)+0x58>
        233e34:	e1a00004 	mov	r0, r4
        233e38:	e5942000 	ldr	r2, [r4]
        233e3c:	e1a0e00f 	mov	lr, pc
        233e40:	e282f030 	add	pc, r2, #48	; 0x30
        233e44:	e5941064 	ldr	r1, [r4, #100]	; fField100
        233e48:	e3310000 	teq	r1, #0	; 0x0
        233e4c:	0a000003 	beq	233e60 <TXEditCommand::__dt(void)+0x74>
        233e50:	e1a00004 	mov	r0, r4
        233e54:	e5942000 	ldr	r2, [r4]
        233e58:	e1a0e00f 	mov	lr, pc
        233e5c:	e282f030 	add	pc, r2, #48	; 0x30
        233e60:	e5940010 	ldr	r0, [r4, #16]	; fField16
        233e64:	e3300000 	teq	r0, #0	; 0x0
        233e68:	0a000002 	beq	233e78 <TXEditCommand::__dt(void)+0x8c>
        233e6c:	e3a01001 	mov	r1, #1	; 0x1
        233e70:	e1a0e00f 	mov	lr, pc
        233e74:	e590f000 	ldr	pc, [r0]
        233e78:	e1a00004 	mov	r0, r4
        233e7c:	e3a01000 	mov	r1, #0	; 0x0
        233e80:	eb655164 	bl	1b88418 <TXCommand::$__dt(void)>
        233e84:	e3150001 	tst	r5, #1	; 0x1
        233e88:	11a00004 	movne	r0, r4
        233e8c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        233e90:	1a666612 	bne	1bcd6e0 <$__dl(void *)>
        233e94:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        233e98:	0001d1d0 	ldreqd	sp, [r1], -r0
    */
}

/**
 * Symbol: TXEditCommand::CreateUndoRedoStream(TXOffsetRange const &, unsigned char)
 * Address: 00233e9c
 */
TXEditCommand::CreateUndoRedoStream(TXOffsetRange const &, unsigned char) {
    /*
        233e9c:	e1a0c00d 	mov	ip, sp
        233ea0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        233ea4:	e24cb004 	sub	fp, ip, #4	; 0x4
        233ea8:	e1a04001 	mov	r4, r1
        233eac:	e20250ff 	and	r5, r2, #255	; 0xff
        233eb0:	e24dd004 	sub	sp, sp, #4	; 0x4
        233eb4:	eb659b94 	bl	1b9ad0c <$TXGetTempStreamFactory(void)>
        233eb8:	e3300000 	teq	r0, #0	; 0x0
        233ebc:	12051001 	andne	r1, r5, #1	; 0x1
        233ec0:	13310000 	teqne	r1, #0	; 0x0
        233ec4:	0a000009 	beq	233ef0 <TXEditCommand::CreateUndoRedoStream(TXOffsetRange const &, unsigned char)+0x54>
        233ec8:	e1a03000 	mov	r3, r0
        233ecc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        233ed0:	e5941000 	ldr	r1, [r4]
        233ed4:	e0400001 	sub	r0, r0, r1
        233ed8:	e1a02080 	mov	r2, r0, lsl #1
        233edc:	e1a0100d 	mov	r1, sp
        233ee0:	e1a00003 	mov	r0, r3
        233ee4:	e1a0e00f 	mov	lr, pc
        233ee8:	e593f000 	ldr	pc, [r3]
        233eec:	ea000002 	b	233efc <TXEditCommand::CreateUndoRedoStream(TXOffsetRange const &, unsigned char)+0x60>
        233ef0:	e3a00000 	mov	r0, #0	; 0x0
        233ef4:	eb65977d 	bl	1b99cf0 <TXHandleStream::$__ct(void)>
        233ef8:	e58d0000 	str	r0, [sp]
        233efc:	e49d0004 	ldr	r0, [sp], #4	; fField4
        233f00:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

