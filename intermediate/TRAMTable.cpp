#include "include/TRAMTable.h"

/**
 * Symbol: Init__9TRAMTableSFP9SBankInfo
 * Address: 0011e854
 */
void TRAMTable::Init() {
    /*
        11e854:	e3a02000 	mov	r2, #0	; 0x0
        11e858:	e3a01000 	mov	r1, #0	; 0x0
        11e85c:	e3e0c000 	mvn	ip, #0	; 0x0
        11e860:	e0823102 	add	r3, r2, r2, lsl #2
        11e864:	e7801103 	str	r1, [r0, r3, lsl #2]	; fField2
        11e868:	e0803103 	add	r3, r0, r3, lsl #2
        11e86c:	e5831004 	str	r1, [r3, #4]
        11e870:	e583100c 	str	r1, [r3, #12]
        11e874:	e2822001 	add	r2, r2, #1	; 0x1
        11e878:	e5a3c008 	str	ip, [r3, #8]!	; fField8
        11e87c:	e5831008 	str	r1, [r3, #8]	; fField8
        11e880:	e352000a 	cmp	r2, #10	; 0xa
        11e884:	bafffff5 	blt	11e860 <Init__9TRAMTableSFP9SBankInfo+0xc>
        11e888:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Add__9TRAMTableSFP9SBankInfoT1
 * Address: 0011e88c
 */
void TRAMTable::Add() {
    /*
        11e88c:	e3a02000 	mov	r2, #0	; 0x0
        11e890:	e0823102 	add	r3, r2, r2, lsl #2
        11e894:	e0803103 	add	r3, r0, r3, lsl #2
        11e898:	e5933008 	ldr	r3, [r3, #8]	; fField8
        11e89c:	e3730001 	cmn	r3, #1	; 0x1
        11e8a0:	1a000007 	bne	11e8c4 <Add__9TRAMTableSFP9SBankInfoT1+0x38>
        11e8a4:	e0822102 	add	r2, r2, r2, lsl #2
        11e8a8:	e0800102 	add	r0, r0, r2, lsl #2
        11e8ac:	e8b1100c 	ldmia	r1!, {r2, r3, ip}
        11e8b0:	e8a0100c 	stmia	r0!, {r2, r3, ip}
        11e8b4:	e8911008 	ldmia	r1, {r3, ip}
        11e8b8:	e8801008 	stmia	r0, {r3, ip}
        11e8bc:	e3a00000 	mov	r0, #0	; 0x0
        11e8c0:	e1a0f00e 	mov	pc, lr
        11e8c4:	e2822001 	add	r2, r2, #1	; 0x1
        11e8c8:	e352000a 	cmp	r2, #10	; 0xa
        11e8cc:	baffffef 	blt	11e890 <Add__9TRAMTableSFP9SBankInfoT1+0x4>
        11e8d0:	e59f0000 	ldr	r0, [pc, #0]	; 11e8d8 <Add__9TRAMTableSFP9SBankInfoT1+0x4c>
        11e8d4:	e1a0f00e 	mov	pc, lr
        11e8d8:	ffffd8a7 	swinv	0x00ffd8a7
    */
}

/**
 * Symbol: Remove__9TRAMTableSFUlT116EBankDesignationT1
 * Address: 0011e948
 */
void TRAMTable::Remove() {
    /*
        11e948:	e1a0c00d 	mov	ip, sp
        11e94c:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        11e950:	e24cb004 	sub	fp, ip, #4	; 0x4
        11e954:	e1a04000 	mov	r4, r0
        11e958:	e24dd00c 	sub	sp, sp, #12	; 0xc
        11e95c:	e59f60e8 	ldr	r6, [pc, #e8]	; 11ea4c <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x104>
        11e960:	e1b00a00 	movs	r0, r0, lsl #20
        11e964:	13a000ea 	movne	r0, #234	; 0xea
        11e968:	12400b0a 	subne	r0, r0, #10240	; 0x2800
        11e96c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11e970:	e3a05000 	mov	r5, #0	; 0x0
        11e974:	e0850105 	add	r0, r5, r5, lsl #2
        11e978:	e0860100 	add	r0, r6, r0, lsl #2
        11e97c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        11e980:	e3700001 	cmn	r0, #1	; 0x1
        11e984:	0a000002 	beq	11e994 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x4c>
        11e988:	e2855001 	add	r5, r5, #1	; 0x1
        11e98c:	e355000a 	cmp	r5, #10	; 0xa
        11e990:	bafffff7 	blt	11e974 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x2c>
        11e994:	e3a07000 	mov	r7, #0	; 0x0
        11e998:	e3a08000 	mov	r8, #0	; 0x0
        11e99c:	e3550000 	cmp	r5, #0	; 0x0
        11e9a0:	e52d7004 	str	r7, [sp, -#4]!
        11e9a4:	da00007c 	ble	11eb9c <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x254>
        11e9a8:	e51b302c 	ldr	r3, [fp, -#44]
        11e9ac:	e2430001 	sub	r0, r3, #1	; 0x1
        11e9b0:	e1e02000 	mvn	r2, r0
        11e9b4:	e58d200c 	str	r2, [sp, #12]
        11e9b8:	e3a09000 	mov	r9, #0	; 0x0
        11e9bc:	e3a0a000 	mov	sl, #0	; 0x0
        11e9c0:	e0881108 	add	r1, r8, r8, lsl #2
        11e9c4:	e58d1008 	str	r1, [sp, #8]	; fField8
        11e9c8:	e0860101 	add	r0, r6, r1, lsl #2
        11e9cc:	e58d0004 	str	r0, [sp, #4]
        11e9d0:	eb07d2f8 	bl	3135b8 <SBankInfo::NormalRAMSize(void)>
        11e9d4:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        11e9d8:	e7961101 	ldr	r1, [r6, r1, lsl #2]	; fField2
        11e9dc:	e59d2004 	ldr	r2, [sp, #4]
        11e9e0:	e5922008 	ldr	r2, [r2, #8]	; fField8
        11e9e4:	e3720001 	cmn	r2, #1	; 0x1
        11e9e8:	0a000025 	beq	11ea84 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x13c>
        11e9ec:	e59fc05c 	ldr	ip, [pc, #5c]	; 11ea50 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x108>
        11e9f0:	e132000c 	teq	r2, ip
        11e9f4:	1a00001f 	bne	11ea78 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x130>
        11e9f8:	e0810000 	add	r0, r1, r0
        11e9fc:	e0407004 	sub	r7, r0, r4
        11ea00:	e51b302c 	ldr	r3, [fp, -#44]
        11ea04:	e3330000 	teq	r3, #0	; 0x0
        11ea08:	159d200c 	ldrne	r2, [sp, #12]
        11ea0c:	10027007 	andne	r7, r2, r7
        11ea10:	e1570001 	cmp	r7, r1
        11ea14:	9a000017 	bls	11ea78 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x130>
        11ea18:	e51b2030 	ldr	r2, [fp, -#48]
        11ea1c:	e3320000 	teq	r2, #0	; 0x0
        11ea20:	0a00000b 	beq	11ea54 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x10c>
        11ea24:	e3320001 	teq	r2, #1	; 0x1
        11ea28:	03a09801 	moveq	r9, #65536	; 0x10000
        11ea2c:	02899301 	addeq	r9, r9, #67108864	; 0x4000000
        11ea30:	03a0a302 	moveq	sl, #134217728	; 0x8000000
        11ea34:	0a00000b 	beq	11ea68 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x120>
        11ea38:	e3320002 	teq	r2, #2	; 0x2
        11ea3c:	03a09801 	moveq	r9, #65536	; 0x10000
        11ea40:	02899302 	addeq	r9, r9, #134217728	; 0x8000000
        11ea44:	03e0a000 	mvneq	sl, #0	; 0x0
        11ea48:	ea000006 	b	11ea68 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x120>
        11ea4c:	0c1063e4 	ldceq	3, cr6, [r0], -#912
        11ea50:	6b726e6c 	blvs	1dba408 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x1a9bb0>
        11ea54:	e3310301 	teq	r1, #67108864	; 0x4000000
        11ea58:	13310302 	teqne	r1, #134217728	; 0x8000000
        11ea5c:	02819801 	addeq	r9, r1, #65536	; 0x10000
        11ea60:	11a09001 	movne	r9, r1
        11ea64:	e1a0a000 	mov	sl, r0
        11ea68:	e1590007 	cmp	r9, r7
        11ea6c:	8a000001 	bhi	11ea78 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x130>
        11ea70:	e157000a 	cmp	r7, sl
        11ea74:	3a000005 	bcc	11ea90 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x148>
        11ea78:	e2888001 	add	r8, r8, #1	; 0x1
        11ea7c:	e1580005 	cmp	r8, r5
        11ea80:	baffffcc 	blt	11e9b8 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x70>
        11ea84:	e59d0000 	ldr	r0, [sp]
        11ea88:	e3300000 	teq	r0, #0	; 0x0
        11ea8c:	0a000042 	beq	11eb9c <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x254>
        11ea90:	e0882108 	add	r2, r8, r8, lsl #2
        11ea94:	e7961102 	ldr	r1, [r6, r2, lsl #2]	; fField2
        11ea98:	e59f003c 	ldr	r0, [pc, #3c]	; 11eadc <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x194>
        11ea9c:	e1310007 	teq	r1, r7
        11eaa0:	1a00000e 	bne	11eae0 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x198>
        11eaa4:	e0863102 	add	r3, r6, r2, lsl #2
        11eaa8:	e593c004 	ldr	ip, [r3, #4]
        11eaac:	e13c0004 	teq	ip, r4
        11eab0:	051b1034 	ldreq	r1, [fp, -#52]
        11eab4:	03a00000 	moveq	r0, #0	; 0x0
        11eab8:	05a31008 	streq	r1, [r3, #8]!	; fField8
        11eabc:	0a000038 	beq	11eba4 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x25c>
        11eac0:	e355000a 	cmp	r5, #10	; 0xa
        11eac4:	aa000036 	bge	11eba4 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x25c>
        11eac8:	e04c0004 	sub	r0, ip, r4
        11eacc:	e5a30004 	str	r0, [r3, #4]!
        11ead0:	e0810004 	add	r0, r1, r4
        11ead4:	e7860102 	str	r0, [r6, r2, lsl #2]	; fField2
        11ead8:	ea000024 	b	11eb70 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x228>
        11eadc:	ffffd8a7 	swinv	0x00ffd8a7
        11eae0:	e1a0c001 	mov	ip, r1
        11eae4:	e0861102 	add	r1, r6, r2, lsl #2
        11eae8:	e5913004 	ldr	r3, [r1, #4]
        11eaec:	e08cc003 	add	ip, ip, r3
        11eaf0:	e0879004 	add	r9, r7, r4
        11eaf4:	e13c0009 	teq	ip, r9
        11eaf8:	1a000004 	bne	11eb10 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x1c8>
        11eafc:	e355000a 	cmp	r5, #10	; 0xa
        11eb00:	b0430004 	sublt	r0, r3, r4
        11eb04:	b5a10004 	strlt	r0, [r1, #4]!
        11eb08:	ba000018 	blt	11eb70 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x228>
        11eb0c:	ea000024 	b	11eba4 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x25c>
        11eb10:	e3550009 	cmp	r5, #9	; 0x9
        11eb14:	aa000022 	bge	11eba4 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x25c>
        11eb18:	e1a0e005 	mov	lr, r5
        11eb1c:	e1550008 	cmp	r5, r8
        11eb20:	da000009 	ble	11eb4c <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x204>
        11eb24:	e08e010e 	add	r0, lr, lr, lsl #2
        11eb28:	e0860100 	add	r0, r6, r0, lsl #2
        11eb2c:	e240a014 	sub	sl, r0, #20	; 0x14
        11eb30:	e8ba1008 	ldmia	sl!, {r3, ip}
        11eb34:	e8a01008 	stmia	r0!, {r3, ip}
        11eb38:	e89a1408 	ldmia	sl, {r3, sl, ip}
        11eb3c:	e8801408 	stmia	r0, {r3, sl, ip}
        11eb40:	e24ee001 	sub	lr, lr, #1	; 0x1
        11eb44:	e15e0008 	cmp	lr, r8
        11eb48:	cafffff5 	bgt	11eb24 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x1dc>
        11eb4c:	e7960102 	ldr	r0, [r6, r2, lsl #2]	; fField2
        11eb50:	e0470000 	sub	r0, r7, r0
        11eb54:	e5810004 	str	r0, [r1, #4]
        11eb58:	e5819014 	str	r9, [r1, #20]
        11eb5c:	e0800004 	add	r0, r0, r4
        11eb60:	e5912018 	ldr	r2, [r1, #24]
        11eb64:	e0420000 	sub	r0, r2, r0
        11eb68:	e2855001 	add	r5, r5, #1	; 0x1
        11eb6c:	e5a10018 	str	r0, [r1, #24]!
        11eb70:	e0850105 	add	r0, r5, r5, lsl #2
        11eb74:	e7867100 	str	r7, [r6, r0, lsl #2]	; fField2
        11eb78:	e0861100 	add	r1, r6, r0, lsl #2
        11eb7c:	e5814004 	str	r4, [r1, #4]
        11eb80:	e51b0034 	ldr	r0, [fp, -#52]
        11eb84:	e5810008 	str	r0, [r1, #8]	; fField8
        11eb88:	e3a00000 	mov	r0, #0	; 0x0
        11eb8c:	e3a02004 	mov	r2, #4	; 0x4
        11eb90:	e2811008 	add	r1, r1, #8	; 0x8
        11eb94:	e9a10005 	stmib	r1!, {r0, r2}
        11eb98:	ea000001 	b	11eba4 <Remove__9TRAMTableSFUlT116EBankDesignationT1+0x25c>
        11eb9c:	e3a000a6 	mov	r0, #166	; 0xa6
        11eba0:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        11eba4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: GetPPage__9TRAMTableSFUlP9SBankInfo
 * Address: 0011eba8
 */
void TRAMTable::GetPPage() {
    /*
        11eba8:	e1a0c00d 	mov	ip, sp
        11ebac:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        11ebb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        11ebb4:	e1a04001 	mov	r4, r1
        11ebb8:	e3a06000 	mov	r6, #0	; 0x0
        11ebbc:	e1a07600 	mov	r7, r0, lsl #12
        11ebc0:	e3a096ff 	mov	r9, #267386880	; 0xff00000
        11ebc4:	e289920f 	add	r9, r9, #-268435456	; 0xf0000000
        11ebc8:	e3500000 	cmp	r0, #0	; 0x0
        11ebcc:	3a000018 	bcc	11ec34 <GetPPage__9TRAMTableSFUlP9SBankInfo+0x8c>
        11ebd0:	e3a05000 	mov	r5, #0	; 0x0
        11ebd4:	e59fa048 	ldr	sl, [pc, #48]	; 11ec24 <GetPPage__9TRAMTableSFUlP9SBankInfo+0x7c>
        11ebd8:	e0858105 	add	r8, r5, r5, lsl #2
        11ebdc:	e0840108 	add	r0, r4, r8, lsl #2
        11ebe0:	e5901008 	ldr	r1, [r0, #8]	; fField8
        11ebe4:	e3710001 	cmn	r1, #1	; 0x1
        11ebe8:	0a000011 	beq	11ec34 <GetPPage__9TRAMTableSFUlP9SBankInfo+0x8c>
        11ebec:	e131000a 	teq	r1, sl
        11ebf0:	1a00000c 	bne	11ec28 <GetPPage__9TRAMTableSFUlP9SBankInfo+0x80>
        11ebf4:	eb07d26f 	bl	3135b8 <SBankInfo::NormalRAMSize(void)>
        11ebf8:	e0806006 	add	r6, r0, r6
        11ebfc:	e1570006 	cmp	r7, r6
        11ec00:	2a000008 	bcs	11ec28 <GetPPage__9TRAMTableSFUlP9SBankInfo+0x80>
        11ec04:	e0850105 	add	r0, r5, r5, lsl #2
        11ec08:	e0840100 	add	r0, r4, r0, lsl #2
        11ec0c:	eb07d269 	bl	3135b8 <SBankInfo::NormalRAMSize(void)>
        11ec10:	e0460000 	sub	r0, r6, r0
        11ec14:	e0470000 	sub	r0, r7, r0
        11ec18:	e7941108 	ldr	r1, [r4, r8, lsl #2]	; fField2
        11ec1c:	e0800001 	add	r0, r0, r1
        11ec20:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11ec24:	6b726e6c 	blvs	1dba5dc <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x1a9d84>
        11ec28:	e2855001 	add	r5, r5, #1	; 0x1
        11ec2c:	e355000a 	cmp	r5, #10	; 0xa
        11ec30:	baffffe8 	blt	11ebd8 <GetPPage__9TRAMTableSFUlP9SBankInfo+0x30>
        11ec34:	e1a00009 	mov	r0, r9
        11ec38:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: GetPPageWithTag__9TRAMTableSFUl
 * Address: 0011ec3c
 */
void TRAMTable::GetPPageWithTag() {
    /*
        11ec3c:	e59f203c 	ldr	r2, [pc, #3c]	; 11ec80 <GetPPageWithTag__9TRAMTableSFUl+0x44>
        11ec40:	e3a01000 	mov	r1, #0	; 0x0
        11ec44:	e0813101 	add	r3, r1, r1, lsl #2
        11ec48:	e0823103 	add	r3, r2, r3, lsl #2
        11ec4c:	e5933008 	ldr	r3, [r3, #8]	; fField8
        11ec50:	e3730001 	cmn	r3, #1	; 0x1
        11ec54:	0a000006 	beq	11ec74 <GetPPageWithTag__9TRAMTableSFUl+0x38>
        11ec58:	e1330000 	teq	r3, r0
        11ec5c:	00810101 	addeq	r0, r1, r1, lsl #2
        11ec60:	07920100 	ldreq	r0, [r2, r0, lsl #2]	; fField2
        11ec64:	01a0f00e 	moveq	pc, lr
        11ec68:	e2811001 	add	r1, r1, #1	; 0x1
        11ec6c:	e351000a 	cmp	r1, #10	; 0xa
        11ec70:	bafffff3 	blt	11ec44 <GetPPageWithTag__9TRAMTableSFUl+0x8>
        11ec74:	e3a006ff 	mov	r0, #267386880	; 0xff00000
        11ec78:	e280020f 	add	r0, r0, #-268435456	; 0xf0000000
        11ec7c:	e1a0f00e 	mov	pc, lr
        11ec80:	0c1063e4 	ldceq	3, cr6, [r0], -#912
    */
}

/**
 * Symbol: GetRamSize__9TRAMTableSFv
 * Address: 0011ec84
 */
void TRAMTable::GetRamSize() {
    /*
        11ec84:	e92d4010 	stmdb	sp!, {r4, lr}
        11ec88:	e3a00000 	mov	r0, #0	; 0x0
        11ec8c:	e59f3044 	ldr	r3, [pc, #44]	; 11ecd8 <GetRamSize__9TRAMTableSFv+0x54>
        11ec90:	e3a01000 	mov	r1, #0	; 0x0
        11ec94:	e59f4040 	ldr	r4, [pc, #40]	; 11ecdc <GetRamSize__9TRAMTableSFv+0x58>
        11ec98:	e0812101 	add	r2, r1, r1, lsl #2
        11ec9c:	e0832102 	add	r2, r3, r2, lsl #2
        11eca0:	e592e008 	ldr	lr, [r2, #8]	; fField8
        11eca4:	e37e0001 	cmn	lr, #1	; 0x1
        11eca8:	08bd8010 	ldmeqia	sp!, {r4, pc}
        11ecac:	e13e0004 	teq	lr, r4
        11ecb0:	1a000004 	bne	11ecc8 <GetRamSize__9TRAMTableSFv+0x44>
        11ecb4:	e592c010 	ldr	ip, [r2, #16]
        11ecb8:	e33c0004 	teq	ip, #4	; 0x4
        11ecbc:	13a02000 	movne	r2, #0	; 0x0
        11ecc0:	05922004 	ldreq	r2, [r2, #4]
        11ecc4:	e0820000 	add	r0, r2, r0
        11ecc8:	e2811001 	add	r1, r1, #1	; 0x1
        11eccc:	e351000a 	cmp	r1, #10	; 0xa
        11ecd0:	bafffff0 	blt	11ec98 <GetRamSize__9TRAMTableSFv+0x14>
        11ecd4:	e8bd8010 	ldmia	sp!, {r4, pc}
        11ecd8:	0c1063e4 	ldceq	3, cr6, [r0], -#912
        11ecdc:	6b726e6c 	blvs	1dba694 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x1a9e3c>
    */
}

