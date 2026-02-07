#include "include/TNBPLookupManager.h"

/**
 * Symbol: TNBPLookupManager::__ct(void)
 * Address: 00115de4
 */
TNBPLookupManager::TNBPLookupManager(void) {
    /*
        115de4:	e1a0c00d 	mov	ip, sp
        115de8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        115dec:	e24cb004 	sub	fp, ip, #4	; 0x4
        115df0:	e1b04000 	movs	r4, r0
        115df4:	1a000003 	bne	115e08 <TNBPLookupManager::__ct(void)+0x24>
        115df8:	e3a0000c 	mov	r0, #12	; 0xc
        115dfc:	eb6ae24d 	bl	1bce738 <$__nw(unsigned int)>
        115e00:	e1b04000 	movs	r4, r0
        115e04:	0a000005 	beq	115e20 <TNBPLookupManager::__ct(void)+0x3c>
        115e08:	e1a00004 	mov	r0, r4
        115e0c:	eb6572d7 	bl	1a72970 <TIDServer::$__ct(void)>
        115e10:	e3a00000 	mov	r0, #0	; 0x0
        115e14:	e5c40008 	strb	r0, [r4, #8]	; fField8
        115e18:	e5840004 	str	r0, [r4, #4]	; fField4
        115e1c:	e5c40009 	strb	r0, [r4, #9]
        115e20:	e1a00004 	mov	r0, r4
        115e24:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPLookupManager::__dt(void)
 * Address: 00115e28
 */
TNBPLookupManager::~TNBPLookupManager(void) {
    /*
        115e28:	e1a0c00d 	mov	ip, sp
        115e2c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        115e30:	e24cb004 	sub	fp, ip, #4	; 0x4
        115e34:	e1a04000 	mov	r4, r0
        115e38:	e1a05001 	mov	r5, r1
        115e3c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        115e40:	e3300000 	teq	r0, #0	; 0x0
        115e44:	0a000005 	beq	115e60 <TNBPLookupManager::__dt(void)+0x38>
        115e48:	e5906150 	ldr	r6, [r0, #336]	; fField336
        115e4c:	e3300000 	teq	r0, #0	; 0x0
        115e50:	13a01001 	movne	r1, #1	; 0x1
        115e54:	1b6576c9 	blne	1a73980 <TNBPLookup::$__dt(void)>
        115e58:	e1b00006 	movs	r0, r6
        115e5c:	1afffff9 	bne	115e48 <TNBPLookupManager::__dt(void)+0x20>
        115e60:	e3150001 	tst	r5, #1	; 0x1
        115e64:	11a00004 	movne	r0, r4
        115e68:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        115e6c:	1a6ade1b 	bne	1bcd6e0 <$__dl(void *)>
        115e70:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPLookupManager::Init(void)
 * Address: 00115e74
 */
TNBPLookupManager::Init(void) {
    /*
        115e74:	ea659be2 	b	1a7ce04 <TIDServer::$Init(void)>
    */
}

/**
 * Symbol: TNBPLookupManager::HandleLookupReply(unsigned char, unsigned char, unsigned char *, unsigned long, unsigned long)
 * Address: 00115e78
 */
TNBPLookupManager::HandleLookupReply(unsigned char, unsigned char, unsigned char *, unsigned long, unsigned long) {
    /*
        115e78:	e1a0c00d 	mov	ip, sp
        115e7c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        115e80:	e24cb004 	sub	fp, ip, #4	; 0x4
        115e84:	e1a04000 	mov	r4, r0
        115e88:	e1a05003 	mov	r5, r3
        115e8c:	e20110ff 	and	r1, r1, #255	; 0xff
        115e90:	e20280ff 	and	r8, r2, #255	; 0xff
        115e94:	e3a06000 	mov	r6, #0	; 0x0
        115e98:	e59b9008 	ldr	r9, [fp, #8]	; fField8
        115e9c:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        115ea0:	eb659399 	bl	1a7ad0c <TNBPLookupManager::$GetLookup(unsigned char)>
        115ea4:	e1b07000 	movs	r7, r0
        115ea8:	0a000010 	beq	115ef0 <TNBPLookupManager::HandleLookupReply(unsigned char, unsigned char, unsigned char *, unsigned long, unsigned long)+0x78>
        115eac:	e1a03009 	mov	r3, r9
        115eb0:	e92d0008 	stmdb	sp!, {r3}
        115eb4:	e1a0300a 	mov	r3, sl
        115eb8:	e1a02005 	mov	r2, r5
        115ebc:	e1a01008 	mov	r1, r8
        115ec0:	e1a00007 	mov	r0, r7
        115ec4:	eb6593a8 	bl	1a7ad6c <TNBPLookup::$HandleLookupReply(unsigned char, unsigned char *, unsigned long, unsigned long)>
        115ec8:	e28dd004 	add	sp, sp, #4	; 0x4
        115ecc:	e1a06000 	mov	r6, r0
        115ed0:	e280ca03 	add	ip, r0, #12288	; 0x3000
        115ed4:	e37c0018 	cmn	ip, #24	; 0x18
        115ed8:	1a000004 	bne	115ef0 <TNBPLookupManager::HandleLookupReply(unsigned char, unsigned char, unsigned char *, unsigned long, unsigned long)+0x78>
        115edc:	e1a01007 	mov	r1, r7
        115ee0:	e1a00004 	mov	r0, r4
        115ee4:	e3a02000 	mov	r2, #0	; 0x0
        115ee8:	eb65873d 	bl	1a77be4 <TNBPLookupManager::$CompleteLookup(TNBPLookup *, long)>
        115eec:	e3a06000 	mov	r6, #0	; 0x0
        115ef0:	e1a00006 	mov	r0, r6
        115ef4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPLookupManager::HandleTimer(TTimerMessage *)
 * Address: 00115ef8
 */
TNBPLookupManager::HandleTimer(TTimerMessage *) {
    /*
        115ef8:	e1a0c00d 	mov	ip, sp
        115efc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        115f00:	e24cb004 	sub	fp, ip, #4	; 0x4
        115f04:	e1a04000 	mov	r4, r0
        115f08:	e5b1001c 	ldr	r0, [r1, #28]!
        115f0c:	e20010ff 	and	r1, r0, #255	; 0xff
        115f10:	e1a00004 	mov	r0, r4
        115f14:	eb65937c 	bl	1a7ad0c <TNBPLookupManager::$GetLookup(unsigned char)>
        115f18:	e1b05000 	movs	r5, r0
        115f1c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        115f20:	e5950010 	ldr	r0, [r5, #16]
        115f24:	e3300000 	teq	r0, #0	; 0x0
        115f28:	1a000004 	bne	115f40 <TNBPLookupManager::HandleTimer(TTimerMessage *)+0x48>
        115f2c:	e1a01005 	mov	r1, r5
        115f30:	e1a00004 	mov	r0, r4
        115f34:	e3a02000 	mov	r2, #0	; 0x0
        115f38:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        115f3c:	ea658728 	b	1a77be4 <TNBPLookupManager::$CompleteLookup(TNBPLookup *, long)>
        115f40:	e1a00005 	mov	r0, r5
        115f44:	eb658b33 	bl	1a78c18 <TNBPLookup::$DecrementRetries(void)>
        115f48:	e1a00005 	mov	r0, r5
        115f4c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        115f50:	ea657abd 	b	1a74a4c <TNBPLookup::$Again(void)>
    */
}

/**
 * Symbol: TNBPLookupManager::Lookup(TNBPLookup *, TNBP *, unsigned char)
 * Address: 00115f54
 */
TNBPLookupManager::Lookup(TNBPLookup *, TNBP *, unsigned char) {
    /*
        115f54:	e1a0c00d 	mov	ip, sp
        115f58:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        115f5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        115f60:	e1a04001 	mov	r4, r1
        115f64:	e1a05002 	mov	r5, r2
        115f68:	e20380ff 	and	r8, r3, #255	; 0xff
        115f6c:	e24dd084 	sub	sp, sp, #132	; 0x84
        115f70:	e28d0078 	add	r0, sp, #120	; 0x78
        115f74:	eb656e4c 	bl	1a718ac <TWriteChain::$__ct(void)>
        115f78:	e28d0070 	add	r0, sp, #112	; 0x70
        115f7c:	eb657260 	bl	1a72904 <TNBPTupleHeader::$__ct(void)>
        115f80:	e1a00004 	mov	r0, r4
        115f84:	eb65a3f4 	bl	1a7ef5c <TNBPLookup::$ResetLookupInfo(void)>
        115f88:	e1b06000 	movs	r6, r0
        115f8c:	e3a09000 	mov	r9, #0	; 0x0
        115f90:	1a00007e 	bne	116190 <TNBPLookupManager::Lookup(TNBPLookup *, TNBP *, unsigned char)+0x23c>
        115f94:	e24dd018 	sub	sp, sp, #24	; 0x18
        115f98:	e28400f0 	add	r0, r4, #240	; 0xf0
        115f9c:	e3a0c006 	mov	ip, #6	; 0x6
        115fa0:	e930400e 	ldmdb	r0!, {r1, r2, r3, lr}
        115fa4:	e92d400e 	stmdb	sp!, {r1, r2, r3, lr}
        115fa8:	e25cc001 	subs	ip, ip, #1	; 0x1
        115fac:	1afffffb 	bne	115fa0 <TNBPLookupManager::Lookup(TNBPLookup *, TNBP *, unsigned char)+0x4c>
        115fb0:	e930400c 	ldmdb	r0!, {r2, r3, lr}
        115fb4:	e92d400c 	stmdb	sp!, {r2, r3, lr}
        115fb8:	e1a0000d 	mov	r0, sp
        115fbc:	e28d1084 	add	r1, sp, #132	; 0x84
        115fc0:	eb65a816 	bl	1a80020 <TNBPEntityName::$StreamOut(unsigned char *)>
        115fc4:	e1a06000 	mov	r6, r0
        115fc8:	e28d006c 	add	r0, sp, #108	; 0x6c
        115fcc:	eb656e44 	bl	1a718e4 <TWriteElement::$__ct(void)>
        115fd0:	e1a02006 	mov	r2, r6
        115fd4:	e28d1084 	add	r1, sp, #132	; 0x84
        115fd8:	e28d006c 	add	r0, sp, #108	; 0x6c
        115fdc:	e3a03002 	mov	r3, #2	; 0x2
        115fe0:	eb659775 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
        115fe4:	e28d106c 	add	r1, sp, #108	; 0x6c
        115fe8:	e28d00fc 	add	r0, sp, #252	; 0xfc
        115fec:	eb657a8b 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
        115ff0:	e24dd018 	sub	sp, sp, #24	; 0x18
        115ff4:	e1a0000d 	mov	r0, sp
        115ff8:	eb656e39 	bl	1a718e4 <TWriteElement::$__ct(void)>
        115ffc:	e284002c 	add	r0, r4, #44	; 0x2c
        116000:	e1a07000 	mov	r7, r0
        116004:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        116008:	e28d0f43 	add	r0, sp, #268	; 0x10c
        11600c:	eb65a7e5 	bl	1a7ffa8 <TNBPTupleHeader::$SetNetworkInfo(unsigned long)>
        116010:	e1b06000 	movs	r6, r0
        116014:	0a000009 	beq	116040 <TNBPLookupManager::Lookup(TNBPLookup *, TNBP *, unsigned char)+0xec>
        116018:	e1a0000d 	mov	r0, sp
        11601c:	e3a01000 	mov	r1, #0	; 0x0
        116020:	e1a0e00f 	mov	lr, pc
        116024:	e59df000 	ldr	pc, [sp]
        116028:	e28d0084 	add	r0, sp, #132	; 0x84
        11602c:	e3a01000 	mov	r1, #0	; 0x0
        116030:	e1a0e00f 	mov	lr, pc
        116034:	e59df084 	ldr	pc, [sp, #132]
        116038:	e28dd09c 	add	sp, sp, #156	; 0x9c
        11603c:	ea000053 	b	116190 <TNBPLookupManager::Lookup(TNBPLookup *, TNBP *, unsigned char)+0x23c>
        116040:	e5d70001 	ldrb	r0, [r7, #1]
        116044:	e5cd010f 	strb	r0, [sp, #271]
        116048:	e28d1f43 	add	r1, sp, #268	; 0x10c
        11604c:	e1a0000d 	mov	r0, sp
        116050:	e3a03002 	mov	r3, #2	; 0x2
        116054:	e3a02005 	mov	r2, #5	; 0x5
        116058:	eb659757 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
        11605c:	e1a0100d 	mov	r1, sp
        116060:	e28d0f45 	add	r0, sp, #276	; 0x114
        116064:	eb657a6d 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
        116068:	e24dd018 	sub	sp, sp, #24	; 0x18
        11606c:	e1a0000d 	mov	r0, sp
        116070:	eb656e1b 	bl	1a718e4 <TWriteElement::$__ct(void)>
        116074:	e5d42038 	ldrb	r2, [r4, #56]
        116078:	e5d41018 	ldrb	r1, [r4, #24]	; fField24
        11607c:	e28d0e12 	add	r0, sp, #288	; 0x120
        116080:	eb65a7c5 	bl	1a7ff9c <TNBPHeader::$SetForLookup(unsigned char, unsigned char)>
        116084:	e28d1e12 	add	r1, sp, #288	; 0x120
        116088:	e1a0000d 	mov	r0, sp
        11608c:	e3a03002 	mov	r3, #2	; 0x2
        116090:	e3a02002 	mov	r2, #2	; 0x2
        116094:	eb659748 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
        116098:	e1a0100d 	mov	r1, sp
        11609c:	e28d0f4b 	add	r0, sp, #300	; 0x12c
        1160a0:	eb657a5e 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
        1160a4:	e24dd030 	sub	sp, sp, #48	; 0x30
        1160a8:	e1a0000d 	mov	r0, sp
        1160ac:	eb6b3861 	bl	1be4238 <TAEvent::$__ct(void)>
        1160b0:	e59f0094 	ldr	r0, [pc, #94]	; 11614c <TNBPLookupManager::Lookup(TNBPLookup *, TNBP *, unsigned char)+0x1f8>
        1160b4:	e58d0000 	str	r0, [sp]
        1160b8:	e58d900c 	str	r9, [sp, #12]
        1160bc:	e58d9008 	str	r9, [sp, #8]	; fField8
        1160c0:	e28d0014 	add	r0, sp, #20	; 0x14
        1160c4:	e1a06000 	mov	r6, r0
        1160c8:	e3a01001 	mov	r1, #1	; 0x1
        1160cc:	eb6b7636 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        1160d0:	e3a00002 	mov	r0, #2	; 0x2
        1160d4:	e5cd0020 	strb	r0, [sp, #32]
        1160d8:	e1a01007 	mov	r1, r7
        1160dc:	e1a00006 	mov	r0, r6
        1160e0:	eb6b7632 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        1160e4:	e28d0f57 	add	r0, sp, #348	; 0x15c
        1160e8:	e58d002c 	str	r0, [sp, #44]
        1160ec:	e1a0100d 	mov	r1, sp
        1160f0:	e1a00005 	mov	r0, r5
        1160f4:	eb65abe3 	bl	1a81088 <TNBP::$Write(TAppleTalkMessage *)>
        1160f8:	e1b06000 	movs	r6, r0
        1160fc:	1a000004 	bne	116114 <TNBPLookupManager::Lookup(TNBPLookup *, TNBP *, unsigned char)+0x1c0>
        116100:	e1a01008 	mov	r1, r8
        116104:	e1a00004 	mov	r0, r4
        116108:	eb65a7bd 	bl	1a80004 <TNBPLookup::$StartTimer(unsigned char)>
        11610c:	e1b06000 	movs	r6, r0
        116110:	0a00000e 	beq	116150 <TNBPLookupManager::Lookup(TNBPLookup *, TNBP *, unsigned char)+0x1fc>
        116114:	e28d0030 	add	r0, sp, #48	; 0x30
        116118:	e3a01000 	mov	r1, #0	; 0x0
        11611c:	e1a0e00f 	mov	lr, pc
        116120:	e59df030 	ldr	pc, [sp, #48]
        116124:	e28d0048 	add	r0, sp, #72	; 0x48
        116128:	e3a01000 	mov	r1, #0	; 0x0
        11612c:	e1a0e00f 	mov	lr, pc
        116130:	e59df048 	ldr	pc, [sp, #72]
        116134:	e28d00cc 	add	r0, sp, #204	; 0xcc
        116138:	e3a01000 	mov	r1, #0	; 0x0
        11613c:	e1a0e00f 	mov	lr, pc
        116140:	e59df0cc 	ldr	pc, [sp, #204]
        116144:	e28dd0e4 	add	sp, sp, #228	; 0xe4
        116148:	ea000010 	b	116190 <TNBPLookupManager::Lookup(TNBPLookup *, TNBP *, unsigned char)+0x23c>
        11614c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        116150:	e28dd030 	add	sp, sp, #48	; 0x30
        116154:	e1a0000d 	mov	r0, sp
        116158:	e3a01000 	mov	r1, #0	; 0x0
        11615c:	e1a0e00f 	mov	lr, pc
        116160:	e59df000 	ldr	pc, [sp]
        116164:	e28dd018 	add	sp, sp, #24	; 0x18
        116168:	e1a0000d 	mov	r0, sp
        11616c:	e3a01000 	mov	r1, #0	; 0x0
        116170:	e1a0e00f 	mov	lr, pc
        116174:	e59df000 	ldr	pc, [sp]
        116178:	e28dd018 	add	sp, sp, #24	; 0x18
        11617c:	e28d006c 	add	r0, sp, #108	; 0x6c
        116180:	e3a01000 	mov	r1, #0	; 0x0
        116184:	e1a0e00f 	mov	lr, pc
        116188:	e59df06c 	ldr	pc, [sp, #108]
        11618c:	e28dd084 	add	sp, sp, #132	; 0x84
        116190:	e28d0078 	add	r0, sp, #120	; 0x78
        116194:	eb658aa4 	bl	1a78c2c <TWriteChain::$Destroy(void)>
        116198:	e1a00006 	mov	r0, r6
        11619c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPLookupManager::LookupAgain(TLookupNamesAgainMessage *, TNBP *)
 * Address: 001161a0
 */
TNBPLookupManager::LookupAgain(TLookupNamesAgainMessage *, TNBP *) {
    /*
        1161a0:	e1a0c00d 	mov	ip, sp
        1161a4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1161a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1161ac:	e1a04000 	mov	r4, r0
        1161b0:	e1a05002 	mov	r5, r2
        1161b4:	e3a06000 	mov	r6, #0	; 0x0
        1161b8:	e5b10014 	ldr	r0, [r1, #20]!
        1161bc:	e20010ff 	and	r1, r0, #255	; 0xff
        1161c0:	e1a00004 	mov	r0, r4
        1161c4:	eb6592d0 	bl	1a7ad0c <TNBPLookupManager::$GetLookup(unsigned char)>
        1161c8:	e1b01000 	movs	r1, r0
        1161cc:	0a000004 	beq	1161e4 <TNBPLookupManager::LookupAgain(TLookupNamesAgainMessage *, TNBP *)+0x44>
        1161d0:	e1a02005 	mov	r2, r5
        1161d4:	e1a00004 	mov	r0, r4
        1161d8:	e3a03001 	mov	r3, #1	; 0x1
        1161dc:	eb659b0e 	bl	1a7ce1c <TNBPLookupManager::$Lookup(TNBPLookup *, TNBP *, unsigned char)>
        1161e0:	e1a06000 	mov	r6, r0
        1161e4:	e1a00006 	mov	r0, r6
        1161e8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPLookupManager::LookupForRegister(TLookupNamesRegisteringMessage *, TNBP *, unsigned char *)
 * Address: 001161ec
 */
TNBPLookupManager::LookupForRegister(TLookupNamesRegisteringMessage *, TNBP *, unsigned char *) {
    /*
        1161ec:	e1a0c00d 	mov	ip, sp
        1161f0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1161f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1161f8:	e1a04000 	mov	r4, r0
        1161fc:	e1a05001 	mov	r5, r1
        116200:	e1a07002 	mov	r7, r2
        116204:	e1a06003 	mov	r6, r3
        116208:	e5d00008 	ldrb	r0, [r0, #8]	; fField8
        11620c:	e33000ff 	teq	r0, #255	; 0xff
        116210:	03e08010 	mvneq	r8, #16	; 0x10
        116214:	02488a03 	subeq	r8, r8, #12288	; 0x3000
        116218:	0a000035 	beq	1162f4 <TNBPLookupManager::LookupForRegister(TLookupNamesRegisteringMessage *, TNBP *, unsigned char *)+0x108>
        11621c:	e24dd028 	sub	sp, sp, #40	; 0x28
        116220:	e28d000c 	add	r0, sp, #12	; 0xc
        116224:	e2852028 	add	r2, r5, #40	; 0x28
        116228:	e8920006 	ldmia	r2, {r1, r2}
        11622c:	eb65c044 	bl	1a86344 <TCompletion::$__ct(TCompletionClass *, unsigned long)>
        116230:	e1a0000d 	mov	r0, sp
        116234:	e3a01001 	mov	r1, #1	; 0x1
        116238:	eb6b75db 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        11623c:	e3a00002 	mov	r0, #2	; 0x2
        116240:	e5cd000b 	strb	r0, [sp, #11]
        116244:	e1a0000d 	mov	r0, sp
        116248:	eb65a75e 	bl	1a7ffc8 <TAddress::$SetToBroadcast(void)>
        11624c:	e59f00b8 	ldr	r0, [pc, #b8]	; 11630c <TNBPLookupManager::LookupForRegister(TLookupNamesRegisteringMessage *, TNBP *, unsigned char *)+0x120>
        116250:	e58d0004 	str	r0, [sp, #4]	; fField4
        116254:	e24dd06c 	sub	sp, sp, #108	; 0x6c
        116258:	e1a0000d 	mov	r0, sp
        11625c:	eb656da2 	bl	1a718ec <TNBPEntityName::$__ct(void)>
        116260:	e1a0000d 	mov	r0, sp
        116264:	e5951014 	ldr	r1, [r5, #20]
        116268:	eb65b3c4 	bl	1a83180 <TNBPEntityName::$FormFromEntityName(unsigned long)>
        11626c:	e1b08000 	movs	r8, r0
        116270:	1a00001c 	bne	1162e8 <TNBPLookupManager::LookupForRegister(TLookupNamesRegisteringMessage *, TNBP *, unsigned char *)+0xfc>
        116274:	e3a03000 	mov	r3, #0	; 0x0
        116278:	e1a0200d 	mov	r2, sp
        11627c:	e28d106c 	add	r1, sp, #108	; 0x6c
        116280:	e28d0078 	add	r0, sp, #120	; 0x78
        116284:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        116288:	e2853018 	add	r3, r5, #24	; 0x18
        11628c:	e1a00004 	mov	r0, r4
        116290:	e3a02000 	mov	r2, #0	; 0x0
        116294:	e3a01002 	mov	r1, #2	; 0x2
        116298:	eb658a5b 	bl	1a78c0c <TNBPLookupManager::$CreateNewLookup(LookupType, unsigned long, TNBPRetryInfo &, TCompletion const &, TAddress &, TNBPEntityName &, unsigned long)>
        11629c:	e28dd010 	add	sp, sp, #16	; 0x10
        1162a0:	e1b09000 	movs	r9, r0
        1162a4:	03a080a8 	moveq	r8, #168	; 0xa8
        1162a8:	02488b07 	subeq	r8, r8, #7168	; 0x1c00
        1162ac:	028dd094 	addeq	sp, sp, #148	; 0x94
        1162b0:	0a000013 	beq	116304 <TNBPLookupManager::LookupForRegister(TLookupNamesRegisteringMessage *, TNBP *, unsigned char *)+0x118>
        1162b4:	e5d90018 	ldrb	r0, [r9, #24]	; fField24
        1162b8:	e5c60000 	strb	r0, [r6]
        1162bc:	e5d40008 	ldrb	r0, [r4, #8]	; fField8
        1162c0:	e2800001 	add	r0, r0, #1	; 0x1
        1162c4:	e5c40008 	strb	r0, [r4, #8]	; fField8
        1162c8:	e1a02007 	mov	r2, r7
        1162cc:	e1a01009 	mov	r1, r9
        1162d0:	e1a00004 	mov	r0, r4
        1162d4:	e3a03000 	mov	r3, #0	; 0x0
        1162d8:	eb659acf 	bl	1a7ce1c <TNBPLookupManager::$Lookup(TNBPLookup *, TNBP *, unsigned char)>
        1162dc:	e1b08000 	movs	r8, r0
        1162e0:	028dd094 	addeq	sp, sp, #148	; 0x94
        1162e4:	0a000006 	beq	116304 <TNBPLookupManager::LookupForRegister(TLookupNamesRegisteringMessage *, TNBP *, unsigned char *)+0x118>
        1162e8:	e28dd094 	add	sp, sp, #148	; 0x94
        1162ec:	e3380000 	teq	r8, #0	; 0x0
        1162f0:	0a000003 	beq	116304 <TNBPLookupManager::LookupForRegister(TLookupNamesRegisteringMessage *, TNBP *, unsigned char *)+0x118>
        1162f4:	e3390000 	teq	r9, #0	; 0x0
        1162f8:	15d91018 	ldrneb	r1, [r9, #24]	; fField24
        1162fc:	11a00004 	movne	r0, r4
        116300:	1b65a308 	blne	1a7ef28 <TNBPLookupManager::$Remove(unsigned char)>
        116304:	e1a00008 	mov	r0, r8
        116308:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        11630c:	736c746b 	cmnvc	ip, #1795162112	; 0x6b000000
    */
}

/**
 * Symbol: TNBPLookupManager::Cancel(unsigned long)
 * Address: 00116310
 */
TNBPLookupManager::Cancel(unsigned long) {
    /*
        116310:	e1a0c00d 	mov	ip, sp
        116314:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        116318:	e24cb004 	sub	fp, ip, #4	; 0x4
        11631c:	e1a04000 	mov	r4, r0
        116320:	e3a05000 	mov	r5, #0	; 0x0
        116324:	eb659279 	bl	1a7ad10 <TNBPLookupManager::$GetLookupByCompletionId(unsigned long)>
        116328:	e3300000 	teq	r0, #0	; 0x0
        11632c:	03a05f47 	moveq	r5, #284	; 0x11c
        116330:	02455a03 	subeq	r5, r5, #12288	; 0x3000
        116334:	0a000004 	beq	11634c <TNBPLookupManager::Cancel(unsigned long)+0x3c>
        116338:	e1a01000 	mov	r1, r0
        11633c:	e1a00004 	mov	r0, r4
        116340:	e3a0201d 	mov	r2, #29	; 0x1d
        116344:	e2422c2f 	sub	r2, r2, #12032	; 0x2f00
        116348:	eb658625 	bl	1a77be4 <TNBPLookupManager::$CompleteLookup(TNBPLookup *, long)>
        11634c:	e1a00005 	mov	r0, r5
        116350:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPLookupManager::Lookup(TUMsgToken *, TLookupNamesMessage *, TNBP *)
 * Address: 00116454
 */
TNBPLookupManager::Lookup(TUMsgToken *, TLookupNamesMessage *, TNBP *) {
    /*
        116454:	e1a0c00d 	mov	ip, sp
        116458:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        11645c:	e24cb004 	sub	fp, ip, #4	; 0x4
        116460:	e1a05000 	mov	r5, r0
        116464:	e1a07001 	mov	r7, r1
        116468:	e1a04002 	mov	r4, r2
        11646c:	e1a06003 	mov	r6, r3
        116470:	e3a09000 	mov	r9, #0	; 0x0
        116474:	e5d00008 	ldrb	r0, [r0, #8]	; fField8
        116478:	e33000ff 	teq	r0, #255	; 0xff
        11647c:	03e08010 	mvneq	r8, #16	; 0x10
        116480:	02488a03 	subeq	r8, r8, #12288	; 0x3000
        116484:	0a000034 	beq	11655c <TNBPLookupManager::Lookup(TUMsgToken *, TLookupNamesMessage *, TNBP *)+0x108>
        116488:	e24dd06c 	sub	sp, sp, #108	; 0x6c
        11648c:	e1a0000d 	mov	r0, sp
        116490:	eb656d15 	bl	1a718ec <TNBPEntityName::$__ct(void)>
        116494:	e1a0000d 	mov	r0, sp
        116498:	e5941018 	ldr	r1, [r4, #24]	; fField24
        11649c:	eb65b337 	bl	1a83180 <TNBPEntityName::$FormFromEntityName(unsigned long)>
        1164a0:	e1b08000 	movs	r8, r0
        1164a4:	128dd06c 	addne	sp, sp, #108	; 0x6c
        1164a8:	1a000026 	bne	116548 <TNBPLookupManager::Lookup(TUMsgToken *, TLookupNamesMessage *, TNBP *)+0xf4>
        1164ac:	e5940010 	ldr	r0, [r4, #16]
        1164b0:	e240cb01 	sub	ip, r0, #1024	; 0x400
        1164b4:	e33c0005 	teq	ip, #5	; 0x5
        1164b8:	13a08000 	movne	r8, #0	; 0x0
        1164bc:	03a08001 	moveq	r8, #1	; 0x1
        1164c0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1164c4:	e1a01007 	mov	r1, r7
        1164c8:	e1a0000d 	mov	r0, sp
        1164cc:	eb656cf4 	bl	1a718a4 <TCompletion::$__ct(TUMsgToken *)>
        1164d0:	eb6af53f 	bl	1bd39d4 <$GetGlobals>
        1164d4:	eb6b3b81 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
        1164d8:	e28d201c 	add	r2, sp, #28	; 0x1c
        1164dc:	e594303c 	ldr	r3, [r4, #60]
        1164e0:	e284101c 	add	r1, r4, #28	; 0x1c
        1164e4:	e1a0000d 	mov	r0, sp
        1164e8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1164ec:	e2843028 	add	r3, r4, #40	; 0x28
        1164f0:	e1a01008 	mov	r1, r8
        1164f4:	e1a00005 	mov	r0, r5
        1164f8:	e5b42038 	ldr	r2, [r4, #56]!
        1164fc:	eb6589c2 	bl	1a78c0c <TNBPLookupManager::$CreateNewLookup(LookupType, unsigned long, TNBPRetryInfo &, TCompletion const &, TAddress &, TNBPEntityName &, unsigned long)>
        116500:	e28dd010 	add	sp, sp, #16	; 0x10
        116504:	e1b09000 	movs	r9, r0
        116508:	03a080a8 	moveq	r8, #168	; 0xa8
        11650c:	02488b07 	subeq	r8, r8, #7168	; 0x1c00
        116510:	028dd088 	addeq	sp, sp, #136	; 0x88
        116514:	0a000010 	beq	11655c <TNBPLookupManager::Lookup(TUMsgToken *, TLookupNamesMessage *, TNBP *)+0x108>
        116518:	e5d50008 	ldrb	r0, [r5, #8]	; fField8
        11651c:	e2800001 	add	r0, r0, #1	; 0x1
        116520:	e5c50008 	strb	r0, [r5, #8]	; fField8
        116524:	e1a02006 	mov	r2, r6
        116528:	e1a01009 	mov	r1, r9
        11652c:	e1a00005 	mov	r0, r5
        116530:	e3a03000 	mov	r3, #0	; 0x0
        116534:	eb659a38 	bl	1a7ce1c <TNBPLookupManager::$Lookup(TNBPLookup *, TNBP *, unsigned char)>
        116538:	e1b08000 	movs	r8, r0
        11653c:	028dd088 	addeq	sp, sp, #136	; 0x88
        116540:	0a000005 	beq	11655c <TNBPLookupManager::Lookup(TUMsgToken *, TLookupNamesMessage *, TNBP *)+0x108>
        116544:	e28dd088 	add	sp, sp, #136	; 0x88
        116548:	e3380000 	teq	r8, #0	; 0x0
        11654c:	13390000 	teqne	r9, #0	; 0x0
        116550:	15d91018 	ldrneb	r1, [r9, #24]	; fField24
        116554:	11a00005 	movne	r0, r5
        116558:	1b65a272 	blne	1a7ef28 <TNBPLookupManager::$Remove(unsigned char)>
        11655c:	e1a00008 	mov	r0, r8
        116560:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPLookupManager::CreateNewLookup(LookupType, unsigned long, TNBPRetryInfo &, TCompletion const &, TAddress &, TNBPEntityName &, unsigned long)
 * Address: 00116564
 */
TNBPLookupManager::CreateNewLookup(LookupType, unsigned long, TNBPRetryInfo &, TCompletion const &, TAddress &, TNBPEntityName &, unsigned long) {
    /*
        116564:	e1a0c00d 	mov	ip, sp
        116568:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        11656c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        116570:	e24cb014 	sub	fp, ip, #20	; 0x14
        116574:	e1a04000 	mov	r4, r0
        116578:	e1a05001 	mov	r5, r1
        11657c:	e28b9018 	add	r9, fp, #24	; 0x18
        116580:	e8990280 	ldmia	r9, {r7, r9}
        116584:	e59b8020 	ldr	r8, [fp, #32]
        116588:	e59ba014 	ldr	sl, [fp, #20]
        11658c:	e5d00009 	ldrb	r0, [r0, #9]
        116590:	e5c70001 	strb	r0, [r7, #1]
        116594:	e3a00000 	mov	r0, #0	; 0x0
        116598:	eb656cbc 	bl	1a71890 <TNBPLookup::$__ct(void)>
        11659c:	e1b06000 	movs	r6, r0
        1165a0:	03a00000 	moveq	r0, #0	; 0x0
        1165a4:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1165a8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1165ac:	e3300000 	teq	r0, #0	; 0x0
        1165b0:	15860150 	strne	r0, [r6, #336]	; fField336
        1165b4:	e1a03008 	mov	r3, r8
        1165b8:	e5846004 	str	r6, [r4, #4]	; fField4
        1165bc:	e1a01009 	mov	r1, r9
        1165c0:	e1a00007 	mov	r0, r7
        1165c4:	e59b2010 	ldr	r2, [fp, #16]
        1165c8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1165cc:	e1a0300a 	mov	r3, sl
        1165d0:	e92d0008 	stmdb	sp!, {r3}
        1165d4:	e1a00004 	mov	r0, r4
        1165d8:	eb659a24 	bl	1a7ce70 <TIDServer::$NewID(void)>
        1165dc:	e1a03000 	mov	r3, r0
        1165e0:	e1a01005 	mov	r1, r5
        1165e4:	e1a00006 	mov	r0, r6
        1165e8:	e59b200c 	ldr	r2, [fp, #12]
        1165ec:	eb6595ea 	bl	1a7bd9c <TNBPLookup::$Init(LookupType, unsigned long, unsigned char, TCompletion const &, TAddress &, TNBPEntityName &, TNBPRetryInfo &, unsigned long)>
        1165f0:	e1a00006 	mov	r0, r6
        1165f4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPLookupManager::CompleteLookup(TNBPLookup *, long)
 * Address: 001165f8
 */
TNBPLookupManager::CompleteLookup(TNBPLookup *, long) {
    /*
        1165f8:	e1a0c00d 	mov	ip, sp
        1165fc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        116600:	e24cb004 	sub	fp, ip, #4	; 0x4
        116604:	e1a05000 	mov	r5, r0
        116608:	e1a04001 	mov	r4, r1
        11660c:	e1a06002 	mov	r6, r2
        116610:	e1a00001 	mov	r0, r1
        116614:	eb65a67d 	bl	1a80010 <TNBPLookup::$StopTimer(void)>
        116618:	e28400f0 	add	r0, r4, #240	; 0xf0
        11661c:	e1a01006 	mov	r1, r6
        116620:	eb65856b 	bl	1a77bd4 <TCompletion::$Complete(long)>
        116624:	e1a06000 	mov	r6, r0
        116628:	e5d41018 	ldrb	r1, [r4, #24]	; fField24
        11662c:	e1a00005 	mov	r0, r5
        116630:	eb65a23c 	bl	1a7ef28 <TNBPLookupManager::$Remove(unsigned char)>
        116634:	e1a00006 	mov	r0, r6
        116638:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPLookupManager::GetLookup(unsigned char)
 * Address: 0011663c
 */
TNBPLookupManager::GetLookup(unsigned char) {
    /*
        11663c:	e20110ff 	and	r1, r1, #255	; 0xff
        116640:	e5900004 	ldr	r0, [r0, #4]	; fField4
        116644:	e3300000 	teq	r0, #0	; 0x0
        116648:	0a000005 	beq	116664 <TNBPLookupManager::GetLookup(unsigned char)+0x28>
        11664c:	e5d02018 	ldrb	r2, [r0, #24]	; fField24
        116650:	e1320001 	teq	r2, r1
        116654:	01a0f00e 	moveq	pc, lr
        116658:	e5900150 	ldr	r0, [r0, #336]	; fField336
        11665c:	e3300000 	teq	r0, #0	; 0x0
        116660:	1afffff9 	bne	11664c <TNBPLookupManager::GetLookup(unsigned char)+0x10>
        116664:	e3a00000 	mov	r0, #0	; 0x0
        116668:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBPLookupManager::GetLookupByCompletionId(unsigned long)
 * Address: 0011666c
 */
TNBPLookupManager::GetLookupByCompletionId(unsigned long) {
    /*
        11666c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        116670:	e3300000 	teq	r0, #0	; 0x0
        116674:	0a000005 	beq	116690 <TNBPLookupManager::GetLookupByCompletionId(unsigned long)+0x24>
        116678:	e59020fc 	ldr	r2, [r0, #252]	; fField252
        11667c:	e1320001 	teq	r2, r1
        116680:	01a0f00e 	moveq	pc, lr
        116684:	e5900150 	ldr	r0, [r0, #336]	; fField336
        116688:	e3300000 	teq	r0, #0	; 0x0
        11668c:	1afffff9 	bne	116678 <TNBPLookupManager::GetLookupByCompletionId(unsigned long)+0xc>
        116690:	e3a00000 	mov	r0, #0	; 0x0
        116694:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBPLookupManager::Remove(unsigned char)
 * Address: 00116698
 */
TNBPLookupManager::Remove(unsigned char) {
    /*
        116698:	e1a0c00d 	mov	ip, sp
        11669c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1166a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1166a4:	e1a04000 	mov	r4, r0
        1166a8:	e20130ff 	and	r3, r1, #255	; 0xff
        1166ac:	e3a00000 	mov	r0, #0	; 0x0
        1166b0:	e3a02000 	mov	r2, #0	; 0x0
        1166b4:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1166b8:	e3310000 	teq	r1, #0	; 0x0
        1166bc:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1166c0:	e5d1c018 	ldrb	ip, [r1, #24]	; fField24
        1166c4:	e13c0003 	teq	ip, r3
        1166c8:	1a000008 	bne	1166f0 <TNBPLookupManager::Remove(unsigned char)+0x58>
        1166cc:	e3320000 	teq	r2, #0	; 0x0
        1166d0:	e5910150 	ldr	r0, [r1, #336]	; fField336
        1166d4:	15a20150 	strne	r0, [r2, #336]!	; fField336
        1166d8:	05840004 	streq	r0, [r4, #4]	; fField4
        1166dc:	e1b00001 	movs	r0, r1
        1166e0:	13a01001 	movne	r1, #1	; 0x1
        1166e4:	1b6574a5 	blne	1a73980 <TNBPLookup::$__dt(void)>
        1166e8:	e3a00001 	mov	r0, #1	; 0x1
        1166ec:	ea000005 	b	116708 <TNBPLookupManager::Remove(unsigned char)+0x70>
        1166f0:	e1a02001 	mov	r2, r1
        1166f4:	e5911150 	ldr	r1, [r1, #336]	; fField336
        1166f8:	e3310000 	teq	r1, #0	; 0x0
        1166fc:	1affffef 	bne	1166c0 <TNBPLookupManager::Remove(unsigned char)+0x28>
        116700:	e3300000 	teq	r0, #0	; 0x0
        116704:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        116708:	e5d41008 	ldrb	r1, [r4, #8]	; fField8
        11670c:	e2411001 	sub	r1, r1, #1	; 0x1
        116710:	e5c41008 	strb	r1, [r4, #8]	; fField8
        116714:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPLookupManager::UpdateBuffer(TNBPUpdateBuffer *)
 * Address: 00116718
 */
TNBPLookupManager::UpdateBuffer(TNBPUpdateBuffer *) {
    /*
        116718:	e1a0c00d 	mov	ip, sp
        11671c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        116720:	e24cb004 	sub	fp, ip, #4	; 0x4
        116724:	e1a04001 	mov	r4, r1
        116728:	e5911014 	ldr	r1, [r1, #20]
        11672c:	e20110ff 	and	r1, r1, #255	; 0xff
        116730:	eb659175 	bl	1a7ad0c <TNBPLookupManager::$GetLookup(unsigned char)>
        116734:	e3300000 	teq	r0, #0	; 0x0
        116738:	15b41018 	ldrne	r1, [r4, #24]!	; fField24
        11673c:	1b65a646 	blne	1a8005c <TNBPLookup::$UpdateBuffer(unsigned long)>
        116740:	e3a00000 	mov	r0, #0	; 0x0
        116744:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

