#include "include/TXPrivateContainer.h"

/**
 * Symbol: TXPrivateContainer::__ct(long, long, TXObjectRange *, TXObjectRange *, TXChars *, TXFormatter *)
 * Address: 002354e8
 */
TXPrivateContainer::TXPrivateContainer(long, long, TXObjectRange *, TXObjectRange *, TXChars *, TXFormatter *) {
    /*
        2354e8:	e1a0c00d 	mov	ip, sp
        2354ec:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2354f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2354f4:	e1b04000 	movs	r4, r0
        2354f8:	e1a07001 	mov	r7, r1
        2354fc:	e1a06002 	mov	r6, r2
        235500:	e1a05003 	mov	r5, r3
        235504:	e59b800c 	ldr	r8, [fp, #12]	; fField12
        235508:	e59b9008 	ldr	r9, [fp, #8]	; fField8
        23550c:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        235510:	1a000003 	bne	235524 <TXPrivateContainer::__ct(long, long, TXObjectRange *, TXObjectRange *, TXChars *, TXFormatter *)+0x3c>
        235514:	e3a00038 	mov	r0, #56	; 0x38
        235518:	eb666486 	bl	1bce738 <$__nw(unsigned int)>
        23551c:	e1b04000 	movs	r4, r0
        235520:	0a00000f 	beq	235564 <TXPrivateContainer::__ct(long, long, TXObjectRange *, TXObjectRange *, TXChars *, TXFormatter *)+0x7c>
        235524:	e1a00004 	mov	r0, r4
        235528:	e3a01000 	mov	r1, #0	; 0x0
        23552c:	eb654fef 	bl	1b894f0 <TXContainer::$__ct(TXStream *)>
        235530:	e59f0034 	ldr	r0, [pc, #34]	; 23556c <TXPrivateContainer::__ct(long, long, TXObjectRange *, TXObjectRange *, TXChars *, TXFormatter *)+0x84>
        235534:	e5840000 	str	r0, [r4]
        235538:	e3a00000 	mov	r0, #0	; 0x0
        23553c:	e2844018 	add	r4, r4, #24	; 0x18
        235540:	e8840401 	stmia	r4, {r0, sl}
        235544:	e5245004 	str	r5, [r4, -#4]!	; fField4
        235548:	e5246004 	str	r6, [r4, -#4]!	; fField4
        23554c:	e5247004 	str	r7, [r4, -#4]!	; fField4
        235550:	e584801c 	str	r8, [r4, #28]	; fField28
        235554:	e2844014 	add	r4, r4, #20	; 0x14
        235558:	e8840201 	stmia	r4, {r0, r9}
        23555c:	e2444020 	sub	r4, r4, #32	; 0x20
        235560:	e5c40034 	strb	r0, [r4, #52]	; fField52
        235564:	e1a00004 	mov	r0, r4
        235568:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23556c:	0001ebe0 	andeq	lr, r1, r0, ror #23
    */
}

/**
 * Symbol: TXPrivateContainer::AppendNewValue(unsigned long, long)
 * Address: 00235570
 */
TXPrivateContainer::AppendNewValue(unsigned long, long) {
    /*
        235570:	e1a0c00d 	mov	ip, sp
        235574:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        235578:	e24cb004 	sub	fp, ip, #4	; 0x4
        23557c:	e1a04000 	mov	r4, r0
        235580:	e1a06001 	mov	r6, r1
        235584:	e1a05002 	mov	r5, r2
        235588:	eb654fdb 	bl	1b894fc <TXContainer::$AppendNewValue(unsigned long, long)>
        23558c:	e3a07000 	mov	r7, #0	; 0x0
        235590:	e59fc038 	ldr	ip, [pc, #38]	; 2355d0 <TXPrivateContainer::AppendNewValue(unsigned long, long)+0x60>
        235594:	e136000c 	teq	r6, ip
        235598:	0a00000e 	beq	2355d8 <TXPrivateContainer::AppendNewValue(unsigned long, long)+0x68>
        23559c:	e3a080e9 	mov	r8, #233	; 0xe9
        2355a0:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
        2355a4:	e59fc028 	ldr	ip, [pc, #28]	; 2355d4 <TXPrivateContainer::AppendNewValue(unsigned long, long)+0x64>	; fField28
        2355a8:	e136000c 	teq	r6, ip
        2355ac:	e1a01005 	mov	r1, r5
        2355b0:	e3a00000 	mov	r0, #0	; 0x0
        2355b4:	e5847030 	str	r7, [r4, #48]	; fField48
        2355b8:	1a000012 	bne	235608 <TXPrivateContainer::AppendNewValue(unsigned long, long)+0x98>
        2355bc:	eb657d18 	bl	1b94a24 <TXObjectRange::$__ct(int)>
        2355c0:	e5a40020 	str	r0, [r4, #32]!	; fField32
        2355c4:	e3300000 	teq	r0, #0	; 0x0
        2355c8:	1a000018 	bne	235630 <TXPrivateContainer::AppendNewValue(unsigned long, long)+0xc0>
        2355cc:	ea000011 	b	235618 <TXPrivateContainer::AppendNewValue(unsigned long, long)+0xa8>
        2355d0:	54455854 	strplb	r5, [r5], -#2132	; fField2132
        2355d4:	7478726c 	ldrvcbt	r7, [r8], -#620
        2355d8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2355dc:	e0451000 	sub	r1, r5, r0
        2355e0:	e3510000 	cmp	r1, #0	; 0x0
        2355e4:	da000011 	ble	235630 <TXPrivateContainer::AppendNewValue(unsigned long, long)+0xc0>
        2355e8:	e3a00032 	mov	r0, #50	; 0x32
        2355ec:	eb65f4d3 	bl	1bb2940 <$__rt_sdiv>
        2355f0:	e1a01000 	mov	r1, r0
        2355f4:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        2355f8:	eb655c18 	bl	1b8c660 <TXFormatter::$ReserveLines(long)>
        2355fc:	e3300000 	teq	r0, #0	; 0x0
        235600:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        235604:	ea000009 	b	235630 <TXPrivateContainer::AppendNewValue(unsigned long, long)+0xc0>
        235608:	eb657d05 	bl	1b94a24 <TXObjectRange::$__ct(int)>
        23560c:	e5840018 	str	r0, [r4, #24]	; fField24
        235610:	e3300000 	teq	r0, #0	; 0x0
        235614:	1a000001 	bne	235620 <TXPrivateContainer::AppendNewValue(unsigned long, long)+0xb0>
        235618:	e1a00008 	mov	r0, r8
        23561c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        235620:	e59fc010 	ldr	ip, [pc, #10]	; 235638 <TXPrivateContainer::AppendNewValue(unsigned long, long)+0xc8>
        235624:	e136000c 	teq	r6, ip
        235628:	13a00001 	movne	r0, #1	; 0x1
        23562c:	15c40034 	strneb	r0, [r4, #52]	; fField52
        235630:	e1a00007 	mov	r0, r7
        235634:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        235638:	7478726e 	ldrvcbt	r7, [r8], -#622
    */
}

/**
 * Symbol: TXPrivateContainer::WriteText(TXTextDescriptor *)
 * Address: 0023563c
 */
TXPrivateContainer::WriteText(TXTextDescriptor *) {
    /*
        23563c:	e1a03001 	mov	r3, r1
        235640:	e280000c 	add	r0, r0, #12	; 0xc
        235644:	e8b00006 	ldmia	r0!, {r1, r2}
        235648:	e5b0c010 	ldr	ip, [r0, #16]!	; fField16
        23564c:	e1a0000c 	mov	r0, ip
        235650:	e59cc000 	ldr	ip, [ip]
        235654:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TXPrivateContainer::WriteObject(long, TXAttrObject *, long, unsigned char *)
 * Address: 00235658
 */
TXPrivateContainer::WriteObject(long, TXAttrObject *, long, unsigned char *) {
    /*
        235658:	e1a0c00d 	mov	ip, sp
        23565c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        235660:	e24cb004 	sub	fp, ip, #4	; 0x4
        235664:	e1a01002 	mov	r1, r2
        235668:	e59be004 	ldr	lr, [fp, #4]	; fField4
        23566c:	e5902030 	ldr	r2, [r0, #48]	; fField48
        235670:	e0822003 	add	r2, r2, r3
        235674:	e5802030 	str	r2, [r0, #48]	; fField48
        235678:	e5903008 	ldr	r3, [r0, #8]	; fField8
        23567c:	e59fc03c 	ldr	ip, [pc, #3c]	; 2356c0 <TXPrivateContainer::WriteObject(long, TXAttrObject *, long, unsigned char *)+0x68>
        235680:	e133000c 	teq	r3, ip
        235684:	15900018 	ldrne	r0, [r0, #24]	; fField24
        235688:	05900020 	ldreq	r0, [r0, #32]	; fField32
        23568c:	e5de3000 	ldrb	r3, [lr]
        235690:	e92d0008 	stmdb	sp!, {r3}
        235694:	e1a03001 	mov	r3, r1
        235698:	e3e01000 	mvn	r1, #0	; 0x0
        23569c:	e590c000 	ldr	ip, [r0]
        2356a0:	e1a0e00f 	mov	lr, pc
        2356a4:	e28cf010 	add	pc, ip, #16	; 0x10
        2356a8:	e28dd004 	add	sp, sp, #4	; 0x4
        2356ac:	e3300000 	teq	r0, #0	; 0x0
        2356b0:	03a000e9 	moveq	r0, #233	; 0xe9
        2356b4:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        2356b8:	13a00000 	movne	r0, #0	; 0x0
        2356bc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2356c0:	7478726c 	ldrvcbt	r7, [r8], -#620
    */
}

/**
 * Symbol: TXPrivateContainer::EndValueWrite(void)
 * Address: 002356c4
 */
TXPrivateContainer::EndValueWrite(void) {
    /*
        2356c4:	e5901008 	ldr	r1, [r0, #8]	; fField8
        2356c8:	e59fc02c 	ldr	ip, [pc, #2c]	; 2356fc <TXPrivateContainer::EndValueWrite(void)+0x38>
        2356cc:	e131000c 	teq	r1, ip
        2356d0:	03a00000 	moveq	r0, #0	; 0x0
        2356d4:	01a0f00e 	moveq	pc, lr
        2356d8:	e59fc020 	ldr	ip, [pc, #20]	; 235700 <TXPrivateContainer::EndValueWrite(void)+0x3c>	; fField20
        2356dc:	e131000c 	teq	r1, ip
        2356e0:	15902014 	ldrne	r2, [r0, #20]	; fField20
        2356e4:	15900018 	ldrne	r0, [r0, #24]	; fField24
        2356e8:	0590201c 	ldreq	r2, [r0, #28]	; fField28
        2356ec:	05900020 	ldreq	r0, [r0, #32]	; fField32
        2356f0:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
        2356f4:	e1a00002 	mov	r0, r2
        2356f8:	ea653efb 	b	1b852ec <TXArray::$Reserve(long)>
        2356fc:	54455854 	strplb	r5, [r5], -#2132	; fField2132
        235700:	7478726c 	ldrvcbt	r7, [r8], -#620
    */
}

/**
 * Symbol: TXPrivateContainer::EndWrite(unsigned char, TXContainerImportInfo *)
 * Address: 00235710
 */
TXPrivateContainer::EndWrite(unsigned char, TXContainerImportInfo *) {
    /*
        235710:	e1a0c00d 	mov	ip, sp
        235714:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        235718:	e24cb004 	sub	fp, ip, #4	; 0x4
        23571c:	e1a04000 	mov	r4, r0
        235720:	e1a05002 	mov	r5, r2
        235724:	e31100ff 	tst	r1, #255	; 0xff
        235728:	e3a06000 	mov	r6, #0	; 0x0
        23572c:	0a000006 	beq	23574c <TXPrivateContainer::EndWrite(unsigned char, TXContainerImportInfo *)+0x3c>
        235730:	e5940024 	ldr	r0, [r4, #36]	; fField36
        235734:	e5901000 	ldr	r1, [r0]
        235738:	e1a0e00f 	mov	lr, pc
        23573c:	e281f02c 	add	pc, r1, #44	; 0x2c
        235740:	e5940028 	ldr	r0, [r4, #40]	; fField40
        235744:	eb655bc4 	bl	1b8c65c <TXFormatter::$Compact(void)>
        235748:	ea00003c 	b	235840 <TXPrivateContainer::EndWrite(unsigned char, TXContainerImportInfo *)+0x130>
        23574c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        235750:	e3300000 	teq	r0, #0	; 0x0
        235754:	0a00002c 	beq	23580c <TXPrivateContainer::EndWrite(unsigned char, TXContainerImportInfo *)+0xfc>
        235758:	e3a03000 	mov	r3, #0	; 0x0
        23575c:	e92d0008 	stmdb	sp!, {r3}
        235760:	e1a03000 	mov	r3, r0
        235764:	e5940014 	ldr	r0, [r4, #20]	; fField20
        235768:	e284200c 	add	r2, r4, #12	; 0xc
        23576c:	e8920006 	ldmia	r2, {r1, r2}
        235770:	eb657cbc 	bl	1b94a68 <TXObjectRange::$ReplaceRange(long, long, TXObjectRange *, unsigned char)>
        235774:	e28dd004 	add	sp, sp, #4	; 0x4
        235778:	e5940018 	ldr	r0, [r4, #24]	; fField24
        23577c:	e5c0601c 	strb	r6, [r0, #28]	; fField28
        235780:	e5d40034 	ldrb	r0, [r4, #52]	; fField52
        235784:	e3300000 	teq	r0, #0	; 0x0
        235788:	0a00001f 	beq	23580c <TXPrivateContainer::EndWrite(unsigned char, TXContainerImportInfo *)+0xfc>
        23578c:	e5950004 	ldr	r0, [r5, #4]	; fField4
        235790:	e3300000 	teq	r0, #0	; 0x0
        235794:	05940018 	ldreq	r0, [r4, #24]	; fField24
        235798:	05901004 	ldreq	r1, [r0, #4]	; fField4
        23579c:	03310001 	teqeq	r1, #1	; 0x1
        2357a0:	1a000019 	bne	23580c <TXPrivateContainer::EndWrite(unsigned char, TXContainerImportInfo *)+0xfc>
        2357a4:	e3a01000 	mov	r1, #0	; 0x0
        2357a8:	eb657ca4 	bl	1b94a40 <TXObjectRange::$RangeIndexToObject( const(long))>
        2357ac:	e5901000 	ldr	r1, [r0]
        2357b0:	e1a0e00f 	mov	lr, pc
        2357b4:	e281f03c 	add	pc, r1, #60	; 0x3c
        2357b8:	e3300000 	teq	r0, #0	; 0x0
        2357bc:	0a000012 	beq	23580c <TXPrivateContainer::EndWrite(unsigned char, TXContainerImportInfo *)+0xfc>
        2357c0:	e24dd014 	sub	sp, sp, #20	; 0x14
        2357c4:	e59f10d4 	ldr	r1, [pc, #d4]	; 2358a0 <TXPrivateContainer::EndWrite(unsigned char, TXContainerImportInfo *)+0x190>
        2357c8:	e3a07001 	mov	r7, #1	; 0x1
        2357cc:	e1a02007 	mov	r2, r7
        2357d0:	e1a0000d 	mov	r0, sp
        2357d4:	eb654b0b 	bl	1b88408 <TXTextDescriptor::$Set(unsigned short *, long)>
        2357d8:	e1a0300d 	mov	r3, sp
        2357dc:	e594c024 	ldr	ip, [r4, #36]	; fField36
        2357e0:	e1a0000c 	mov	r0, ip
        2357e4:	e284200c 	add	r2, r4, #12	; 0xc
        2357e8:	e8920006 	ldmia	r2, {r1, r2}
        2357ec:	e59cc000 	ldr	ip, [ip]
        2357f0:	e1a0e00f 	mov	lr, pc
        2357f4:	e28cf008 	add	pc, ip, #8	; 0x8
        2357f8:	e5d50000 	ldrb	r0, [r5]
        2357fc:	e3800001 	orr	r0, r0, #1	; 0x1
        235800:	e5c50000 	strb	r0, [r5]
        235804:	e5a57004 	str	r7, [r5, #4]!	; fField4
        235808:	e28dd014 	add	sp, sp, #20	; 0x14
        23580c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        235810:	e3300000 	teq	r0, #0	; 0x0
        235814:	0a000009 	beq	235840 <TXPrivateContainer::EndWrite(unsigned char, TXContainerImportInfo *)+0x130>
        235818:	e3a03000 	mov	r3, #0	; 0x0
        23581c:	e92d0008 	stmdb	sp!, {r3}
        235820:	e1a03000 	mov	r3, r0
        235824:	e594001c 	ldr	r0, [r4, #28]	; fField28
        235828:	e284200c 	add	r2, r4, #12	; 0xc
        23582c:	e8920006 	ldmia	r2, {r1, r2}
        235830:	eb657c8c 	bl	1b94a68 <TXObjectRange::$ReplaceRange(long, long, TXObjectRange *, unsigned char)>
        235834:	e28dd004 	add	sp, sp, #4	; 0x4
        235838:	e5940020 	ldr	r0, [r4, #32]	; fField32
        23583c:	e5c0601c 	strb	r6, [r0, #28]	; fField28
        235840:	e5940018 	ldr	r0, [r4, #24]	; fField24
        235844:	e3300000 	teq	r0, #0	; 0x0
        235848:	0a000007 	beq	23586c <TXPrivateContainer::EndWrite(unsigned char, TXContainerImportInfo *)+0x15c>
        23584c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        235850:	eb653ea6 	bl	1b852f0 <TXArray::$Compact(void)>
        235854:	e5940018 	ldr	r0, [r4, #24]	; fField24
        235858:	e3300000 	teq	r0, #0	; 0x0
        23585c:	0a000002 	beq	23586c <TXPrivateContainer::EndWrite(unsigned char, TXContainerImportInfo *)+0x15c>
        235860:	e3a01001 	mov	r1, #1	; 0x1
        235864:	e1a0e00f 	mov	lr, pc
        235868:	e590f000 	ldr	pc, [r0]
        23586c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        235870:	e3300000 	teq	r0, #0	; 0x0
        235874:	0a000007 	beq	235898 <TXPrivateContainer::EndWrite(unsigned char, TXContainerImportInfo *)+0x188>
        235878:	e594001c 	ldr	r0, [r4, #28]	; fField28
        23587c:	eb653e9b 	bl	1b852f0 <TXArray::$Compact(void)>
        235880:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        235884:	e3300000 	teq	r0, #0	; 0x0
        235888:	0a000002 	beq	235898 <TXPrivateContainer::EndWrite(unsigned char, TXContainerImportInfo *)+0x188>
        23588c:	e3a01001 	mov	r1, #1	; 0x1
        235890:	e1a0e00f 	mov	lr, pc
        235894:	e590f000 	ldr	pc, [r0]
        235898:	e1a00006 	mov	r0, r6
        23589c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2358a0:	0c104d88 	ldceq	13, cr4, [r0], -#544
    */
}

/**
 * Symbol: TXPrivateContainer::FocusOnValue(unsigned long)
 * Address: 002358a4
 */
TXPrivateContainer::FocusOnValue(unsigned long) {
    /*
        2358a4:	e1a0c00d 	mov	ip, sp
        2358a8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2358ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2358b0:	e1a05000 	mov	r5, r0
        2358b4:	e1a04001 	mov	r4, r1
        2358b8:	eb654f0e 	bl	1b894f8 <TXContainer::$FocusOnValue(unsigned long)>
        2358bc:	e59fc024 	ldr	ip, [pc, #24]	; 2358e8 <TXPrivateContainer::FocusOnValue(unsigned long)+0x44>	; fField24
        2358c0:	e134000c 	teq	r4, ip
        2358c4:	159fc020 	ldrne	ip, [pc, #20]	; 2358ec <TXPrivateContainer::FocusOnValue(unsigned long)+0x48>	; fField20
        2358c8:	1134000c 	teqne	r4, ip
        2358cc:	159fc01c 	ldrne	ip, [pc, #1c]	; 2358f0 <TXPrivateContainer::FocusOnValue(unsigned long)+0x4c>
        2358d0:	1134000c 	teqne	r4, ip
        2358d4:	0595000c 	ldreq	r0, [r5, #12]	; fField12
        2358d8:	05a5002c 	streq	r0, [r5, #44]!	; fField44
        2358dc:	03a00000 	moveq	r0, #0	; 0x0
        2358e0:	13e00065 	mvnne	r0, #101	; 0x65
        2358e4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2358e8:	54455854 	strplb	r5, [r5], -#2132	; fField2132
        2358ec:	7478726e 	ldrvcbt	r7, [r8], -#622
        2358f0:	7478726c 	ldrvcbt	r7, [r8], -#620
    */
}

/**
 * Symbol: TXPrivateContainer::AcquireTextDescriptor(TXTextDescriptor *)
 * Address: 002358f4
 */
TXPrivateContainer::AcquireTextDescriptor(TXTextDescriptor *) {
    /*
        2358f4:	e280000c 	add	r0, r0, #12	; 0xc
        2358f8:	e8b0000c 	ldmia	r0!, {r2, r3}
        2358fc:	e5b0c010 	ldr	ip, [r0, #16]!	; fField16
        235900:	e1a00001 	mov	r0, r1
        235904:	e1a0100c 	mov	r1, ip
        235908:	ea654abf 	b	1b8840c <TXTextDescriptor::$Set(TXChars *, long, long)>
    */
}

/**
 * Symbol: TXPrivateContainer::GetCountObjects(long *)
 * Address: 0023590c
 */
TXPrivateContainer::GetCountObjects(long *) {
    /*
        23590c:	e1a0c00d 	mov	ip, sp
        235910:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        235914:	e24cb004 	sub	fp, ip, #4	; 0x4
        235918:	e1a04001 	mov	r4, r1
        23591c:	e5901008 	ldr	r1, [r0, #8]	; fField8
        235920:	e59fc024 	ldr	ip, [pc, #24]	; 23594c <TXPrivateContainer::GetCountObjects(long *)+0x40>	; fField24
        235924:	e131000c 	teq	r1, ip
        235928:	15903014 	ldrne	r3, [r0, #20]	; fField20
        23592c:	0590301c 	ldreq	r3, [r0, #28]	; fField28
        235930:	e2800008 	add	r0, r0, #8	; 0x8
        235934:	e9b00006 	ldmib	r0!, {r1, r2}
        235938:	e1a00003 	mov	r0, r3
        23593c:	eb657c3e 	bl	1b94a3c <TXObjectRange::$CountRangeObjects(long, long)>
        235940:	e5840000 	str	r0, [r4]
        235944:	e3a00000 	mov	r0, #0	; 0x0
        235948:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        23594c:	7478726c 	ldrvcbt	r7, [r8], -#620
    */
}

/**
 * Symbol: TXPrivateContainer::GetValueSize(long *)
 * Address: 00235950
 */
TXPrivateContainer::GetValueSize(long *) {
    /*
        235950:	e5900010 	ldr	r0, [r0, #16]	; fField16
        235954:	e1a00080 	mov	r0, r0, lsl #1
        235958:	e5810000 	str	r0, [r1]
        23595c:	e3a00000 	mov	r0, #0	; 0x0
        235960:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXPrivateContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)
 * Address: 00235964
 */
TXPrivateContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *) {
    /*
        235964:	e1a0c00d 	mov	ip, sp
        235968:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23596c:	e24cb004 	sub	fp, ip, #4	; 0x4
        235970:	e1a04000 	mov	r4, r0
        235974:	e1a06002 	mov	r6, r2
        235978:	e1a05003 	mov	r5, r3
        23597c:	e59b7004 	ldr	r7, [fp, #4]	; fField4
        235980:	e5900008 	ldr	r0, [r0, #8]	; fField8
        235984:	e59fc054 	ldr	ip, [pc, #54]	; 2359e0 <TXPrivateContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x7c>
        235988:	e130000c 	teq	r0, ip
        23598c:	15940014 	ldrne	r0, [r4, #20]	; fField20
        235990:	0594001c 	ldreq	r0, [r4, #28]	; fField28
        235994:	e1a02005 	mov	r2, r5
        235998:	e594102c 	ldr	r1, [r4, #44]	; fField44
        23599c:	eb657c25 	bl	1b94a38 <TXObjectRange::$GetNextObjectRange( const(long, long *))>
        2359a0:	e5860000 	str	r0, [r6]
        2359a4:	e284100c 	add	r1, r4, #12	; 0xc
        2359a8:	e8910003 	ldmia	r1, {r0, r1}
        2359ac:	e0800001 	add	r0, r0, r1
        2359b0:	e594102c 	ldr	r1, [r4, #44]	; fField44
        2359b4:	e0400001 	sub	r0, r0, r1
        2359b8:	e5951000 	ldr	r1, [r5]
        2359bc:	e1510000 	cmp	r1, r0
        2359c0:	c5850000 	strgt	r0, [r5]
        2359c4:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2359c8:	e5951000 	ldr	r1, [r5]
        2359cc:	e0800001 	add	r0, r0, r1
        2359d0:	e5a4002c 	str	r0, [r4, #44]!	; fField44
        2359d4:	e3a00000 	mov	r0, #0	; 0x0
        2359d8:	e5c70000 	strb	r0, [r7]
        2359dc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2359e0:	7478726c 	ldrvcbt	r7, [r8], -#620
    */
}

