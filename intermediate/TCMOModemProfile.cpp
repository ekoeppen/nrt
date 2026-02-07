#include "include/TCMOModemProfile.h"

/**
 * Symbol: TCMOModemProfile::__ct(unsigned long)
 * Address: 0011f558
 */
TCMOModemProfile::TCMOModemProfile(unsigned long) {
    /*
        11f558:	e1a0c00d 	mov	ip, sp
        11f55c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11f560:	e24cb004 	sub	fp, ip, #4	; 0x4
        11f564:	e1b04000 	movs	r4, r0
        11f568:	e1a05001 	mov	r5, r1
        11f56c:	1a000003 	bne	11f580 <TCMOModemProfile::__ct(unsigned long)+0x28>
        11f570:	e3a00028 	mov	r0, #40	; 0x28
        11f574:	eb6abc6f 	bl	1bce738 <$__nw(unsigned int)>
        11f578:	e1b04000 	movs	r4, r0
        11f57c:	0a000005 	beq	11f598 <TCMOModemProfile::__ct(unsigned long)+0x40>
        11f580:	e1a00004 	mov	r0, r4
        11f584:	e3a01303 	mov	r1, #201326592	; 0xc000000
        11f588:	eb6a5d66 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        11f58c:	e1a01005 	mov	r1, r5
        11f590:	e1a00004 	mov	r0, r4
        11f594:	eb63e9bc 	bl	1a19c8c <TCMOModemProfile::$SetDefault(unsigned long)>
        11f598:	e1a00004 	mov	r0, r4
        11f59c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCMOModemProfile::SetDefault(unsigned long)
 * Address: 0011f5a0
 */
TCMOModemProfile::SetDefault(unsigned long) {
    /*
        11f5a0:	e1a0c00d 	mov	ip, sp
        11f5a4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11f5a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        11f5ac:	e1a04000 	mov	r4, r0
        11f5b0:	e1a05001 	mov	r5, r1
        11f5b4:	e281601c 	add	r6, r1, #28	; 0x1c
        11f5b8:	eb6a6dd7 	bl	1bbad1c <TOption::$Reset(void)>
        11f5bc:	e1a00004 	mov	r0, r4
        11f5c0:	e59f104c 	ldr	r1, [pc, #4c]	; 11f614 <TCMOModemProfile::SetDefault(unsigned long)+0x74>	; fField4
        11f5c4:	eb6a6dd9 	bl	1bbad30 <TOption::$SetAsOption(unsigned long)>
        11f5c8:	e3a00000 	mov	r0, #0	; 0x0
        11f5cc:	e5845024 	str	r5, [r4, #36]	; fField36
        11f5d0:	e5846004 	str	r6, [r4, #4]	; fField4
        11f5d4:	e5c4000c 	strb	r0, [r4, #12]	; fField12
        11f5d8:	e5c4000d 	strb	r0, [r4, #13]	; fField13
        11f5dc:	e5c4000e 	strb	r0, [r4, #14]	; fField14
        11f5e0:	e3a00001 	mov	r0, #1	; 0x1
        11f5e4:	e5c4000f 	strb	r0, [r4, #15]	; fField15
        11f5e8:	e3a000ff 	mov	r0, #255	; 0xff
        11f5ec:	e5840010 	str	r0, [r4, #16]	; fField16
        11f5f0:	e3a00c4b 	mov	r0, #19200	; 0x4b00
        11f5f4:	e5840014 	str	r0, [r4, #20]	; fField20
        11f5f8:	e3a00e7d 	mov	r0, #2000	; 0x7d0
        11f5fc:	e5840018 	str	r0, [r4, #24]	; fField24
        11f600:	e3a00028 	mov	r0, #40	; 0x28
        11f604:	e584001c 	str	r0, [r4, #28]	; fField28
        11f608:	e3a00019 	mov	r0, #25	; 0x19
        11f60c:	e5a40020 	str	r0, [r4, #32]!	; fField32
        11f610:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        11f614:	6d70726f 	lfmvs	f7, 2, [r0, -#444]!
    */
}

/**
 * Symbol: TCMOModemProfile::GetModemString(long)
 * Address: 0011f618
 */
TCMOModemProfile::GetModemString(long) {
    /*
        11f618:	e3510005 	cmp	r1, #5	; 0x5
        11f61c:	c3a00000 	movgt	r0, #0	; 0x0
        11f620:	c1a0f00e 	movgt	pc, lr
        11f624:	e1a0c00d 	mov	ip, sp
        11f628:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11f62c:	e24cb004 	sub	fp, ip, #4	; 0x4
        11f630:	e1a04001 	mov	r4, r1
        11f634:	e2805028 	add	r5, r0, #40	; 0x28
        11f638:	e3a06000 	mov	r6, #0	; 0x0
        11f63c:	e3510000 	cmp	r1, #0	; 0x0
        11f640:	da000006 	ble	11f660 <TCMOModemProfile::GetModemString(long)+0x48>
        11f644:	e1a00005 	mov	r0, r5
        11f648:	eb6a5918 	bl	1bb5ab0 <$strlen>
        11f64c:	e0800005 	add	r0, r0, r5
        11f650:	e2805001 	add	r5, r0, #1	; 0x1
        11f654:	e2866001 	add	r6, r6, #1	; 0x1
        11f658:	e1560004 	cmp	r6, r4
        11f65c:	bafffff8 	blt	11f644 <TCMOModemProfile::GetModemString(long)+0x2c>
        11f660:	e1a00005 	mov	r0, r5
        11f664:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCMOModemProfile::SetModemStrings(unsigned char const *, unsigned char const *, unsigned char const *, unsigned char const *, unsigned char const *, unsigned char const *)
 * Address: 0011f668
 */
TCMOModemProfile::SetModemStrings(unsigned char const *, unsigned char const *, unsigned char const *, unsigned char const *, unsigned char const *, unsigned char const *) {
    /*
        11f668:	e1a0c00d 	mov	ip, sp
        11f66c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        11f670:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        11f674:	e24cb014 	sub	fp, ip, #20	; 0x14
        11f678:	e1a04001 	mov	r4, r1
        11f67c:	e2807028 	add	r7, r0, #40	; 0x28
        11f680:	e59b801c 	ldr	r8, [fp, #28]	; fField28
        11f684:	e59b9018 	ldr	r9, [fp, #24]	; fField24
        11f688:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        11f68c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        11f690:	e240601c 	sub	r6, r0, #28	; 0x1c
        11f694:	e1a00001 	mov	r0, r1
        11f698:	eb6a5904 	bl	1bb5ab0 <$strlen>
        11f69c:	e2805001 	add	r5, r0, #1	; 0x1
        11f6a0:	e1550006 	cmp	r5, r6
        11f6a4:	c91baff0 	ldmgtdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11f6a8:	e1a01004 	mov	r1, r4
        11f6ac:	e1a00007 	mov	r0, r7
        11f6b0:	eb6a58fd 	bl	1bb5aac <$strcpy>
        11f6b4:	e0464005 	sub	r4, r6, r5
        11f6b8:	e0876005 	add	r6, r7, r5
        11f6bc:	e59b000c 	ldr	r0, [fp, #12]	; fField12
        11f6c0:	eb6a58fa 	bl	1bb5ab0 <$strlen>
        11f6c4:	e2805001 	add	r5, r0, #1	; 0x1
        11f6c8:	e1550004 	cmp	r5, r4
        11f6cc:	c91baff0 	ldmgtdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11f6d0:	e1a00006 	mov	r0, r6
        11f6d4:	e59b100c 	ldr	r1, [fp, #12]	; fField12
        11f6d8:	eb6a58f3 	bl	1bb5aac <$strcpy>
        11f6dc:	e0444005 	sub	r4, r4, r5
        11f6e0:	e0866005 	add	r6, r6, r5
        11f6e4:	e59b0010 	ldr	r0, [fp, #16]	; fField16
        11f6e8:	eb6a58f0 	bl	1bb5ab0 <$strlen>
        11f6ec:	e2805001 	add	r5, r0, #1	; 0x1
        11f6f0:	e1550004 	cmp	r5, r4
        11f6f4:	c91baff0 	ldmgtdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11f6f8:	e1a00006 	mov	r0, r6
        11f6fc:	e59b1010 	ldr	r1, [fp, #16]	; fField16
        11f700:	eb6a58e9 	bl	1bb5aac <$strcpy>
        11f704:	e0444005 	sub	r4, r4, r5
        11f708:	e0866005 	add	r6, r6, r5
        11f70c:	e1a0000a 	mov	r0, sl
        11f710:	eb6a58e6 	bl	1bb5ab0 <$strlen>
        11f714:	e2805001 	add	r5, r0, #1	; 0x1
        11f718:	e1550004 	cmp	r5, r4
        11f71c:	c91baff0 	ldmgtdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11f720:	e1a0100a 	mov	r1, sl
        11f724:	e1a00006 	mov	r0, r6
        11f728:	eb6a58df 	bl	1bb5aac <$strcpy>
        11f72c:	e0444005 	sub	r4, r4, r5
        11f730:	e0866005 	add	r6, r6, r5
        11f734:	e1a00009 	mov	r0, r9
        11f738:	eb6a58dc 	bl	1bb5ab0 <$strlen>
        11f73c:	e2805001 	add	r5, r0, #1	; 0x1
        11f740:	e1550004 	cmp	r5, r4
        11f744:	c91baff0 	ldmgtdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11f748:	e1a01009 	mov	r1, r9
        11f74c:	e1a00006 	mov	r0, r6
        11f750:	eb6a58d5 	bl	1bb5aac <$strcpy>
        11f754:	e0444005 	sub	r4, r4, r5
        11f758:	e0865005 	add	r5, r6, r5
        11f75c:	e1a00008 	mov	r0, r8
        11f760:	eb6a58d2 	bl	1bb5ab0 <$strlen>
        11f764:	e2800001 	add	r0, r0, #1	; 0x1
        11f768:	e1500004 	cmp	r0, r4
        11f76c:	d1a01008 	movle	r1, r8
        11f770:	d1a00005 	movle	r0, r5
        11f774:	d91b6ff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        11f778:	da6a58cb 	ble	1bb5aac <$strcpy>
        11f77c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

