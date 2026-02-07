#include "include/TNBPEntityName.h"

/**
 * Symbol: TNBPEntityName::__ct(void)
 * Address: 00125cd8
 */
TNBPEntityName::TNBPEntityName(void) {
    /*
        125cd8:	e1a0c00d 	mov	ip, sp
        125cdc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        125ce0:	e24cb004 	sub	fp, ip, #4	; 0x4
        125ce4:	e1b04000 	movs	r4, r0
        125ce8:	1a000003 	bne	125cfc <TNBPEntityName::__ct(void)+0x24>
        125cec:	e3a0006c 	mov	r0, #108	; 0x6c
        125cf0:	eb6aa290 	bl	1bce738 <$__nw(unsigned int)>
        125cf4:	e1b04000 	movs	r4, r0
        125cf8:	0a000005 	beq	125d14 <TNBPEntityName::__ct(void)+0x3c>
        125cfc:	e1a00004 	mov	r0, r4
        125d00:	eb65331c 	bl	1a72978 <TString32::$__ct(void)>
        125d04:	e2840024 	add	r0, r4, #36	; 0x24
        125d08:	eb65331a 	bl	1a72978 <TString32::$__ct(void)>
        125d0c:	e2840048 	add	r0, r4, #72	; 0x48
        125d10:	eb653318 	bl	1a72978 <TString32::$__ct(void)>
        125d14:	e1a00004 	mov	r0, r4
        125d18:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPEntityName::__ct(unsigned char *)
 * Address: 00125d1c
 */
TNBPEntityName::TNBPEntityName(unsigned char *) {
    /*
        125d1c:	e1a0c00d 	mov	ip, sp
        125d20:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        125d24:	e24cb004 	sub	fp, ip, #4	; 0x4
        125d28:	e1b05000 	movs	r5, r0
        125d2c:	e1a04001 	mov	r4, r1
        125d30:	1a000003 	bne	125d44 <TNBPEntityName::__ct(unsigned char *)+0x28>
        125d34:	e3a0006c 	mov	r0, #108	; 0x6c
        125d38:	eb6aa27e 	bl	1bce738 <$__nw(unsigned int)>
        125d3c:	e1b05000 	movs	r5, r0
        125d40:	0a000021 	beq	125dcc <TNBPEntityName::__ct(unsigned char *)+0xb0>
        125d44:	e1a00005 	mov	r0, r5
        125d48:	eb65330a 	bl	1a72978 <TString32::$__ct(void)>
        125d4c:	e2850024 	add	r0, r5, #36	; 0x24
        125d50:	e1a07000 	mov	r7, r0
        125d54:	eb653307 	bl	1a72978 <TString32::$__ct(void)>
        125d58:	e2850048 	add	r0, r5, #72	; 0x48
        125d5c:	e1a06000 	mov	r6, r0
        125d60:	eb653304 	bl	1a72978 <TString32::$__ct(void)>
        125d64:	e24dd06c 	sub	sp, sp, #108	; 0x6c
        125d68:	e1a01004 	mov	r1, r4
        125d6c:	e1a0000d 	mov	r0, sp
        125d70:	eb6532ff 	bl	1a72974 <TString32::$__ct(unsigned char const *)>
        125d74:	e1a0100d 	mov	r1, sp
        125d78:	e1a00005 	mov	r0, r5
        125d7c:	eb652ec1 	bl	1a71888 <TString32::$__as(TString32 const &)>
        125d80:	e5d40000 	ldrb	r0, [r4]
        125d84:	e0840000 	add	r0, r4, r0
        125d88:	e2804001 	add	r4, r0, #1	; 0x1
        125d8c:	e1a01004 	mov	r1, r4
        125d90:	e28d0024 	add	r0, sp, #36	; 0x24
        125d94:	eb6532f6 	bl	1a72974 <TString32::$__ct(unsigned char const *)>
        125d98:	e28d1024 	add	r1, sp, #36	; 0x24
        125d9c:	e1a00007 	mov	r0, r7
        125da0:	eb652eb8 	bl	1a71888 <TString32::$__as(TString32 const &)>
        125da4:	e5d41000 	ldrb	r1, [r4]
        125da8:	e0840001 	add	r0, r4, r1
        125dac:	e2804001 	add	r4, r0, #1	; 0x1
        125db0:	e1a01004 	mov	r1, r4
        125db4:	e28d0048 	add	r0, sp, #72	; 0x48
        125db8:	eb6532ed 	bl	1a72974 <TString32::$__ct(unsigned char const *)>
        125dbc:	e28d1048 	add	r1, sp, #72	; 0x48
        125dc0:	e1a00006 	mov	r0, r6
        125dc4:	eb652eaf 	bl	1a71888 <TString32::$__as(TString32 const &)>
        125dc8:	e28dd06c 	add	sp, sp, #108	; 0x6c
        125dcc:	e1a00005 	mov	r0, r5
        125dd0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPEntityName::operator==(TNBPEntityName &)
 * Address: 00125dd4
 */
TNBPEntityName::operator==(TNBPEntityName &) {
    /*
        125dd4:	e1a0c00d 	mov	ip, sp
        125dd8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        125ddc:	e24cb004 	sub	fp, ip, #4	; 0x4
        125de0:	e1a05000 	mov	r5, r0
        125de4:	e1a04001 	mov	r4, r1
        125de8:	eb658567 	bl	1a8738c <TNBPString::$__eq( const(TNBPString const &))>
        125dec:	e3300000 	teq	r0, #0	; 0x0
        125df0:	0a00000a 	beq	125e20 <TNBPEntityName::operator==(TNBPEntityName &)+0x4c>
        125df4:	e2841024 	add	r1, r4, #36	; 0x24
        125df8:	e2850024 	add	r0, r5, #36	; 0x24
        125dfc:	eb658562 	bl	1a8738c <TNBPString::$__eq( const(TNBPString const &))>
        125e00:	e3300000 	teq	r0, #0	; 0x0
        125e04:	0a000005 	beq	125e20 <TNBPEntityName::operator==(TNBPEntityName &)+0x4c>
        125e08:	e2841048 	add	r1, r4, #72	; 0x48
        125e0c:	e2850048 	add	r0, r5, #72	; 0x48
        125e10:	eb65855d 	bl	1a8738c <TNBPString::$__eq( const(TNBPString const &))>
        125e14:	e3300000 	teq	r0, #0	; 0x0
        125e18:	13a00001 	movne	r0, #1	; 0x1
        125e1c:	1a000000 	bne	125e24 <TNBPEntityName::operator==(TNBPEntityName &)+0x50>
        125e20:	e3a00000 	mov	r0, #0	; 0x0
        125e24:	e20000ff 	and	r0, r0, #255	; 0xff
        125e28:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPEntityName::FormFromEntityName(unsigned long)
 * Address: 00125e2c
 */
TNBPEntityName::FormFromEntityName(unsigned long) {
    /*
        125e2c:	e1a0c00d 	mov	ip, sp
        125e30:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        125e34:	e24cb004 	sub	fp, ip, #4	; 0x4
        125e38:	e1a04000 	mov	r4, r0
        125e3c:	e1a05001 	mov	r5, r1
        125e40:	e3a06000 	mov	r6, #0	; 0x0
        125e44:	e24dd024 	sub	sp, sp, #36	; 0x24
        125e48:	e1a0000d 	mov	r0, sp
        125e4c:	eb6b36d8 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        125e50:	e1a01005 	mov	r1, r5
        125e54:	e1a0000d 	mov	r0, sp
        125e58:	e3a02000 	mov	r2, #0	; 0x0
        125e5c:	eb655bf3 	bl	1a7ce30 <TMemoryObject::$Make(unsigned long, TUMsgToken *)>
        125e60:	e1b05000 	movs	r5, r0
        125e64:	0a000004 	beq	125e7c <TNBPEntityName::FormFromEntityName(unsigned long)+0x50>
        125e68:	e1a0000d 	mov	r0, sp
        125e6c:	e3a01000 	mov	r1, #0	; 0x0
        125e70:	eb6b36d1 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        125e74:	e28dd024 	add	sp, sp, #36	; 0x24
        125e78:	ea000016 	b	125ed8 <TNBPEntityName::FormFromEntityName(unsigned long)+0xac>
        125e7c:	e59d001c 	ldr	r0, [sp, #28]
        125e80:	e1a05000 	mov	r5, r0
        125e84:	eb6af0ad 	bl	1be2140 <$NewPtr>
        125e88:	e1b06000 	movs	r6, r0
        125e8c:	1a000002 	bne	125e9c <TNBPEntityName::FormFromEntityName(unsigned long)+0x70>
        125e90:	eb6af0a2 	bl	1be2120 <$MemError>
        125e94:	e1a05000 	mov	r5, r0
        125e98:	eafffff2 	b	125e68 <TNBPEntityName::FormFromEntityName(unsigned long)+0x3c>
        125e9c:	e24dd004 	sub	sp, sp, #4	; 0x4
        125ea0:	e3a03000 	mov	r3, #0	; 0x0
        125ea4:	e92d0008 	stmdb	sp!, {r3}
        125ea8:	e1a03005 	mov	r3, r5
        125eac:	e1a02006 	mov	r2, r6
        125eb0:	e28d1004 	add	r1, sp, #4	; 0x4
        125eb4:	e28d0008 	add	r0, sp, #8	; 0x8
        125eb8:	eb65474e 	bl	1a77bf8 <TMemoryObject::$CopyFrom(unsigned long *, void *, unsigned long, unsigned long)>
        125ebc:	e28dd004 	add	sp, sp, #4	; 0x4
        125ec0:	e1b05000 	movs	r5, r0
        125ec4:	0a00000e 	beq	125f04 <TNBPEntityName::FormFromEntityName(unsigned long)+0xd8>
        125ec8:	e28d0004 	add	r0, sp, #4	; 0x4
        125ecc:	e3a01000 	mov	r1, #0	; 0x0
        125ed0:	eb6b36b9 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        125ed4:	e28dd028 	add	sp, sp, #40	; 0x28
        125ed8:	e3a00000 	mov	r0, #0	; 0x0
        125edc:	e5c40000 	strb	r0, [r4]
        125ee0:	e2841024 	add	r1, r4, #36	; 0x24
        125ee4:	e5c10000 	strb	r0, [r1]
        125ee8:	e2841048 	add	r1, r4, #72	; 0x48
        125eec:	e5c10000 	strb	r0, [r1]
        125ef0:	e3360000 	teq	r6, #0	; 0x0
        125ef4:	11a00006 	movne	r0, r6
        125ef8:	1b6aec6d 	blne	1be10b4 <$DisposPtr>
        125efc:	e1a00005 	mov	r0, r5
        125f00:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        125f04:	e28dd004 	add	sp, sp, #4	; 0x4
        125f08:	e1a0000d 	mov	r0, sp
        125f0c:	e3a01000 	mov	r1, #0	; 0x0
        125f10:	eb6b36a9 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        125f14:	e28dd024 	add	sp, sp, #36	; 0x24
        125f18:	e1a01006 	mov	r1, r6
        125f1c:	e1a00004 	mov	r0, r4
        125f20:	eb657095 	bl	1a8217c <TNBPEntityName::$FormFromEntityName(unsigned short *)>
        125f24:	e1a04000 	mov	r4, r0
        125f28:	e1a00006 	mov	r0, r6
        125f2c:	eb6aec60 	bl	1be10b4 <$DisposPtr>
        125f30:	e1a00004 	mov	r0, r4
        125f34:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPEntityName::FormFromEntityName(unsigned short *)
 * Address: 00125f38
 */
TNBPEntityName::FormFromEntityName(unsigned short *) {
    /*
        125f38:	e1a0c00d 	mov	ip, sp
        125f3c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        125f40:	e24cb004 	sub	fp, ip, #4	; 0x4
        125f44:	e1a05000 	mov	r5, r0
        125f48:	e1a04001 	mov	r4, r1
        125f4c:	e3a06000 	mov	r6, #0	; 0x0
        125f50:	e1a07006 	mov	r7, r6
        125f54:	e1a00001 	mov	r0, r1
        125f58:	eb6b2200 	bl	1bee760 <$Ustrlen>
        125f5c:	e3a01000 	mov	r1, #0	; 0x0
        125f60:	e3500000 	cmp	r0, #0	; 0x0
        125f64:	9a000007 	bls	125f88 <TNBPEntityName::FormFromEntityName(unsigned short *)+0x50>
        125f68:	e7942081 	ldr	r2, [r4, r1, lsl #1]
        125f6c:	e1a02822 	mov	r2, r2, lsr #16
        125f70:	e332003a 	teq	r2, #58	; 0x3a
        125f74:	01a07001 	moveq	r7, r1
        125f78:	0a000002 	beq	125f88 <TNBPEntityName::FormFromEntityName(unsigned short *)+0x50>
        125f7c:	e2811001 	add	r1, r1, #1	; 0x1
        125f80:	e1510000 	cmp	r1, r0
        125f84:	3afffff7 	bcc	125f68 <TNBPEntityName::FormFromEntityName(unsigned short *)+0x30>
        125f88:	e2871001 	add	r1, r7, #1	; 0x1
        125f8c:	e1510000 	cmp	r1, r0
        125f90:	2a000007 	bcs	125fb4 <TNBPEntityName::FormFromEntityName(unsigned short *)+0x7c>
        125f94:	e7942081 	ldr	r2, [r4, r1, lsl #1]
        125f98:	e1a02822 	mov	r2, r2, lsr #16
        125f9c:	e3320040 	teq	r2, #64	; 0x40
        125fa0:	01a06001 	moveq	r6, r1
        125fa4:	0a000002 	beq	125fb4 <TNBPEntityName::FormFromEntityName(unsigned short *)+0x7c>
        125fa8:	e2811001 	add	r1, r1, #1	; 0x1
        125fac:	e1510000 	cmp	r1, r0
        125fb0:	3afffff7 	bcc	125f94 <TNBPEntityName::FormFromEntityName(unsigned short *)+0x5c>
        125fb4:	e3e0800b 	mvn	r8, #11	; 0xb
        125fb8:	e2488a03 	sub	r8, r8, #12288	; 0x3000
        125fbc:	e285a024 	add	sl, r5, #36	; 0x24
        125fc0:	e2859048 	add	r9, r5, #72	; 0x48
        125fc4:	e3370000 	teq	r7, #0	; 0x0
        125fc8:	13360000 	teqne	r6, #0	; 0x0
        125fcc:	12400001 	subne	r0, r0, #1	; 0x1
        125fd0:	11300006 	teqne	r0, r6
        125fd4:	0a000016 	beq	126034 <TNBPEntityName::FormFromEntityName(unsigned short *)+0xfc>
        125fd8:	e3a00000 	mov	r0, #0	; 0x0
        125fdc:	e0847087 	add	r7, r4, r7, lsl #1
        125fe0:	e5c70001 	strb	r0, [r7, #1]
        125fe4:	e5c70000 	strb	r0, [r7]
        125fe8:	e0846086 	add	r6, r4, r6, lsl #1
        125fec:	e5c60001 	strb	r0, [r6, #1]
        125ff0:	e5c60000 	strb	r0, [r6]
        125ff4:	e1a01004 	mov	r1, r4
        125ff8:	e1a00005 	mov	r0, r5
        125ffc:	eb657885 	bl	1a84218 <TNBPString::$Make(unsigned short *)>
        126000:	e3300000 	teq	r0, #0	; 0x0
        126004:	0a00000a 	beq	126034 <TNBPEntityName::FormFromEntityName(unsigned short *)+0xfc>
        126008:	e2871002 	add	r1, r7, #2	; 0x2
        12600c:	e1a0000a 	mov	r0, sl
        126010:	eb657880 	bl	1a84218 <TNBPString::$Make(unsigned short *)>
        126014:	e3300000 	teq	r0, #0	; 0x0
        126018:	0a000005 	beq	126034 <TNBPEntityName::FormFromEntityName(unsigned short *)+0xfc>
        12601c:	e2861002 	add	r1, r6, #2	; 0x2
        126020:	e1a00009 	mov	r0, r9
        126024:	eb65787b 	bl	1a84218 <TNBPString::$Make(unsigned short *)>
        126028:	e3300000 	teq	r0, #0	; 0x0
        12602c:	13a00000 	movne	r0, #0	; 0x0
        126030:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        126034:	e1a00008 	mov	r0, r8
        126038:	e3a01000 	mov	r1, #0	; 0x0
        12603c:	e5c51000 	strb	r1, [r5]
        126040:	e5ca1000 	strb	r1, [sl]
        126044:	e5c91000 	strb	r1, [r9]
        126048:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPEntityName::Length(void)
 * Address: 0012604c
 */
TNBPEntityName::Length(void) {
    /*
        12604c:	e5d02000 	ldrb	r2, [r0]
        126050:	e5d01024 	ldrb	r1, [r0, #36]	; fField36
        126054:	e0821001 	add	r1, r2, r1
        126058:	e5d00048 	ldrb	r0, [r0, #72]	; fField72
        12605c:	e0810000 	add	r0, r1, r0
        126060:	e2800003 	add	r0, r0, #3	; 0x3
        126064:	e20000ff 	and	r0, r0, #255	; 0xff
        126068:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBPEntityName::StreamOut(unsigned char *)
 * Address: 0012606c
 */
TNBPEntityName::StreamOut(unsigned char *) {
    /*
        12606c:	e1a0c00d 	mov	ip, sp
        126070:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        126074:	e24cb004 	sub	fp, ip, #4	; 0x4
        126078:	e1a04000 	mov	r4, r0
        12607c:	e1a05001 	mov	r5, r1
        126080:	e1a06001 	mov	r6, r1
        126084:	eb6567e7 	bl	1a80028 <TString32::$StreamOut( const(unsigned char *))>
        126088:	e0866000 	add	r6, r6, r0
        12608c:	e2840024 	add	r0, r4, #36	; 0x24
        126090:	e1a01006 	mov	r1, r6
        126094:	eb6567e3 	bl	1a80028 <TString32::$StreamOut( const(unsigned char *))>
        126098:	e0866000 	add	r6, r6, r0
        12609c:	e2840048 	add	r0, r4, #72	; 0x48
        1260a0:	e1a01006 	mov	r1, r6
        1260a4:	eb6567df 	bl	1a80028 <TString32::$StreamOut( const(unsigned char *))>
        1260a8:	e0860000 	add	r0, r6, r0
        1260ac:	e0400005 	sub	r0, r0, r5
        1260b0:	e20000ff 	and	r0, r0, #255	; 0xff
        1260b4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPEntityName::Match(TNBPEntityName &)
 * Address: 001260b8
 */
TNBPEntityName::Match(TNBPEntityName &) {
    /*
        1260b8:	e1a0c00d 	mov	ip, sp
        1260bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1260c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1260c4:	e1a05000 	mov	r5, r0
        1260c8:	e1a04001 	mov	r4, r1
        1260cc:	eb657853 	bl	1a84220 <TNBPString::$Match( const(TNBPString &))>
        1260d0:	e3300000 	teq	r0, #0	; 0x0
        1260d4:	0a00000a 	beq	126104 <TNBPEntityName::Match(TNBPEntityName &)+0x4c>
        1260d8:	e2841024 	add	r1, r4, #36	; 0x24
        1260dc:	e2850024 	add	r0, r5, #36	; 0x24
        1260e0:	eb65784e 	bl	1a84220 <TNBPString::$Match( const(TNBPString &))>
        1260e4:	e3300000 	teq	r0, #0	; 0x0
        1260e8:	0a000005 	beq	126104 <TNBPEntityName::Match(TNBPEntityName &)+0x4c>
        1260ec:	e2841048 	add	r1, r4, #72	; 0x48
        1260f0:	e2850048 	add	r0, r5, #72	; 0x48
        1260f4:	eb65784b 	bl	1a84228 <TNBPZoneString::$Match( const(TNBPZoneString &))>
        1260f8:	e3300000 	teq	r0, #0	; 0x0
        1260fc:	13a00001 	movne	r0, #1	; 0x1
        126100:	1a000000 	bne	126108 <TNBPEntityName::Match(TNBPEntityName &)+0x50>
        126104:	e3a00000 	mov	r0, #0	; 0x0
        126108:	e20000ff 	and	r0, r0, #255	; 0xff
        12610c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

