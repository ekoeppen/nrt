#include "include/TPackageBlock.h"

/**
 * Symbol: TPackageBlock::Init(unsigned long, unsigned long, unsigned long, SourceType, unsigned long, unsigned short *, unsigned short *, unsigned long, unsigned long)
 * Address: 0015dce4
 */
TPackageBlock::Init(unsigned long, unsigned long, unsigned long, SourceType, unsigned long, unsigned short *, unsigned short *, unsigned long, unsigned long) {
    /*
        15dce4:	e1a0c00d 	mov	ip, sp
        15dce8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        15dcec:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        15dcf0:	e24cb014 	sub	fp, ip, #20	; 0x14
        15dcf4:	e1a04000 	mov	r4, r0
        15dcf8:	e3a05000 	mov	r5, #0	; 0x0
        15dcfc:	e3a00000 	mov	r0, #0	; 0x0
        15dd00:	e28be024 	add	lr, fp, #36	; 0x24
        15dd04:	e89e4140 	ldmia	lr, {r6, r8, lr}
        15dd08:	e59b7020 	ldr	r7, [fp, #32]	; fField32
        15dd0c:	e59b901c 	ldr	r9, [fp, #28]	; fField28
        15dd10:	e5840028 	str	r0, [r4, #40]	; fField40
        15dd14:	e884000e 	stmia	r4, {r1, r2, r3}
        15dd18:	e284200c 	add	r2, r4, #12	; 0xc
        15dd1c:	e28b1014 	add	r1, fp, #20	; 0x14
        15dd20:	e8911008 	ldmia	r1, {r3, ip}
        15dd24:	e8821008 	stmia	r2, {r3, ip}
        15dd28:	e5840020 	str	r0, [r4, #32]	; fField32
        15dd2c:	e5849014 	str	r9, [r4, #20]	; fField20
        15dd30:	e584001c 	str	r0, [r4, #28]	; fField28
        15dd34:	e5840024 	str	r0, [r4, #36]	; fField36
        15dd38:	e584e018 	str	lr, [r4, #24]	; fField24
        15dd3c:	e52d006c 	str	r0, [sp, -#108]!
        15dd40:	e28d0008 	add	r0, sp, #8	; 0x8
        15dd44:	eb69530a 	bl	1bb2974 <$setjmp>
        15dd48:	e3300000 	teq	r0, #0	; 0x0
        15dd4c:	1a000015 	bne	15dda8 <TPackageBlock::Init(unsigned long, unsigned long, unsigned long, SourceType, unsigned long, unsigned short *, unsigned short *, unsigned long, unsigned long)+0xc4>
        15dd50:	e1a0000d 	mov	r0, sp
        15dd54:	eb6a08c8 	bl	1be007c <$AddExceptionHandler>
        15dd58:	e1a00007 	mov	r0, r7
        15dd5c:	eb6a427f 	bl	1bee760 <$Ustrlen>
        15dd60:	e3a09002 	mov	r9, #2	; 0x2
        15dd64:	e0890080 	add	r0, r9, r0, lsl #1
        15dd68:	eb69c272 	bl	1bce738 <$__nw(unsigned int)>
        15dd6c:	e584001c 	str	r0, [r4, #28]	; fField28
        15dd70:	e3300000 	teq	r0, #0	; 0x0
        15dd74:	11a01007 	movne	r1, r7
        15dd78:	1b6a4277 	blne	1bee75c <$Ustrcpy>
        15dd7c:	e3360000 	teq	r6, #0	; 0x0
        15dd80:	0a000011 	beq	15ddcc <TPackageBlock::Init(unsigned long, unsigned long, unsigned long, SourceType, unsigned long, unsigned short *, unsigned short *, unsigned long, unsigned long)+0xe8>
        15dd84:	e1a00006 	mov	r0, r6
        15dd88:	eb6a4274 	bl	1bee760 <$Ustrlen>
        15dd8c:	e0890080 	add	r0, r9, r0, lsl #1
        15dd90:	eb69c268 	bl	1bce738 <$__nw(unsigned int)>
        15dd94:	e5840020 	str	r0, [r4, #32]	; fField32
        15dd98:	e3300000 	teq	r0, #0	; 0x0
        15dd9c:	11a01006 	movne	r1, r6
        15dda0:	1b6a426d 	blne	1bee75c <$Ustrcpy>
        15dda4:	ea000008 	b	15ddcc <TPackageBlock::Init(unsigned long, unsigned long, unsigned long, SourceType, unsigned long, unsigned short *, unsigned short *, unsigned long, unsigned long)+0xe8>
        15dda8:	e59d0060 	ldr	r0, [sp, #96]
        15ddac:	e28f1f1a 	add	r1, pc, #104	; 0x68
        15ddb0:	eb6a14f7 	bl	1be3194 <$Subexception>
        15ddb4:	e3300000 	teq	r0, #0	; 0x0
        15ddb8:	13e05e8a 	mvnne	r5, #2208	; 0x8a0
        15ddbc:	12455a02 	subne	r5, r5, #8192	; 0x2000
        15ddc0:	1a000001 	bne	15ddcc <TPackageBlock::Init(unsigned long, unsigned long, unsigned long, SourceType, unsigned long, unsigned short *, unsigned short *, unsigned long, unsigned long)+0xe8>
        15ddc4:	e1a0000d 	mov	r0, sp
        15ddc8:	eb6a10e1 	bl	1be2154 <$NextHandler>
        15ddcc:	e1a0000d 	mov	r0, sp
        15ddd0:	eb6a0cb8 	bl	1be10b8 <$ExitHandler>
        15ddd4:	e28dd06c 	add	sp, sp, #108	; 0x6c
        15ddd8:	e1a02008 	mov	r2, r8
        15dddc:	e3a01014 	mov	r1, #20	; 0x14
        15dde0:	e3a00000 	mov	r0, #0	; 0x0
        15dde4:	eb6a14fa 	bl	1be31d4 <CDynamicArray::$__ct(long, long)>
        15dde8:	e3550000 	cmp	r5, #0	; 0x0
        15ddec:	e5840024 	str	r0, [r4, #36]	; fField36
        15ddf0:	1a00000a 	bne	15de20 <TPackageBlock::Init(unsigned long, unsigned long, unsigned long, SourceType, unsigned long, unsigned short *, unsigned short *, unsigned long, unsigned long)+0x13c>
        15ddf4:	e3300000 	teq	r0, #0	; 0x0
        15ddf8:	1594101c 	ldrne	r1, [r4, #28]	; fField28
        15ddfc:	13310000 	teqne	r1, #0	; 0x0
        15de00:	0a000007 	beq	15de24 <TPackageBlock::Init(unsigned long, unsigned long, unsigned long, SourceType, unsigned long, unsigned short *, unsigned short *, unsigned long, unsigned long)+0x140>
        15de04:	e5941020 	ldr	r1, [r4, #32]	; fField32
        15de08:	e3310000 	teq	r1, #0	; 0x0
        15de0c:	1a00000d 	bne	15de48 <TPackageBlock::Init(unsigned long, unsigned long, unsigned long, SourceType, unsigned long, unsigned short *, unsigned short *, unsigned long, unsigned long)+0x164>
        15de10:	e3360000 	teq	r6, #0	; 0x0
        15de14:	0a00000b 	beq	15de48 <TPackageBlock::Init(unsigned long, unsigned long, unsigned long, SourceType, unsigned long, unsigned short *, unsigned short *, unsigned long, unsigned long)+0x164>
        15de18:	ea000001 	b	15de24 <TPackageBlock::Init(unsigned long, unsigned long, unsigned long, SourceType, unsigned long, unsigned short *, unsigned short *, unsigned long, unsigned long)+0x140>
        15de1c:	00000000 	andeq	r0, r0, r0
        15de20:	1a000001 	bne	15de2c <TPackageBlock::Init(unsigned long, unsigned long, unsigned long, SourceType, unsigned long, unsigned short *, unsigned short *, unsigned long, unsigned long)+0x148>
        15de24:	e3a050e9 	mov	r5, #233	; 0xe9
        15de28:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        15de2c:	e3300000 	teq	r0, #0	; 0x0
        15de30:	13a01001 	movne	r1, #1	; 0x1
        15de34:	1b6a190a 	blne	1be4264 <CDynamicArray::$__dt(void)>
        15de38:	e594001c 	ldr	r0, [r4, #28]	; fField28
        15de3c:	eb69be27 	bl	1bcd6e0 <$__dl(void *)>
        15de40:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        15de44:	eb69be25 	bl	1bcd6e0 <$__dl(void *)>
        15de48:	e1a00005 	mov	r0, r5
        15de4c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

