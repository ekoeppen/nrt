#include "include/PAppleTalkStack.h"

/**
 * Symbol: Sizeof__15PAppleTalkStackSFv
 * Address: 00032c70
 */
void PAppleTalkStack::Sizeof() {
    /*
         32c70:	e3a00034 	mov	r0, #52	; 0x34
         32c74:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PAppleTalkStack::New(void)
 * Address: 00032c78
 */
PAppleTalkStack::New(void) {
    /*
         32c78:	e3a01000 	mov	r1, #0	; 0x0
         32c7c:	e5801010 	str	r1, [r0, #16]	; fField16
         32c80:	e5801018 	str	r1, [r0, #24]	; fField24
         32c84:	e580101c 	str	r1, [r0, #28]	; fField28
         32c88:	e5801020 	str	r1, [r0, #32]	; fField32
         32c8c:	e5801024 	str	r1, [r0, #36]	; fField36
         32c90:	e580102c 	str	r1, [r0, #44]	; fField44
         32c94:	e5c01030 	strb	r1, [r0, #48]	; fField48
         32c98:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PAppleTalkStack::NBPLookupNamesClose(void)
 * Address: 00032c9c
 */
PAppleTalkStack::NBPLookupNamesClose(void) {
    /*
         32c9c:	e1a0c00d 	mov	ip, sp
         32ca0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         32ca4:	e24cb004 	sub	fp, ip, #4	; 0x4
         32ca8:	e1a04000 	mov	r4, r0
         32cac:	e5900018 	ldr	r0, [r0, #24]	; fField24
         32cb0:	e3a05000 	mov	r5, #0	; 0x0
         32cb4:	e3300000 	teq	r0, #0	; 0x0
         32cb8:	0a000002 	beq	32cc8 <PAppleTalkStack::NBPLookupNamesClose(void)+0x2c>
         32cbc:	e3a01001 	mov	r1, #1	; 0x1
         32cc0:	eb6f0338 	bl	1bf39a8 <TLookupNames::$__dt(void)>
         32cc4:	e5a45018 	str	r5, [r4, #24]!	; fField24
         32cc8:	e1a00005 	mov	r0, r5
         32ccc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PAppleTalkStack::NBPRegisterName(unsigned char, unsigned char *)
 * Address: 00032cd0
 */
PAppleTalkStack::NBPRegisterName(unsigned char, unsigned char *) {
    /*
         32cd0:	e1a0c00d 	mov	ip, sp
         32cd4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         32cd8:	e24cb004 	sub	fp, ip, #4	; 0x4
         32cdc:	e1a04002 	mov	r4, r2
         32ce0:	e20150ff 	and	r5, r1, #255	; 0xff
         32ce4:	e24dd0cc 	sub	sp, sp, #204	; 0xcc
         32ce8:	e1a00002 	mov	r0, r2
         32cec:	eb6e0b6f 	bl	1bb5ab0 <$strlen>
         32cf0:	e3500063 	cmp	r0, #99	; 0x63
         32cf4:	83a00016 	movhi	r0, #22	; 0x16
         32cf8:	82400c2f 	subhi	r0, r0, #12032	; 0x2f00
         32cfc:	8a000009 	bhi	32d28 <PAppleTalkStack::NBPRegisterName(unsigned char, unsigned char *)+0x58>
         32d00:	e1a0100d 	mov	r1, sp
         32d04:	e1a00004 	mov	r0, r4
         32d08:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
         32d0c:	e3a02001 	mov	r2, #1	; 0x1
         32d10:	eb6ed19b 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         32d14:	e1a0200d 	mov	r2, sp
         32d18:	e1a01005 	mov	r1, r5
         32d1c:	e28d00c8 	add	r0, sp, #200	; 0xc8
         32d20:	e3a03000 	mov	r3, #0	; 0x0
         32d24:	eb694967 	bl	1a852c8 <TRegisterName::$RegisterName(unsigned char, unsigned short *, unsigned char)>
         32d28:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PAppleTalkStack::NBPUnRegisterName(unsigned char *)
 * Address: 00032d2c
 */
PAppleTalkStack::NBPUnRegisterName(unsigned char *) {
    /*
         32d2c:	e1a0c00d 	mov	ip, sp
         32d30:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         32d34:	e24cb004 	sub	fp, ip, #4	; 0x4
         32d38:	e1a04001 	mov	r4, r1
         32d3c:	e24dd0cc 	sub	sp, sp, #204	; 0xcc
         32d40:	e1a00001 	mov	r0, r1
         32d44:	eb6e0b59 	bl	1bb5ab0 <$strlen>
         32d48:	e3500063 	cmp	r0, #99	; 0x63
         32d4c:	83a00016 	movhi	r0, #22	; 0x16
         32d50:	82400c2f 	subhi	r0, r0, #12032	; 0x2f00
         32d54:	8a000008 	bhi	32d7c <PAppleTalkStack::NBPUnRegisterName(unsigned char *)+0x50>
         32d58:	e1a0100d 	mov	r1, sp
         32d5c:	e1a00004 	mov	r0, r4
         32d60:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
         32d64:	e3a02001 	mov	r2, #1	; 0x1
         32d68:	eb6ed185 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         32d6c:	e1a0100d 	mov	r1, sp
         32d70:	e28d00c8 	add	r0, sp, #200	; 0xc8
         32d74:	e3a02000 	mov	r2, #0	; 0x0
         32d78:	eb694d69 	bl	1a86324 <TRegisterName::$UnRegisterName(unsigned short *, unsigned char)>
         32d7c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: PAppleTalkStack::ATPOpenSocket(unsigned char)
 * Address: 00032d80
 */
PAppleTalkStack::ATPOpenSocket(unsigned char) {
    /*
         32d80:	e1a0c00d 	mov	ip, sp
         32d84:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         32d88:	e24cb004 	sub	fp, ip, #4	; 0x4
         32d8c:	e1a04000 	mov	r4, r0
         32d90:	e20160ff 	and	r6, r1, #255	; 0xff
         32d94:	e590001c 	ldr	r0, [r0, #28]	; fField28
         32d98:	e3300000 	teq	r0, #0	; 0x0
         32d9c:	13a05d3b 	movne	r5, #3776	; 0xec0
         32da0:	12455901 	subne	r5, r5, #16384	; 0x4000
         32da4:	1a000022 	bne	32e34 <PAppleTalkStack::ATPOpenSocket(unsigned char)+0xb4>
         32da8:	e3a050a8 	mov	r5, #168	; 0xa8
         32dac:	e2455b07 	sub	r5, r5, #7168	; 0x1c00
         32db0:	e3a00004 	mov	r0, #4	; 0x4
         32db4:	eb6e6e5f 	bl	1bce738 <$__nw(unsigned int)>
         32db8:	e3500000 	cmp	r0, #0	; 0x0
         32dbc:	e584001c 	str	r0, [r4, #28]	; fField28
         32dc0:	0a00001b 	beq	32e34 <PAppleTalkStack::ATPOpenSocket(unsigned char)+0xb4>
         32dc4:	e3a00000 	mov	r0, #0	; 0x0
         32dc8:	eb68fab3 	bl	1a7189c <TAsyncEvent::$__ct(void)>
         32dcc:	e5840020 	str	r0, [r4, #32]	; fField32
         32dd0:	e3300000 	teq	r0, #0	; 0x0
         32dd4:	0a000016 	beq	32e34 <PAppleTalkStack::ATPOpenSocket(unsigned char)+0xb4>
         32dd8:	e3a02000 	mov	r2, #0	; 0x0
         32ddc:	e5941014 	ldr	r1, [r4, #20]	; fField20
         32de0:	eb6923ee 	bl	1a7bda0 <TAsyncEvent::$Init(unsigned long, TAEventHandler *)>
         32de4:	e1b05000 	movs	r5, r0
         32de8:	1a00000f 	bne	32e2c <PAppleTalkStack::ATPOpenSocket(unsigned char)+0xac>
         32dec:	e5940020 	ldr	r0, [r4, #32]	; fField32
         32df0:	e5901000 	ldr	r1, [r0]
         32df4:	eb6ea805 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
         32df8:	e1b05000 	movs	r5, r0
         32dfc:	1a00000a 	bne	32e2c <PAppleTalkStack::ATPOpenSocket(unsigned char)+0xac>
         32e00:	e5c46028 	strb	r6, [r4, #40]	; fField40
         32e04:	e3a03000 	mov	r3, #0	; 0x0
         32e08:	e3a02000 	mov	r2, #0	; 0x0
         32e0c:	e3a00000 	mov	r0, #0	; 0x0
         32e10:	e5941010 	ldr	r1, [r4, #16]	; fField16
         32e14:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         32e18:	e2841028 	add	r1, r4, #40	; 0x28
         32e1c:	e594001c 	ldr	r0, [r4, #28]	; fField28
         32e20:	eb694511 	bl	1a8426c <TATPInterface::$OpenResponder(unsigned char *, unsigned short, unsigned char, unsigned char, unsigned long, unsigned char, unsigned char)>
         32e24:	e28dd010 	add	sp, sp, #16	; 0x10
         32e28:	e1a05000 	mov	r5, r0
         32e2c:	e3350000 	teq	r5, #0	; 0x0
         32e30:	0a000001 	beq	32e3c <PAppleTalkStack::ATPOpenSocket(unsigned char)+0xbc>
         32e34:	e1a00004 	mov	r0, r4
         32e38:	eb69389b 	bl	1a810ac <PAppleTalkStack::$ATPCloseSocket(void)>
         32e3c:	e1a00005 	mov	r0, r5
         32e40:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: PAppleTalkStack::ATPCloseSocket(void)
 * Address: 00032e44
 */
PAppleTalkStack::ATPCloseSocket(void) {
    /*
         32e44:	e1a0c00d 	mov	ip, sp
         32e48:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         32e4c:	e24cb004 	sub	fp, ip, #4	; 0x4
         32e50:	e1a04000 	mov	r4, r0
         32e54:	e590001c 	ldr	r0, [r0, #28]	; fField28
         32e58:	e3a05000 	mov	r5, #0	; 0x0
         32e5c:	e3300000 	teq	r0, #0	; 0x0
         32e60:	0a00000c 	beq	32e98 <PAppleTalkStack::ATPCloseSocket(void)+0x54>
         32e64:	e5940020 	ldr	r0, [r4, #32]	; fField32
         32e68:	e3300000 	teq	r0, #0	; 0x0
         32e6c:	0a000002 	beq	32e7c <PAppleTalkStack::ATPCloseSocket(void)+0x38>
         32e70:	e3a01001 	mov	r1, #1	; 0x1
         32e74:	eb6902c3 	bl	1a73988 <TAsyncEvent::$__dt(void)>
         32e78:	e5845020 	str	r5, [r4, #32]	; fField32
         32e7c:	e5d41028 	ldrb	r1, [r4, #40]	; fField40
         32e80:	e3a02000 	mov	r2, #0	; 0x0
         32e84:	e594001c 	ldr	r0, [r4, #28]	; fField28
         32e88:	eb693ca4 	bl	1a82120 <TATPInterface::$CloseResponder(unsigned char, unsigned char)>
         32e8c:	e594001c 	ldr	r0, [r4, #28]	; fField28
         32e90:	eb6e6a12 	bl	1bcd6e0 <$__dl(void *)>
         32e94:	e5a4501c 	str	r5, [r4, #28]!	; fField28
         32e98:	e1a00005 	mov	r0, r5
         32e9c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PAppleTalkStack::ATPSendRequest(TAddress *, TMemoryObject *, TMemoryObject *, unsigned char, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)
 * Address: 00032ea0
 */
PAppleTalkStack::ATPSendRequest(TAddress *, TMemoryObject *, TMemoryObject *, unsigned char, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char) {
    /*
         32ea0:	e1a0c00d 	mov	ip, sp
         32ea4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         32ea8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         32eac:	e24cb014 	sub	fp, ip, #20	; 0x14
         32eb0:	e1a04000 	mov	r4, r0
         32eb4:	e1a06001 	mov	r6, r1
         32eb8:	e1a05003 	mov	r5, r3
         32ebc:	e59b3014 	ldr	r3, [fp, #20]	; fField20
         32ec0:	e20330ff 	and	r3, r3, #255	; 0xff
         32ec4:	e59b0028 	ldr	r0, [fp, #40]	; fField40
         32ec8:	e28ba01c 	add	sl, fp, #28	; 0x1c
         32ecc:	e89a0402 	ldmia	sl, {r1, sl}
         32ed0:	e59b2018 	ldr	r2, [fp, #24]	; fField24
         32ed4:	e59b9024 	ldr	r9, [fp, #36]	; fField36
         32ed8:	e20220ff 	and	r2, r2, #255	; 0xff
         32edc:	e20170ff 	and	r7, r1, #255	; 0xff
         32ee0:	e20080ff 	and	r8, r0, #255	; 0xff
         32ee4:	e52d2004 	str	r2, [sp, -#4]!
         32ee8:	e52d3004 	str	r3, [sp, -#4]!
         32eec:	e594001c 	ldr	r0, [r4, #28]	; fField28
         32ef0:	e3300000 	teq	r0, #0	; 0x0
         32ef4:	03a00f45 	moveq	r0, #276	; 0x114
         32ef8:	02400a03 	subeq	r0, r0, #12288	; 0x3000
         32efc:	0a000019 	beq	32f68 <PAppleTalkStack::ATPSendRequest(TAddress *, TMemoryObject *, TMemoryObject *, unsigned char, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)+0xc8>
         32f00:	e5845024 	str	r5, [r4, #36]	; fField36
         32f04:	e5d40028 	ldrb	r0, [r4, #40]	; fField40
         32f08:	e5c60001 	strb	r0, [r6, #1]
         32f0c:	e5940020 	ldr	r0, [r4, #32]	; fField32
         32f10:	eb691b70 	bl	1a79cd8 <TAsyncEvent::$Free(void)>
         32f14:	e1a03008 	mov	r3, r8
         32f18:	e1a02009 	mov	r2, r9
         32f1c:	e1a0100a 	mov	r1, sl
         32f20:	e1a00007 	mov	r0, r7
         32f24:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         32f28:	e59d3014 	ldr	r3, [sp, #20]	; fField20
         32f2c:	e92d0008 	stmdb	sp!, {r3}
         32f30:	e1a00005 	mov	r0, r5
         32f34:	eb6f02a3 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
         32f38:	e1a03000 	mov	r3, r0
         32f3c:	e92d0008 	stmdb	sp!, {r3}
         32f40:	e59b000c 	ldr	r0, [fp, #12]
         32f44:	eb6f029f 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
         32f48:	e1a03000 	mov	r3, r0
         32f4c:	e92d0008 	stmdb	sp!, {r3}
         32f50:	e1a03006 	mov	r3, r6
         32f54:	e2844018 	add	r4, r4, #24	; 0x18
         32f58:	e9b40003 	ldmib	r4!, {r0, r1}
         32f5c:	e59d201c 	ldr	r2, [sp, #28]	; fField28
         32f60:	eb693407 	bl	1a7ff84 <TATPInterface::$SendRequestAsync(TAsyncEvent *, unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)>
         32f64:	e28dd01c 	add	sp, sp, #28	; 0x1c
         32f68:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: PAppleTalkStack::ATPSendRequestResponses(unsigned long &)
 * Address: 00032f6c
 */
PAppleTalkStack::ATPSendRequestResponses(unsigned long &) {
    /*
         32f6c:	e1a0c00d 	mov	ip, sp
         32f70:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         32f74:	e24cb004 	sub	fp, ip, #4	; 0x4
         32f78:	e1a04001 	mov	r4, r1
         32f7c:	e590101c 	ldr	r1, [r0, #28]	; fField28
         32f80:	e3310000 	teq	r1, #0	; 0x0
         32f84:	03a00000 	moveq	r0, #0	; 0x0
         32f88:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         32f8c:	e5900024 	ldr	r0, [r0, #36]	; fField36
         32f90:	eb6f028f 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         32f94:	e1a05000 	mov	r5, r0
         32f98:	eb693411 	bl	1a7ffe4 <TTransactionResponseBuffer::$Size(void)>
         32f9c:	e5840000 	str	r0, [r4]
         32fa0:	e1a00005 	mov	r0, r5
         32fa4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         32fa8:	ea693c65 	b	1a82144 <TTransactionResponseBuffer::$Count(void)>
    */
}

/**
 * Symbol: PAppleTalkStack::ATPSendRequestGetResult(unsigned char)
 * Address: 00032fac
 */
PAppleTalkStack::ATPSendRequestGetResult(unsigned char) {
    /*
         32fac:	e1a0c00d 	mov	ip, sp
         32fb0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         32fb4:	e24cb004 	sub	fp, ip, #4	; 0x4
         32fb8:	e1a04000 	mov	r4, r0
         32fbc:	e20150ff 	and	r5, r1, #255	; 0xff
         32fc0:	e5900024 	ldr	r0, [r0, #36]	; fField36
         32fc4:	e3300000 	teq	r0, #0	; 0x0
         32fc8:	03a00000 	moveq	r0, #0	; 0x0
         32fcc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         32fd0:	e5940020 	ldr	r0, [r4, #32]	; fField32
         32fd4:	eb691b3f 	bl	1a79cd8 <TAsyncEvent::$Free(void)>
         32fd8:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
         32fdc:	eb6f027c 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         32fe0:	e1a01005 	mov	r1, r5
         32fe4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         32fe8:	ea6f027a 	b	1bf39d8 <TTransactionResponseBuffer::$GetDataPtr(unsigned char)>
    */
}

/**
 * Symbol: PAppleTalkStack::ATPSendRequestCancel(void)
 * Address: 00032fec
 */
PAppleTalkStack::ATPSendRequestCancel(void) {
    /*
         32fec:	e1a0c00d 	mov	ip, sp
         32ff0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         32ff4:	e24cb004 	sub	fp, ip, #4	; 0x4
         32ff8:	e1a04000 	mov	r4, r0
         32ffc:	e590001c 	ldr	r0, [r0, #28]	; fField28
         33000:	e3300000 	teq	r0, #0	; 0x0
         33004:	03a00f45 	moveq	r0, #276	; 0x114
         33008:	02400a03 	subeq	r0, r0, #12288	; 0x3000
         3300c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         33010:	e5940020 	ldr	r0, [r4, #32]	; fField32
         33014:	eb691b2f 	bl	1a79cd8 <TAsyncEvent::$Free(void)>
         33018:	e2844018 	add	r4, r4, #24	; 0x18
         3301c:	e9b40003 	ldmib	r4!, {r0, r1}
         33020:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         33024:	ea6912d6 	b	1a77b84 <TATPInterface::$CancelAsync(TAsyncEvent *)>
    */
}

/**
 * Symbol: PAppleTalkStack::DDPOpenSocket(unsigned char *, unsigned long, unsigned long, unsigned long)
 * Address: 00033028
 */
PAppleTalkStack::DDPOpenSocket(unsigned char *, unsigned long, unsigned long, unsigned long) {
    /*
         33028:	e1a0c00d 	mov	ip, sp
         3302c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         33030:	e24cb004 	sub	fp, ip, #4	; 0x4
         33034:	e1a04000 	mov	r4, r0
         33038:	e1a07001 	mov	r7, r1
         3303c:	e1a06002 	mov	r6, r2
         33040:	e1a05003 	mov	r5, r3
         33044:	e59b9004 	ldr	r9, [fp, #4]
         33048:	e590001c 	ldr	r0, [r0, #28]	; fField28
         3304c:	e3300000 	teq	r0, #0	; 0x0
         33050:	13a08054 	movne	r8, #84	; 0x54
         33054:	12488a03 	subne	r8, r8, #12288	; 0x3000
         33058:	1a000015 	bne	330b4 <PAppleTalkStack::DDPOpenSocket(unsigned char *, unsigned long, unsigned long, unsigned long)+0x8c>
         3305c:	e3a080a8 	mov	r8, #168	; 0xa8
         33060:	e2488b07 	sub	r8, r8, #7168	; 0x1c00
         33064:	e3a00000 	mov	r0, #0	; 0x0
         33068:	eb694cc2 	bl	1a86378 <TSocket::$__ct(void)>
         3306c:	e584002c 	str	r0, [r4, #44]	; fField44
         33070:	e3300000 	teq	r0, #0	; 0x0
         33074:	0a00000e 	beq	330b4 <PAppleTalkStack::DDPOpenSocket(unsigned char *, unsigned long, unsigned long, unsigned long)+0x8c>
         33078:	e5941014 	ldr	r1, [r4, #20]	; fField20
         3307c:	eb694056 	bl	1a831dc <TSocket::$Init(unsigned long)>
         33080:	e1b08000 	movs	r8, r0
         33084:	1a000008 	bne	330ac <PAppleTalkStack::DDPOpenSocket(unsigned char *, unsigned long, unsigned long, unsigned long)+0x84>
         33088:	e1a03009 	mov	r3, r9
         3308c:	e92d0008 	stmdb	sp!, {r3}
         33090:	e1a03005 	mov	r3, r5
         33094:	e1a02006 	mov	r2, r6
         33098:	e1a01007 	mov	r1, r7
         3309c:	e594002c 	ldr	r0, [r4, #44]	; fField44
         330a0:	eb694473 	bl	1a84274 <TSocket::$Open(unsigned char *, unsigned long, unsigned long, unsigned long)>
         330a4:	e28dd004 	add	sp, sp, #4	; 0x4
         330a8:	e1a08000 	mov	r8, r0
         330ac:	e3380000 	teq	r8, #0	; 0x0
         330b0:	0a000001 	beq	330bc <PAppleTalkStack::DDPOpenSocket(unsigned char *, unsigned long, unsigned long, unsigned long)+0x94>
         330b4:	e1a00004 	mov	r0, r4
         330b8:	eb693c22 	bl	1a82148 <PAppleTalkStack::$DDPCloseSocket(void)>
         330bc:	e1a00008 	mov	r0, r8
         330c0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: PAppleTalkStack::Delete(void)
 * Address: 000330c4
 */
PAppleTalkStack::Delete(void) {
    /*
         330c4:	e1a0c00d 	mov	ip, sp
         330c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         330cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         330d0:	e1a04000 	mov	r4, r0
         330d4:	eb694455 	bl	1a84230 <PAppleTalkStack::$NBPLookupNamesClose(void)>
         330d8:	e1a00004 	mov	r0, r4
         330dc:	eb6937f2 	bl	1a810ac <PAppleTalkStack::$ATPCloseSocket(void)>
         330e0:	e1a00004 	mov	r0, r4
         330e4:	eb693c17 	bl	1a82148 <PAppleTalkStack::$DDPCloseSocket(void)>
         330e8:	e5940010 	ldr	r0, [r4, #16]	; fField16
         330ec:	e3300000 	teq	r0, #0	; 0x0
         330f0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         330f4:	e3a01000 	mov	r1, #0	; 0x0
         330f8:	eb693c06 	bl	1a82118 <$CloseAppleTalk(unsigned long, unsigned char)>
         330fc:	e3a00000 	mov	r0, #0	; 0x0
         33100:	e5a40010 	str	r0, [r4, #16]!	; fField16
         33104:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: PAppleTalkStack::DDPCloseSocket(void)
 * Address: 00033108
 */
PAppleTalkStack::DDPCloseSocket(void) {
    /*
         33108:	e1a0c00d 	mov	ip, sp
         3310c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         33110:	e24cb004 	sub	fp, ip, #4	; 0x4
         33114:	e1a04000 	mov	r4, r0
         33118:	e590002c 	ldr	r0, [r0, #44]	; fField44
         3311c:	e3a06000 	mov	r6, #0	; 0x0
         33120:	e3300000 	teq	r0, #0	; 0x0
         33124:	0a00000c 	beq	3315c <PAppleTalkStack::DDPCloseSocket(void)+0x54>
         33128:	eb693bfd 	bl	1a82124 <TSocket::$Close(void)>
         3312c:	e594502c 	ldr	r5, [r4, #44]	; fField44
         33130:	e3350000 	teq	r5, #0	; 0x0
         33134:	0a000007 	beq	33158 <PAppleTalkStack::DDPCloseSocket(void)+0x50>
         33138:	e285000c 	add	r0, r5, #12	; 0xc
         3313c:	e3a01000 	mov	r1, #0	; 0x0
         33140:	eb6e6d72 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         33144:	e1a00005 	mov	r0, r5
         33148:	e3a01000 	mov	r1, #0	; 0x0
         3314c:	eb6e6d74 	bl	1bce724 <TUObject::$__dt(void)>
         33150:	e1a00005 	mov	r0, r5
         33154:	eb6e6961 	bl	1bcd6e0 <$__dl(void *)>
         33158:	e5a4602c 	str	r6, [r4, #44]!	; fField44
         3315c:	e1a00006 	mov	r0, r6
         33160:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: PAppleTalkStack::DDPSend(TAddress *, unsigned char, CBufferList *)
 * Address: 00033164
 */
PAppleTalkStack::DDPSend(TAddress *, unsigned char, CBufferList *) {
    /*
         33164:	e20220ff 	and	r2, r2, #255	; 0xff
         33168:	e590c02c 	ldr	ip, [r0, #44]	; fField44
         3316c:	e33c0000 	teq	ip, #0	; 0x0
         33170:	03a00f45 	moveq	r0, #276	; 0x114
         33174:	02400a03 	subeq	r0, r0, #12288	; 0x3000
         33178:	01a0f00e 	moveq	pc, lr
         3317c:	e590c010 	ldr	ip, [r0, #16]	; fField16
         33180:	e581c004 	str	ip, [r1, #4]
         33184:	e590002c 	ldr	r0, [r0, #44]	; fField44
         33188:	ea69485b 	b	1a852fc <TSocket::$Send(TAddress *, unsigned char, CBufferList *)>
    */
}

/**
 * Symbol: PAppleTalkStack::DDPReceive(CBufferList *)
 * Address: 0003318c
 */
PAppleTalkStack::DDPReceive(CBufferList *) {
    /*
         3318c:	e1a0c00d 	mov	ip, sp
         33190:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         33194:	e24cb004 	sub	fp, ip, #4	; 0x4
         33198:	e1a04000 	mov	r4, r0
         3319c:	e590002c 	ldr	r0, [r0, #44]	; fField44
         331a0:	e3300000 	teq	r0, #0	; 0x0
         331a4:	03a00f45 	moveq	r0, #276	; 0x114
         331a8:	02400a03 	subeq	r0, r0, #12288	; 0x3000
         331ac:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         331b0:	eb694838 	bl	1a85298 <TSocket::$ReceiveAsync(CBufferList *)>
         331b4:	e3300000 	teq	r0, #0	; 0x0
         331b8:	03a00001 	moveq	r0, #1	; 0x1
         331bc:	05c40030 	streqb	r0, [r4, #48]	; fField48
         331c0:	e3a00000 	mov	r0, #0	; 0x0
         331c4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: PAppleTalkStack::DDPReceiveGetResults(unsigned char *, unsigned long *, TAddress *)
 * Address: 000331c8
 */
PAppleTalkStack::DDPReceiveGetResults(unsigned char *, unsigned long *, TAddress *) {
    /*
         331c8:	e590002c 	ldr	r0, [r0, #44]	; fField44
         331cc:	e3300000 	teq	r0, #0	; 0x0
         331d0:	1a694833 	bne	1a852a4 <TSocket::$ReceiveGetResults(unsigned char *, unsigned long *, TAddress *)>
         331d4:	03a00f45 	moveq	r0, #276	; 0x114
         331d8:	02400a03 	subeq	r0, r0, #12288	; 0x3000
         331dc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PAppleTalkStack::DDPReceiveCancel(void)
 * Address: 000331e0
 */
PAppleTalkStack::DDPReceiveCancel(void) {
    /*
         331e0:	e590102c 	ldr	r1, [r0, #44]	; fField44
         331e4:	e3310000 	teq	r1, #0	; 0x0
         331e8:	03a00f45 	moveq	r0, #276	; 0x114
         331ec:	02400a03 	subeq	r0, r0, #12288	; 0x3000
         331f0:	01a0f00e 	moveq	pc, lr
         331f4:	e3a02000 	mov	r2, #0	; 0x0
         331f8:	e5c02030 	strb	r2, [r0, #48]	; fField48
         331fc:	e1a00001 	mov	r0, r1
         33200:	ea6937bd 	b	1a810fc <TSocket::$CancelReceive(void)>
    */
}

/**
 * Symbol: PAppleTalkStack::Init(TUPort *, unsigned long)
 * Address: 00033204
 */
PAppleTalkStack::Init(TUPort *, unsigned long) {
    /*
         33204:	e1a0c00d 	mov	ip, sp
         33208:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         3320c:	e24cb004 	sub	fp, ip, #4	; 0x4
         33210:	e1a04000 	mov	r4, r0
         33214:	e1a06001 	mov	r6, r1
         33218:	e1a05002 	mov	r5, r2
         3321c:	e24ddc01 	sub	sp, sp, #256	; 0x100
         33220:	e3a07000 	mov	r7, #0	; 0x0
         33224:	e5cd70fc 	strb	r7, [sp, #252]
         33228:	e58d70f8 	str	r7, [sp, #248]
         3322c:	e28d0018 	add	r0, sp, #24	; 0x18
         33230:	eb6ec400 	bl	1be4238 <TAEvent::$__ct(void)>
         33234:	e59f80e0 	ldr	r8, [pc, #e0]	; 3331c <PAppleTalkStack::Init(TUPort *, unsigned long)+0x118>
         33238:	e58d7024 	str	r7, [sp, #36]	; fField36
         3323c:	e58d8018 	str	r8, [sp, #24]	; fField24
         33240:	e58d7020 	str	r7, [sp, #32]	; fField32
         33244:	e59f00d4 	ldr	r0, [pc, #d4]	; 33320 <PAppleTalkStack::Init(TUPort *, unsigned long)+0x11c>
         33248:	e58d001c 	str	r0, [sp, #28]	; fField28
         3324c:	e3a00005 	mov	r0, #5	; 0x5
         33250:	e58d0028 	str	r0, [sp, #40]	; fField40
         33254:	e28d0004 	add	r0, sp, #4	; 0x4
         33258:	eb6ec3f6 	bl	1be4238 <TAEvent::$__ct(void)>
         3325c:	e58d7010 	str	r7, [sp, #16]	; fField16
         33260:	e58d8004 	str	r8, [sp, #4]
         33264:	e58d700c 	str	r7, [sp, #12]
         33268:	e5960000 	ldr	r0, [r6]
         3326c:	e5840014 	str	r0, [r4, #20]	; fField20
         33270:	e1a00005 	mov	r0, r5
         33274:	e3a02000 	mov	r2, #0	; 0x0
         33278:	e3a01000 	mov	r1, #0	; 0x0
         3327c:	eb6943f8 	bl	1a84264 <$OpenAppleTalk(unsigned long, unsigned short *, unsigned char)>
         33280:	e1b06000 	movs	r6, r0
         33284:	1a00001c 	bne	332fc <PAppleTalkStack::Init(TUPort *, unsigned long)+0xf8>
         33288:	e28d00f8 	add	r0, sp, #248	; 0xf8
         3328c:	e5845010 	str	r5, [r4, #16]	; fField16
         33290:	eb6905f0 	bl	1a74a58 <$AppleTalkPort(TUPort *)>
         33294:	e1b06000 	movs	r6, r0
         33298:	1a000017 	bne	332fc <PAppleTalkStack::Init(TUPort *, unsigned long)+0xf8>
         3329c:	e59f0080 	ldr	r0, [pc, #80]	; 33324 <PAppleTalkStack::Init(TUPort *, unsigned long)+0x120>
         332a0:	e58d002c 	str	r0, [sp, #44]	; fField44
         332a4:	e5cd7031 	strb	r7, [sp, #49]
         332a8:	e5cd7030 	strb	r7, [sp, #48]	; fField48
         332ac:	e28d0004 	add	r0, sp, #4	; 0x4
         332b0:	e3a01014 	mov	r1, #20	; 0x14
         332b4:	e3a02000 	mov	r2, #0	; 0x0
         332b8:	e3a0c000 	mov	ip, #0	; 0x0
         332bc:	e3a03000 	mov	r3, #0	; 0x0
         332c0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         332c4:	e1a03007 	mov	r3, r7
         332c8:	e1a0100c 	mov	r1, ip
         332cc:	e3a000e0 	mov	r0, #224	; 0xe0
         332d0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         332d4:	e28d3038 	add	r3, sp, #56	; 0x38
         332d8:	e92d0008 	stmdb	sp!, {r3}
         332dc:	e28d3024 	add	r3, sp, #36	; 0x24
         332e0:	e28d0f47 	add	r0, sp, #284	; 0x11c
         332e4:	e3a02002 	mov	r2, #2	; 0x2
         332e8:	e3a01001 	mov	r1, #1	; 0x1
         332ec:	eb6e9e96 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         332f0:	e28dd024 	add	sp, sp, #36	; 0x24
         332f4:	e1b06000 	movs	r6, r0
         332f8:	059d600c 	ldreq	r6, [sp, #12]
         332fc:	e3360000 	teq	r6, #0	; 0x0
         33300:	11a00004 	movne	r0, r4
         33304:	1b693b99 	blne	1a82170 <PAppleTalkStack::$Delete(void)>
         33308:	e28d00f8 	add	r0, sp, #248	; 0xf8
         3330c:	e3a01000 	mov	r1, #0	; 0x0
         33310:	eb6e6d03 	bl	1bce724 <TUObject::$__dt(void)>
         33314:	e1a00006 	mov	r0, r6
         33318:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         3331c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         33320:	61746c6b 	cmnvs	r4, fp, ror #24
         33324:	61747020 	cmnvs	r4, r0, lsr #32
    */
}

/**
 * Symbol: PAppleTalkStack::HandleRequest(unsigned char &, TAEvent *, TUMsgToken *, unsigned long)
 * Address: 00033328
 */
PAppleTalkStack::HandleRequest(unsigned char &, TAEvent *, TUMsgToken *, unsigned long) {
    /*
         33328:	e1a0c00d 	mov	ip, sp
         3332c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         33330:	e24cb004 	sub	fp, ip, #4	; 0x4
         33334:	e3a0e000 	mov	lr, #0	; 0x0
         33338:	e5c1e000 	strb	lr, [r1]
         3333c:	e5924000 	ldr	r4, [r2]
         33340:	e59fc054 	ldr	ip, [pc, #54]	; 3339c <PAppleTalkStack::HandleRequest(unsigned char &, TAEvent *, TUMsgToken *, unsigned long)+0x74>
         33344:	e134000c 	teq	r4, ip
         33348:	05924004 	ldreq	r4, [r2, #4]
         3334c:	059fc04c 	ldreq	ip, [pc, #4c]	; 333a0 <PAppleTalkStack::HandleRequest(unsigned char &, TAEvent *, TUMsgToken *, unsigned long)+0x78>
         33350:	0134000c 	teqeq	r4, ip
         33354:	1a00000e 	bne	33394 <PAppleTalkStack::HandleRequest(unsigned char &, TAEvent *, TUMsgToken *, unsigned long)+0x6c>
         33358:	e1a04002 	mov	r4, r2
         3335c:	e5902018 	ldr	r2, [r0, #24]	; fField24
         33360:	e3320000 	teq	r2, #0	; 0x0
         33364:	0a00000a 	beq	33394 <PAppleTalkStack::HandleRequest(unsigned char &, TAEvent *, TUMsgToken *, unsigned long)+0x6c>
         33368:	e5942010 	ldr	r2, [r4, #16]	; fField16
         3336c:	e242cb01 	sub	ip, r2, #1024	; 0x400
         33370:	e33c0003 	teq	ip, #3	; 0x3
         33374:	1a000006 	bne	33394 <PAppleTalkStack::HandleRequest(unsigned char &, TAEvent *, TUMsgToken *, unsigned long)+0x6c>
         33378:	e3a02001 	mov	r2, #1	; 0x1
         3337c:	e5c12000 	strb	r2, [r1]
         33380:	e5900018 	ldr	r0, [r0, #24]	; fField24
         33384:	e1a02003 	mov	r2, r3
         33388:	e1a01004 	mov	r1, r4
         3338c:	eb691e77 	bl	1a7ad70 <TLookupNames::$HandleLookupReply(TAppleTalkMessage *, TUMsgToken *)>
         33390:	e1a0e000 	mov	lr, r0
         33394:	e1a0000e 	mov	r0, lr
         33398:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         3339c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         333a0:	6e627020 	cdpvs	0, 6, cr7, cr2, cr0, {1}
    */
}

/**
 * Symbol: PAppleTalkStack::HandleReply(unsigned long &, unsigned long, unsigned long)
 * Address: 000333a4
 */
PAppleTalkStack::HandleReply(unsigned long &, unsigned long, unsigned long) {
    /*
         333a4:	e1a0c00d 	mov	ip, sp
         333a8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         333ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         333b0:	e1a04000 	mov	r4, r0
         333b4:	e1a05001 	mov	r5, r1
         333b8:	e1a06002 	mov	r6, r2
         333bc:	e3a07000 	mov	r7, #0	; 0x0
         333c0:	e5817000 	str	r7, [r1]
         333c4:	e5900018 	ldr	r0, [r0, #24]	; fField24
         333c8:	e3300000 	teq	r0, #0	; 0x0
         333cc:	0a000003 	beq	333e0 <PAppleTalkStack::HandleReply(unsigned long &, unsigned long, unsigned long)+0x3c>
         333d0:	eb691a49 	bl	1a79cfc <TLookupNames::$GetId(void)>
         333d4:	e1300006 	teq	r0, r6
         333d8:	03a00001 	moveq	r0, #1	; 0x1
         333dc:	05850000 	streq	r0, [r5]
         333e0:	e5940020 	ldr	r0, [r4, #32]	; fField32
         333e4:	e3300000 	teq	r0, #0	; 0x0
         333e8:	0a000003 	beq	333fc <PAppleTalkStack::HandleReply(unsigned long &, unsigned long, unsigned long)+0x58>
         333ec:	e5900000 	ldr	r0, [r0]
         333f0:	e1300006 	teq	r0, r6
         333f4:	03a00002 	moveq	r0, #2	; 0x2
         333f8:	05850000 	streq	r0, [r5]
         333fc:	e594002c 	ldr	r0, [r4, #44]	; fField44
         33400:	e3300000 	teq	r0, #0	; 0x0
         33404:	15d41030 	ldrneb	r1, [r4, #48]	; fField48
         33408:	13310000 	teqne	r1, #0	; 0x0
         3340c:	0a000004 	beq	33424 <PAppleTalkStack::HandleReply(unsigned long &, unsigned long, unsigned long)+0x80>
         33410:	eb693f5e 	bl	1a83190 <TSocket::$GetReceiveMsgId(void)>
         33414:	e1300006 	teq	r0, r6
         33418:	03a00003 	moveq	r0, #3	; 0x3
         3341c:	05850000 	streq	r0, [r5]
         33420:	05c47030 	streqb	r7, [r4, #48]	; fField48
         33424:	e1a00007 	mov	r0, r7
         33428:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: PAppleTalkStack::NBPLookupNames(unsigned char *, unsigned long, unsigned long, unsigned long)
 * Address: 0003342c
 */
PAppleTalkStack::NBPLookupNames(unsigned char *, unsigned long, unsigned long, unsigned long) {
    /*
         3342c:	e1a0c00d 	mov	ip, sp
         33430:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         33434:	e24cb004 	sub	fp, ip, #4	; 0x4
         33438:	e1a04000 	mov	r4, r0
         3343c:	e1a05001 	mov	r5, r1
         33440:	e1a07002 	mov	r7, r2
         33444:	e1a06003 	mov	r6, r3
         33448:	e59b9004 	ldr	r9, [fp, #4]
         3344c:	e24dd008 	sub	sp, sp, #8	; 0x8
         33450:	e5901014 	ldr	r1, [r0, #20]	; fField20
         33454:	e1a0000d 	mov	r0, sp
         33458:	eb6e689b 	bl	1bcd6cc <TUPort::$__ct(unsigned long)>
         3345c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         33460:	e3300000 	teq	r0, #0	; 0x0
         33464:	13e08015 	mvnne	r8, #21	; 0x15
         33468:	12488a03 	subne	r8, r8, #12288	; 0x3000
         3346c:	1a00001f 	bne	334f0 <PAppleTalkStack::NBPLookupNames(unsigned char *, unsigned long, unsigned long, unsigned long)+0xc4>
         33470:	e3a080a8 	mov	r8, #168	; 0xa8
         33474:	e2488b07 	sub	r8, r8, #7168	; 0x1c00
         33478:	e3a00000 	mov	r0, #0	; 0x0
         3347c:	eb6f0145 	bl	1bf3998 <TLookupNames::$__ct(void)>
         33480:	e5840018 	str	r0, [r4, #24]	; fField24
         33484:	e3300000 	teq	r0, #0	; 0x0
         33488:	0a000018 	beq	334f0 <PAppleTalkStack::NBPLookupNames(unsigned char *, unsigned long, unsigned long, unsigned long)+0xc4>
         3348c:	e24dd0c8 	sub	sp, sp, #200	; 0xc8
         33490:	e1a00005 	mov	r0, r5
         33494:	eb6e0985 	bl	1bb5ab0 <$strlen>
         33498:	e3500063 	cmp	r0, #99	; 0x63
         3349c:	83a08016 	movhi	r8, #22	; 0x16
         334a0:	82488c2f 	subhi	r8, r8, #12032	; 0x2f00
         334a4:	8a000010 	bhi	334ec <PAppleTalkStack::NBPLookupNames(unsigned char *, unsigned long, unsigned long, unsigned long)+0xc0>
         334a8:	e1a0100d 	mov	r1, sp
         334ac:	e1a00005 	mov	r0, r5
         334b0:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
         334b4:	e3a02001 	mov	r2, #1	; 0x1
         334b8:	eb6ecfb1 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         334bc:	e1a03009 	mov	r3, r9
         334c0:	e1a02006 	mov	r2, r6
         334c4:	e3a00000 	mov	r0, #0	; 0x0
         334c8:	e5941010 	ldr	r1, [r4, #16]	; fField16
         334cc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         334d0:	e28d30d8 	add	r3, sp, #216	; 0xd8
         334d4:	e1a02007 	mov	r2, r7
         334d8:	e28d1010 	add	r1, sp, #16	; 0x10
         334dc:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
         334e0:	eb694348 	bl	1a84208 <TLookupNames::$LookupNamesAsyncFromTask(unsigned short *, unsigned long, TUPort *, unsigned char, unsigned long, unsigned long, unsigned long)>
         334e4:	e28dd010 	add	sp, sp, #16	; 0x10
         334e8:	e1a08000 	mov	r8, r0
         334ec:	e28dd0c8 	add	sp, sp, #200	; 0xc8
         334f0:	e1a0000d 	mov	r0, sp
         334f4:	e3a01000 	mov	r1, #0	; 0x0
         334f8:	eb6e6c89 	bl	1bce724 <TUObject::$__dt(void)>
         334fc:	e1a00008 	mov	r0, r8
         33500:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: PAppleTalkStack::NBPLookupNamesReceived(void)
 * Address: 00033504
 */
PAppleTalkStack::NBPLookupNamesReceived(void) {
    /*
         33504:	e1a0c00d 	mov	ip, sp
         33508:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         3350c:	e24cb004 	sub	fp, ip, #4	; 0x4
         33510:	e24dd004 	sub	sp, sp, #4	; 0x4
         33514:	e5900018 	ldr	r0, [r0, #24]	; fField24
         33518:	e3300000 	teq	r0, #0	; 0x0
         3351c:	0a000003 	beq	33530 <PAppleTalkStack::NBPLookupNamesReceived(void)+0x2c>
         33520:	e1a0100d 	mov	r1, sp
         33524:	eb69264d 	bl	1a7ce60 <TLookupNames::$NamesFound(unsigned long *)>
         33528:	e3300000 	teq	r0, #0	; 0x0
         3352c:	0a000001 	beq	33538 <PAppleTalkStack::NBPLookupNamesReceived(void)+0x34>
         33530:	e3a00000 	mov	r0, #0	; 0x0
         33534:	ea000000 	b	3353c <PAppleTalkStack::NBPLookupNamesReceived(void)+0x38>
         33538:	e59d0000 	ldr	r0, [sp]
         3353c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: PAppleTalkStack::NBPLookupNamesGetResult(unsigned long, TAddress *, unsigned char *, unsigned char *, unsigned char *)
 * Address: 00033540
 */
PAppleTalkStack::NBPLookupNamesGetResult(unsigned long, TAddress *, unsigned char *, unsigned char *, unsigned char *) {
    /*
         33540:	e1a0c00d 	mov	ip, sp
         33544:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         33548:	e24cb004 	sub	fp, ip, #4	; 0x4
         3354c:	e1a05000 	mov	r5, r0
         33550:	e1a07001 	mov	r7, r1
         33554:	e1a06002 	mov	r6, r2
         33558:	e1a04003 	mov	r4, r3
         3355c:	e59b8008 	ldr	r8, [fp, #8]
         33560:	e59b9004 	ldr	r9, [fp, #4]
         33564:	e5900018 	ldr	r0, [r0, #24]	; fField24
         33568:	e3300000 	teq	r0, #0	; 0x0
         3356c:	03a00f45 	moveq	r0, #276	; 0x114
         33570:	02400a03 	subeq	r0, r0, #12288	; 0x3000
         33574:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         33578:	e24dd078 	sub	sp, sp, #120	; 0x78
         3357c:	e1a0000d 	mov	r0, sp
         33580:	eb6f0105 	bl	1bf399c <TNBPName::$__ct(void)>
         33584:	e1a02007 	mov	r2, r7
         33588:	e1a0100d 	mov	r1, sp
         3358c:	e5b50018 	ldr	r0, [r5, #24]!	; fField24
         33590:	eb6f0103 	bl	1bf39a4 <TLookupNames::$GetName(TNBPName &, unsigned long)>
         33594:	e1b05000 	movs	r5, r0
         33598:	1a00001b 	bne	3360c <PAppleTalkStack::NBPLookupNamesGetResult(unsigned long, TAddress *, unsigned char *, unsigned char *, unsigned char *)+0xcc>
         3359c:	e1a0100d 	mov	r1, sp
         335a0:	e1a00006 	mov	r0, r6
         335a4:	eb6f0101 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
         335a8:	e3a06000 	mov	r6, #0	; 0x0
         335ac:	e3340000 	teq	r4, #0	; 0x0
         335b0:	0a000005 	beq	335cc <PAppleTalkStack::NBPLookupNamesGetResult(unsigned long, TAddress *, unsigned char *, unsigned char *, unsigned char *)+0x8c>
         335b4:	e5dd200c 	ldrb	r2, [sp, #12]
         335b8:	e28d000d 	add	r0, sp, #13	; 0xd
         335bc:	e1a01004 	mov	r1, r4
         335c0:	eb6eae63 	bl	1bdef54 <$BlockMove>
         335c4:	e5dd000c 	ldrb	r0, [sp, #12]
         335c8:	e7c46000 	strb	r6, [r4, r0]
         335cc:	e3390000 	teq	r9, #0	; 0x0
         335d0:	0a000005 	beq	335ec <PAppleTalkStack::NBPLookupNamesGetResult(unsigned long, TAddress *, unsigned char *, unsigned char *, unsigned char *)+0xac>
         335d4:	e5dd2030 	ldrb	r2, [sp, #48]	; fField48
         335d8:	e28d0031 	add	r0, sp, #49	; 0x31
         335dc:	e1a01009 	mov	r1, r9
         335e0:	eb6eae5b 	bl	1bdef54 <$BlockMove>
         335e4:	e5dd0030 	ldrb	r0, [sp, #48]	; fField48
         335e8:	e7c96000 	strb	r6, [r9, r0]
         335ec:	e3380000 	teq	r8, #0	; 0x0
         335f0:	0a000005 	beq	3360c <PAppleTalkStack::NBPLookupNamesGetResult(unsigned long, TAddress *, unsigned char *, unsigned char *, unsigned char *)+0xcc>
         335f4:	e5dd2054 	ldrb	r2, [sp, #84]
         335f8:	e28d0055 	add	r0, sp, #85	; 0x55
         335fc:	e1a01008 	mov	r1, r8
         33600:	eb6eae53 	bl	1bdef54 <$BlockMove>
         33604:	e5dd0054 	ldrb	r0, [sp, #84]
         33608:	e7c86000 	strb	r6, [r8, r0]
         3360c:	e1a00005 	mov	r0, r5
         33610:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: PAppleTalkStack::NBPLookupNamesCancel(void)
 * Address: 00033614
 */
PAppleTalkStack::NBPLookupNamesCancel(void) {
    /*
         33614:	e5900018 	ldr	r0, [r0, #24]	; fField24
         33618:	e3300000 	teq	r0, #0	; 0x0
         3361c:	1a69115a 	bne	1a77b8c <TLookupNames::$CancelLookup(void)>
         33620:	03a00f45 	moveq	r0, #276	; 0x114
         33624:	02400a03 	subeq	r0, r0, #12288	; 0x3000
         33628:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__15PAppleTalkStackSFv
 * Address: 00385708
 */
void PAppleTalkStack::ClassInfo() {
    /*
        385708:	e24f0044 	sub	r0, pc, #68	; 0x44
        38570c:	e1a0f00e 	mov	pc, lr
        385710:	e3a00000 	mov	r0, #0	; 0x0
        385714:	e1a0f00e 	mov	pc, lr
        385718:	50417070 	subpl	r7, r1, r0, ror r0
        38571c:	6c655461 	stcvsl	4, cr5, [r5], -#388
        385720:	6c6b5374 	stcvsl	3, cr5, [fp], -#464
        385724:	61636b00 	cmnvs	r3, r0, lsl #22
        385728:	50415453 	subpl	r5, r1, r3, asr r4
        38572c:	7461636b 	strvcbt	r6, [r1], -#875
        385738:	eafffff2 	b	385708 <ClassInfo__15PAppleTalkStackSFv>
        38573c:	ea5bfac5 	b	1a84258 <PAppleTalkStack::$New(void)>
        385740:	ea5bf28a 	b	1a82170 <PAppleTalkStack::$Delete(void)>
        385744:	ea5bf69f 	b	1a831c8 <PAppleTalkStack::$Init(TUPort *, unsigned long)>
        385748:	ea5bf697 	b	1a831ac <PAppleTalkStack::$HandleRequest(unsigned char &, TAEvent *, TUMsgToken *, unsigned long)>
        38574c:	ea5bf695 	b	1a831a8 <PAppleTalkStack::$HandleReply(unsigned long &, unsigned long, unsigned long)>
        385750:	ea5bfab9 	b	1a8423c <PAppleTalkStack::$NBPLookupNames(unsigned char *, unsigned long, unsigned long, unsigned long)>
        385754:	ea5bfab7 	b	1a84238 <PAppleTalkStack::$NBPLookupNamesReceived(void)>
        385758:	ea5bfab5 	b	1a84234 <PAppleTalkStack::$NBPLookupNamesGetResult(unsigned long, TAddress *, unsigned char *, unsigned char *, unsigned char *)>
        38575c:	ea5bfab2 	b	1a8422c <PAppleTalkStack::$NBPLookupNamesCancel(void)>
        385760:	ea5bfab2 	b	1a84230 <PAppleTalkStack::$NBPLookupNamesClose(void)>
        385764:	ea5bfab5 	b	1a84240 <PAppleTalkStack::$NBPRegisterName(unsigned char, unsigned char *)>
        385768:	ea5bfab6 	b	1a84248 <PAppleTalkStack::$NBPUnRegisterName(unsigned char *)>
        38576c:	ea5bee4f 	b	1a810b0 <PAppleTalkStack::$ATPOpenSocket(unsigned char)>
        385770:	ea5bee4d 	b	1a810ac <PAppleTalkStack::$ATPCloseSocket(void)>
        385774:	ea5bee51 	b	1a810c0 <PAppleTalkStack::$ATPSendRequest(TAddress *, TMemoryObject *, TMemoryObject *, unsigned char, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)>
        385778:	ea5bee4f 	b	1a810bc <PAppleTalkStack::$ATPSendRequestResponses(unsigned long &)>
        38577c:	ea5bee4d 	b	1a810b8 <PAppleTalkStack::$ATPSendRequestGetResult(unsigned char)>
        385780:	ea5bee4b 	b	1a810b4 <PAppleTalkStack::$ATPSendRequestCancel(void)>
        385784:	ea5bf270 	b	1a8214c <PAppleTalkStack::$DDPOpenSocket(unsigned char *, unsigned long, unsigned long, unsigned long)>
        385788:	ea5bf26e 	b	1a82148 <PAppleTalkStack::$DDPCloseSocket(void)>
        38578c:	ea5bf272 	b	1a8215c <PAppleTalkStack::$DDPSend(TAddress *, unsigned char, CBufferList *)>
        385790:	ea5bf270 	b	1a82158 <PAppleTalkStack::$DDPReceive(CBufferList *)>
        385794:	ea5bf26e 	b	1a82154 <PAppleTalkStack::$DDPReceiveGetResults(unsigned char *, unsigned long *, TAddress *)>
        385798:	ea5bf26c 	b	1a82150 <PAppleTalkStack::$DDPReceiveCancel(void)>
        38579c:	e1a0000f 	mov	r0, pc
        3857a0:	e1a0f00e 	mov	pc, lr
        3857a4:	54566572 	ldrplb	r6, [r6], -#1394
        3857a8:	73696f6e 	cmnvc	r9, #440	; 0x1b8
        3857ac:	53747269 	cmnpl	r4, #-1879048186	; 0x90000006
        3857b0:	6e670000 	cdpvs	0, 6, cr0, cr7, cr0, {0}
    */
}

