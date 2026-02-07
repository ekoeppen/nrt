#include "include/TTestStoreFileList.h"

/**
 * Symbol: TTestStoreFileList::FileNamesEqual(char *, char *)
 * Address: 0022aa40
 */
TTestStoreFileList::FileNamesEqual(char *, char *) {
    /*
        22aa40:	e1a0c00d 	mov	ip, sp
        22aa44:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        22aa48:	e24cb004 	sub	fp, ip, #4	; 0x4
        22aa4c:	e1a04001 	mov	r4, r1
        22aa50:	e1a05002 	mov	r5, r2
        22aa54:	e3a09020 	mov	r9, #32	; 0x20
        22aa58:	e3a080e0 	mov	r8, #224	; 0xe0
        22aa5c:	e3a07001 	mov	r7, #1	; 0x1
        22aa60:	e1a00001 	mov	r0, r1
        22aa64:	eb662c11 	bl	1bb5ab0 <$strlen>
        22aa68:	e1a06000 	mov	r6, r0
        22aa6c:	e1a00005 	mov	r0, r5
        22aa70:	eb662c0e 	bl	1bb5ab0 <$strlen>
        22aa74:	e1360000 	teq	r6, r0
        22aa78:	13a00000 	movne	r0, #0	; 0x0
        22aa7c:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        22aa80:	e3a06000 	mov	r6, #0	; 0x0
        22aa84:	e1a00004 	mov	r0, r4
        22aa88:	eb662c08 	bl	1bb5ab0 <$strlen>
        22aa8c:	e3500000 	cmp	r0, #0	; 0x0
        22aa90:	9a00000c 	bls	22aac8 <TTestStoreFileList::FileNamesEqual(char *, char *)+0x88>
        22aa94:	e7d40006 	ldrb	r0, [r4, r6]
        22aa98:	e7d51006 	ldrb	r1, [r5, r6]
        22aa9c:	e0400001 	sub	r0, r0, r1
        22aaa0:	e21000ff 	ands	r0, r0, #255	; 0xff
        22aaa4:	11300009 	teqne	r0, r9
        22aaa8:	11300008 	teqne	r0, r8
        22aaac:	13a07000 	movne	r7, #0	; 0x0
        22aab0:	1a000004 	bne	22aac8 <TTestStoreFileList::FileNamesEqual(char *, char *)+0x88>
        22aab4:	e2866001 	add	r6, r6, #1	; 0x1
        22aab8:	e1a00004 	mov	r0, r4
        22aabc:	eb662bfb 	bl	1bb5ab0 <$strlen>
        22aac0:	e1500006 	cmp	r0, r6
        22aac4:	8afffff2 	bhi	22aa94 <TTestStoreFileList::FileNamesEqual(char *, char *)+0x54>
        22aac8:	e1a00007 	mov	r0, r7
        22aacc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TTestStoreFileList::__ct(TStore *)
 * Address: 0022ac70
 */
TTestStoreFileList::TTestStoreFileList(TStore *) {
    /*
        22ac70:	e1a0c00d 	mov	ip, sp
        22ac74:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22ac78:	e24cb004 	sub	fp, ip, #4	; 0x4
        22ac7c:	e1b04000 	movs	r4, r0
        22ac80:	e1a05001 	mov	r5, r1
        22ac84:	1a000003 	bne	22ac98 <TTestStoreFileList::__ct(TStore *)+0x28>
        22ac88:	e3a0001c 	mov	r0, #28	; 0x1c
        22ac8c:	eb668ea9 	bl	1bce738 <$__nw(unsigned int)>
        22ac90:	e1b04000 	movs	r4, r0
        22ac94:	0a000002 	beq	22aca4 <TTestStoreFileList::__ct(TStore *)+0x34>
        22ac98:	e1a00004 	mov	r0, r4
        22ac9c:	eb66e562 	bl	1be422c <CList::$__ct(void)>
        22aca0:	e5845018 	str	r5, [r4, #24]	; fField24
        22aca4:	e1a00004 	mov	r0, r4
        22aca8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTestStoreFileList::__dt(void)
 * Address: 0022acac
 */
TTestStoreFileList::~TTestStoreFileList(void) {
    /*
        22acac:	e1a0c00d 	mov	ip, sp
        22acb0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22acb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        22acb8:	e1a04000 	mov	r4, r0
        22acbc:	e1a05001 	mov	r5, r1
        22acc0:	e3a01000 	mov	r1, #0	; 0x0
        22acc4:	eb66e96e 	bl	1be5284 <CList::$__dt(void)>
        22acc8:	e3150001 	tst	r5, #1	; 0x1
        22accc:	11a00004 	movne	r0, r4
        22acd0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        22acd4:	1a668a81 	bne	1bcd6e0 <$__dl(void *)>
        22acd8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTestStoreFileList::Add(char *, char *, unsigned long)
 * Address: 0022acdc
 */
TTestStoreFileList::Add(char *, char *, unsigned long) {
    /*
        22acdc:	e1a0c00d 	mov	ip, sp
        22ace0:	e92dd81f 	stmdb	sp!, {r0, r1, r2, r3, r4, fp, ip, lr, pc}
        22ace4:	e24cb004 	sub	fp, ip, #4	; 0x4
        22ace8:	e24dd008 	sub	sp, sp, #8	; 0x8
        22acec:	e3a04000 	mov	r4, #0	; 0x0
        22acf0:	e51b0014 	ldr	r0, [fp, -#20]
        22acf4:	e2801068 	add	r1, r0, #104	; 0x68
        22acf8:	e51b0020 	ldr	r0, [fp, -#32]
        22acfc:	e5900018 	ldr	r0, [r0, #24]	; fField24
        22ad00:	e28d2004 	add	r2, sp, #4	; 0x4
        22ad04:	eb6354c1 	bl	1b00010 <TStore::$NewObject(long, unsigned long *)>
        22ad08:	e3300000 	teq	r0, #0	; 0x0
        22ad0c:	1a000024 	bne	22ada4 <TTestStoreFileList::Add(char *, char *, unsigned long)+0xc8>
        22ad10:	e24b1020 	sub	r1, fp, #32	; 0x20
        22ad14:	e8910003 	ldmia	r1, {r0, r1}
        22ad18:	eb65611c 	bl	1b83190 <TTestStoreFileList::$FileNameSum(char *)>
        22ad1c:	e3a03004 	mov	r3, #4	; 0x4
        22ad20:	e58d0000 	str	r0, [sp]
        22ad24:	e92d0008 	stmdb	sp!, {r3}
        22ad28:	e51b0020 	ldr	r0, [fp, -#32]
        22ad2c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        22ad30:	e08d3003 	add	r3, sp, r3
        22ad34:	e1a02004 	mov	r2, r4
        22ad38:	e59d1008 	ldr	r1, [sp, #8]
        22ad3c:	eb637def 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        22ad40:	e28dd004 	add	sp, sp, #4	; 0x4
        22ad44:	e3300000 	teq	r0, #0	; 0x0
        22ad48:	1a000015 	bne	22ada4 <TTestStoreFileList::Add(char *, char *, unsigned long)+0xc8>
        22ad4c:	e3a02004 	mov	r2, #4	; 0x4
        22ad50:	e3a03060 	mov	r3, #96	; 0x60
        22ad54:	e92d0008 	stmdb	sp!, {r3}
        22ad58:	e51b0020 	ldr	r0, [fp, -#32]
        22ad5c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        22ad60:	e51b301c 	ldr	r3, [fp, -#28]
        22ad64:	e59d1008 	ldr	r1, [sp, #8]
        22ad68:	eb637de4 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        22ad6c:	e28dd004 	add	sp, sp, #4	; 0x4
        22ad70:	e3300000 	teq	r0, #0	; 0x0
        22ad74:	1a00000a 	bne	22ada4 <TTestStoreFileList::Add(char *, char *, unsigned long)+0xc8>
        22ad78:	e3a02064 	mov	r2, #100	; 0x64
        22ad7c:	e3a03004 	mov	r3, #4	; 0x4
        22ad80:	e92d0008 	stmdb	sp!, {r3}
        22ad84:	e51b0020 	ldr	r0, [fp, -#32]
        22ad88:	e5900018 	ldr	r0, [r0, #24]	; fField24
        22ad8c:	e24b3014 	sub	r3, fp, #20	; 0x14
        22ad90:	e59d1008 	ldr	r1, [sp, #8]
        22ad94:	eb637dd9 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        22ad98:	e28dd004 	add	sp, sp, #4	; 0x4
        22ad9c:	e3300000 	teq	r0, #0	; 0x0
        22ada0:	0a000000 	beq	22ada8 <TTestStoreFileList::Add(char *, char *, unsigned long)+0xcc>
        22ada4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        22ada8:	e3a02068 	mov	r2, #104	; 0x68
        22adac:	e51b3014 	ldr	r3, [fp, -#20]
        22adb0:	e92d0008 	stmdb	sp!, {r3}
        22adb4:	e51b0020 	ldr	r0, [fp, -#32]
        22adb8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        22adbc:	e51b3018 	ldr	r3, [fp, -#24]	; fField24
        22adc0:	e59d1008 	ldr	r1, [sp, #8]
        22adc4:	eb637dcd 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        22adc8:	e28dd004 	add	sp, sp, #4	; 0x4
        22adcc:	e1b04000 	movs	r4, r0
        22add0:	1a000003 	bne	22ade4 <TTestStoreFileList::Add(char *, char *, unsigned long)+0x108>
        22add4:	e51b0020 	ldr	r0, [fp, -#32]
        22add8:	e3a01000 	mov	r1, #0	; 0x0
        22addc:	e59d2004 	ldr	r2, [sp, #4]
        22ade0:	eb66f9c1 	bl	1be94ec <CList::$InsertAt(long, void *)>
        22ade4:	e1a00004 	mov	r0, r4
        22ade8:	eaffffed 	b	22ada4 <TTestStoreFileList::Add(char *, char *, unsigned long)+0xc8>
    */
}

/**
 * Symbol: TTestStoreFileList::Get(char *, char **, unsigned long *, unsigned long, unsigned long)
 * Address: 0022adec
 */
TTestStoreFileList::Get(char *, char **, unsigned long *, unsigned long, unsigned long) {
    /*
        22adec:	e1a0c00d 	mov	ip, sp
        22adf0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        22adf4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        22adf8:	e24cb014 	sub	fp, ip, #20	; 0x14
        22adfc:	e1a04000 	mov	r4, r0
        22ae00:	e1a05001 	mov	r5, r1
        22ae04:	e59b9018 	ldr	r9, [fp, #24]	; fField24
        22ae08:	e59ba014 	ldr	sl, [fp, #20]
        22ae0c:	e24dd06c 	sub	sp, sp, #108	; 0x6c
        22ae10:	e3a07000 	mov	r7, #0	; 0x0
        22ae14:	eb6560dd 	bl	1b83190 <TTestStoreFileList::$FileNameSum(char *)>
        22ae18:	e58d0008 	str	r0, [sp, #8]
        22ae1c:	e5948000 	ldr	r8, [r4]
        22ae20:	e3580000 	cmp	r8, #0	; 0x0
        22ae24:	da00001f 	ble	22aea8 <TTestStoreFileList::Get(char *, char **, unsigned long *, unsigned long, unsigned long)+0xbc>
        22ae28:	e1a01007 	mov	r1, r7
        22ae2c:	e1a00004 	mov	r0, r4
        22ae30:	eb66ed43 	bl	1be6344 <CList::$At(long)>
        22ae34:	e1a06000 	mov	r6, r0
        22ae38:	e3a03004 	mov	r3, #4	; 0x4
        22ae3c:	e92d0008 	stmdb	sp!, {r3}
        22ae40:	e28d3008 	add	r3, sp, #8	; 0x8
        22ae44:	e1a01006 	mov	r1, r6
        22ae48:	e3a02000 	mov	r2, #0	; 0x0
        22ae4c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        22ae50:	eb635cba 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        22ae54:	e28dd004 	add	sp, sp, #4	; 0x4
        22ae58:	e99d0003 	ldmib	sp, {r0, r1}
        22ae5c:	e1310000 	teq	r1, r0
        22ae60:	1a00000d 	bne	22ae9c <TTestStoreFileList::Get(char *, char **, unsigned long *, unsigned long, unsigned long)+0xb0>
        22ae64:	e3a03060 	mov	r3, #96	; 0x60
        22ae68:	e92d0008 	stmdb	sp!, {r3}
        22ae6c:	e28d3010 	add	r3, sp, #16	; 0x10
        22ae70:	e1a01006 	mov	r1, r6
        22ae74:	e3a02004 	mov	r2, #4	; 0x4
        22ae78:	e5940018 	ldr	r0, [r4, #24]	; fField24
        22ae7c:	eb635caf 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        22ae80:	e28dd004 	add	sp, sp, #4	; 0x4
        22ae84:	e28d200c 	add	r2, sp, #12	; 0xc
        22ae88:	e1a01005 	mov	r1, r5
        22ae8c:	e1a00004 	mov	r0, r4
        22ae90:	eb6560bd 	bl	1b8318c <TTestStoreFileList::$FileNamesEqual(char *, char *)>
        22ae94:	e3300000 	teq	r0, #0	; 0x0
        22ae98:	1a000002 	bne	22aea8 <TTestStoreFileList::Get(char *, char **, unsigned long *, unsigned long, unsigned long)+0xbc>
        22ae9c:	e2877001 	add	r7, r7, #1	; 0x1
        22aea0:	e1570008 	cmp	r7, r8
        22aea4:	baffffdf 	blt	22ae28 <TTestStoreFileList::Get(char *, char **, unsigned long *, unsigned long, unsigned long)+0x3c>
        22aea8:	e1570008 	cmp	r7, r8
        22aeac:	a3e00000 	mvnge	r0, #0	; 0x0
        22aeb0:	aa000022 	bge	22af40 <TTestStoreFileList::Get(char *, char **, unsigned long *, unsigned long, unsigned long)+0x154>
        22aeb4:	e3a02064 	mov	r2, #100	; 0x64
        22aeb8:	e3a03004 	mov	r3, #4	; 0x4
        22aebc:	e92d0008 	stmdb	sp!, {r3}
        22aec0:	e08d3003 	add	r3, sp, r3
        22aec4:	e1a01006 	mov	r1, r6
        22aec8:	e5940018 	ldr	r0, [r4, #24]	; fField24
        22aecc:	eb635c9b 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        22aed0:	e28dd004 	add	sp, sp, #4	; 0x4
        22aed4:	e3300000 	teq	r0, #0	; 0x0
        22aed8:	1a000018 	bne	22af40 <TTestStoreFileList::Get(char *, char **, unsigned long *, unsigned long, unsigned long)+0x154>
        22aedc:	e28a5068 	add	r5, sl, #104	; 0x68
        22aee0:	e59d0000 	ldr	r0, [sp]
        22aee4:	e040700a 	sub	r7, r0, sl
        22aee8:	e3390000 	teq	r9, #0	; 0x0
        22aeec:	0a000001 	beq	22aef8 <TTestStoreFileList::Get(char *, char **, unsigned long *, unsigned long, unsigned long)+0x10c>
        22aef0:	e1590007 	cmp	r9, r7
        22aef4:	31a07009 	movcc	r7, r9
        22aef8:	e59b3010 	ldr	r3, [fp, #16]
        22aefc:	e5837000 	str	r7, [r3]
        22af00:	e1a00007 	mov	r0, r7
        22af04:	eb66dc8d 	bl	1be2140 <$NewPtr>
        22af08:	e1b01000 	movs	r1, r0
        22af0c:	03e00001 	mvneq	r0, #1	; 0x1
        22af10:	0a00000a 	beq	22af40 <TTestStoreFileList::Get(char *, char **, unsigned long *, unsigned long, unsigned long)+0x154>
        22af14:	e59b200c 	ldr	r2, [fp, #12]
        22af18:	e1a03007 	mov	r3, r7
        22af1c:	e5821000 	str	r1, [r2]
        22af20:	e92d0008 	stmdb	sp!, {r3}
        22af24:	e1a03001 	mov	r3, r1
        22af28:	e1a02005 	mov	r2, r5
        22af2c:	e1a01006 	mov	r1, r6
        22af30:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        22af34:	eb635c81 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        22af38:	e28dd004 	add	sp, sp, #4	; 0x4
        22af3c:	e3300000 	teq	r0, #0	; 0x0
        22af40:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TTestStoreFileList::DeleteAll(void)
 * Address: 0022af44
 */
TTestStoreFileList::DeleteAll(void) {
    /*
        22af44:	e1a0c00d 	mov	ip, sp
        22af48:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        22af4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22af50:	e1a04000 	mov	r4, r0
        22af54:	e3a05000 	mov	r5, #0	; 0x0
        22af58:	e5906000 	ldr	r6, [r0]
        22af5c:	e3560000 	cmp	r6, #0	; 0x0
        22af60:	d91ba8f0 	ldmledb	fp, {r4, r5, r6, r7, fp, sp, pc}
        22af64:	e5940000 	ldr	r0, [r4]
        22af68:	e2401001 	sub	r1, r0, #1	; 0x1
        22af6c:	e1a00004 	mov	r0, r4
        22af70:	eb66ecf3 	bl	1be6344 <CList::$At(long)>
        22af74:	e1a07000 	mov	r7, r0
        22af78:	e5940000 	ldr	r0, [r4]
        22af7c:	e2401001 	sub	r1, r0, #1	; 0x1
        22af80:	e1a00004 	mov	r0, r4
        22af84:	e3a02001 	mov	r2, #1	; 0x1
        22af88:	eb6705a9 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        22af8c:	e1a01007 	mov	r1, r7
        22af90:	e5940018 	ldr	r0, [r4, #24]	; fField24
        22af94:	eb632ee7 	bl	1af6b38 <TStore::$DeleteObject(unsigned long)>
        22af98:	e2855001 	add	r5, r5, #1	; 0x1
        22af9c:	e1550006 	cmp	r5, r6
        22afa0:	baffffef 	blt	22af64 <TTestStoreFileList::DeleteAll(void)+0x20>
        22afa4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TTestStoreFileList::FileNameSum(char *)
 * Address: 0022afa8
 */
TTestStoreFileList::FileNameSum(char *) {
    /*
        22afa8:	e3a0c020 	mov	ip, #32	; 0x20
        22afac:	e3a00000 	mov	r0, #0	; 0x0
        22afb0:	e3a03000 	mov	r3, #0	; 0x0
        22afb4:	e7d12003 	ldrb	r2, [r1, r3]
        22afb8:	e3520061 	cmp	r2, #97	; 0x61
        22afbc:	ba000002 	blt	22afcc <TTestStoreFileList::FileNameSum(char *)+0x24>
        22afc0:	e352007a 	cmp	r2, #122	; 0x7a
        22afc4:	d042200c 	suble	r2, r2, ip
        22afc8:	d20220ff 	andle	r2, r2, #255	; 0xff
        22afcc:	e0800002 	add	r0, r0, r2
        22afd0:	e2833001 	add	r3, r3, #1	; 0x1
        22afd4:	e3320000 	teq	r2, #0	; 0x0
        22afd8:	1afffff5 	bne	22afb4 <TTestStoreFileList::FileNameSum(char *)+0xc>
        22afdc:	e1a0f00e 	mov	pc, lr
    */
}

