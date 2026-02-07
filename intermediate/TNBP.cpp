#include "include/TNBP.h"

/**
 * Symbol: TNBP::Write(TAppleTalkMessage *)
 * Address: 00127f38
 */
TNBP::Write(TAppleTalkMessage *) {
    /*
        127f38:	e1a0c00d 	mov	ip, sp
        127f3c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        127f40:	e24cb004 	sub	fp, ip, #4	; 0x4
        127f44:	e1a04001 	mov	r4, r1
        127f48:	e59f0044 	ldr	r0, [pc, #44]	; 127f94 <TNBP::Write(TAppleTalkMessage *)+0x5c>
        127f4c:	e5810000 	str	r0, [r1]
        127f50:	e59f0040 	ldr	r0, [pc, #40]	; 127f98 <TNBP::Write(TAppleTalkMessage *)+0x60>
        127f54:	e5810004 	str	r0, [r1, #4]
        127f58:	e3a0000a 	mov	r0, #10	; 0xa
        127f5c:	e5810010 	str	r0, [r1, #16]
        127f60:	e3a00030 	mov	r0, #48	; 0x30
        127f64:	e52d0004 	str	r0, [sp, -#4]!
        127f68:	eb6aae99 	bl	1bd39d4 <$GetGlobals>
        127f6c:	e1a03004 	mov	r3, r4
        127f70:	e92d0008 	stmdb	sp!, {r3}
        127f74:	e28d3004 	add	r3, sp, #4	; 0x4
        127f78:	e3a02000 	mov	r2, #0	; 0x0
        127f7c:	e3a01000 	mov	r1, #0	; 0x0
        127f80:	e590c000 	ldr	ip, [r0]
        127f84:	e1a0e00f 	mov	lr, pc
        127f88:	e28cf050 	add	pc, ip, #80	; 0x50
        127f8c:	e3a00000 	mov	r0, #0	; 0x0
        127f90:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        127f94:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        127f98:	64647020 	strvsbt	r7, [r4], -#32
    */
}

/**
 * Symbol: TNBP::NBPRegister(TUMsgToken *, TAppleTalkMessage *)
 * Address: 00127f9c
 */
TNBP::NBPRegister(TUMsgToken *, TAppleTalkMessage *) {
    /*
        127f9c:	e280c024 	add	ip, r0, #36	; 0x24
        127fa0:	e1a03000 	mov	r3, r0
        127fa4:	e1a0000c 	mov	r0, ip
        127fa8:	ea6574c4 	b	1a852c0 <TNBPNameTable::$RegisterName(TUMsgToken *, TRegisterNameMessage *, TNBP *)>
    */
}

/**
 * Symbol: TNBP::NBPUnRegister(TAppleTalkMessage *)
 * Address: 00127fac
 */
TNBP::NBPUnRegister(TAppleTalkMessage *) {
    /*
        127fac:	e1a0c00d 	mov	ip, sp
        127fb0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        127fb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        127fb8:	e1a04000 	mov	r4, r0
        127fbc:	e1a05001 	mov	r5, r1
        127fc0:	e24dd0e4 	sub	sp, sp, #228	; 0xe4
        127fc4:	e28d006c 	add	r0, sp, #108	; 0x6c
        127fc8:	eb6578de 	bl	1a86348 <TNBPNameEntry::$__ct(void)>
        127fcc:	e1a0000d 	mov	r0, sp
        127fd0:	eb652645 	bl	1a718ec <TNBPEntityName::$__ct(void)>
        127fd4:	e1a0000d 	mov	r0, sp
        127fd8:	e5b51014 	ldr	r1, [r5, #20]!	; fField20
        127fdc:	eb656c67 	bl	1a83180 <TNBPEntityName::$FormFromEntityName(unsigned long)>
        127fe0:	e3300000 	teq	r0, #0	; 0x0
        127fe4:	1a00000c 	bne	12801c <TNBP::NBPUnRegister(TAppleTalkMessage *)+0x70>
        127fe8:	e28d5074 	add	r5, sp, #116	; 0x74
        127fec:	e1a0100d 	mov	r1, sp
        127ff0:	e1a00005 	mov	r0, r5
        127ff4:	eb652623 	bl	1a71888 <TString32::$__as(TString32 const &)>
        127ff8:	e2850024 	add	r0, r5, #36	; 0x24
        127ffc:	e28d1024 	add	r1, sp, #36	; 0x24
        128000:	eb652620 	bl	1a71888 <TString32::$__as(TString32 const &)>
        128004:	e2850048 	add	r0, r5, #72	; 0x48
        128008:	e28d1048 	add	r1, sp, #72	; 0x48
        12800c:	eb65261d 	bl	1a71888 <TString32::$__as(TString32 const &)>
        128010:	e2840024 	add	r0, r4, #36	; 0x24
        128014:	e28d106c 	add	r1, sp, #108	; 0x6c
        128018:	eb6578bf 	bl	1a8631c <TNBPNameTable::$UnRegisterName(TNBPNameEntry &)>
        12801c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNBP::Lookup(TUMsgToken *, TAppleTalkMessage *)
 * Address: 00128020
 */
TNBP::Lookup(TUMsgToken *, TAppleTalkMessage *) {
    /*
        128020:	e280c018 	add	ip, r0, #24	; 0x18
        128024:	e1a03000 	mov	r3, r0
        128028:	e1a0000c 	mov	r0, ip
        12802c:	ea65537b 	b	1a7ce20 <TNBPLookupManager::$Lookup(TUMsgToken *, TLookupNamesMessage *, TNBP *)>
    */
}

/**
 * Symbol: TNBP::LookupAgain(TAppleTalkMessage *)
 * Address: 00128030
 */
TNBP::LookupAgain(TAppleTalkMessage *) {
    /*
        128030:	e2803018 	add	r3, r0, #24	; 0x18
        128034:	e1a02000 	mov	r2, r0
        128038:	e1a00003 	mov	r0, r3
        12803c:	ea655379 	b	1a7ce28 <TNBPLookupManager::$LookupAgain(TLookupNamesAgainMessage *, TNBP *)>
    */
}

/**
 * Symbol: TNBP::Cancel(TAppleTalkMessage *)
 * Address: 00128040
 */
TNBP::Cancel(TAppleTalkMessage *) {
    /*
        128040:	e1a0c00d 	mov	ip, sp
        128044:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        128048:	e24cb004 	sub	fp, ip, #4	; 0x4
        12804c:	e1a04001 	mov	r4, r1
        128050:	e5911014 	ldr	r1, [r1, #20]	; fField20
        128054:	e3310b01 	teq	r1, #1024	; 0x400
        128058:	0a000006 	beq	128078 <TNBP::Cancel(TAppleTalkMessage *)+0x38>
        12805c:	e241cb01 	sub	ip, r1, #1024	; 0x400
        128060:	e33c0002 	teq	ip, #2	; 0x2
        128064:	1a000007 	bne	128088 <TNBP::Cancel(TAppleTalkMessage *)+0x48>
        128068:	e2800018 	add	r0, r0, #24	; 0x18
        12806c:	e5941018 	ldr	r1, [r4, #24]
        128070:	eb653ac0 	bl	1a76b78 <TNBPLookupManager::$Cancel(unsigned long)>
        128074:	ea000004 	b	12808c <TNBP::Cancel(TAppleTalkMessage *)+0x4c>
        128078:	e2800024 	add	r0, r0, #36	; 0x24
        12807c:	e5941018 	ldr	r1, [r4, #24]
        128080:	eb65681e 	bl	1a82100 <TNBPNameTable::$Cancel(unsigned long)>
        128084:	ea000000 	b	12808c <TNBP::Cancel(TAppleTalkMessage *)+0x4c>
        128088:	e59f0004 	ldr	r0, [pc, #4]	; 128094 <TNBP::Cancel(TAppleTalkMessage *)+0x54>
        12808c:	e5a40008 	str	r0, [r4, #8]!
        128090:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        128094:	ffffd11b 	swinv	0x00ffd11b
    */
}

/**
 * Symbol: TNBP::ATLKAttachLink(TAppleTalkMessage *)
 * Address: 00128098
 */
TNBP::ATLKAttachLink(TAppleTalkMessage *) {
    /*
        128098:	e3a00000 	mov	r0, #0	; 0x0
        12809c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBP::ATLKDetachLink(TAppleTalkMessage *)
 * Address: 001280a0
 */
TNBP::ATLKDetachLink(TAppleTalkMessage *) {
    /*
        1280a0:	e3a00000 	mov	r0, #0	; 0x0
        1280a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBP::ATLKOpen(TAppleTalkMessage *)
 * Address: 001280a8
 */
TNBP::ATLKOpen(TAppleTalkMessage *) {
    /*
        1280a8:	e1a0c00d 	mov	ip, sp
        1280ac:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1280b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1280b4:	e1a04000 	mov	r4, r0
        1280b8:	e1a05001 	mov	r5, r1
        1280bc:	e3a07000 	mov	r7, #0	; 0x0
        1280c0:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1280c4:	e3300000 	teq	r0, #0	; 0x0
        1280c8:	1a00001e 	bne	128148 <TNBP::ATLKOpen(TAppleTalkMessage *)+0xa0>
        1280cc:	e3a00002 	mov	r0, #2	; 0x2
        1280d0:	e56d0004 	strb	r0, [sp, -#4]!
        1280d4:	e1a0000d 	mov	r0, sp
        1280d8:	e59f607c 	ldr	r6, [pc, #7c]	; 12815c <TNBP::ATLKOpen(TAppleTalkMessage *)+0xb4>
        1280dc:	e1a01006 	mov	r1, r6
        1280e0:	eb655770 	bl	1a7dea8 <$OpenSocket(unsigned char &, unsigned long)>
        1280e4:	e1b07000 	movs	r7, r0
        1280e8:	1a000013 	bne	12813c <TNBP::ATLKOpen(TAppleTalkMessage *)+0x94>
        1280ec:	e2840021 	add	r0, r4, #33	; 0x21
        1280f0:	e1a01006 	mov	r1, r6
        1280f4:	eb65576b 	bl	1a7dea8 <$OpenSocket(unsigned char &, unsigned long)>
        1280f8:	e1b07000 	movs	r7, r0
        1280fc:	1a00000e 	bne	12813c <TNBP::ATLKOpen(TAppleTalkMessage *)+0x94>
        128100:	e5950018 	ldr	r0, [r5, #24]
        128104:	e1b00820 	movs	r0, r0, lsr #16
        128108:	0a000019 	beq	128174 <TNBP::ATLKOpen(TAppleTalkMessage *)+0xcc>
        12810c:	e3a00000 	mov	r0, #0	; 0x0
        128110:	eb65788c 	bl	1a86348 <TNBPNameEntry::$__ct(void)>
        128114:	e1b06000 	movs	r6, r0
        128118:	03a070a8 	moveq	r7, #168	; 0xa8
        12811c:	02477b07 	subeq	r7, r7, #7168	; 0x1c00
        128120:	028dd004 	addeq	sp, sp, #4	; 0x4
        128124:	0a00000a 	beq	128154 <TNBP::ATLKOpen(TAppleTalkMessage *)+0xac>
        128128:	e2851018 	add	r1, r5, #24	; 0x18
        12812c:	e2860008 	add	r0, r6, #8	; 0x8
        128130:	eb656811 	bl	1a8217c <TNBPEntityName::$FormFromEntityName(unsigned short *)>
        128134:	e1b07000 	movs	r7, r0
        128138:	0a000008 	beq	128160 <TNBP::ATLKOpen(TAppleTalkMessage *)+0xb8>
        12813c:	e28dd004 	add	sp, sp, #4	; 0x4
        128140:	e3370000 	teq	r7, #0	; 0x0
        128144:	1a000002 	bne	128154 <TNBP::ATLKOpen(TAppleTalkMessage *)+0xac>
        128148:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12814c:	e2800001 	add	r0, r0, #1	; 0x1
        128150:	e5a40014 	str	r0, [r4, #20]!	; fField20
        128154:	e1a00007 	mov	r0, r7
        128158:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        12815c:	6e627020 	cdpvs	0, 6, cr7, cr2, cr0, {1}
        128160:	e3a00004 	mov	r0, #4	; 0x4
        128164:	e5c60000 	strb	r0, [r6]
        128168:	e2840024 	add	r0, r4, #36	; 0x24
        12816c:	e1a01006 	mov	r1, r6
        128170:	eb6563db 	bl	1a810e4 <TNBPNameTable::$Add(TNBPNameEntry *)>
        128174:	e28dd004 	add	sp, sp, #4	; 0x4
        128178:	eafffff2 	b	128148 <TNBP::ATLKOpen(TAppleTalkMessage *)+0xa0>
    */
}

/**
 * Symbol: TNBP::ATLKClose(TAppleTalkMessage *)
 * Address: 0012817c
 */
TNBP::ATLKClose(TAppleTalkMessage *) {
    /*
        12817c:	e3a01000 	mov	r1, #0	; 0x0
        128180:	e5902014 	ldr	r2, [r0, #20]	; fField20
        128184:	e2422001 	sub	r2, r2, #1	; 0x1
        128188:	e5a02014 	str	r2, [r0, #20]!	; fField20
        12818c:	e1a00001 	mov	r0, r1
        128190:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBP::ATLKShutDown(TAppleTalkMessage *)
 * Address: 001281b4
 */
TNBP::ATLKShutDown(TAppleTalkMessage *) {
    /*
        1281b4:	e3a00000 	mov	r0, #0	; 0x0
        1281b8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBP::ATLKSocketClosed(TAppleTalkMessage *)
 * Address: 001281bc
 */
TNBP::ATLKSocketClosed(TAppleTalkMessage *) {
    /*
        1281bc:	e3a00000 	mov	r0, #0	; 0x0
        1281c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBP::__ct(void)
 * Address: 0012825c
 */
TNBP::TNBP(void) {
    /*
        12825c:	e1a0c00d 	mov	ip, sp
        128260:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        128264:	e24cb004 	sub	fp, ip, #4	; 0x4
        128268:	e1b04000 	movs	r4, r0
        12826c:	1a000003 	bne	128280 <TNBP::__ct(void)+0x24>
        128270:	e3a00f53 	mov	r0, #332	; 0x14c
        128274:	eb6a992f 	bl	1bce738 <$__nw(unsigned int)>
        128278:	e1b04000 	movs	r4, r0
        12827c:	0a000007 	beq	1282a0 <TNBP::__ct(void)+0x44>
        128280:	e1a00004 	mov	r0, r4
        128284:	eb652589 	bl	1a718b0 <TStackObject::$__ct(void)>
        128288:	e2840018 	add	r0, r4, #24	; 0x18
        12828c:	eb6529a5 	bl	1a72928 <TNBPLookupManager::$__ct(void)>
        128290:	e2840024 	add	r0, r4, #36	; 0x24
        128294:	eb65782c 	bl	1a8634c <TNBPNameTable::$__ct(void)>
        128298:	e59f0008 	ldr	r0, [pc, #8]	; 1282a8 <TNBP::__ct(void)+0x4c>
        12829c:	e5840000 	str	r0, [r4]
        1282a0:	e1a00004 	mov	r0, r4
        1282a4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1282a8:	0001f5d0 	ldreqd	pc, [r1], -r0
    */
}

/**
 * Symbol: TNBP::__dt(void)
 * Address: 001282ac
 */
TNBP::~TNBP(void) {
    /*
        1282ac:	e1a0c00d 	mov	ip, sp
        1282b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1282b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1282b8:	e1a04000 	mov	r4, r0
        1282bc:	e1a05001 	mov	r5, r1
        1282c0:	e59f0038 	ldr	r0, [pc, #38]	; 128300 <TNBP::__dt(void)+0x54>
        1282c4:	e5840000 	str	r0, [r4]
        1282c8:	e2840024 	add	r0, r4, #36	; 0x24
        1282cc:	e3a01000 	mov	r1, #0	; 0x0
        1282d0:	eb657c2a 	bl	1a87380 <TNBPNameTable::$__dt(void)>
        1282d4:	e2840018 	add	r0, r4, #24	; 0x18
        1282d8:	e3a01000 	mov	r1, #0	; 0x0
        1282dc:	eb652db8 	bl	1a739c4 <TNBPLookupManager::$__dt(void)>
        1282e0:	e1a00004 	mov	r0, r4
        1282e4:	e3a01000 	mov	r1, #0	; 0x0
        1282e8:	eb652da8 	bl	1a73990 <TStackObject::$__dt(void)>
        1282ec:	e3150001 	tst	r5, #1	; 0x1
        1282f0:	11a00004 	movne	r0, r4
        1282f4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1282f8:	1a6a94f8 	bne	1bcd6e0 <$__dl(void *)>
        1282fc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        128300:	0001f5d0 	ldreqd	pc, [r1], -r0
    */
}

/**
 * Symbol: TNBP::Init(void)
 * Address: 00128304
 */
TNBP::Init(void) {
    /*
        128304:	e1a0c00d 	mov	ip, sp
        128308:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        12830c:	e24cb004 	sub	fp, ip, #4	; 0x4
        128310:	e1a04000 	mov	r4, r0
        128314:	e59f2030 	ldr	r2, [pc, #30]	; 12834c <TNBP::Init(void)+0x48>
        128318:	e59f1030 	ldr	r1, [pc, #30]	; 128350 <TNBP::Init(void)+0x4c>
        12831c:	eb654ea1 	bl	1a7bda8 <TStackObject::$Init(unsigned long, unsigned long)>
        128320:	e1b05000 	movs	r5, r0
        128324:	1a000006 	bne	128344 <TNBP::Init(void)+0x40>
        128328:	e2840018 	add	r0, r4, #24	; 0x18
        12832c:	e1a06000 	mov	r6, r0
        128330:	eb654ea6 	bl	1a7bdd0 <TNBPLookupManager::$Init(void)>
        128334:	e1b05000 	movs	r5, r0
        128338:	01a01006 	moveq	r1, r6
        12833c:	02840024 	addeq	r0, r4, #36	; 0x24
        128340:	0b656b9e 	bleq	1a831c0 <TNBPNameTable::$Init(TNBPLookupManager *)>
        128344:	e1a00005 	mov	r0, r5
        128348:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        12834c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        128350:	6e627020 	cdpvs	0, 6, cr7, cr2, cr0, {1}
    */
}

/**
 * Symbol: TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)
 * Address: 00128354
 */
TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *) {
    /*
        128354:	e1a0c00d 	mov	ip, sp
        128358:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        12835c:	e24cb004 	sub	fp, ip, #4	; 0x4
        128360:	e1a05000 	mov	r5, r0
        128364:	e1a04003 	mov	r4, r3
        128368:	e5930010 	ldr	r0, [r3, #16]
        12836c:	e250cb01 	subs	ip, r0, #1024	; 0x400
        128370:	a35c0001 	cmpge	ip, #1	; 0x1
        128374:	0a000028 	beq	12841c <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xc8>
        128378:	e2856018 	add	r6, r5, #24	; 0x18
        12837c:	ca000012 	bgt	1283cc <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x78>
        128380:	e350000a 	cmp	r0, #10	; 0xa
        128384:	0a000020 	beq	12840c <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xb8>
        128388:	ca000007 	bgt	1283ac <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x58>
        12838c:	e3300002 	teq	r0, #2	; 0x2
        128390:	0a000036 	beq	128470 <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x11c>
        128394:	e3300006 	teq	r0, #6	; 0x6
        128398:	1a000039 	bne	128484 <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x130>
        12839c:	e1a02004 	mov	r2, r4
        1283a0:	e1a00005 	mov	r0, r5
        1283a4:	eb6556d1 	bl	1a7def0 <TNBP::$Read(TUMsgToken *, TAppleTalkMessage *)>
        1283a8:	ea000033 	b	12847c <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x128>
        1283ac:	e3300064 	teq	r0, #100	; 0x64
        1283b0:	0a000027 	beq	128454 <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x100>
        1283b4:	e3300b01 	teq	r0, #1024	; 0x400
        1283b8:	1a000031 	bne	128484 <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x130>
        1283bc:	e1a02004 	mov	r2, r4
        1283c0:	e1a00005 	mov	r0, r5
        1283c4:	eb656f9e 	bl	1a84244 <TNBP::$NBPRegister(TUMsgToken *, TAppleTalkMessage *)>
        1283c8:	ea00002b 	b	12847c <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x128>
        1283cc:	e240cb01 	sub	ip, r0, #1024	; 0x400
        1283d0:	e33c0002 	teq	ip, #2	; 0x2
        1283d4:	0a000014 	beq	12842c <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xd8>
        1283d8:	e240cb01 	sub	ip, r0, #1024	; 0x400
        1283dc:	e33c0004 	teq	ip, #4	; 0x4
        1283e0:	0a000015 	beq	12843c <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xe8>
        1283e4:	e240cb01 	sub	ip, r0, #1024	; 0x400
        1283e8:	e33c0005 	teq	ip, #5	; 0x5
        1283ec:	0a00000e 	beq	12842c <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xd8>
        1283f0:	e240cb01 	sub	ip, r0, #1024	; 0x400
        1283f4:	e33c0006 	teq	ip, #6	; 0x6
        1283f8:	1a000021 	bne	128484 <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x130>
        1283fc:	e1a00006 	mov	r0, r6
        128400:	e1a01004 	mov	r1, r4
        128404:	eb655f15 	bl	1a80060 <TNBPLookupManager::$UpdateBuffer(TNBPUpdateBuffer *)>
        128408:	ea00001b 	b	12847c <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x128>
        12840c:	e1a01004 	mov	r1, r4
        128410:	e1a00005 	mov	r0, r5
        128414:	eb65631b 	bl	1a81088 <TNBP::$Write(TAppleTalkMessage *)>
        128418:	ea000017 	b	12847c <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x128>
        12841c:	e1a01004 	mov	r1, r4
        128420:	e1a00005 	mov	r0, r5
        128424:	eb656f88 	bl	1a8424c <TNBP::$NBPUnRegister(TAppleTalkMessage *)>
        128428:	ea000013 	b	12847c <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x128>
        12842c:	e1a02004 	mov	r2, r4
        128430:	e1a00005 	mov	r0, r5
        128434:	eb65527a 	bl	1a7ce24 <TNBP::$Lookup(TUMsgToken *, TAppleTalkMessage *)>
        128438:	ea00000f 	b	12847c <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x128>
        12843c:	eb6aad64 	bl	1bd39d4 <$GetGlobals>
        128440:	eb6af3a6 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
        128444:	e1a01004 	mov	r1, r4
        128448:	e1a00005 	mov	r0, r5
        12844c:	eb655276 	bl	1a7ce2c <TNBP::$LookupAgain(TAppleTalkMessage *)>
        128450:	ea000009 	b	12847c <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x128>
        128454:	eb6aad5e 	bl	1bd39d4 <$GetGlobals>
        128458:	eb6af3a0 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
        12845c:	e3a05000 	mov	r5, #0	; 0x0
        128460:	e1a00006 	mov	r0, r6
        128464:	e1a01004 	mov	r1, r4
        128468:	eb654e49 	bl	1a7bd94 <TNBPLookupManager::$HandleTimer(TTimerMessage *)>
        12846c:	ea000006 	b	12848c <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x138>
        128470:	e1a01004 	mov	r1, r4
        128474:	e1a00005 	mov	r0, r5
        128478:	eb653dc0 	bl	1a77b80 <TNBP::$Cancel(TAppleTalkMessage *)>
        12847c:	e1a05000 	mov	r5, r0
        128480:	ea000001 	b	12848c <TNBP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x138>
        128484:	e3e05018 	mvn	r5, #24	; 0x18
        128488:	e2455a03 	sub	r5, r5, #12288	; 0x3000
        12848c:	e1a00005 	mov	r0, r5
        128490:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNBP::Read(TUMsgToken *, TAppleTalkMessage *)
 * Address: 00128494
 */
TNBP::Read(TUMsgToken *, TAppleTalkMessage *) {
    /*
        128494:	e1a0c00d 	mov	ip, sp
        128498:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        12849c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1284a0:	e1a04000 	mov	r4, r0
        1284a4:	e1a05002 	mov	r5, r2
        1284a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1284ac:	e1a06002 	mov	r6, r2
        1284b0:	e5927028 	ldr	r7, [r2, #40]
        1284b4:	e1a00007 	mov	r0, r7
        1284b8:	eb6b2d45 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        1284bc:	e5b71028 	ldr	r1, [r7, #40]!
        1284c0:	e0801001 	add	r1, r0, r1
        1284c4:	e1a0000d 	mov	r0, sp
        1284c8:	eb6545f9 	bl	1a79cb4 <TNBPHeader::$Fill(unsigned char *)>
        1284cc:	e1a01000 	mov	r1, r0
        1284d0:	e5960028 	ldr	r0, [r6, #40]
        1284d4:	e590202c 	ldr	r2, [r0, #44]
        1284d8:	e0422001 	sub	r2, r2, r1
        1284dc:	e580202c 	str	r2, [r0, #44]
        1284e0:	e5902028 	ldr	r2, [r0, #40]
        1284e4:	e0821001 	add	r1, r2, r1
        1284e8:	e5a01028 	str	r1, [r0, #40]!
        1284ec:	e5967028 	ldr	r7, [r6, #40]
        1284f0:	e1a00007 	mov	r0, r7
        1284f4:	eb6b2d36 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        1284f8:	e5b71028 	ldr	r1, [r7, #40]!
        1284fc:	e080c001 	add	ip, r0, r1
        128500:	e5960028 	ldr	r0, [r6, #40]
        128504:	e5b0202c 	ldr	r2, [r0, #44]!
        128508:	e5d60020 	ldrb	r0, [r6, #32]
        12850c:	e3300002 	teq	r0, #2	; 0x2
        128510:	13e00011 	mvnne	r0, #17	; 0x11
        128514:	12400a03 	subne	r0, r0, #12288	; 0x3000
        128518:	1a000023 	bne	1285ac <TNBP::Read(TUMsgToken *, TAppleTalkMessage *)+0x118>
        12851c:	e59d0000 	ldr	r0, [sp]
        128520:	e1a01e20 	mov	r1, r0, lsr #28
        128524:	e2850014 	add	r0, r5, #20	; 0x14
        128528:	e3310002 	teq	r1, #2	; 0x2
        12852c:	0a00000d 	beq	128568 <TNBP::Read(TUMsgToken *, TAppleTalkMessage *)+0xd4>
        128530:	e3310003 	teq	r1, #3	; 0x3
        128534:	1a00001a 	bne	1285a4 <TNBP::Read(TUMsgToken *, TAppleTalkMessage *)+0x110>
        128538:	e5b03004 	ldr	r3, [r0, #4]!
        12853c:	e92d000c 	stmdb	sp!, {r2, r3}
        128540:	e59d0008 	ldr	r0, [sp, #8]
        128544:	e1a00200 	mov	r0, r0, lsl #4
        128548:	e1a02e20 	mov	r2, r0, lsr #28
        12854c:	e59d0008 	ldr	r0, [sp, #8]
        128550:	e1a00400 	mov	r0, r0, lsl #8
        128554:	e1a01c20 	mov	r1, r0, lsr #24
        128558:	e2840018 	add	r0, r4, #24	; 0x18
        12855c:	e1a0300c 	mov	r3, ip
        128560:	eb654a03 	bl	1a7ad74 <TNBPLookupManager::$HandleLookupReply(unsigned char, unsigned char, unsigned char *, unsigned long, unsigned long)>
        128564:	ea00000c 	b	12859c <TNBP::Read(TUMsgToken *, TAppleTalkMessage *)+0x108>
        128568:	e1a03004 	mov	r3, r4
        12856c:	e92d0008 	stmdb	sp!, {r3}
        128570:	e5b03004 	ldr	r3, [r0, #4]!
        128574:	e92d0008 	stmdb	sp!, {r3}
        128578:	e59d0008 	ldr	r0, [sp, #8]
        12857c:	e1a00200 	mov	r0, r0, lsl #4
        128580:	e1a02e20 	mov	r2, r0, lsr #28
        128584:	e59d0008 	ldr	r0, [sp, #8]
        128588:	e1a00400 	mov	r0, r0, lsl #8
        12858c:	e1a01c20 	mov	r1, r0, lsr #24
        128590:	e2840024 	add	r0, r4, #36	; 0x24
        128594:	e1a0300c 	mov	r3, ip
        128598:	eb656b01 	bl	1a831a4 <TNBPNameTable::$HandleLookupRequest(unsigned char, unsigned char, unsigned char *, unsigned long, TNBP *)>
        12859c:	e28dd008 	add	sp, sp, #8	; 0x8
        1285a0:	ea000001 	b	1285ac <TNBP::Read(TUMsgToken *, TAppleTalkMessage *)+0x118>
        1285a4:	e3e00012 	mvn	r0, #18	; 0x12
        1285a8:	e2400a03 	sub	r0, r0, #12288	; 0x3000
        1285ac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

