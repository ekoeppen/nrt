#include "include/TArray.h"

/**
 * Symbol: TArray::__ct(void)
 * Address: 00208e98
 */
TArray::TArray(void) {
    /*
        208e98:	e1a0c00d 	mov	ip, sp
        208e9c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        208ea0:	e24cb004 	sub	fp, ip, #4	; 0x4
        208ea4:	e1b04000 	movs	r4, r0
        208ea8:	1a000003 	bne	208ebc <TArray::__ct(void)+0x24>
        208eac:	e3a00020 	mov	r0, #32	; 0x20
        208eb0:	eb671620 	bl	1bce738 <$__nw(unsigned int)>
        208eb4:	e1b04000 	movs	r4, r0
        208eb8:	0a000003 	beq	208ecc <TArray::__ct(void)+0x34>
        208ebc:	e1a00004 	mov	r0, r4
        208ec0:	eb004eaf 	bl	21c984 <TRecObject::__ct(void)>
        208ec4:	e59f0008 	ldr	r0, [pc, #8]	; 208ed4 <TArray::__ct(void)+0x3c>	; fField8
        208ec8:	e5840000 	str	r0, [r4]
        208ecc:	e1a00004 	mov	r0, r4
        208ed0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        208ed4:	0001f900 	andeq	pc, r1, r0, lsl #18
    */
}

/**
 * Symbol: TArray::__dt(void)
 * Address: 00208ed8
 */
TArray::~TArray(void) {
    /*
        208ed8:	e1a0c00d 	mov	ip, sp
        208edc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        208ee0:	e24cb004 	sub	fp, ip, #4	; 0x4
        208ee4:	e1a04000 	mov	r4, r0
        208ee8:	e1a05001 	mov	r5, r1
        208eec:	e59f0020 	ldr	r0, [pc, #20]	; 208f14 <TArray::__dt(void)+0x3c>	; fField20
        208ef0:	e5840000 	str	r0, [r4]
        208ef4:	e1a00004 	mov	r0, r4
        208ef8:	e3a01000 	mov	r1, #0	; 0x0
        208efc:	eb004ead 	bl	21c9b8 <TRecObject::__dt(void)>
        208f00:	e3150001 	tst	r5, #1	; 0x1
        208f04:	11a00004 	movne	r0, r4
        208f08:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        208f0c:	1a6711f3 	bne	1bcd6e0 <$__dl(void *)>
        208f10:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        208f14:	0001f900 	andeq	pc, r1, r0, lsl #18
    */
}

/**
 * Symbol: TArray::SizeInBytes(void)
 * Address: 00208f18
 */
TArray::SizeInBytes(void) {
    /*
        208f18:	e1a0c00d 	mov	ip, sp
        208f1c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        208f20:	e24cb004 	sub	fp, ip, #4	; 0x4
        208f24:	e1a04000 	mov	r4, r0
        208f28:	e590001c 	ldr	r0, [r0, #28]	; fField28
        208f2c:	e3300000 	teq	r0, #0	; 0x0
        208f30:	0a000001 	beq	208f3c <TArray::SizeInBytes(void)+0x24>
        208f34:	eb6591ef 	bl	1b6d6f8 <$SizeOfHandle(char **)>
        208f38:	ea000000 	b	208f40 <TArray::SizeInBytes(void)+0x28>
        208f3c:	e3a00000 	mov	r0, #0	; 0x0
        208f40:	e1a05000 	mov	r5, r0
        208f44:	e1a00004 	mov	r0, r4
        208f48:	eb656894 	bl	1b631a0 <TRecObject::$SizeInBytes(void)>
        208f4c:	e0800005 	add	r0, r0, r5
        208f50:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TArray::CopyInto(TRecObject *)
 * Address: 00208f54
 */
TArray::CopyInto(TRecObject *) {
    /*
        208f54:	e1a0c00d 	mov	ip, sp
        208f58:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        208f5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        208f60:	e1a04000 	mov	r4, r0
        208f64:	e1b05001 	movs	r5, r1
        208f68:	e24dd004 	sub	sp, sp, #4	; 0x4
        208f6c:	e3a00001 	mov	r0, #1	; 0x1
        208f70:	0a00001a 	beq	208fe0 <TArray::CopyInto(TRecObject *)+0x8c>
        208f74:	e1a01005 	mov	r1, r5
        208f78:	e1a00004 	mov	r0, r4
        208f7c:	eb654fb4 	bl	1b5ce54 <TRecObject::$CopyInto(TRecObject *)>
        208f80:	e3300000 	teq	r0, #0	; 0x0
        208f84:	1a000015 	bne	208fe0 <TArray::CopyInto(TRecObject *)+0x8c>
        208f88:	e594001c 	ldr	r0, [r4, #28]	; fField28
        208f8c:	e58d0000 	str	r0, [sp]
        208f90:	e3300000 	teq	r0, #0	; 0x0
        208f94:	0a000002 	beq	208fa4 <TArray::CopyInto(TRecObject *)+0x50>
        208f98:	e1a0000d 	mov	r0, sp
        208f9c:	eb658979 	bl	1b6b588 <$CopyHandle(char ***)>
        208fa0:	ea000000 	b	208fa8 <TArray::CopyInto(TRecObject *)+0x54>
        208fa4:	e3a00001 	mov	r0, #1	; 0x1
        208fa8:	e59d1000 	ldr	r1, [sp]
        208fac:	e585101c 	str	r1, [r5, #28]	; fField28
        208fb0:	e5941008 	ldr	r1, [r4, #8]	; fField8
        208fb4:	e3300000 	teq	r0, #0	; 0x0
        208fb8:	e5851008 	str	r1, [r5, #8]	; fField8
        208fbc:	0594100c 	ldreq	r1, [r4, #12]	; fField12
        208fc0:	13a01000 	movne	r1, #0	; 0x0
        208fc4:	e585100c 	str	r1, [r5, #12]	; fField12
        208fc8:	e5941010 	ldr	r1, [r4, #16]	; fField16
        208fcc:	e5851010 	str	r1, [r5, #16]	; fField16
        208fd0:	e5b41014 	ldr	r1, [r4, #20]!	; fField20
        208fd4:	e5851014 	str	r1, [r5, #20]	; fField20
        208fd8:	e3a01000 	mov	r1, #0	; 0x0
        208fdc:	e5a51018 	str	r1, [r5, #24]!	; fField24
        208fe0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TArray::Reuse(unsigned long)
 * Address: 00208fe4
 */
TArray::Reuse(unsigned long) {
    /*
        208fe4:	e1a0c00d 	mov	ip, sp
        208fe8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        208fec:	e24cb004 	sub	fp, ip, #4	; 0x4
        208ff0:	e1a04000 	mov	r4, r0
        208ff4:	e1a05001 	mov	r5, r1
        208ff8:	e3a00000 	mov	r0, #0	; 0x0
        208ffc:	e5840010 	str	r0, [r4, #16]	; fField16
        209000:	e594001c 	ldr	r0, [r4, #28]	; fField28
        209004:	e3300000 	teq	r0, #0	; 0x0
        209008:	0a000005 	beq	209024 <TArray::Reuse(unsigned long)+0x40>
        20900c:	e5942014 	ldr	r2, [r4, #20]	; fField20
        209010:	e0822005 	add	r2, r2, r5
        209014:	e5941008 	ldr	r1, [r4, #8]	; fField8
        209018:	e0010192 	mul	r1, r2, r1
        20901c:	eb6591a4 	bl	1b6d6b4 <$ResizeHandle(char **, long)>
        209020:	ea000000 	b	209028 <TArray::Reuse(unsigned long)+0x44>
        209024:	e3a00001 	mov	r0, #1	; 0x1
        209028:	e3300000 	teq	r0, #0	; 0x0
        20902c:	13a05000 	movne	r5, #0	; 0x0
        209030:	e5a4500c 	str	r5, [r4, #12]!	; fField12
        209034:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TArray::Compact(void)
 * Address: 00209038
 */
TArray::Compact(void) {
    /*
        209038:	e5901010 	ldr	r1, [r0, #16]	; fField16
        20903c:	e3310000 	teq	r1, #0	; 0x0
        209040:	13a01000 	movne	r1, #0	; 0x0
        209044:	15801010 	strne	r1, [r0, #16]	; fField16
        209048:	1590201c 	ldrne	r2, [r0, #28]	; fField28
        20904c:	13320000 	teqne	r2, #0	; 0x0
        209050:	01a0f00e 	moveq	pc, lr
        209054:	e2801008 	add	r1, r0, #8	; 0x8
        209058:	e8910003 	ldmia	r1, {r0, r1}
        20905c:	e0010190 	mul	r1, r0, r1
        209060:	e1a00002 	mov	r0, r2
        209064:	ea659192 	b	1b6d6b4 <$ResizeHandle(char **, long)>
    */
}

/**
 * Symbol: TArray::Load(unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 00209068
 */
TArray::Load(unsigned long, unsigned long, unsigned long, unsigned long) {
    /*
        209068:	e3a00000 	mov	r0, #0	; 0x0
        20906c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TArray::LoadFromSoup(RefVar const &, RefVar const &, unsigned long)
 * Address: 00209070
 */
TArray::LoadFromSoup(RefVar const &, RefVar const &, unsigned long) {
    /*
        209070:	e1a0c00d 	mov	ip, sp
        209074:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        209078:	e24cb004 	sub	fp, ip, #4	; 0x4
        20907c:	e1a04000 	mov	r4, r0
        209080:	e1a06002 	mov	r6, r2
        209084:	e1a05003 	mov	r5, r3
        209088:	e1a02003 	mov	r2, r3
        20908c:	e5910000 	ldr	r0, [r1]
        209090:	e5900000 	ldr	r0, [r0]
        209094:	e1a01003 	mov	r1, r3
        209098:	eb66ec6d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        20909c:	eb66e42e 	bl	1bc215c <$BinaryData(long)>
        2090a0:	e1a07000 	mov	r7, r0
        2090a4:	e1a01005 	mov	r1, r5
        2090a8:	e5960000 	ldr	r0, [r6]
        2090ac:	e5900000 	ldr	r0, [r0]
        2090b0:	eb66ec67 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2090b4:	eb66e428 	bl	1bc215c <$BinaryData(long)>
        2090b8:	e1a08000 	mov	r8, r0
        2090bc:	e1a01005 	mov	r1, r5
        2090c0:	e5960000 	ldr	r0, [r6]
        2090c4:	e5900000 	ldr	r0, [r0]
        2090c8:	eb66ec61 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2090cc:	eb66f076 	bl	1bc52ac <$Length(long)>
        2090d0:	e1a01000 	mov	r1, r0
        2090d4:	e1a00008 	mov	r0, r8
        2090d8:	eb676412 	bl	1be2128 <$NewFakeHandle>
        2090dc:	e1a05000 	mov	r5, r0
        2090e0:	e5970000 	ldr	r0, [r7]
        2090e4:	e5840008 	str	r0, [r4, #8]	; fField8
        2090e8:	e5970004 	ldr	r0, [r7, #4]	; fField4
        2090ec:	e584000c 	str	r0, [r4, #12]	; fField12
        2090f0:	e3a00000 	mov	r0, #0	; 0x0
        2090f4:	e5840010 	str	r0, [r4, #16]	; fField16
        2090f8:	e5b70008 	ldr	r0, [r7, #8]!	; fField8
        2090fc:	e5840014 	str	r0, [r4, #20]	; fField20
        209100:	e594001c 	ldr	r0, [r4, #28]	; fField28
        209104:	eb658923 	bl	1b6b598 <$DeleteHandle(char **)>
        209108:	e3a00001 	mov	r0, #1	; 0x1
        20910c:	e5a4501c 	str	r5, [r4, #28]!	; fField28
        209110:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TArray::Save(unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 00209114
 */
TArray::Save(unsigned long, unsigned long, unsigned long, unsigned long) {
    /*
        209114:	e1a0c00d 	mov	ip, sp
        209118:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        20911c:	e24cb004 	sub	fp, ip, #4	; 0x4
        209120:	e1a04000 	mov	r4, r0
        209124:	e1a07001 	mov	r7, r1
        209128:	e1a06002 	mov	r6, r2
        20912c:	e1a05003 	mov	r5, r3
        209130:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        209134:	e5901000 	ldr	r1, [r0]
        209138:	e1a0e00f 	mov	lr, pc
        20913c:	e281f024 	add	pc, r1, #36	; 0x24
        209140:	e3a0000c 	mov	r0, #12	; 0xc
        209144:	eb658d44 	bl	1b6c65c <$MakeHandle(long)>
        209148:	e1a08000 	mov	r8, r0
        20914c:	e59f1064 	ldr	r1, [pc, #64]	; 2091b8 <TArray::Save(unsigned long, unsigned long, unsigned long, unsigned long)+0xa4>
        209150:	eb65914d 	bl	1b6d68c <$NameHandle(char **, unsigned long)>
        209154:	e3380000 	teq	r8, #0	; 0x0
        209158:	0a000014 	beq	2091b0 <TArray::Save(unsigned long, unsigned long, unsigned long, unsigned long)+0x9c>
        20915c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        209160:	e5981000 	ldr	r1, [r8]
        209164:	e5810000 	str	r0, [r1]
        209168:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20916c:	e5981000 	ldr	r1, [r8]
        209170:	e5a10004 	str	r0, [r1, #4]!	; fField4
        209174:	e5941014 	ldr	r1, [r4, #20]	; fField20
        209178:	e5980000 	ldr	r0, [r8]
        20917c:	e1a02006 	mov	r2, r6
        209180:	e5a01008 	str	r1, [r0, #8]!	; fField8
        209184:	e1a01007 	mov	r1, r7
        209188:	e1a00008 	mov	r0, r8
        20918c:	e3a03000 	mov	r3, #0	; 0x0
        209190:	eb65914b 	bl	1b6d6c4 <$SaveResource__FPPclT2Pc>
        209194:	e1a02009 	mov	r2, r9
        209198:	e1a01005 	mov	r1, r5
        20919c:	e3a03000 	mov	r3, #0	; 0x0
        2091a0:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        2091a4:	eb659146 	bl	1b6d6c4 <$SaveResource__FPPclT2Pc>
        2091a8:	e1a00008 	mov	r0, r8
        2091ac:	eb6588f9 	bl	1b6b598 <$DeleteHandle(char **)>
        2091b0:	e3a00001 	mov	r0, #1	; 0x1
        2091b4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2091b8:	61736176 	cmnvs	r3, r6, ror r1
    */
}

/**
 * Symbol: TArray::GetEntry(unsigned long)
 * Address: 002091bc
 */
TArray::GetEntry(unsigned long) {
    /*
        2091bc:	e590201c 	ldr	r2, [r0, #28]	; fField28
        2091c0:	e3320000 	teq	r2, #0	; 0x0
        2091c4:	0a000004 	beq	2091dc <TArray::GetEntry(unsigned long)+0x20>
        2091c8:	e3510000 	cmp	r1, #0	; 0x0
        2091cc:	3a000002 	bcc	2091dc <TArray::GetEntry(unsigned long)+0x20>
        2091d0:	e590300c 	ldr	r3, [r0, #12]	; fField12
        2091d4:	e1530001 	cmp	r3, r1
        2091d8:	8a000001 	bhi	2091e4 <TArray::GetEntry(unsigned long)+0x28>
        2091dc:	e3a00000 	mov	r0, #0	; 0x0
        2091e0:	e1a0f00e 	mov	pc, lr
        2091e4:	e5922000 	ldr	r2, [r2]
        2091e8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2091ec:	e0202091 	mla	r0, r1, r0, r2
        2091f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TArray::GetIterator(TArrayIterator *)
 * Address: 002091f4
 */
TArray::GetIterator(TArrayIterator *) {
    /*
        2091f4:	e59f2034 	ldr	r2, [pc, #34]	; 209230 <TArray::GetIterator(TArrayIterator *)+0x3c>
        2091f8:	e5812018 	str	r2, [r1, #24]	; fField24
        2091fc:	e59f2030 	ldr	r2, [pc, #30]	; 209234 <TArray::GetIterator(TArrayIterator *)+0x40>
        209200:	e581201c 	str	r2, [r1, #28]	; fField28
        209204:	e3a02000 	mov	r2, #0	; 0x0
        209208:	e590301c 	ldr	r3, [r0, #28]	; fField28
        20920c:	e3330000 	teq	r3, #0	; 0x0
        209210:	1590c00c 	ldrne	ip, [r0, #12]	; fField12
        209214:	133c0000 	teqne	ip, #0	; 0x0
        209218:	0a000006 	beq	209238 <TArray::GetIterator(TArrayIterator *)+0x44>
        20921c:	e5813000 	str	r3, [r1]
        209220:	e5933000 	ldr	r3, [r3]
        209224:	e5813004 	str	r3, [r1, #4]	; fField4
        209228:	e5813008 	str	r3, [r1, #8]	; fField8
        20922c:	ea000004 	b	209244 <TArray::GetIterator(TArrayIterator *)+0x50>
        209230:	01b5ff84 	moveqs	pc, r4, lsl #31
        209234:	01b5ef54 	moveqs	lr, r4, asr pc
        209238:	e5812000 	str	r2, [r1]
        20923c:	e5812004 	str	r2, [r1, #4]	; fField4
        209240:	e5812008 	str	r2, [r1, #8]	; fField8
        209244:	e5903008 	ldr	r3, [r0, #8]	; fField8
        209248:	e5812010 	str	r2, [r1, #16]	; fField16
        20924c:	e581300c 	str	r3, [r1, #12]	; fField12
        209250:	e590000c 	ldr	r0, [r0, #12]	; fField12
        209254:	e5810014 	str	r0, [r1, #20]	; fField20
        209258:	e5b10008 	ldr	r0, [r1, #8]!	; fField8
        20925c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Make__6TArraySFUlT1
 * Address: 00209260
 */
void TArray::Make() {
    /*
        209260:	e1a0c00d 	mov	ip, sp
        209264:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        209268:	e24cb004 	sub	fp, ip, #4	; 0x4
        20926c:	e1a05000 	mov	r5, r0
        209270:	e1a04001 	mov	r4, r1
        209274:	e3a00000 	mov	r0, #0	; 0x0
        209278:	ebffff06 	bl	208e98 <TArray::__ct(void)>
        20927c:	e1b06000 	movs	r6, r0
        209280:	0a00000b 	beq	2092b4 <Make__6TArraySFUlT1+0x54>
        209284:	e3a00000 	mov	r0, #0	; 0x0
        209288:	e1a02004 	mov	r2, r4
        20928c:	e1a01005 	mov	r1, r5
        209290:	e586001c 	str	r0, [r6, #28]	; fField28
        209294:	e1a00006 	mov	r0, r6
        209298:	eb655b48 	bl	1b5ffc0 <TArray::$IArray(unsigned long, unsigned long)>
        20929c:	e3300000 	teq	r0, #0	; 0x0
        2092a0:	0a000003 	beq	2092b4 <Make__6TArraySFUlT1+0x54>
        2092a4:	e1a00006 	mov	r0, r6
        2092a8:	e1a0e00f 	mov	lr, pc
        2092ac:	e596f000 	ldr	pc, [r6]
        2092b0:	e3a06000 	mov	r6, #0	; 0x0
        2092b4:	e1a00006 	mov	r0, r6
        2092b8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TArray::Clear(void)
 * Address: 0020935c
 */
TArray::Clear(void) {
    /*
        20935c:	e3a01000 	mov	r1, #0	; 0x0
        209360:	e5902000 	ldr	r2, [r0]
        209364:	e282f028 	add	pc, r2, #40	; 0x28
    */
}

/**
 * Symbol: TArray::CutToIndex(unsigned long)
 * Address: 00209368
 */
TArray::CutToIndex(unsigned long) {
    /*
        209368:	e590200c 	ldr	r2, [r0, #12]	; fField12
        20936c:	e0421001 	sub	r1, r2, r1
        209370:	e0422001 	sub	r2, r2, r1
        209374:	e580200c 	str	r2, [r0, #12]	; fField12
        209378:	e5902010 	ldr	r2, [r0, #16]	; fField16
        20937c:	e0821001 	add	r1, r2, r1
        209380:	e5a01010 	str	r1, [r0, #16]!	; fField16
        209384:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TArray::Add(void)
 * Address: 00209388
 */
TArray::Add(void) {
    /*
        209388:	e1a0c00d 	mov	ip, sp
        20938c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        209390:	e24cb004 	sub	fp, ip, #4	; 0x4
        209394:	e1a04000 	mov	r4, r0
        209398:	e5901010 	ldr	r1, [r0, #16]	; fField16
        20939c:	e590500c 	ldr	r5, [r0, #12]	; fField12
        2093a0:	e5900014 	ldr	r0, [r0, #20]	; fField20
        2093a4:	e3e07000 	mvn	r7, #0	; 0x0
        2093a8:	e0816007 	add	r6, r1, r7
        2093ac:	e3310000 	teq	r1, #0	; 0x0
        2093b0:	1a000010 	bne	2093f8 <TArray::Add(void)+0x70>
        2093b4:	e1a06000 	mov	r6, r0
        2093b8:	e0850000 	add	r0, r5, r0
        2093bc:	e2801001 	add	r1, r0, #1	; 0x1
        2093c0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2093c4:	e0010190 	mul	r1, r0, r1
        2093c8:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2093cc:	eb6590b8 	bl	1b6d6b4 <$ResizeHandle(char **, long)>
        2093d0:	e3300000 	teq	r0, #0	; 0x0
        2093d4:	0a000007 	beq	2093f8 <TArray::Add(void)+0x70>
        2093d8:	e3a06000 	mov	r6, #0	; 0x0
        2093dc:	e2851001 	add	r1, r5, #1	; 0x1
        2093e0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2093e4:	e0010190 	mul	r1, r0, r1
        2093e8:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2093ec:	eb6590b0 	bl	1b6d6b4 <$ResizeHandle(char **, long)>
        2093f0:	e3500000 	cmp	r0, #0	; 0x0
        2093f4:	1a000004 	bne	20940c <TArray::Add(void)+0x84>
        2093f8:	e1a07005 	mov	r7, r5
        2093fc:	e2855001 	add	r5, r5, #1	; 0x1
        209400:	e5940004 	ldr	r0, [r4, #4]	; fField4
        209404:	e3800001 	orr	r0, r0, #1	; 0x1
        209408:	e5840004 	str	r0, [r4, #4]	; fField4
        20940c:	e1a00007 	mov	r0, r7
        209410:	e2844008 	add	r4, r4, #8	; 0x8
        209414:	e9a40060 	stmib	r4!, {r5, r6}
        209418:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TArray::AddEntry(void)
 * Address: 0020941c
 */
TArray::AddEntry(void) {
    /*
        20941c:	e1a0c00d 	mov	ip, sp
        209420:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        209424:	e24cb004 	sub	fp, ip, #4	; 0x4
        209428:	e1a04000 	mov	r4, r0
        20942c:	e5901000 	ldr	r1, [r0]
        209430:	e1a0e00f 	mov	lr, pc
        209434:	e281f014 	add	pc, r1, #20	; 0x14
        209438:	e1a01000 	mov	r1, r0
        20943c:	e1a00004 	mov	r0, r4
        209440:	e5942000 	ldr	r2, [r4]
        209444:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        209448:	e282f01c 	add	pc, r2, #28	; 0x1c
    */
}

/**
 * Symbol: TArray::SetEntry(unsigned long, char *)
 * Address: 0020944c
 */
TArray::SetEntry(unsigned long, char *) {
    /*
        20944c:	e1a0c00d 	mov	ip, sp
        209450:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        209454:	e24cb004 	sub	fp, ip, #4	; 0x4
        209458:	e1a04000 	mov	r4, r0
        20945c:	e1a05002 	mov	r5, r2
        209460:	e5902000 	ldr	r2, [r0]
        209464:	e1a0e00f 	mov	lr, pc
        209468:	e282f01c 	add	pc, r2, #28	; 0x1c
        20946c:	e1b01000 	movs	r1, r0
        209470:	11a00005 	movne	r0, r5
        209474:	15b42008 	ldrne	r2, [r4, #8]!	; fField8
        209478:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        20947c:	1a658c78 	bne	1b6c664 <$MoveBlock__FPcT1l>
        209480:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TArray::IArray(unsigned long, unsigned long)
 * Address: 00209484
 */
TArray::IArray(unsigned long, unsigned long) {
    /*
        209484:	e1a0c00d 	mov	ip, sp
        209488:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        20948c:	e24cb004 	sub	fp, ip, #4	; 0x4
        209490:	e1a04000 	mov	r4, r0
        209494:	e3a05000 	mov	r5, #0	; 0x0
        209498:	e3a00006 	mov	r0, #6	; 0x6
        20949c:	e3a06000 	mov	r6, #0	; 0x0
        2094a0:	e3320000 	teq	r2, #0	; 0x0
        2094a4:	e5840014 	str	r0, [r4, #20]	; fField20
        2094a8:	e5846004 	str	r6, [r4, #4]	; fField4
        2094ac:	03a00006 	moveq	r0, #6	; 0x6
        2094b0:	13a00000 	movne	r0, #0	; 0x0
        2094b4:	e5840010 	str	r0, [r4, #16]	; fField16
        2094b8:	e2844008 	add	r4, r4, #8	; 0x8
        2094bc:	e8840006 	stmia	r4, {r1, r2}
        2094c0:	e2444008 	sub	r4, r4, #8	; 0x8
        2094c4:	e594301c 	ldr	r3, [r4, #28]	; fField28
        2094c8:	e3330000 	teq	r3, #0	; 0x0
        2094cc:	0a00000a 	beq	2094fc <TArray::IArray(unsigned long, unsigned long)+0x78>
        2094d0:	e0802002 	add	r2, r0, r2
        2094d4:	e1a00001 	mov	r0, r1
        2094d8:	e0010290 	mul	r1, r0, r2
        2094dc:	e1a00003 	mov	r0, r3
        2094e0:	eb659073 	bl	1b6d6b4 <$ResizeHandle(char **, long)>
        2094e4:	e1b05000 	movs	r5, r0
        2094e8:	0a000010 	beq	209530 <TArray::IArray(unsigned long, unsigned long)+0xac>
        2094ec:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2094f0:	eb658828 	bl	1b6b598 <$DeleteHandle(char **)>
        2094f4:	e584601c 	str	r6, [r4, #28]	; fField28
        2094f8:	ea00000a 	b	209528 <TArray::IArray(unsigned long, unsigned long)+0xa4>
        2094fc:	e0800002 	add	r0, r0, r2
        209500:	e0000091 	mul	r0, r1, r0
        209504:	eb658c54 	bl	1b6c65c <$MakeHandle(long)>
        209508:	e1a07000 	mov	r7, r0
        20950c:	e59f1028 	ldr	r1, [pc, #28]	; 20953c <TArray::IArray(unsigned long, unsigned long)+0xb8>	; fField28
        209510:	eb65905d 	bl	1b6d68c <$NameHandle(char **, unsigned long)>
        209514:	e584701c 	str	r7, [r4, #28]	; fField28
        209518:	e3370000 	teq	r7, #0	; 0x0
        20951c:	1a000003 	bne	209530 <TArray::IArray(unsigned long, unsigned long)+0xac>
        209520:	eb658c4e 	bl	1b6c660 <$MemoryError(void)>
        209524:	e1a05000 	mov	r5, r0
        209528:	e3350000 	teq	r5, #0	; 0x0
        20952c:	1584600c 	strne	r6, [r4, #12]	; fField12
        209530:	e1a00005 	mov	r0, r5
        209534:	e5a46018 	str	r6, [r4, #24]!	; fField24
        209538:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        20953c:	61647461 	cmnvs	r4, r1, ror #8
    */
}

/**
 * Symbol: TArray::Dump(TMsg *)
 * Address: 00209540
 */
TArray::Dump(TMsg *) {
    /*
        209540:	e1a0c00d 	mov	ip, sp
        209544:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        209548:	e24cb004 	sub	fp, ip, #4	; 0x4
        20954c:	e1a04001 	mov	r4, r1
        209550:	e24dd064 	sub	sp, sp, #100	; 0x64
        209554:	e5903010 	ldr	r3, [r0, #16]	; fField16
        209558:	e92d0008 	stmdb	sp!, {r3}
        20955c:	e2800004 	add	r0, r0, #4	; 0x4
        209560:	e9b0000c 	ldmib	r0!, {r2, r3}
        209564:	e28d0004 	add	r0, sp, #4	; 0x4
        209568:	e28f1f07 	add	r1, pc, #28	; 0x1c
        20956c:	eb66b148 	bl	1bb5a94 <$sprintf>
        209570:	e28dd004 	add	sp, sp, #4	; 0x4
        209574:	e1a0100d 	mov	r1, sp
        209578:	e1a00004 	mov	r0, r4
        20957c:	eb659040 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        209580:	e1a00004 	mov	r0, r4
        209584:	eb658c3b 	bl	1b6c678 <TMsg::$MsgLF(void)>
        209588:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        20958c:	0d096573 	stceq	5, cr6, [r9, -#460]
        209590:	3a20256c 	bcc	a12b48 <ROM$$Size+0x2f2efc>
        209594:	64202063 	strvst	r2, [r0], -#99	; fField99
        209598:	6e743a20 	cdpvs	10, 7, cr3, cr4, cr0, {1}
        20959c:	256c6420 	strcsb	r6, [ip, -#1056]!
        2095a0:	20667265 	rsbcs	r7, r6, r5, ror #4
        2095a4:	653a2025 	ldrvs	r2, [sl, -#37]!
        2095a8:	6c640000 	stcvsl	0, cr0, [r4]
    */
}

/**
 * Symbol: TArray::Dispose(void)
 * Address: 002095ac
 */
TArray::Dispose(void) {
    /*
        2095ac:	e1a0c00d 	mov	ip, sp
        2095b0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2095b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2095b8:	e1a04000 	mov	r4, r0
        2095bc:	eb6562dc 	bl	1b62134 <TArray::$Release(void)>
        2095c0:	e3300000 	teq	r0, #0	; 0x0
        2095c4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        2095c8:	e1a00004 	mov	r0, r4
        2095cc:	e5941000 	ldr	r1, [r4]
        2095d0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2095d4:	e281f010 	add	pc, r1, #16	; 0x10
    */
}

/**
 * Symbol: TArray::IDispose(void)
 * Address: 002095d8
 */
TArray::IDispose(void) {
    /*
        2095d8:	e1a0c00d 	mov	ip, sp
        2095dc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2095e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2095e4:	e1a04000 	mov	r4, r0
        2095e8:	e590001c 	ldr	r0, [r0, #28]	; fField28
        2095ec:	e3300000 	teq	r0, #0	; 0x0
        2095f0:	1b6587e8 	blne	1b6b598 <$DeleteHandle(char **)>
        2095f4:	e1b00004 	movs	r0, r4
        2095f8:	13a01001 	movne	r1, #1	; 0x1
        2095fc:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        209600:	1afffe34 	bne	208ed8 <TArray::__dt(void)>
        209604:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TArray::Clone(void)
 * Address: 00209608
 */
TArray::Clone(void) {
    /*
        209608:	e5901018 	ldr	r1, [r0, #24]	; fField24
        20960c:	e2811001 	add	r1, r1, #1	; 0x1
        209610:	e5a01018 	str	r1, [r0, #24]!	; fField24
        209614:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TArray::Release(void)
 * Address: 00209618
 */
TArray::Release(void) {
    /*
        209618:	e5901018 	ldr	r1, [r0, #24]	; fField24
        20961c:	e2511001 	subs	r1, r1, #1	; 0x1
        209620:	e5a01018 	str	r1, [r0, #24]!	; fField24
        209624:	53a00000 	movpl	r0, #0	; 0x0
        209628:	43a00001 	movmi	r0, #1	; 0x1
        20962c:	e20000ff 	and	r0, r0, #255	; 0xff
        209630:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TArray::Lock(void)
 * Address: 00209634
 */
TArray::Lock(void) {
    /*
        209634:	e590001c 	ldr	r0, [r0, #28]	; fField28
        209638:	e3300000 	teq	r0, #0	; 0x0
        20963c:	1a658bfe 	bne	1b6c63c <$LockHandle(char **)>
        209640:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TArray::Unlock(void)
 * Address: 00209644
 */
TArray::Unlock(void) {
    /*
        209644:	e590001c 	ldr	r0, [r0, #28]	; fField28
        209648:	e3300000 	teq	r0, #0	; 0x0
        20964c:	1a65942f 	bne	1b6e710 <$UnlockHandle(char **)>
        209650:	e1a0f00e 	mov	pc, lr
    */
}

