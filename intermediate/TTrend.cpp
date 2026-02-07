#include "include/TTrend.h"

/**
 * Symbol: Make__6TTrendSFl
 * Address: 0022bbb8
 */
void TTrend::Make() {
    /*
        22bbb8:	e1a0c00d 	mov	ip, sp
        22bbbc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22bbc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        22bbc4:	e1a04000 	mov	r4, r0
        22bbc8:	e3a0003c 	mov	r0, #60	; 0x3c
        22bbcc:	eb668ad9 	bl	1bce738 <$__nw(unsigned int)>
        22bbd0:	e1b05000 	movs	r5, r0
        22bbd4:	0a000003 	beq	22bbe8 <Make__6TTrendSFl+0x30>
        22bbd8:	e1a00005 	mov	r0, r5
        22bbdc:	ebff82e0 	bl	20c764 <TDArray::__ct(void)>
        22bbe0:	e59f003c 	ldr	r0, [pc, #3c]	; 22bc24 <Make__6TTrendSFl+0x6c>
        22bbe4:	e5850000 	str	r0, [r5]
        22bbe8:	e3350000 	teq	r5, #0	; 0x0
        22bbec:	0a00000a 	beq	22bc1c <Make__6TTrendSFl+0x64>
        22bbf0:	e3a00000 	mov	r0, #0	; 0x0
        22bbf4:	e1a01004 	mov	r1, r4
        22bbf8:	e585001c 	str	r0, [r5, #28]
        22bbfc:	e1a00005 	mov	r0, r5
        22bc00:	eb64d112 	bl	1b60050 <TTrend::$ITrend(long)>
        22bc04:	e3300000 	teq	r0, #0	; 0x0
        22bc08:	0a000003 	beq	22bc1c <Make__6TTrendSFl+0x64>
        22bc0c:	e1a00005 	mov	r0, r5
        22bc10:	e1a0e00f 	mov	lr, pc
        22bc14:	e595f000 	ldr	pc, [r5]
        22bc18:	e3a05000 	mov	r5, #0	; 0x0
        22bc1c:	e1a00005 	mov	r0, r5
        22bc20:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        22bc24:	0001f9a8 	andeq	pc, r1, r8, lsr #19
    */
}

/**
 * Symbol: TTrend::ITrend(long)
 * Address: 0022bc28
 */
TTrend::ITrend(long) {
    /*
        22bc28:	e1a0c00d 	mov	ip, sp
        22bc2c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22bc30:	e24cb004 	sub	fp, ip, #4	; 0x4
        22bc34:	e1a04000 	mov	r4, r0
        22bc38:	e1a05001 	mov	r5, r1
        22bc3c:	e3a02000 	mov	r2, #0	; 0x0
        22bc40:	e3a0101c 	mov	r1, #28	; 0x1c
        22bc44:	eb64d0e1 	bl	1b5ffd0 <TDArray::$IDArray(unsigned long, unsigned long)>
        22bc48:	e3300000 	teq	r0, #0	; 0x0
        22bc4c:	13a00001 	movne	r0, #1	; 0x1
        22bc50:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        22bc54:	e3a00000 	mov	r0, #0	; 0x0
        22bc58:	e5840020 	str	r0, [r4, #32]	; fField32
        22bc5c:	e5840024 	str	r0, [r4, #36]	; fField36
        22bc60:	e5840028 	str	r0, [r4, #40]	; fField40
        22bc64:	e584002c 	str	r0, [r4, #44]	; fField44
        22bc68:	e5840030 	str	r0, [r4, #48]	; fField48
        22bc6c:	e2844030 	add	r4, r4, #48	; 0x30
        22bc70:	e9a40021 	stmib	r4!, {r0, r5}
        22bc74:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTrend::FindCluster(long)
 * Address: 0022bc78
 */
TTrend::FindCluster(long) {
    /*
        22bc78:	e1a0c00d 	mov	ip, sp
        22bc7c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        22bc80:	e24cb004 	sub	fp, ip, #4	; 0x4
        22bc84:	e1a04000 	mov	r4, r0
        22bc88:	e1a05001 	mov	r5, r1
        22bc8c:	e3e07000 	mvn	r7, #0	; 0x0
        22bc90:	e3a06000 	mov	r6, #0	; 0x0
        22bc94:	e590000c 	ldr	r0, [r0, #12]	; fField12
        22bc98:	e3500000 	cmp	r0, #0	; 0x0
        22bc9c:	9a00000f 	bls	22bce0 <TTrend::FindCluster(long)+0x68>
        22bca0:	e1a01006 	mov	r1, r6
        22bca4:	e1a00004 	mov	r0, r4
        22bca8:	e5942000 	ldr	r2, [r4]
        22bcac:	e1a0e00f 	mov	lr, pc
        22bcb0:	e282f01c 	add	pc, r2, #28	; 0x1c
        22bcb4:	e5901010 	ldr	r1, [r0, #16]
        22bcb8:	e1510005 	cmp	r1, r5
        22bcbc:	ba000003 	blt	22bcd0 <TTrend::FindCluster(long)+0x58>
        22bcc0:	e590000c 	ldr	r0, [r0, #12]	; fField12
        22bcc4:	e1500005 	cmp	r0, r5
        22bcc8:	d1a07006 	movle	r7, r6
        22bccc:	ea000003 	b	22bce0 <TTrend::FindCluster(long)+0x68>
        22bcd0:	e2866001 	add	r6, r6, #1	; 0x1
        22bcd4:	e594000c 	ldr	r0, [r4, #12]	; fField12
        22bcd8:	e1500006 	cmp	r0, r6
        22bcdc:	8affffef 	bhi	22bca0 <TTrend::FindCluster(long)+0x28>
        22bce0:	e1a00007 	mov	r0, r7
        22bce4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TTrend::NewCluster(long, long)
 * Address: 0022bce8
 */
TTrend::NewCluster(long, long) {
    /*
        22bce8:	e1a0c00d 	mov	ip, sp
        22bcec:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        22bcf0:	e24cb004 	sub	fp, ip, #4	; 0x4
        22bcf4:	e1a04000 	mov	r4, r0
        22bcf8:	e1b06001 	movs	r6, r1
        22bcfc:	e1a05002 	mov	r5, r2
        22bd00:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        22bd04:	e590700c 	ldr	r7, [r0, #12]	; fField12
        22bd08:	e5900028 	ldr	r0, [r0, #40]	; fField40
        22bd0c:	e2800001 	add	r0, r0, #1	; 0x1
        22bd10:	e5840028 	str	r0, [r4, #40]	; fField40
        22bd14:	1a000004 	bne	22bd2c <TTrend::NewCluster(long, long)+0x44>
        22bd18:	e3370000 	teq	r7, #0	; 0x0
        22bd1c:	e5845020 	str	r5, [r4, #32]	; fField32
        22bd20:	05845024 	streq	r5, [r4, #36]	; fField36
        22bd24:	0a00000b 	beq	22bd58 <TTrend::NewCluster(long, long)+0x70>
        22bd28:	ea000001 	b	22bd34 <TTrend::NewCluster(long, long)+0x4c>
        22bd2c:	e3760001 	cmn	r6, #1	; 0x1
        22bd30:	05845024 	streq	r5, [r4, #36]	; fField36
        22bd34:	e3570000 	cmp	r7, #0	; 0x0
        22bd38:	da000006 	ble	22bd58 <TTrend::NewCluster(long, long)+0x70>
        22bd3c:	e2841020 	add	r1, r4, #32	; 0x20
        22bd40:	e8910003 	ldmia	r1, {r0, r1}
        22bd44:	e0410000 	sub	r0, r1, r0
        22bd48:	e1a00800 	mov	r0, r0, lsl #16
        22bd4c:	e1a01807 	mov	r1, r7, lsl #16
        22bd50:	eb66d4da 	bl	1be10c0 <$FixedDivide>
        22bd54:	e5840030 	str	r0, [r4, #48]	; fField48
        22bd58:	e58d5000 	str	r5, [sp]
        22bd5c:	e58d5008 	str	r5, [sp, #8]
        22bd60:	e58d500c 	str	r5, [sp, #12]	; fField12
        22bd64:	e58d5010 	str	r5, [sp, #16]
        22bd68:	e3a00000 	mov	r0, #0	; 0x0
        22bd6c:	e58d0004 	str	r0, [sp, #4]
        22bd70:	e3a00001 	mov	r0, #1	; 0x1
        22bd74:	e3760001 	cmn	r6, #1	; 0x1
        22bd78:	e58d0014 	str	r0, [sp, #20]
        22bd7c:	e58d5018 	str	r5, [sp, #24]
        22bd80:	01a06007 	moveq	r6, r7
        22bd84:	e1a0200d 	mov	r2, sp
        22bd88:	e1a01006 	mov	r1, r6
        22bd8c:	e1a00004 	mov	r0, r4
        22bd90:	e5943000 	ldr	r3, [r4]
        22bd94:	e1a0e00f 	mov	lr, pc
        22bd98:	e283f04c 	add	pc, r3, #76	; 0x4c
        22bd9c:	e3700001 	cmn	r0, #1	; 0x1
        22bda0:	13a00000 	movne	r0, #0	; 0x0
        22bda4:	03a00001 	moveq	r0, #1	; 0x1
        22bda8:	e20000ff 	and	r0, r0, #255	; 0xff
        22bdac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TTrend::Dispose(void)
 * Address: 0022be04
 */
TTrend::Dispose(void) {
    /*
        22be04:	ea64c822 	b	1b5de94 <TArray::$Dispose(void)>
    */
}

/**
 * Symbol: TTrend::AddToCluster(long, long)
 * Address: 0022be08
 */
TTrend::AddToCluster(long, long) {
    /*
        22be08:	e1a0c00d 	mov	ip, sp
        22be0c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        22be10:	e24cb004 	sub	fp, ip, #4	; 0x4
        22be14:	e1a04000 	mov	r4, r0
        22be18:	e1a06001 	mov	r6, r1
        22be1c:	e1a05002 	mov	r5, r2
        22be20:	e24dd004 	sub	sp, sp, #4	; 0x4
        22be24:	e5902000 	ldr	r2, [r0]
        22be28:	e1a0e00f 	mov	lr, pc
        22be2c:	e282f01c 	add	pc, r2, #28	; 0x1c
        22be30:	e1a07000 	mov	r7, r0
        22be34:	e5900000 	ldr	r0, [r0]
        22be38:	e1350000 	teq	r5, r0
        22be3c:	03a00000 	moveq	r0, #0	; 0x0
        22be40:	0a000003 	beq	22be54 <TTrend::AddToCluster(long, long)+0x4c>
        22be44:	e0450000 	sub	r0, r5, r0
        22be48:	e3500000 	cmp	r0, #0	; 0x0
        22be4c:	d3a00001 	movle	r0, #1	; 0x1
        22be50:	c3a00002 	movgt	r0, #2	; 0x2
        22be54:	e58d0000 	str	r0, [sp]
        22be58:	e5970010 	ldr	r0, [r7, #16]
        22be5c:	e1500005 	cmp	r0, r5
        22be60:	b5875010 	strlt	r5, [r7, #16]
        22be64:	ba000002 	blt	22be74 <TTrend::AddToCluster(long, long)+0x6c>
        22be68:	e597000c 	ldr	r0, [r7, #12]	; fField12
        22be6c:	e1500005 	cmp	r0, r5
        22be70:	c587500c 	strgt	r5, [r7, #12]	; fField12
        22be74:	e5970014 	ldr	r0, [r7, #20]
        22be78:	e2808001 	add	r8, r0, #1	; 0x1
        22be7c:	e5878014 	str	r8, [r7, #20]
        22be80:	e5940028 	ldr	r0, [r4, #40]	; fField40
        22be84:	e2800001 	add	r0, r0, #1	; 0x1
        22be88:	e5840028 	str	r0, [r4, #40]	; fField40
        22be8c:	e594002c 	ldr	r0, [r4, #44]	; fField44
        22be90:	e2800001 	add	r0, r0, #1	; 0x1
        22be94:	e3380002 	teq	r8, #2	; 0x2
        22be98:	e584002c 	str	r0, [r4, #44]	; fField44
        22be9c:	02800001 	addeq	r0, r0, #1	; 0x1
        22bea0:	0584002c 	streq	r0, [r4, #44]	; fField44
        22bea4:	e8970201 	ldmia	r7, {r0, r9}
        22bea8:	e0550000 	subs	r0, r5, r0
        22beac:	42600000 	rsbmi	r0, r0, #0	; 0x0
        22beb0:	e1a0a000 	mov	sl, r0
        22beb4:	e3580001 	cmp	r8, #1	; 0x1
        22beb8:	d28f0f0a 	addle	r0, pc, #40	; 0x28
        22bebc:	db67166f 	blle	1bf1880 <$printf>
        22bec0:	e594002c 	ldr	r0, [r4, #44]	; fField44
        22bec4:	e3500001 	cmp	r0, #1	; 0x1
        22bec8:	d28f0f0b 	addle	r0, pc, #44	; 0x2c
        22becc:	db67166b 	blle	1bf1880 <$printf>
        22bed0:	e3390000 	teq	r9, #0	; 0x0
        22bed4:	1a00000f 	bne	22bf18 <TTrend::AddToCluster(long, long)+0x110>
        22bed8:	e1a01808 	mov	r1, r8, lsl #16
        22bedc:	e1a0080a 	mov	r0, sl, lsl #16
        22bee0:	eb66d476 	bl	1be10c0 <$FixedDivide>
        22bee4:	ea000013 	b	22bf38 <TTrend::AddToCluster(long, long)+0x130>
        22bee8:	44656275 	strmibt	r6, [r5], -#629
        22beec:	674d7367 	strvsb	r7, [sp, -r7, ror #6]
        22bef0:	3a206675 	bcc	a458cc <ROM$$Size+0x325c80>
        22bef4:	6e6b790d 	cdpvs	9, 6, cr7, cr11, cr13, {0}
        22bef8:	00000000 	andeq	r0, r0, r0
        22befc:	44656275 	strmibt	r6, [r5], -#629
        22bf00:	674d7367 	strvsb	r7, [sp, -r7, ror #6]
        22bf04:	3a206675 	bcc	a458e0 <ROM$$Size+0x325c94>
        22bf08:	6e6b7920 	cdpvs	9, 6, cr7, cr11, cr0, {1}
        22bf0c:	746f7461 	strvcbt	r7, [pc], #461	; 22bf14 <TTrend::AddToCluster(long, long)+0x10c>
        22bf10:	6c566172 	mrrcvs	1, 7, r6, r6, cr2
        22bf14:	0d000000 	stceq	0, cr0, [r0]
        22bf18:	e0000899 	mul	r0, r9, r8
        22bf1c:	e080180a 	add	r1, r0, sl, lsl #16
        22bf20:	e1a00008 	mov	r0, r8
        22bf24:	eb661a85 	bl	1bb2940 <$__rt_sdiv>
        22bf28:	e2482001 	sub	r2, r8, #1	; 0x1
        22bf2c:	e0010092 	mul	r1, r2, r0
        22bf30:	e1a00008 	mov	r0, r8
        22bf34:	eb661a81 	bl	1bb2940 <$__rt_sdiv>
        22bf38:	e5870004 	str	r0, [r7, #4]
        22bf3c:	e5970008 	ldr	r0, [r7, #8]
        22bf40:	e0801005 	add	r1, r0, r5
        22bf44:	e1a00008 	mov	r0, r8
        22bf48:	e5871008 	str	r1, [r7, #8]
        22bf4c:	eb661a7b 	bl	1bb2940 <$__rt_sdiv>
        22bf50:	e5870000 	str	r0, [r7]
        22bf54:	e594002c 	ldr	r0, [r4, #44]	; fField44
        22bf58:	e2402001 	sub	r2, r0, #1	; 0x1
        22bf5c:	e5941034 	ldr	r1, [r4, #52]	; fField52
        22bf60:	e0020291 	mul	r2, r1, r2
        22bf64:	e2481001 	sub	r1, r8, #1	; 0x1
        22bf68:	e0010199 	mul	r1, r9, r1
        22bf6c:	e0422001 	sub	r2, r2, r1
        22bf70:	e5971004 	ldr	r1, [r7, #4]
        22bf74:	e0212198 	mla	r1, r8, r1, r2
        22bf78:	eb661a70 	bl	1bb2940 <$__rt_sdiv>
        22bf7c:	e3360000 	teq	r6, #0	; 0x0
        22bf80:	e5840034 	str	r0, [r4, #52]	; fField52
        22bf84:	05970000 	ldreq	r0, [r7]
        22bf88:	05840020 	streq	r0, [r4, #32]	; fField32
        22bf8c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        22bf90:	e2401001 	sub	r1, r0, #1	; 0x1
        22bf94:	e1310006 	teq	r1, r6
        22bf98:	05972000 	ldreq	r2, [r7]
        22bf9c:	05842024 	streq	r2, [r4, #36]	; fField36
        22bfa0:	e3500001 	cmp	r0, #1	; 0x1
        22bfa4:	9a000006 	bls	22bfc4 <TTrend::AddToCluster(long, long)+0x1bc>
        22bfa8:	e1a01801 	mov	r1, r1, lsl #16
        22bfac:	e2842020 	add	r2, r4, #32	; 0x20
        22bfb0:	e8920005 	ldmia	r2, {r0, r2}
        22bfb4:	e0420000 	sub	r0, r2, r0
        22bfb8:	e1a00800 	mov	r0, r0, lsl #16
        22bfbc:	eb66d43f 	bl	1be10c0 <$FixedDivide>
        22bfc0:	e5a40030 	str	r0, [r4, #48]!	; fField48
        22bfc4:	e49d0004 	ldr	r0, [sp], #4
        22bfc8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TTrend::AddToTrend(long, long *, unsigned char)
 * Address: 0022bfcc
 */
TTrend::AddToTrend(long, long *, unsigned char) {
    /*
        22bfcc:	e1a0c00d 	mov	ip, sp
        22bfd0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        22bfd4:	e24cb004 	sub	fp, ip, #4	; 0x4
        22bfd8:	e1a04000 	mov	r4, r0
        22bfdc:	e1a05001 	mov	r5, r1
        22bfe0:	e1a06002 	mov	r6, r2
        22bfe4:	e20380ff 	and	r8, r3, #255	; 0xff
        22bfe8:	e3a09000 	mov	r9, #0	; 0x0
        22bfec:	e590a00c 	ldr	sl, [r0, #12]	; fField12
        22bff0:	e35a0000 	cmp	sl, #0	; 0x0
        22bff4:	1a000005 	bne	22c010 <TTrend::AddToTrend(long, long *, unsigned char)+0x44>
        22bff8:	e3380000 	teq	r8, #0	; 0x0
        22bffc:	11a02005 	movne	r2, r5
        22c000:	11a00004 	movne	r0, r4
        22c004:	13a01000 	movne	r1, #0	; 0x0
        22c008:	1a000088 	bne	22c230 <TTrend::AddToTrend(long, long *, unsigned char)+0x264>
        22c00c:	ea000089 	b	22c238 <TTrend::AddToTrend(long, long *, unsigned char)+0x26c>
        22c010:	e3a07000 	mov	r7, #0	; 0x0
        22c014:	da000058 	ble	22c17c <TTrend::AddToTrend(long, long *, unsigned char)+0x1b0>
        22c018:	e1a01007 	mov	r1, r7
        22c01c:	e1a00004 	mov	r0, r4
        22c020:	e5942000 	ldr	r2, [r4]
        22c024:	e1a0e00f 	mov	lr, pc
        22c028:	e282f01c 	add	pc, r2, #28	; 0x1c
        22c02c:	e1a01005 	mov	r1, r5
        22c030:	eb64bf62 	bl	1b5bdc0 <$BeforeCluster(Cluster *, long)>
        22c034:	e3300000 	teq	r0, #0	; 0x0
        22c038:	0a000028 	beq	22c0e0 <TTrend::AddToTrend(long, long *, unsigned char)+0x114>
        22c03c:	e1a02005 	mov	r2, r5
        22c040:	e1a01007 	mov	r1, r7
        22c044:	e1a00004 	mov	r0, r4
        22c048:	eb64bf5b 	bl	1b5bdbc <TTrend::$Attach(long, long)>
        22c04c:	e3300000 	teq	r0, #0	; 0x0
        22c050:	0a00001c 	beq	22c0c8 <TTrend::AddToTrend(long, long *, unsigned char)+0xfc>
        22c054:	e3300001 	teq	r0, #1	; 0x1
        22c058:	02477001 	subeq	r7, r7, #1	; 0x1
        22c05c:	e3380000 	teq	r8, #0	; 0x0
        22c060:	0a000066 	beq	22c200 <TTrend::AddToTrend(long, long *, unsigned char)+0x234>
        22c064:	e1a02005 	mov	r2, r5
        22c068:	e1a01007 	mov	r1, r7
        22c06c:	e1a00004 	mov	r0, r4
        22c070:	eb64bf45 	bl	1b5bd8c <TTrend::$AddToCluster(long, long)>
        22c074:	e1a02000 	mov	r2, r0
        22c078:	e1a05000 	mov	r5, r0
        22c07c:	e1a01007 	mov	r1, r7
        22c080:	e1a00004 	mov	r0, r4
        22c084:	eb64d411 	bl	1b610d0 <TTrend::$MergeCheck(long, Bias)>
        22c088:	e3300000 	teq	r0, #0	; 0x0
        22c08c:	0a00005b 	beq	22c200 <TTrend::AddToTrend(long, long *, unsigned char)+0x234>
        22c090:	e3550001 	cmp	r5, #1	; 0x1
        22c094:	02477001 	subeq	r7, r7, #1	; 0x1
        22c098:	0a000000 	beq	22c0a0 <TTrend::AddToTrend(long, long *, unsigned char)+0xd4>
        22c09c:	1a000001 	bne	22c0a8 <TTrend::AddToTrend(long, long *, unsigned char)+0xdc>
        22c0a0:	e3a02002 	mov	r2, #2	; 0x2
        22c0a4:	ea000000 	b	22c0ac <TTrend::AddToTrend(long, long *, unsigned char)+0xe0>
        22c0a8:	e3a02001 	mov	r2, #1	; 0x1
        22c0ac:	e1a05002 	mov	r5, r2
        22c0b0:	e1a01007 	mov	r1, r7
        22c0b4:	e1a00004 	mov	r0, r4
        22c0b8:	eb64d404 	bl	1b610d0 <TTrend::$MergeCheck(long, Bias)>
        22c0bc:	e3300000 	teq	r0, #0	; 0x0
        22c0c0:	1afffff2 	bne	22c090 <TTrend::AddToTrend(long, long *, unsigned char)+0xc4>
        22c0c4:	ea00004d 	b	22c200 <TTrend::AddToTrend(long, long *, unsigned char)+0x234>
        22c0c8:	e3380000 	teq	r8, #0	; 0x0
        22c0cc:	11a02005 	movne	r2, r5
        22c0d0:	11a01007 	movne	r1, r7
        22c0d4:	11a00004 	movne	r0, r4
        22c0d8:	1a000054 	bne	22c230 <TTrend::AddToTrend(long, long *, unsigned char)+0x264>
        22c0dc:	ea000055 	b	22c238 <TTrend::AddToTrend(long, long *, unsigned char)+0x26c>
        22c0e0:	e1a01007 	mov	r1, r7
        22c0e4:	e1a00004 	mov	r0, r4
        22c0e8:	e5942000 	ldr	r2, [r4]
        22c0ec:	e1a0e00f 	mov	lr, pc
        22c0f0:	e282f01c 	add	pc, r2, #28	; 0x1c
        22c0f4:	e1a01005 	mov	r1, r5
        22c0f8:	eb64cfc1 	bl	1b60004 <$InCluster(Cluster *, long)>
        22c0fc:	e3300000 	teq	r0, #0	; 0x0
        22c100:	0a00001a 	beq	22c170 <TTrend::AddToTrend(long, long *, unsigned char)+0x1a4>
        22c104:	e3380000 	teq	r8, #0	; 0x0
        22c108:	0a00003c 	beq	22c200 <TTrend::AddToTrend(long, long *, unsigned char)+0x234>
        22c10c:	e1a02005 	mov	r2, r5
        22c110:	e1a01007 	mov	r1, r7
        22c114:	e1a00004 	mov	r0, r4
        22c118:	eb64bf1b 	bl	1b5bd8c <TTrend::$AddToCluster(long, long)>
        22c11c:	e1a02000 	mov	r2, r0
        22c120:	e1a05000 	mov	r5, r0
        22c124:	e1a01007 	mov	r1, r7
        22c128:	e1a00004 	mov	r0, r4
        22c12c:	eb64d3e7 	bl	1b610d0 <TTrend::$MergeCheck(long, Bias)>
        22c130:	e3300000 	teq	r0, #0	; 0x0
        22c134:	0a000031 	beq	22c200 <TTrend::AddToTrend(long, long *, unsigned char)+0x234>
        22c138:	e3550001 	cmp	r5, #1	; 0x1
        22c13c:	02477001 	subeq	r7, r7, #1	; 0x1
        22c140:	0a000000 	beq	22c148 <TTrend::AddToTrend(long, long *, unsigned char)+0x17c>
        22c144:	1a000001 	bne	22c150 <TTrend::AddToTrend(long, long *, unsigned char)+0x184>
        22c148:	e3a02002 	mov	r2, #2	; 0x2
        22c14c:	ea000000 	b	22c154 <TTrend::AddToTrend(long, long *, unsigned char)+0x188>
        22c150:	e3a02001 	mov	r2, #1	; 0x1
        22c154:	e1a05002 	mov	r5, r2
        22c158:	e1a01007 	mov	r1, r7
        22c15c:	e1a00004 	mov	r0, r4
        22c160:	eb64d3da 	bl	1b610d0 <TTrend::$MergeCheck(long, Bias)>
        22c164:	e3300000 	teq	r0, #0	; 0x0
        22c168:	1afffff2 	bne	22c138 <TTrend::AddToTrend(long, long *, unsigned char)+0x16c>
        22c16c:	ea000023 	b	22c200 <TTrend::AddToTrend(long, long *, unsigned char)+0x234>
        22c170:	e2877001 	add	r7, r7, #1	; 0x1
        22c174:	e157000a 	cmp	r7, sl
        22c178:	baffffa6 	blt	22c018 <TTrend::AddToTrend(long, long *, unsigned char)+0x4c>
        22c17c:	e1a02005 	mov	r2, r5
        22c180:	e1a00004 	mov	r0, r4
        22c184:	e3e01000 	mvn	r1, #0	; 0x0
        22c188:	eb64bf0b 	bl	1b5bdbc <TTrend::$Attach(long, long)>
        22c18c:	e3300000 	teq	r0, #0	; 0x0
        22c190:	0a000021 	beq	22c21c <TTrend::AddToTrend(long, long *, unsigned char)+0x250>
        22c194:	e24a7001 	sub	r7, sl, #1	; 0x1
        22c198:	e3380000 	teq	r8, #0	; 0x0
        22c19c:	0a000017 	beq	22c200 <TTrend::AddToTrend(long, long *, unsigned char)+0x234>
        22c1a0:	e1a02005 	mov	r2, r5
        22c1a4:	e1a01007 	mov	r1, r7
        22c1a8:	e1a00004 	mov	r0, r4
        22c1ac:	eb64bef6 	bl	1b5bd8c <TTrend::$AddToCluster(long, long)>
        22c1b0:	e1a02000 	mov	r2, r0
        22c1b4:	e1a05000 	mov	r5, r0
        22c1b8:	e1a01007 	mov	r1, r7
        22c1bc:	e1a00004 	mov	r0, r4
        22c1c0:	eb64d3c2 	bl	1b610d0 <TTrend::$MergeCheck(long, Bias)>
        22c1c4:	e3300000 	teq	r0, #0	; 0x0
        22c1c8:	0a00000c 	beq	22c200 <TTrend::AddToTrend(long, long *, unsigned char)+0x234>
        22c1cc:	e3550001 	cmp	r5, #1	; 0x1
        22c1d0:	02477001 	subeq	r7, r7, #1	; 0x1
        22c1d4:	0a000000 	beq	22c1dc <TTrend::AddToTrend(long, long *, unsigned char)+0x210>
        22c1d8:	1a000001 	bne	22c1e4 <TTrend::AddToTrend(long, long *, unsigned char)+0x218>
        22c1dc:	e3a02002 	mov	r2, #2	; 0x2
        22c1e0:	ea000000 	b	22c1e8 <TTrend::AddToTrend(long, long *, unsigned char)+0x21c>
        22c1e4:	e3a02001 	mov	r2, #1	; 0x1
        22c1e8:	e1a05002 	mov	r5, r2
        22c1ec:	e1a01007 	mov	r1, r7
        22c1f0:	e1a00004 	mov	r0, r4
        22c1f4:	eb64d3b5 	bl	1b610d0 <TTrend::$MergeCheck(long, Bias)>
        22c1f8:	e3300000 	teq	r0, #0	; 0x0
        22c1fc:	1afffff2 	bne	22c1cc <TTrend::AddToTrend(long, long *, unsigned char)+0x200>
        22c200:	e1a01007 	mov	r1, r7
        22c204:	e1a00004 	mov	r0, r4
        22c208:	e5942000 	ldr	r2, [r4]
        22c20c:	e1a0e00f 	mov	lr, pc
        22c210:	e282f01c 	add	pc, r2, #28	; 0x1c
        22c214:	e5b05018 	ldr	r5, [r0, #24]!
        22c218:	ea000006 	b	22c238 <TTrend::AddToTrend(long, long *, unsigned char)+0x26c>
        22c21c:	e3380000 	teq	r8, #0	; 0x0
        22c220:	0a000004 	beq	22c238 <TTrend::AddToTrend(long, long *, unsigned char)+0x26c>
        22c224:	e1a02005 	mov	r2, r5
        22c228:	e1a00004 	mov	r0, r4
        22c22c:	e3e01000 	mvn	r1, #0	; 0x0
        22c230:	eb64d3a9 	bl	1b610dc <TTrend::$NewCluster(long, long)>
        22c234:	e1a09000 	mov	r9, r0
        22c238:	e3360000 	teq	r6, #0	; 0x0
        22c23c:	15865000 	strne	r5, [r6]
        22c240:	e1a00009 	mov	r0, r9
        22c244:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TTrend::Attach(long, long)
 * Address: 0022c248
 */
TTrend::Attach(long, long) {
    /*
        22c248:	e1a0c00d 	mov	ip, sp
        22c24c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        22c250:	e24cb004 	sub	fp, ip, #4	; 0x4
        22c254:	e1a04000 	mov	r4, r0
        22c258:	e1a06001 	mov	r6, r1
        22c25c:	e1a05002 	mov	r5, r2
        22c260:	e3710001 	cmn	r1, #1	; 0x1
        22c264:	0a000009 	beq	22c290 <TTrend::Attach(long, long)+0x48>
        22c268:	e3360000 	teq	r6, #0	; 0x0
        22c26c:	1a000010 	bne	22c2b4 <TTrend::Attach(long, long)+0x6c>
        22c270:	e1a00004 	mov	r0, r4
        22c274:	e3a01000 	mov	r1, #0	; 0x0
        22c278:	e5942000 	ldr	r2, [r4]
        22c27c:	e1a0e00f 	mov	lr, pc
        22c280:	e282f01c 	add	pc, r2, #28	; 0x1c
        22c284:	e1a06000 	mov	r6, r0
        22c288:	e3a07000 	mov	r7, #0	; 0x0
        22c28c:	ea00001c 	b	22c304 <TTrend::Attach(long, long)+0xbc>
        22c290:	e594000c 	ldr	r0, [r4, #12]	; fField12
        22c294:	e2401001 	sub	r1, r0, #1	; 0x1
        22c298:	e1a00004 	mov	r0, r4
        22c29c:	e5942000 	ldr	r2, [r4]
        22c2a0:	e1a0e00f 	mov	lr, pc
        22c2a4:	e282f01c 	add	pc, r2, #28	; 0x1c
        22c2a8:	e1a06000 	mov	r6, r0
        22c2ac:	e3a07001 	mov	r7, #1	; 0x1
        22c2b0:	ea000013 	b	22c304 <TTrend::Attach(long, long)+0xbc>
        22c2b4:	e2461001 	sub	r1, r6, #1	; 0x1
        22c2b8:	e1a00004 	mov	r0, r4
        22c2bc:	e5942000 	ldr	r2, [r4]
        22c2c0:	e1a0e00f 	mov	lr, pc
        22c2c4:	e282f01c 	add	pc, r2, #28	; 0x1c
        22c2c8:	e1a08000 	mov	r8, r0
        22c2cc:	e1a01006 	mov	r1, r6
        22c2d0:	e1a00004 	mov	r0, r4
        22c2d4:	e5942000 	ldr	r2, [r4]
        22c2d8:	e1a0e00f 	mov	lr, pc
        22c2dc:	e282f01c 	add	pc, r2, #28	; 0x1c
        22c2e0:	e1a06000 	mov	r6, r0
        22c2e4:	e3a07000 	mov	r7, #0	; 0x0
        22c2e8:	e5981000 	ldr	r1, [r8]
        22c2ec:	e0451001 	sub	r1, r5, r1
        22c2f0:	e5900000 	ldr	r0, [r0]
        22c2f4:	e0400005 	sub	r0, r0, r5
        22c2f8:	e1510000 	cmp	r1, r0
        22c2fc:	b3a07001 	movlt	r7, #1	; 0x1
        22c300:	b1a06008 	movlt	r6, r8
        22c304:	e3a08902 	mov	r8, #32768	; 0x8000
        22c308:	e5940034 	ldr	r0, [r4, #52]	; fField52
        22c30c:	e3300000 	teq	r0, #0	; 0x0
        22c310:	10880080 	addne	r0, r8, r0, lsl #1
        22c314:	1a000006 	bne	22c334 <TTrend::Attach(long, long)+0xec>
        22c318:	e594000c 	ldr	r0, [r4, #12]	; fField12
        22c31c:	e3500002 	cmp	r0, #2	; 0x2
        22c320:	9a000007 	bls	22c344 <TTrend::Attach(long, long)+0xfc>
        22c324:	e3a00005 	mov	r0, #5	; 0x5
        22c328:	e5941030 	ldr	r1, [r4, #48]	; fField48
        22c32c:	eb661983 	bl	1bb2940 <$__rt_sdiv>
        22c330:	e2800902 	add	r0, r0, #32768	; 0x8000
        22c334:	e1a00840 	mov	r0, r0, asr #16
        22c338:	e1a00800 	mov	r0, r0, lsl #16
        22c33c:	e1a00840 	mov	r0, r0, asr #16
        22c340:	ea000000 	b	22c348 <TTrend::Attach(long, long)+0x100>
        22c344:	e3a00000 	mov	r0, #0	; 0x0
        22c348:	e5b41038 	ldr	r1, [r4, #56]!	; fField56
        22c34c:	e1a02001 	mov	r2, r1
        22c350:	e5963004 	ldr	r3, [r6, #4]
        22c354:	e3330000 	teq	r3, #0	; 0x0
        22c358:	1a000005 	bne	22c374 <TTrend::Attach(long, long)+0x12c>
        22c35c:	e0621182 	rsb	r1, r2, r2, lsl #3
        22c360:	e0811202 	add	r1, r1, r2, lsl #4
        22c364:	e0881601 	add	r1, r8, r1, lsl #12
        22c368:	e1a01841 	mov	r1, r1, asr #16
        22c36c:	e1a01801 	mov	r1, r1, lsl #16
        22c370:	e1a01841 	mov	r1, r1, asr #16
        22c374:	e1500001 	cmp	r0, r1
        22c378:	d1a00001 	movle	r0, r1
        22c37c:	e5961000 	ldr	r1, [r6]
        22c380:	e0511005 	subs	r1, r1, r5
        22c384:	42611000 	rsbmi	r1, r1, #0	; 0x0
        22c388:	e1510000 	cmp	r1, r0
        22c38c:	c3a00000 	movgt	r0, #0	; 0x0
        22c390:	c91ba9f0 	ldmgtdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        22c394:	e3370000 	teq	r7, #0	; 0x0
        22c398:	03a00002 	moveq	r0, #2	; 0x2
        22c39c:	13a00001 	movne	r0, #1	; 0x1
        22c3a0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TTrend::Merge(long, Cluster *, Cluster *)
 * Address: 0022c3a4
 */
TTrend::Merge(long, Cluster *, Cluster *) {
    /*
        22c3a4:	e1a0c00d 	mov	ip, sp
        22c3a8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        22c3ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        22c3b0:	e1a04000 	mov	r4, r0
        22c3b4:	e1a07001 	mov	r7, r1
        22c3b8:	e1a06002 	mov	r6, r2
        22c3bc:	e1a05003 	mov	r5, r3
        22c3c0:	e24dd034 	sub	sp, sp, #52	; 0x34
        22c3c4:	e5930010 	ldr	r0, [r3, #16]
        22c3c8:	e58d0028 	str	r0, [sp, #40]	; fField40
        22c3cc:	e592000c 	ldr	r0, [r2, #12]	; fField12
        22c3d0:	e58d0024 	str	r0, [sp, #36]	; fField36
        22c3d4:	e5922000 	ldr	r2, [r2]
        22c3d8:	e58d2008 	str	r2, [sp, #8]
        22c3dc:	e5932000 	ldr	r2, [r3]
        22c3e0:	e58d2004 	str	r2, [sp, #4]
        22c3e4:	e5969014 	ldr	r9, [r6, #20]
        22c3e8:	e5958014 	ldr	r8, [r5, #20]
        22c3ec:	e0890008 	add	r0, r9, r8
        22c3f0:	e58d0000 	str	r0, [sp]
        22c3f4:	e5960008 	ldr	r0, [r6, #8]
        22c3f8:	e5951008 	ldr	r1, [r5, #8]
        22c3fc:	e0800001 	add	r0, r0, r1
        22c400:	e58d0020 	str	r0, [sp, #32]	; fField32
        22c404:	e1a01000 	mov	r1, r0
        22c408:	e59d0000 	ldr	r0, [sp]
        22c40c:	eb66194b 	bl	1bb2940 <$__rt_sdiv>
        22c410:	e58d0018 	str	r0, [sp, #24]
        22c414:	e1a00009 	mov	r0, r9
        22c418:	eb64df7d 	bl	1b64214 <$VarStretch(long)>
        22c41c:	e2801801 	add	r1, r0, #65536	; 0x10000
        22c420:	e5960004 	ldr	r0, [r6, #4]
        22c424:	e1a0a000 	mov	sl, r0
        22c428:	eb66d325 	bl	1be10c4 <$FixedMultiply>
        22c42c:	e58d0014 	str	r0, [sp, #20]
        22c430:	e1a00008 	mov	r0, r8
        22c434:	eb64df76 	bl	1b64214 <$VarStretch(long)>
        22c438:	e2801801 	add	r1, r0, #65536	; 0x10000
        22c43c:	e5950004 	ldr	r0, [r5, #4]
        22c440:	e58d000c 	str	r0, [sp, #12]	; fField12
        22c444:	eb66d31e 	bl	1be10c4 <$FixedMultiply>
        22c448:	e58d0010 	str	r0, [sp, #16]
        22c44c:	e5960010 	ldr	r0, [r6, #16]
        22c450:	e59d1018 	ldr	r1, [sp, #24]
        22c454:	e1500001 	cmp	r0, r1
        22c458:	da00000d 	ble	22c494 <TTrend::Merge(long, Cluster *, Cluster *)+0xf0>
        22c45c:	e59d0014 	ldr	r0, [sp, #20]
        22c460:	e040100a 	sub	r1, r0, sl
        22c464:	e59d0018 	ldr	r0, [sp, #24]
        22c468:	e59d2008 	ldr	r2, [sp, #8]
        22c46c:	e0400002 	sub	r0, r0, r2
        22c470:	e1a00800 	mov	r0, r0, lsl #16
        22c474:	eb66d312 	bl	1be10c4 <$FixedMultiply>
        22c478:	e5b61010 	ldr	r1, [r6, #16]!
        22c47c:	e59d2008 	ldr	r2, [sp, #8]
        22c480:	e0411002 	sub	r1, r1, r2
        22c484:	e1a01801 	mov	r1, r1, lsl #16
        22c488:	eb66d30c 	bl	1be10c0 <$FixedDivide>
        22c48c:	e080600a 	add	r6, r0, sl
        22c490:	ea000003 	b	22c4a4 <TTrend::Merge(long, Cluster *, Cluster *)+0x100>
        22c494:	e59d1018 	ldr	r1, [sp, #24]
        22c498:	e0410000 	sub	r0, r1, r0
        22c49c:	e59d1014 	ldr	r1, [sp, #20]
        22c4a0:	e0816800 	add	r6, r1, r0, lsl #16
        22c4a4:	e595000c 	ldr	r0, [r5, #12]	; fField12
        22c4a8:	e59d1018 	ldr	r1, [sp, #24]
        22c4ac:	e1500001 	cmp	r0, r1
        22c4b0:	aa00000f 	bge	22c4f4 <TTrend::Merge(long, Cluster *, Cluster *)+0x150>
        22c4b4:	e59d0010 	ldr	r0, [sp, #16]
        22c4b8:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        22c4bc:	e0401001 	sub	r1, r0, r1
        22c4c0:	e59d0018 	ldr	r0, [sp, #24]
        22c4c4:	e59d2004 	ldr	r2, [sp, #4]
        22c4c8:	e0420000 	sub	r0, r2, r0
        22c4cc:	e1a00800 	mov	r0, r0, lsl #16
        22c4d0:	eb66d2fb 	bl	1be10c4 <$FixedMultiply>
        22c4d4:	e5b5100c 	ldr	r1, [r5, #12]!	; fField12
        22c4d8:	e59d2004 	ldr	r2, [sp, #4]
        22c4dc:	e0421001 	sub	r1, r2, r1
        22c4e0:	e1a01801 	mov	r1, r1, lsl #16
        22c4e4:	eb66d2f5 	bl	1be10c0 <$FixedDivide>
        22c4e8:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        22c4ec:	e0800001 	add	r0, r0, r1
        22c4f0:	ea000003 	b	22c504 <TTrend::Merge(long, Cluster *, Cluster *)+0x160>
        22c4f4:	e59d1018 	ldr	r1, [sp, #24]
        22c4f8:	e0400001 	sub	r0, r0, r1
        22c4fc:	e59d1010 	ldr	r1, [sp, #16]
        22c500:	e0810800 	add	r0, r1, r0, lsl #16
        22c504:	e0010699 	mul	r1, r9, r6
        22c508:	e0211098 	mla	r1, r8, r0, r1
        22c50c:	e59d0000 	ldr	r0, [sp]
        22c510:	eb66190a 	bl	1bb2940 <$__rt_sdiv>
        22c514:	e58d001c 	str	r0, [sp, #28]
        22c518:	e59d0000 	ldr	r0, [sp]
        22c51c:	e1a01007 	mov	r1, r7
        22c520:	e58d002c 	str	r0, [sp, #44]	; fField44
        22c524:	e1a00004 	mov	r0, r4
        22c528:	e3a02002 	mov	r2, #2	; 0x2
        22c52c:	e5943000 	ldr	r3, [r4]
        22c530:	e1a0e00f 	mov	lr, pc
        22c534:	e283f044 	add	pc, r3, #68	; 0x44
        22c538:	e28d2018 	add	r2, sp, #24	; 0x18
        22c53c:	e1a01007 	mov	r1, r7
        22c540:	e1a00004 	mov	r0, r4
        22c544:	e5943000 	ldr	r3, [r4]
        22c548:	e1a0e00f 	mov	lr, pc
        22c54c:	e283f04c 	add	pc, r3, #76	; 0x4c
        22c550:	e3700001 	cmn	r0, #1	; 0x1
        22c554:	03a00001 	moveq	r0, #1	; 0x1
        22c558:	0a00002b 	beq	22c60c <TTrend::Merge(long, Cluster *, Cluster *)+0x268>
        22c55c:	e3370000 	teq	r7, #0	; 0x0
        22c560:	e594100c 	ldr	r1, [r4, #12]	; fField12
        22c564:	059d0018 	ldreq	r0, [sp, #24]
        22c568:	05840020 	streq	r0, [r4, #32]	; fField32
        22c56c:	0a000003 	beq	22c580 <TTrend::Merge(long, Cluster *, Cluster *)+0x1dc>
        22c570:	e2410001 	sub	r0, r1, #1	; 0x1
        22c574:	e1300007 	teq	r0, r7
        22c578:	059d0018 	ldreq	r0, [sp, #24]
        22c57c:	05840024 	streq	r0, [r4, #36]	; fField36
        22c580:	e3510001 	cmp	r1, #1	; 0x1
        22c584:	da000007 	ble	22c5a8 <TTrend::Merge(long, Cluster *, Cluster *)+0x204>
        22c588:	e5940024 	ldr	r0, [r4, #36]	; fField36
        22c58c:	e5942020 	ldr	r2, [r4, #32]	; fField32
        22c590:	e0400002 	sub	r0, r0, r2
        22c594:	e1a00800 	mov	r0, r0, lsl #16
        22c598:	e2411001 	sub	r1, r1, #1	; 0x1
        22c59c:	e1a01801 	mov	r1, r1, lsl #16
        22c5a0:	eb66d2c6 	bl	1be10c0 <$FixedDivide>
        22c5a4:	e5840030 	str	r0, [r4, #48]	; fField48
        22c5a8:	e594002c 	ldr	r0, [r4, #44]	; fField44
        22c5ac:	e1a01000 	mov	r1, r0
        22c5b0:	e3390001 	teq	r9, #1	; 0x1
        22c5b4:	13380001 	teqne	r8, #1	; 0x1
        22c5b8:	02811001 	addeq	r1, r1, #1	; 0x1
        22c5bc:	0584102c 	streq	r1, [r4, #44]	; fField44
        22c5c0:	e3390001 	teq	r9, #1	; 0x1
        22c5c4:	03380001 	teqeq	r8, #1	; 0x1
        22c5c8:	0594102c 	ldreq	r1, [r4, #44]	; fField44
        22c5cc:	02811001 	addeq	r1, r1, #1	; 0x1
        22c5d0:	0584102c 	streq	r1, [r4, #44]	; fField44
        22c5d4:	e5941034 	ldr	r1, [r4, #52]	; fField52
        22c5d8:	e0010190 	mul	r1, r0, r1
        22c5dc:	e0000a99 	mul	r0, r9, sl
        22c5e0:	e0410000 	sub	r0, r1, r0
        22c5e4:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        22c5e8:	e0010198 	mul	r1, r8, r1
        22c5ec:	e0401001 	sub	r1, r0, r1
        22c5f0:	e59d002c 	ldr	r0, [sp, #44]	; fField44
        22c5f4:	e59d201c 	ldr	r2, [sp, #28]
        22c5f8:	e0211290 	mla	r1, r0, r2, r1
        22c5fc:	e594002c 	ldr	r0, [r4, #44]	; fField44
        22c600:	eb6618ce 	bl	1bb2940 <$__rt_sdiv>
        22c604:	e5a40034 	str	r0, [r4, #52]!	; fField52
        22c608:	e3a00000 	mov	r0, #0	; 0x0
        22c60c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TTrend::MergeCheck(long, Bias)
 * Address: 0022c610
 */
TTrend::MergeCheck(long, Bias) {
    /*
        22c610:	e1a0c00d 	mov	ip, sp
        22c614:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        22c618:	e24cb004 	sub	fp, ip, #4	; 0x4
        22c61c:	e1a04000 	mov	r4, r0
        22c620:	e1a05001 	mov	r5, r1
        22c624:	e3a08000 	mov	r8, #0	; 0x0
        22c628:	e3320000 	teq	r2, #0	; 0x0
        22c62c:	0a00004f 	beq	22c770 <TTrend::MergeCheck(long, Bias)+0x160>
        22c630:	e3320001 	teq	r2, #1	; 0x1
        22c634:	0a000013 	beq	22c688 <TTrend::MergeCheck(long, Bias)+0x78>
        22c638:	e3320002 	teq	r2, #2	; 0x2
        22c63c:	1a000020 	bne	22c6c4 <TTrend::MergeCheck(long, Bias)+0xb4>
        22c640:	e594000c 	ldr	r0, [r4, #12]	; fField12
        22c644:	e2400001 	sub	r0, r0, #1	; 0x1
        22c648:	e1300005 	teq	r0, r5
        22c64c:	0a000047 	beq	22c770 <TTrend::MergeCheck(long, Bias)+0x160>
        22c650:	e1a01005 	mov	r1, r5
        22c654:	e1a00004 	mov	r0, r4
        22c658:	e5942000 	ldr	r2, [r4]
        22c65c:	e1a0e00f 	mov	lr, pc
        22c660:	e282f01c 	add	pc, r2, #28	; 0x1c
        22c664:	e1a07000 	mov	r7, r0
        22c668:	e2851001 	add	r1, r5, #1	; 0x1
        22c66c:	e1a00004 	mov	r0, r4
        22c670:	e5942000 	ldr	r2, [r4]
        22c674:	e1a0e00f 	mov	lr, pc
        22c678:	e282f01c 	add	pc, r2, #28	; 0x1c
        22c67c:	e1a06000 	mov	r6, r0
        22c680:	e1a09005 	mov	r9, r5
        22c684:	ea00000e 	b	22c6c4 <TTrend::MergeCheck(long, Bias)+0xb4>
        22c688:	e3350000 	teq	r5, #0	; 0x0
        22c68c:	0a000037 	beq	22c770 <TTrend::MergeCheck(long, Bias)+0x160>
        22c690:	e2451001 	sub	r1, r5, #1	; 0x1
        22c694:	e1a09001 	mov	r9, r1
        22c698:	e1a00004 	mov	r0, r4
        22c69c:	e5942000 	ldr	r2, [r4]
        22c6a0:	e1a0e00f 	mov	lr, pc
        22c6a4:	e282f01c 	add	pc, r2, #28	; 0x1c
        22c6a8:	e1a07000 	mov	r7, r0
        22c6ac:	e1a01005 	mov	r1, r5
        22c6b0:	e1a00004 	mov	r0, r4
        22c6b4:	e5942000 	ldr	r2, [r4]
        22c6b8:	e1a0e00f 	mov	lr, pc
        22c6bc:	e282f01c 	add	pc, r2, #28	; 0x1c
        22c6c0:	e1a06000 	mov	r6, r0
        22c6c4:	e5961000 	ldr	r1, [r6]
        22c6c8:	e5970000 	ldr	r0, [r7]
        22c6cc:	e0410000 	sub	r0, r1, r0
        22c6d0:	e3a05001 	mov	r5, #1	; 0x1
        22c6d4:	e5971014 	ldr	r1, [r7, #20]
        22c6d8:	e3310001 	teq	r1, #1	; 0x1
        22c6dc:	15961014 	ldrne	r1, [r6, #20]
        22c6e0:	13310001 	teqne	r1, #1	; 0x1
        22c6e4:	1a00000c 	bne	22c71c <TTrend::MergeCheck(long, Bias)+0x10c>
        22c6e8:	e3a01902 	mov	r1, #32768	; 0x8000
        22c6ec:	e5942034 	ldr	r2, [r4, #52]	; fField52
        22c6f0:	e0811082 	add	r1, r1, r2, lsl #1
        22c6f4:	e1a01841 	mov	r1, r1, asr #16
        22c6f8:	e1a01801 	mov	r1, r1, lsl #16
        22c6fc:	e1500841 	cmp	r0, r1, asr #16
        22c700:	ca00001a 	bgt	22c770 <TTrend::MergeCheck(long, Bias)+0x160>
        22c704:	e1a03006 	mov	r3, r6
        22c708:	e1a02007 	mov	r2, r7
        22c70c:	e1a01009 	mov	r1, r9
        22c710:	e1a00004 	mov	r0, r4
        22c714:	eb64d26b 	bl	1b610c8 <TTrend::$Merge(long, Cluster *, Cluster *)>
        22c718:	ea000012 	b	22c768 <TTrend::MergeCheck(long, Bias)+0x158>
        22c71c:	e1a01800 	mov	r1, r0, lsl #16
        22c720:	e3a00902 	mov	r0, #32768	; 0x8000
        22c724:	eb66d266 	bl	1be10c4 <$FixedMultiply>
        22c728:	e1a01000 	mov	r1, r0
        22c72c:	e3a000cc 	mov	r0, #204	; 0xcc
        22c730:	e2800b33 	add	r0, r0, #52224	; 0xcc00
        22c734:	eb66d262 	bl	1be10c4 <$FixedMultiply>
        22c738:	e5971004 	ldr	r1, [r7, #4]
        22c73c:	e5962004 	ldr	r2, [r6, #4]
        22c740:	e0811002 	add	r1, r1, r2
        22c744:	e1500001 	cmp	r0, r1
        22c748:	aa000008 	bge	22c770 <TTrend::MergeCheck(long, Bias)+0x160>
        22c74c:	e1a03006 	mov	r3, r6
        22c750:	e1a02007 	mov	r2, r7
        22c754:	e1a01009 	mov	r1, r9
        22c758:	e1a00004 	mov	r0, r4
        22c75c:	eb64d259 	bl	1b610c8 <TTrend::$Merge(long, Cluster *, Cluster *)>
        22c760:	e3300000 	teq	r0, #0	; 0x0
        22c764:	1a000001 	bne	22c770 <TTrend::MergeCheck(long, Bias)+0x160>
        22c768:	e1a00005 	mov	r0, r5
        22c76c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        22c770:	e1a00008 	mov	r0, r8
        22c774:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

