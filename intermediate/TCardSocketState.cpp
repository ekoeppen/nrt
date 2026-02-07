#include "include/TCardSocketState.h"

/**
 * Symbol: TCardSocketState::__ct(void)
 * Address: 0005105c
 */
TCardSocketState::TCardSocketState(void) {
    /*
         5105c:	e1a0c00d 	mov	ip, sp
         51060:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         51064:	e24cb004 	sub	fp, ip, #4	; 0x4
         51068:	e1b04000 	movs	r4, r0
         5106c:	1a000003 	bne	51080 <TCardSocketState::__ct(void)+0x24>
         51070:	e3a00fda 	mov	r0, #872	; 0x368
         51074:	eb6df5af 	bl	1bce738 <$__nw(unsigned int)>
         51078:	e1b04000 	movs	r4, r0
         5107c:	0a000016 	beq	510dc <TCardSocketState::__ct(void)+0x80>
         51080:	e3a05000 	mov	r5, #0	; 0x0
         51084:	e5c45034 	strb	r5, [r4, #52]
         51088:	e5845030 	str	r5, [r4, #48]
         5108c:	e2840058 	add	r0, r4, #88	; 0x58
         51090:	eb6b9282 	bl	1b35aa0 <TCardAsyncMsg::$__ct(void)>
         51094:	e2840f49 	add	r0, r4, #292	; 0x124
         51098:	eb6b9280 	bl	1b35aa0 <TCardAsyncMsg::$__ct(void)>
         5109c:	e5c451f8 	strb	r5, [r4, #504]
         510a0:	e58451f4 	str	r5, [r4, #500]
         510a4:	e2840e21 	add	r0, r4, #528	; 0x210
         510a8:	eb6e4c5f 	bl	1be422c <CList::$__ct(void)>
         510ac:	e584522c 	str	r5, [r4, #556]
         510b0:	e5845238 	str	r5, [r4, #568]
         510b4:	e5845230 	str	r5, [r4, #560]
         510b8:	e5845234 	str	r5, [r4, #564]
         510bc:	e2840f8f 	add	r0, r4, #572	; 0x23c
         510c0:	eb6b9276 	bl	1b35aa0 <TCardAsyncMsg::$__ct(void)>
         510c4:	e2840fc5 	add	r0, r4, #788	; 0x314
         510c8:	eb6eaf5e 	bl	1bfce48 <TATAPartitionInfo::$__ct(void)>
         510cc:	e2840fcd 	add	r0, r4, #820	; 0x334
         510d0:	eb6eaf5e 	bl	1bfce50 <TATABootParamBlock::$__ct(void)>
         510d4:	e2840fd2 	add	r0, r4, #840	; 0x348
         510d8:	eb6edcd6 	bl	1c08438 <TCardATALoader::$__ct(void)>
         510dc:	e1a00004 	mov	r0, r4
         510e0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocketState::Init(void)
 * Address: 000510e4
 */
TCardSocketState::Init(void) {
    /*
         510e4:	e1a0c00d 	mov	ip, sp
         510e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         510ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         510f0:	e1a04000 	mov	r4, r0
         510f4:	e3a05000 	mov	r5, #0	; 0x0
         510f8:	e5805004 	str	r5, [r0, #4]
         510fc:	e580535c 	str	r5, [r0, #860]
         51100:	e2800f7d 	add	r0, r0, #500	; 0x1f4
         51104:	e1a01005 	mov	r1, r5
         51108:	eb6dfdce 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         5110c:	e584520c 	str	r5, [r4, #524]	; fField524
         51110:	e5940000 	ldr	r0, [r4]
         51114:	e3c00203 	bic	r0, r0, #805306368	; 0x30000000
         51118:	e5840000 	str	r0, [r4]
         5111c:	e5845308 	str	r5, [r4, #776]	; fField776
         51120:	e5845310 	str	r5, [r4, #784]	; fField784
         51124:	e584530c 	str	r5, [r4, #780]	; fField780
         51128:	e5845228 	str	r5, [r4, #552]	; fField552
         5112c:	e2840fc5 	add	r0, r4, #788	; 0x314
         51130:	e584033c 	str	r0, [r4, #828]	; fField828
         51134:	e1a00004 	mov	r0, r4
         51138:	eb6b967f 	bl	1b36b3c <TCardSocketState::$Clear(void)>
         5113c:	e2840058 	add	r0, r4, #88	; 0x58
         51140:	eb6b9a93 	bl	1b37b94 <TCardAsyncMsg::$Init(void)>
         51144:	e3300000 	teq	r0, #0	; 0x0
         51148:	02840f49 	addeq	r0, r4, #292	; 0x124
         5114c:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         51150:	0a6b9a8f 	beq	1b37b94 <TCardAsyncMsg::$Init(void)>
         51154:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocketState::Clear(void)
 * Address: 00051600
 */
TCardSocketState::Clear(void) {
    /*
         51600:	e1a0c00d 	mov	ip, sp
         51604:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         51608:	e24cb004 	sub	fp, ip, #4	; 0x4
         5160c:	e1a04000 	mov	r4, r0
         51610:	e5900000 	ldr	r0, [r0]
         51614:	e3c004ce 	bic	r0, r0, #-838860800	; 0xce000000
         51618:	e3a05000 	mov	r5, #0	; 0x0
         5161c:	e8840021 	stmia	r4, {r0, r5}
         51620:	e3e00000 	mvn	r0, #0	; 0x0
         51624:	e2844008 	add	r4, r4, #8	; 0x8
         51628:	e8840021 	stmia	r4, {r0, r5}
         5162c:	e2444008 	sub	r4, r4, #8	; 0x8
         51630:	e5c45010 	strb	r5, [r4, #16]	; fField16
         51634:	e2840030 	add	r0, r4, #48	; 0x30
         51638:	e1a01005 	mov	r1, r5
         5163c:	eb6dfc81 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         51640:	e5845360 	str	r5, [r4, #864]	; fField864
         51644:	e5845364 	str	r5, [r4, #868]	; fField868
         51648:	e5940000 	ldr	r0, [r4]
         5164c:	e3c00401 	bic	r0, r0, #16777216	; 0x1000000
         51650:	e5840000 	str	r0, [r4]
         51654:	e3a00000 	mov	r0, #0	; 0x0
         51658:	e0841100 	add	r1, r4, r0, lsl #2
         5165c:	e2800001 	add	r0, r0, #1	; 0x1
         51660:	e3500004 	cmp	r0, #4	; 0x4
         51664:	e5a151fc 	str	r5, [r1, #508]!
         51668:	3afffffa 	bcc	51658 <TCardSocketState::Clear(void)+0x58>
         5166c:	e3a00000 	mov	r0, #0	; 0x0
         51670:	e0841100 	add	r1, r4, r0, lsl #2
         51674:	e2800001 	add	r0, r0, #1	; 0x1
         51678:	e3500008 	cmp	r0, #8	; 0x8
         5167c:	e5a15038 	str	r5, [r1, #56]!
         51680:	3afffffa 	bcc	51670 <TCardSocketState::Clear(void)+0x70>
         51684:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocketState::__dt(void)
 * Address: 00051ca0
 */
TCardSocketState::~TCardSocketState(void) {
    /*
         51ca0:	e1a0c00d 	mov	ip, sp
         51ca4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         51ca8:	e24cb004 	sub	fp, ip, #4	; 0x4
         51cac:	e1a04000 	mov	r4, r0
         51cb0:	e1a05001 	mov	r5, r1
         51cb4:	e590035c 	ldr	r0, [r0, #860]
         51cb8:	e3300000 	teq	r0, #0	; 0x0
         51cbc:	13a01001 	movne	r1, #1	; 0x1
         51cc0:	1b6dee88 	blne	1bcd6e8 <TCardPCMCIA::$__dt(void)>
         51cc4:	e2840f7d 	add	r0, r4, #500	; 0x1f4
         51cc8:	e1a07000 	mov	r7, r0
         51ccc:	e3a01000 	mov	r1, #0	; 0x0
         51cd0:	eb6dfadc 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         51cd4:	e2840fd2 	add	r0, r4, #840	; 0x348
         51cd8:	e3a01000 	mov	r1, #0	; 0x0
         51cdc:	eb6ed9d7 	bl	1c08440 <TCardATALoader::$__dt(void)>
         51ce0:	e2840fcd 	add	r0, r4, #820	; 0x334
         51ce4:	e3a01000 	mov	r1, #0	; 0x0
         51ce8:	eb6eac59 	bl	1bfce54 <TATABootParamBlock::$__dt(void)>
         51cec:	e2840fc5 	add	r0, r4, #788	; 0x314
         51cf0:	e3a01000 	mov	r1, #0	; 0x0
         51cf4:	eb6eac54 	bl	1bfce4c <TATAPartitionInfo::$__dt(void)>
         51cf8:	e2846f8f 	add	r6, r4, #572	; 0x23c
         51cfc:	e28600bc 	add	r0, r6, #188	; 0xbc
         51d00:	e3a01000 	mov	r1, #0	; 0x0
         51d04:	eb6df281 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         51d08:	e1a00006 	mov	r0, r6
         51d0c:	e3a01000 	mov	r1, #0	; 0x0
         51d10:	eb6dee78 	bl	1bcd6f8 <TCardMessage::$__dt(void)>
         51d14:	e2840e21 	add	r0, r4, #528	; 0x210
         51d18:	e3a01000 	mov	r1, #0	; 0x0
         51d1c:	eb6e4d58 	bl	1be5284 <CList::$__dt(void)>
         51d20:	e1a00007 	mov	r0, r7
         51d24:	e3a01000 	mov	r1, #0	; 0x0
         51d28:	eb6df27d 	bl	1bce724 <TUObject::$__dt(void)>
         51d2c:	e2846f49 	add	r6, r4, #292	; 0x124
         51d30:	e28600bc 	add	r0, r6, #188	; 0xbc
         51d34:	e3a01000 	mov	r1, #0	; 0x0
         51d38:	eb6df274 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         51d3c:	e1a00006 	mov	r0, r6
         51d40:	e3a01000 	mov	r1, #0	; 0x0
         51d44:	eb6dee6b 	bl	1bcd6f8 <TCardMessage::$__dt(void)>
         51d48:	e2846058 	add	r6, r4, #88	; 0x58
         51d4c:	e28600bc 	add	r0, r6, #188	; 0xbc
         51d50:	e3a01000 	mov	r1, #0	; 0x0
         51d54:	eb6df26d 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         51d58:	e1a00006 	mov	r0, r6
         51d5c:	e3a01000 	mov	r1, #0	; 0x0
         51d60:	eb6dee64 	bl	1bcd6f8 <TCardMessage::$__dt(void)>
         51d64:	e2840030 	add	r0, r4, #48	; 0x30
         51d68:	e3a01000 	mov	r1, #0	; 0x0
         51d6c:	eb6df26c 	bl	1bce724 <TUObject::$__dt(void)>
         51d70:	e3150001 	tst	r5, #1	; 0x1
         51d74:	11a00004 	movne	r0, r4
         51d78:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
         51d7c:	1a6dee57 	bne	1bcd6e0 <$__dl(void *)>
         51d80:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

