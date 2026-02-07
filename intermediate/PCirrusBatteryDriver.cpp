#include "include/PCirrusBatteryDriver.h"

/**
 * Symbol: Sizeof__20PCirrusBatteryDriverSFv
 * Address: 0005853c
 */
void PCirrusBatteryDriver::Sizeof() {
    /*
         5853c:	e3a0009c 	mov	r0, #156	; 0x9c
         58540:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusBatteryDriver::New(void)
 * Address: 00058544
 */
PCirrusBatteryDriver::New(void) {
    /*
         58544:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusBatteryDriver::SetType(unsigned long, unsigned long)
 * Address: 00058548
 */
PCirrusBatteryDriver::SetType(unsigned long, unsigned long) {
    /*
         58548:	e3a03000 	mov	r3, #0	; 0x0
         5854c:	e3310000 	teq	r1, #0	; 0x0
         58550:	13e03000 	mvnne	r3, #0	; 0x0
         58554:	03a01000 	moveq	r1, #0	; 0x0
         58558:	05802050 	streq	r2, [r0, #80]	; fField80
         5855c:	05c01058 	streqb	r1, [r0, #88]	; fField88
         58560:	e1a00003 	mov	r0, r3
         58564:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusBatteryDriver::BatteryLevel(unsigned long, long)
 * Address: 00058568
 */
PCirrusBatteryDriver::BatteryLevel(unsigned long, long) {
    /*
         58568:	e1a0c00d 	mov	ip, sp
         5856c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         58570:	e24cb004 	sub	fp, ip, #4	; 0x4
         58574:	e1a04000 	mov	r4, r0
         58578:	e1a05002 	mov	r5, r2
         5857c:	e59f0098 	ldr	r0, [pc, #98]	; 5861c <PCirrusBatteryDriver::BatteryLevel(unsigned long, long)+0xb4>
         58580:	e5900000 	ldr	r0, [r0]
         58584:	e3100901 	tst	r0, #16384	; 0x4000
         58588:	13a00064 	movne	r0, #100	; 0x64
         5858c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         58590:	e3350102 	teq	r5, #-2147483648	; 0x80000000
         58594:	03a00102 	moveq	r0, #-2147483648	; 0x80000000
         58598:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         5859c:	e3a06102 	mov	r6, #-2147483648	; 0x80000000
         585a0:	e3310001 	teq	r1, #1	; 0x1
         585a4:	1a00003b 	bne	58698 <PCirrusBatteryDriver::BatteryLevel(unsigned long, long)+0x130>
         585a8:	e1a00004 	mov	r0, r4
         585ac:	eb6a586b 	bl	1aee760 <PCirrusBatteryDriver::$NiMHInstalled(void)>
         585b0:	e3a01001 	mov	r1, #1	; 0x1
         585b4:	e3300000 	teq	r0, #0	; 0x0
         585b8:	13a00003 	movne	r0, #3	; 0x3
         585bc:	15840050 	strne	r0, [r4, #80]	; fField80
         585c0:	15c41058 	strneb	r1, [r4, #88]	; fField88
         585c4:	1a000002 	bne	585d4 <PCirrusBatteryDriver::BatteryLevel(unsigned long, long)+0x6c>
         585c8:	e5d40058 	ldrb	r0, [r4, #88]	; fField88
         585cc:	e3300000 	teq	r0, #0	; 0x0
         585d0:	15841050 	strne	r1, [r4, #80]	; fField80
         585d4:	e594002c 	ldr	r0, [r4, #44]	; fField44
         585d8:	e3500802 	cmp	r0, #131072	; 0x20000
         585dc:	c3550802 	cmpgt	r5, #131072	; 0x20000
         585e0:	c0800005 	addgt	r0, r0, r5
         585e4:	c1a050a0 	movgt	r5, r0, lsr #1
         585e8:	e584502c 	str	r5, [r4, #44]	; fField44
         585ec:	e5940050 	ldr	r0, [r4, #80]	; fField80
         585f0:	e3300002 	teq	r0, #2	; 0x2
         585f4:	05b40018 	ldreq	r0, [r4, #24]!	; fField24
         585f8:	02800034 	addeq	r0, r0, #52	; 0x34
         585fc:	0a00000c 	beq	58634 <PCirrusBatteryDriver::BatteryLevel(unsigned long, long)+0xcc>
         58600:	e3300003 	teq	r0, #3	; 0x3
         58604:	0a000005 	beq	58620 <PCirrusBatteryDriver::BatteryLevel(unsigned long, long)+0xb8>
         58608:	e3300004 	teq	r0, #4	; 0x4
         5860c:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
         58610:	028000b8 	addeq	r0, r0, #184	; 0xb8
         58614:	12800008 	addne	r0, r0, #8	; 0x8
         58618:	ea000005 	b	58634 <PCirrusBatteryDriver::BatteryLevel(unsigned long, long)+0xcc>
         5861c:	000013fc 	streqd	r1, [r0], -ip
         58620:	e5940030 	ldr	r0, [r4, #48]	; fField48
         58624:	e3300002 	teq	r0, #2	; 0x2
         58628:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
         5862c:	0280008c 	addeq	r0, r0, #140	; 0x8c
         58630:	12800060 	addne	r0, r0, #96	; 0x60
         58634:	e3a06000 	mov	r6, #0	; 0x0
         58638:	e7901106 	ldr	r1, [r0, r6, lsl #2]
         5863c:	e1510005 	cmp	r1, r5
         58640:	ca000002 	bgt	58650 <PCirrusBatteryDriver::BatteryLevel(unsigned long, long)+0xe8>
         58644:	e2866001 	add	r6, r6, #1	; 0x1
         58648:	e356000b 	cmp	r6, #11	; 0xb
         5864c:	bafffff9 	blt	58638 <PCirrusBatteryDriver::BatteryLevel(unsigned long, long)+0xd0>
         58650:	e3360000 	teq	r6, #0	; 0x0
         58654:	0a00000f 	beq	58698 <PCirrusBatteryDriver::BatteryLevel(unsigned long, long)+0x130>
         58658:	e356000a 	cmp	r6, #10	; 0xa
         5865c:	aa00000c 	bge	58694 <PCirrusBatteryDriver::BatteryLevel(unsigned long, long)+0x12c>
         58660:	e0801106 	add	r1, r0, r6, lsl #2
         58664:	e5111004 	ldr	r1, [r1, -#4]	; fField4
         58668:	e0452001 	sub	r2, r5, r1
         5866c:	e0822102 	add	r2, r2, r2, lsl #2
         58670:	e1a02082 	mov	r2, r2, lsl #1
         58674:	e7900106 	ldr	r0, [r0, r6, lsl #2]
         58678:	e0401001 	sub	r1, r0, r1
         5867c:	e1a00002 	mov	r0, r2
         58680:	eb6e228e 	bl	1be10c0 <$FixedDivide>
         58684:	e1a00840 	mov	r0, r0, asr #16
         58688:	e0861106 	add	r1, r6, r6, lsl #2
         5868c:	e0806081 	add	r6, r0, r1, lsl #1
         58690:	ea000000 	b	58698 <PCirrusBatteryDriver::BatteryLevel(unsigned long, long)+0x130>
         58694:	e3a06064 	mov	r6, #100	; 0x64
         58698:	e1a00006 	mov	r0, r6
         5869c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusBatteryDriver::BatteryType(unsigned long)
 * Address: 000586a0
 */
PCirrusBatteryDriver::BatteryType(unsigned long) {
    /*
         586a0:	e1a0c00d 	mov	ip, sp
         586a4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         586a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         586ac:	e1a04000 	mov	r4, r0
         586b0:	e3310000 	teq	r1, #0	; 0x0
         586b4:	13e00000 	mvnne	r0, #0	; 0x0
         586b8:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         586bc:	e1a00004 	mov	r0, r4
         586c0:	eb6a5826 	bl	1aee760 <PCirrusBatteryDriver::$NiMHInstalled(void)>
         586c4:	e3a01001 	mov	r1, #1	; 0x1
         586c8:	e3300000 	teq	r0, #0	; 0x0
         586cc:	13a00003 	movne	r0, #3	; 0x3
         586d0:	15840050 	strne	r0, [r4, #80]	; fField80
         586d4:	15c41058 	strneb	r1, [r4, #88]	; fField88
         586d8:	1a000002 	bne	586e8 <PCirrusBatteryDriver::BatteryType(unsigned long)+0x48>
         586dc:	e5d40058 	ldrb	r0, [r4, #88]	; fField88
         586e0:	e3300000 	teq	r0, #0	; 0x0
         586e4:	15841050 	strne	r1, [r4, #80]	; fField80
         586e8:	e5b40050 	ldr	r0, [r4, #80]!	; fField80
         586ec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusBatteryDriver::ReadVoltage(unsigned long)
 * Address: 000586f0
 */
PCirrusBatteryDriver::ReadVoltage(unsigned long) {
    /*
         586f0:	e1a0c00d 	mov	ip, sp
         586f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         586f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         586fc:	e1a05000 	mov	r5, r0
         58700:	e1a04001 	mov	r4, r1
         58704:	eb6a5819 	bl	1aee770 <PCirrusBatteryDriver::$ReadADCVoltage(unsigned long)>
         58708:	e3300102 	teq	r0, #-2147483648	; 0x80000000
         5870c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         58710:	e1a02000 	mov	r2, r0
         58714:	e1a01004 	mov	r1, r4
         58718:	e1a00005 	mov	r0, r5
         5871c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         58720:	ea6a57f8 	b	1aee708 <PCirrusBatteryDriver::$ConvertVoltage(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: PCirrusBatteryDriver::ConvertVoltage(unsigned long, unsigned long)
 * Address: 00058724
 */
PCirrusBatteryDriver::ConvertVoltage(unsigned long, unsigned long) {
    /*
         58724:	e1a0c00d 	mov	ip, sp
         58728:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         5872c:	e24cb004 	sub	fp, ip, #4	; 0x4
         58730:	e3a03000 	mov	r3, #0	; 0x0
         58734:	e1a02222 	mov	r2, r2, lsr #4
         58738:	e3510007 	cmp	r1, #7	; 0x7
         5873c:	908ff101 	addls	pc, pc, r1, lsl #2
         58740:	ea000012 	b	58790 <PCirrusBatteryDriver::ConvertVoltage(unsigned long, unsigned long)+0x6c>
         58744:	ea000011 	b	58790 <PCirrusBatteryDriver::ConvertVoltage(unsigned long, unsigned long)+0x6c>
         58748:	ea000006 	b	58768 <PCirrusBatteryDriver::ConvertVoltage(unsigned long, unsigned long)+0x44>
         5874c:	ea00000f 	b	58790 <PCirrusBatteryDriver::ConvertVoltage(unsigned long, unsigned long)+0x6c>
         58750:	ea00000e 	b	58790 <PCirrusBatteryDriver::ConvertVoltage(unsigned long, unsigned long)+0x6c>
         58754:	ea00000a 	b	58784 <PCirrusBatteryDriver::ConvertVoltage(unsigned long, unsigned long)+0x60>
         58758:	ea000007 	b	5877c <PCirrusBatteryDriver::ConvertVoltage(unsigned long, unsigned long)+0x58>
         5875c:	ea000003 	b	58770 <PCirrusBatteryDriver::ConvertVoltage(unsigned long, unsigned long)+0x4c>
         58760:	e5900028 	ldr	r0, [r0, #40]	; fField40
         58764:	ea000002 	b	58774 <PCirrusBatteryDriver::ConvertVoltage(unsigned long, unsigned long)+0x50>
         58768:	e5900020 	ldr	r0, [r0, #32]	; fField32
         5876c:	ea000000 	b	58774 <PCirrusBatteryDriver::ConvertVoltage(unsigned long, unsigned long)+0x50>
         58770:	e5900024 	ldr	r0, [r0, #36]	; fField36
         58774:	e0030092 	mul	r3, r2, r0
         58778:	ea000004 	b	58790 <PCirrusBatteryDriver::ConvertVoltage(unsigned long, unsigned long)+0x6c>
         5877c:	e2621a01 	rsb	r1, r2, #4096	; 0x1000
         58780:	ea000000 	b	58788 <PCirrusBatteryDriver::ConvertVoltage(unsigned long, unsigned long)+0x64>
         58784:	e1a01002 	mov	r1, r2
         58788:	eb6a57df 	bl	1aee70c <PCirrusBatteryDriver::$ConvertTemperature(unsigned long)>
         5878c:	e1a03000 	mov	r3, r0
         58790:	e1a00003 	mov	r0, r3
         58794:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusBatteryDriver::ConvertTemperature(unsigned long)
 * Address: 00058798
 */
PCirrusBatteryDriver::ConvertTemperature(unsigned long) {
    /*
         58798:	e1a0c00d 	mov	ip, sp
         5879c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         587a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         587a4:	e590001c 	ldr	r0, [r0, #28]	; fField28
         587a8:	e5902008 	ldr	r2, [r0, #8]	; fField8
         587ac:	e0412842 	sub	r2, r1, r2, asr #16
         587b0:	e1a042a2 	mov	r4, r2, lsr #5
         587b4:	e5903004 	ldr	r3, [r0, #4]	; fField4
         587b8:	e5905000 	ldr	r5, [r0]
         587bc:	e0432005 	sub	r2, r3, r5
         587c0:	e2422001 	sub	r2, r2, #1	; 0x1
         587c4:	e3540001 	cmp	r4, #1	; 0x1
         587c8:	ba00001d 	blt	58844 <PCirrusBatteryDriver::ConvertTemperature(unsigned long)+0xac>
         587cc:	e1540002 	cmp	r4, r2
         587d0:	aa00001b 	bge	58844 <PCirrusBatteryDriver::ConvertTemperature(unsigned long)+0xac>
         587d4:	e0803084 	add	r3, r0, r4, lsl #1
         587d8:	e5933008 	ldr	r3, [r3, #8]	; fField8
         587dc:	e1510843 	cmp	r1, r3, asr #16
         587e0:	2a000006 	bcs	58800 <PCirrusBatteryDriver::ConvertTemperature(unsigned long)+0x68>
         587e4:	e2444001 	sub	r4, r4, #1	; 0x1
         587e8:	e0803084 	add	r3, r0, r4, lsl #1
         587ec:	e5933008 	ldr	r3, [r3, #8]	; fField8
         587f0:	e1510843 	cmp	r1, r3, asr #16
         587f4:	3afffffa 	bcc	587e4 <PCirrusBatteryDriver::ConvertTemperature(unsigned long)+0x4c>
         587f8:	ea000000 	b	58800 <PCirrusBatteryDriver::ConvertTemperature(unsigned long)+0x68>
         587fc:	e2844001 	add	r4, r4, #1	; 0x1
         58800:	e0803084 	add	r3, r0, r4, lsl #1
         58804:	e593300a 	ldr	r3, [r3, #10]
         58808:	e1510843 	cmp	r1, r3, asr #16
         5880c:	9a000001 	bls	58818 <PCirrusBatteryDriver::ConvertTemperature(unsigned long)+0x80>
         58810:	e1540002 	cmp	r4, r2
         58814:	bafffff8 	blt	587fc <PCirrusBatteryDriver::ConvertTemperature(unsigned long)+0x64>
         58818:	e0802084 	add	r2, r0, r4, lsl #1
         5881c:	e592000a 	ldr	r0, [r2, #10]
         58820:	e5922008 	ldr	r2, [r2, #8]	; fField8
         58824:	e1a02842 	mov	r2, r2, asr #16
         58828:	e0620840 	rsb	r0, r2, r0, asr #16
         5882c:	e0411002 	sub	r1, r1, r2
         58830:	e1a01801 	mov	r1, r1, lsl #16
         58834:	eb6d6843 	bl	1bb2948 <$__rt_udiv>
         58838:	e0851004 	add	r1, r5, r4
         5883c:	e0800801 	add	r0, r0, r1, lsl #16
         58840:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         58844:	e1540002 	cmp	r4, r2
         58848:	b1a00805 	movlt	r0, r5, lsl #16
         5884c:	a1a00803 	movge	r0, r3, lsl #16
         58850:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusBatteryDriver::ChargeOffHandler(void)
 * Address: 00058854
 */
PCirrusBatteryDriver::ChargeOffHandler(void) {
    /*
         58854:	e1a0c00d 	mov	ip, sp
         58858:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5885c:	e24cb004 	sub	fp, ip, #4	; 0x4
         58860:	e3a04000 	mov	r4, #0	; 0x0
         58864:	e5901030 	ldr	r1, [r0, #48]	; fField48
         58868:	e3310004 	teq	r1, #4	; 0x4
         5886c:	1a000007 	bne	58890 <PCirrusBatteryDriver::ChargeOffHandler(void)+0x3c>
         58870:	e590107c 	ldr	r1, [r0, #124]	; fField124
         58874:	e2811001 	add	r1, r1, #1	; 0x1
         58878:	e580107c 	str	r1, [r0, #124]	; fField124
         5887c:	e251ce49 	subs	ip, r1, #1168	; 0x490
         58880:	a35c0005 	cmpge	ip, #5	; 0x5
         58884:	bb6a57ac 	bllt	1aee73c <PCirrusBatteryDriver::$PreliminaryCharge(void)>
         58888:	e1a00004 	mov	r0, r4
         5888c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         58890:	eb6a57b5 	bl	1aee76c <PCirrusBatteryDriver::$ChargeOff(void)>
         58894:	eafffffb 	b	58888 <PCirrusBatteryDriver::ChargeOffHandler(void)+0x34>
    */
}

/**
 * Symbol: AdapterInHandler__20PCirrusBatteryDriverSFPv
 * Address: 00058898
 */
void PCirrusBatteryDriver::AdapterInHandler() {
    /*
         58898:	e1a0c00d 	mov	ip, sp
         5889c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         588a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         588a4:	e1a04000 	mov	r4, r0
         588a8:	e590103c 	ldr	r1, [r0, #60]	; fField60
         588ac:	e5900044 	ldr	r0, [r0, #68]	; fField68
         588b0:	eb685391 	bl	1a6d6fc <TGPIOInterface::$DisableInterrupt(GPIOIntObject *)>
         588b4:	e3a00000 	mov	r0, #0	; 0x0
         588b8:	e5c40059 	strb	r0, [r4, #89]	; fField89
         588bc:	e1a00004 	mov	r0, r4
         588c0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         588c4:	ea000055 	b	58a20 <PCirrusBatteryDriver::ChargeInterrupt(void)>
    */
}

/**
 * Symbol: PCirrusBatteryDriver::StartSleepCharge(void)
 * Address: 000588c8
 */
PCirrusBatteryDriver::StartSleepCharge(void) {
    /*
         588c8:	e1a0c00d 	mov	ip, sp
         588cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         588d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         588d4:	e1a04000 	mov	r4, r0
         588d8:	e5901040 	ldr	r1, [r0, #64]	; fField64
         588dc:	e5900048 	ldr	r0, [r0, #72]	; fField72
         588e0:	eb68536c 	bl	1a6d698 <TBIOInterface::$ClearInterrupt(KeynesIntObject *)>
         588e4:	e5940048 	ldr	r0, [r4, #72]	; fField72
         588e8:	e5941040 	ldr	r1, [r4, #64]	; fField64
         588ec:	eb68536b 	bl	1a6d6a0 <TBIOInterface::$DisableInterrupt(KeynesIntObject *)>
         588f0:	e5940044 	ldr	r0, [r4, #68]	; fField68
         588f4:	e594103c 	ldr	r1, [r4, #60]	; fField60
         588f8:	eb68537d 	bl	1a6d6f4 <TGPIOInterface::$ClearInterrupt(GPIOIntObject *)>
         588fc:	e1a00004 	mov	r0, r4
         58900:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         58904:	ea6a5781 	b	1aee710 <$AdapterInHandler__20PCirrusBatteryDriverSFPv>
    */
}

/**
 * Symbol: PCirrusBatteryDriver::AdaptorStatusMessage(void)
 * Address: 00058908
 */
PCirrusBatteryDriver::AdaptorStatusMessage(void) {
    /*
         58908:	e1a0c00d 	mov	ip, sp
         5890c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         58910:	e24cb004 	sub	fp, ip, #4	; 0x4
         58914:	e1a04000 	mov	r4, r0
         58918:	e59f0050 	ldr	r0, [pc, #50]	; 58970 <PCirrusBatteryDriver::AdaptorStatusMessage(void)+0x68>
         5891c:	e590c000 	ldr	ip, [r0]
         58920:	e33c0000 	teq	ip, #0	; 0x0
         58924:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         58928:	e5d4005b 	ldrb	r0, [r4, #91]	; fField91
         5892c:	e3300000 	teq	r0, #0	; 0x0
         58930:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         58934:	e3a03000 	mov	r3, #0	; 0x0
         58938:	e3a02000 	mov	r2, #0	; 0x0
         5893c:	e3a01000 	mov	r1, #0	; 0x0
         58940:	e3a00301 	mov	r0, #67108864	; 0x4000000
         58944:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         58948:	e3a0300c 	mov	r3, #12	; 0xc
         5894c:	e92d0008 	stmdb	sp!, {r3}
         58950:	e59f001c 	ldr	r0, [pc, #1c]	; 58974 <PCirrusBatteryDriver::AdaptorStatusMessage(void)+0x6c>
         58954:	e2843064 	add	r3, r4, #100	; 0x64
         58958:	e5901000 	ldr	r1, [r0]
         5895c:	e59c0000 	ldr	r0, [ip]
         58960:	eb6e08f7 	bl	1bdad44 <$SendForInterrupt__FUlN21PvN31P5TTimeUc>
         58964:	e3a00000 	mov	r0, #0	; 0x0
         58968:	e5a4002c 	str	r0, [r4, #44]!	; fField44
         5896c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         58970:	0c1054a8 	ldceq	4, cr5, [r0], -#672
         58974:	0c100b18 	ldceq	11, cr0, [r0], -#96	; fField96
    */
}

/**
 * Symbol: PCirrusBatteryDriver::Delete(void)
 * Address: 00058978
 */
PCirrusBatteryDriver::Delete(void) {
    /*
         58978:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusBatteryDriver::BatteryStatusMessage(unsigned long)
 * Address: 0005897c
 */
PCirrusBatteryDriver::BatteryStatusMessage(unsigned long) {
    /*
         5897c:	e1a0c00d 	mov	ip, sp
         58980:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         58984:	e24cb004 	sub	fp, ip, #4	; 0x4
         58988:	e1a0c000 	mov	ip, r0
         5898c:	e5801078 	str	r1, [r0, #120]	; fField120
         58990:	e3a00006 	mov	r0, #6	; 0x6
         58994:	e58c0030 	str	r0, [ip, #48]	; fField48
         58998:	e59f0048 	ldr	r0, [pc, #48]	; 589e8 <PCirrusBatteryDriver::BatteryStatusMessage(unsigned long)+0x6c>	; fField48
         5899c:	e590e000 	ldr	lr, [r0]
         589a0:	e33e0000 	teq	lr, #0	; 0x0
         589a4:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         589a8:	e5dc005b 	ldrb	r0, [ip, #91]	; fField91
         589ac:	e3300000 	teq	r0, #0	; 0x0
         589b0:	191ba800 	ldmnedb	fp, {fp, sp, pc}
         589b4:	e3a03000 	mov	r3, #0	; 0x0
         589b8:	e3a02000 	mov	r2, #0	; 0x0
         589bc:	e3a01000 	mov	r1, #0	; 0x0
         589c0:	e3a00301 	mov	r0, #67108864	; 0x4000000
         589c4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         589c8:	e3a0300c 	mov	r3, #12	; 0xc
         589cc:	e92d0008 	stmdb	sp!, {r3}
         589d0:	e59f0014 	ldr	r0, [pc, #14]	; 589ec <PCirrusBatteryDriver::BatteryStatusMessage(unsigned long)+0x70>
         589d4:	e28c3070 	add	r3, ip, #112	; 0x70
         589d8:	e5901000 	ldr	r1, [r0]
         589dc:	e59e0000 	ldr	r0, [lr]
         589e0:	eb6e08d7 	bl	1bdad44 <$SendForInterrupt__FUlN21PvN31P5TTimeUc>
         589e4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         589e8:	0c1054a8 	ldceq	4, cr5, [r0], -#672
         589ec:	0c100b18 	ldceq	11, cr0, [r0], -#96	; fField96
    */
}

/**
 * Symbol: BatteryHandler__20PCirrusBatteryDriverSFPv
 * Address: 000589f0
 */
void PCirrusBatteryDriver::BatteryHandler() {
    /*
         589f0:	e1a0c00d 	mov	ip, sp
         589f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         589f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         589fc:	e1a04000 	mov	r4, r0
         58a00:	e5901040 	ldr	r1, [r0, #64]	; fField64
         58a04:	e5900048 	ldr	r0, [r0, #72]	; fField72
         58a08:	eb685324 	bl	1a6d6a0 <TBIOInterface::$DisableInterrupt(KeynesIntObject *)>
         58a0c:	e3a00000 	mov	r0, #0	; 0x0
         58a10:	e5c4005a 	strb	r0, [r4, #90]	; fField90
         58a14:	e1a00004 	mov	r0, r4
         58a18:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         58a1c:	eaffffff 	b	58a20 <PCirrusBatteryDriver::ChargeInterrupt(void)>
    */
}

/**
 * Symbol: PCirrusBatteryDriver::ChargeInterrupt(void)
 * Address: 00058a20
 */
PCirrusBatteryDriver::ChargeInterrupt(void) {
    /*
         58a20:	e1a0c00d 	mov	ip, sp
         58a24:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         58a28:	e24cb004 	sub	fp, ip, #4	; 0x4
         58a2c:	e1a04000 	mov	r4, r0
         58a30:	e5900030 	ldr	r0, [r0, #48]	; fField48
         58a34:	e3a05000 	mov	r5, #0	; 0x0
         58a38:	e3300006 	teq	r0, #6	; 0x6
         58a3c:	05845030 	streq	r5, [r4, #48]	; fField48
         58a40:	e1a00004 	mov	r0, r4
         58a44:	e3a01002 	mov	r1, #2	; 0x2
         58a48:	eb6a574a 	bl	1aee778 <PCirrusBatteryDriver::$PrimeChargeCycleTime(unsigned long)>
         58a4c:	e1a00004 	mov	r0, r4
         58a50:	eb6a5731 	bl	1aee71c <PCirrusBatteryDriver::$AdaptorStatusMessage(void)>
         58a54:	e1a00005 	mov	r0, r5
         58a58:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusBatteryDriver::EnableBattAdaptInterrupts(void)
 * Address: 00058a5c
 */
PCirrusBatteryDriver::EnableBattAdaptInterrupts(void) {
    /*
         58a5c:	e1a0c00d 	mov	ip, sp
         58a60:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         58a64:	e24cb004 	sub	fp, ip, #4	; 0x4
         58a68:	e1a04000 	mov	r4, r0
         58a6c:	e5d00059 	ldrb	r0, [r0, #89]	; fField89
         58a70:	e3a05001 	mov	r5, #1	; 0x1
         58a74:	e3300000 	teq	r0, #0	; 0x0
         58a78:	1a000006 	bne	58a98 <PCirrusBatteryDriver::EnableBattAdaptInterrupts(void)+0x3c>
         58a7c:	e5c45059 	strb	r5, [r4, #89]	; fField89
         58a80:	e5940044 	ldr	r0, [r4, #68]	; fField68
         58a84:	e594103c 	ldr	r1, [r4, #60]	; fField60
         58a88:	eb685319 	bl	1a6d6f4 <TGPIOInterface::$ClearInterrupt(GPIOIntObject *)>
         58a8c:	e5940044 	ldr	r0, [r4, #68]	; fField68
         58a90:	e594103c 	ldr	r1, [r4, #60]	; fField60
         58a94:	eb685317 	bl	1a6d6f8 <TGPIOInterface::$EnableInterrupt(GPIOIntObject *)>
         58a98:	e5d4005a 	ldrb	r0, [r4, #90]	; fField90
         58a9c:	e3300000 	teq	r0, #0	; 0x0
         58aa0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         58aa4:	e5c4505a 	strb	r5, [r4, #90]	; fField90
         58aa8:	e5940048 	ldr	r0, [r4, #72]	; fField72
         58aac:	e5941040 	ldr	r1, [r4, #64]	; fField64
         58ab0:	eb6852f8 	bl	1a6d698 <TBIOInterface::$ClearInterrupt(KeynesIntObject *)>
         58ab4:	e5b41040 	ldr	r1, [r4, #64]!	; fField64
         58ab8:	e5940008 	ldr	r0, [r4, #8]	; fField8
         58abc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         58ac0:	ea6852f5 	b	1a6d69c <TBIOInterface::$EnableInterrupt(KeynesIntObject *)>
    */
}

/**
 * Symbol: ChargeHandler__20PCirrusBatteryDriverSFPv
 * Address: 00058ac4
 */
void PCirrusBatteryDriver::ChargeHandler() {
    /*
         58ac4:	e1a0c00d 	mov	ip, sp
         58ac8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         58acc:	e24cb004 	sub	fp, ip, #4	; 0x4
         58ad0:	e3a05000 	mov	r5, #0	; 0x0
         58ad4:	e1a04000 	mov	r4, r0
         58ad8:	eb6a5711 	bl	1aee724 <PCirrusBatteryDriver::$EnableBattAdaptInterrupts(void)>
         58adc:	e1a00004 	mov	r0, r4
         58ae0:	eb6a571e 	bl	1aee760 <PCirrusBatteryDriver::$NiMHInstalled(void)>
         58ae4:	e3300000 	teq	r0, #0	; 0x0
         58ae8:	15d40060 	ldrneb	r0, [r4, #96]	; fField96
         58aec:	13300000 	teqne	r0, #0	; 0x0
         58af0:	e1a00004 	mov	r0, r4
         58af4:	0a000002 	beq	58b04 <ChargeHandler__20PCirrusBatteryDriverSFPv+0x40>
         58af8:	eb6a570b 	bl	1aee72c <PCirrusBatteryDriver::$ChargeCycle(void)>
         58afc:	e1a05000 	mov	r5, r0
         58b00:	ea000002 	b	58b10 <ChargeHandler__20PCirrusBatteryDriverSFPv+0x4c>
         58b04:	eb6a5718 	bl	1aee76c <PCirrusBatteryDriver::$ChargeOff(void)>
         58b08:	e3a00000 	mov	r0, #0	; 0x0
         58b0c:	e5a40030 	str	r0, [r4, #48]!	; fField48
         58b10:	e1a00005 	mov	r0, r5
         58b14:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusBatteryDriver::ChargeCycle(void)
 * Address: 00058b18
 */
PCirrusBatteryDriver::ChargeCycle(void) {
    /*
         58b18:	e1a0c00d 	mov	ip, sp
         58b1c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         58b20:	e24cb004 	sub	fp, ip, #4	; 0x4
         58b24:	e3a01000 	mov	r1, #0	; 0x0
         58b28:	e5801080 	str	r1, [r0, #128]	; fField128
         58b2c:	e3a01001 	mov	r1, #1	; 0x1
         58b30:	e580105c 	str	r1, [r0, #92]	; fField92
         58b34:	e1a03000 	mov	r3, r0
         58b38:	e92d0008 	stmdb	sp!, {r3}
         58b3c:	eb6eceb5 	bl	1c0c618 <$GetADCObject(void)>
         58b40:	e59f3010 	ldr	r3, [pc, #10]	; 58b58 <PCirrusBatteryDriver::ChargeCycle(void)+0x40>
         58b44:	e59f1010 	ldr	r1, [pc, #10]	; 58b5c <PCirrusBatteryDriver::ChargeCycle(void)+0x44>
         58b48:	e5912000 	ldr	r2, [r1]
         58b4c:	e3a01008 	mov	r1, #8	; 0x8
         58b50:	eb6eceaf 	bl	1c0c614 <TADC::$GetSample(ADCMuxType, unsigned long, void (*)(void *, long, unsigned long), void *)>
         58b54:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         58b58:	01aee730 	moveq	lr, r0, lsr r7
         58b5c:	0c100b0c 	ldceq	11, cr0, [r0], -#48	; fField48
    */
}

/**
 * Symbol: PCirrusBatteryDriver::Charge(long, unsigned long)
 * Address: 00058b60
 */
PCirrusBatteryDriver::Charge(long, unsigned long) {
    /*
         58b60:	e1a0c00d 	mov	ip, sp
         58b64:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         58b68:	e24cb004 	sub	fp, ip, #4	; 0x4
         58b6c:	e1a04000 	mov	r4, r0
         58b70:	e1a06001 	mov	r6, r1
         58b74:	e1a05002 	mov	r5, r2
         58b78:	e3a09000 	mov	r9, #0	; 0x0
         58b7c:	eb6ecea5 	bl	1c0c618 <$GetADCObject(void)>
         58b80:	e1a08000 	mov	r8, r0
         58b84:	e1b00006 	movs	r0, r6
         58b88:	e3a0a000 	mov	sl, #0	; 0x0
         58b8c:	e59f703c 	ldr	r7, [pc, #3c]	; 58bd0 <PCirrusBatteryDriver::Charge(long, unsigned long)+0x70>
         58b90:	e59f603c 	ldr	r6, [pc, #3c]	; 58bd4 <PCirrusBatteryDriver::Charge(long, unsigned long)+0x74>
         58b94:	1a000052 	bne	58ce4 <PCirrusBatteryDriver::Charge(long, unsigned long)+0x184>
         58b98:	e5940080 	ldr	r0, [r4, #128]	; fField128
         58b9c:	e3500004 	cmp	r0, #4	; 0x4
         58ba0:	908ff100 	addls	pc, pc, r0, lsl #2
         58ba4:	ea00005f 	b	58d28 <PCirrusBatteryDriver::Charge(long, unsigned long)+0x1c8>
         58ba8:	ea00000a 	b	58bd8 <PCirrusBatteryDriver::Charge(long, unsigned long)+0x78>
         58bac:	ea000022 	b	58c3c <PCirrusBatteryDriver::Charge(long, unsigned long)+0xdc>
         58bb0:	ea00002f 	b	58c74 <PCirrusBatteryDriver::Charge(long, unsigned long)+0x114>
         58bb4:	ea00003c 	b	58cac <PCirrusBatteryDriver::Charge(long, unsigned long)+0x14c>
         58bb8:	e1a02005 	mov	r2, r5
         58bbc:	e1a00004 	mov	r0, r4
         58bc0:	e3a01004 	mov	r1, #4	; 0x4
         58bc4:	eb6a56cf 	bl	1aee708 <PCirrusBatteryDriver::$ConvertVoltage(unsigned long, unsigned long)>
         58bc8:	e5840094 	str	r0, [r4, #148]	; fField148
         58bcc:	ea000057 	b	58d30 <PCirrusBatteryDriver::Charge(long, unsigned long)+0x1d0>
         58bd0:	01aee730 	moveq	lr, r0, lsr r7
         58bd4:	0c100b0c 	ldceq	11, cr0, [r0], -#48	; fField48
         58bd8:	e1a02005 	mov	r2, r5
         58bdc:	e1a00004 	mov	r0, r4
         58be0:	e3a01007 	mov	r1, #7	; 0x7
         58be4:	eb6a56c7 	bl	1aee708 <PCirrusBatteryDriver::$ConvertVoltage(unsigned long, unsigned long)>
         58be8:	e5840088 	str	r0, [r4, #136]	; fField136
         58bec:	e1a00004 	mov	r0, r4
         58bf0:	eb6a56da 	bl	1aee760 <PCirrusBatteryDriver::$NiMHInstalled(void)>
         58bf4:	e3300000 	teq	r0, #0	; 0x0
         58bf8:	15d40060 	ldrneb	r0, [r4, #96]	; fField96
         58bfc:	13300000 	teqne	r0, #0	; 0x0
         58c00:	0a000045 	beq	58d1c <PCirrusBatteryDriver::Charge(long, unsigned long)+0x1bc>
         58c04:	e5940088 	ldr	r0, [r4, #136]	; fField136
         58c08:	e3500701 	cmp	r0, #262144	; 0x40000
         58c0c:	da000042 	ble	58d1c <PCirrusBatteryDriver::Charge(long, unsigned long)+0x1bc>
         58c10:	e3500809 	cmp	r0, #589824	; 0x90000
         58c14:	aa000040 	bge	58d1c <PCirrusBatteryDriver::Charge(long, unsigned long)+0x1bc>
         58c18:	e3a00001 	mov	r0, #1	; 0x1
         58c1c:	e5840080 	str	r0, [r4, #128]	; fField128
         58c20:	e1a03004 	mov	r3, r4
         58c24:	e92d0008 	stmdb	sp!, {r3}
         58c28:	e1a03007 	mov	r3, r7
         58c2c:	e1a00008 	mov	r0, r8
         58c30:	e3a01007 	mov	r1, #7	; 0x7
         58c34:	e5962000 	ldr	r2, [r6]
         58c38:	ea000035 	b	58d14 <PCirrusBatteryDriver::Charge(long, unsigned long)+0x1b4>
         58c3c:	e1a02005 	mov	r2, r5
         58c40:	e1a00004 	mov	r0, r4
         58c44:	e3a01006 	mov	r1, #6	; 0x6
         58c48:	eb6a56ae 	bl	1aee708 <PCirrusBatteryDriver::$ConvertVoltage(unsigned long, unsigned long)>
         58c4c:	e584008c 	str	r0, [r4, #140]	; fField140
         58c50:	e3a00002 	mov	r0, #2	; 0x2
         58c54:	e5840080 	str	r0, [r4, #128]	; fField128
         58c58:	e1a03004 	mov	r3, r4
         58c5c:	e92d0008 	stmdb	sp!, {r3}
         58c60:	e1a03007 	mov	r3, r7
         58c64:	e1a00008 	mov	r0, r8
         58c68:	e3a01006 	mov	r1, #6	; 0x6
         58c6c:	e5962000 	ldr	r2, [r6]
         58c70:	ea000027 	b	58d14 <PCirrusBatteryDriver::Charge(long, unsigned long)+0x1b4>
         58c74:	e1a02005 	mov	r2, r5
         58c78:	e1a00004 	mov	r0, r4
         58c7c:	e3a01001 	mov	r1, #1	; 0x1
         58c80:	eb6a56a0 	bl	1aee708 <PCirrusBatteryDriver::$ConvertVoltage(unsigned long, unsigned long)>
         58c84:	e5840090 	str	r0, [r4, #144]	; fField144
         58c88:	e3a00003 	mov	r0, #3	; 0x3
         58c8c:	e5840080 	str	r0, [r4, #128]	; fField128
         58c90:	e1a03004 	mov	r3, r4
         58c94:	e92d0008 	stmdb	sp!, {r3}
         58c98:	e1a03007 	mov	r3, r7
         58c9c:	e1a00008 	mov	r0, r8
         58ca0:	e3a01009 	mov	r1, #9	; 0x9
         58ca4:	e5962000 	ldr	r2, [r6]
         58ca8:	ea000019 	b	58d14 <PCirrusBatteryDriver::Charge(long, unsigned long)+0x1b4>
         58cac:	e1a02005 	mov	r2, r5
         58cb0:	e1a00004 	mov	r0, r4
         58cb4:	e3a01005 	mov	r1, #5	; 0x5
         58cb8:	eb6a5692 	bl	1aee708 <PCirrusBatteryDriver::$ConvertVoltage(unsigned long, unsigned long)>
         58cbc:	e5840098 	str	r0, [r4, #152]	; fField152
         58cc0:	e3a00004 	mov	r0, #4	; 0x4
         58cc4:	e5840080 	str	r0, [r4, #128]	; fField128
         58cc8:	e1a03004 	mov	r3, r4
         58ccc:	e92d0008 	stmdb	sp!, {r3}
         58cd0:	e1a03007 	mov	r3, r7
         58cd4:	e1a00008 	mov	r0, r8
         58cd8:	e3a0100a 	mov	r1, #10	; 0xa
         58cdc:	e5962000 	ldr	r2, [r6]
         58ce0:	ea00000b 	b	58d14 <PCirrusBatteryDriver::Charge(long, unsigned long)+0x1b4>
         58ce4:	e594005c 	ldr	r0, [r4, #92]	; fField92
         58ce8:	e2800001 	add	r0, r0, #1	; 0x1
         58cec:	e584005c 	str	r0, [r4, #92]	; fField92
         58cf0:	e3500004 	cmp	r0, #4	; 0x4
         58cf4:	aa000008 	bge	58d1c <PCirrusBatteryDriver::Charge(long, unsigned long)+0x1bc>
         58cf8:	e584a080 	str	sl, [r4, #128]	; fField128
         58cfc:	e1a03004 	mov	r3, r4
         58d00:	e92d0008 	stmdb	sp!, {r3}
         58d04:	eb6ece43 	bl	1c0c618 <$GetADCObject(void)>
         58d08:	e1a03007 	mov	r3, r7
         58d0c:	e3a01008 	mov	r1, #8	; 0x8
         58d10:	e5962000 	ldr	r2, [r6]
         58d14:	eb6ece3e 	bl	1c0c614 <TADC::$GetSample(ADCMuxType, unsigned long, void (*)(void *, long, unsigned long), void *)>
         58d18:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         58d1c:	e1a00004 	mov	r0, r4
         58d20:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         58d24:	ea6a568b 	b	1aee758 <PCirrusBatteryDriver::$StopBatteryCharge(void)>
         58d28:	e3390000 	teq	r9, #0	; 0x0
         58d2c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         58d30:	e584a05c 	str	sl, [r4, #92]	; fField92
         58d34:	e5940030 	ldr	r0, [r4, #48]	; fField48
         58d38:	e3500005 	cmp	r0, #5	; 0x5
         58d3c:	908ff100 	addls	pc, pc, r0, lsl #2
         58d40:	ea000013 	b	58d94 <PCirrusBatteryDriver::Charge(long, unsigned long)+0x234>
         58d44:	ea000006 	b	58d64 <PCirrusBatteryDriver::Charge(long, unsigned long)+0x204>
         58d48:	ea00000e 	b	58d88 <PCirrusBatteryDriver::Charge(long, unsigned long)+0x228>
         58d4c:	ea00000a 	b	58d7c <PCirrusBatteryDriver::Charge(long, unsigned long)+0x21c>
         58d50:	ea00000f 	b	58d94 <PCirrusBatteryDriver::Charge(long, unsigned long)+0x234>
         58d54:	ea000005 	b	58d70 <PCirrusBatteryDriver::Charge(long, unsigned long)+0x210>
         58d58:	e1a00004 	mov	r0, r4
         58d5c:	eb0001bc 	bl	59454 <PCirrusBatteryDriver::TrickleChargeCont(void)>
         58d60:	ea00000d 	b	58d9c <PCirrusBatteryDriver::Charge(long, unsigned long)+0x23c>
         58d64:	e1a00004 	mov	r0, r4
         58d68:	eb6a5671 	bl	1aee734 <PCirrusBatteryDriver::$StartBatteryCharge(void)>
         58d6c:	ea00000a 	b	58d9c <PCirrusBatteryDriver::Charge(long, unsigned long)+0x23c>
         58d70:	e1a00004 	mov	r0, r4
         58d74:	eb6a5671 	bl	1aee740 <PCirrusBatteryDriver::$PreliminaryChargeTestIfDone(void)>
         58d78:	ea000007 	b	58d9c <PCirrusBatteryDriver::Charge(long, unsigned long)+0x23c>
         58d7c:	e1a00004 	mov	r0, r4
         58d80:	eb6a5671 	bl	1aee74c <PCirrusBatteryDriver::$FastChargeCont(void)>
         58d84:	ea000004 	b	58d9c <PCirrusBatteryDriver::Charge(long, unsigned long)+0x23c>
         58d88:	e1a00004 	mov	r0, r4
         58d8c:	eb6a566f 	bl	1aee750 <PCirrusBatteryDriver::$BeginTrickleCharge(void)>
         58d90:	ea000001 	b	58d9c <PCirrusBatteryDriver::Charge(long, unsigned long)+0x23c>
         58d94:	e1a00004 	mov	r0, r4
         58d98:	eb6a566e 	bl	1aee758 <PCirrusBatteryDriver::$StopBatteryCharge(void)>
         58d9c:	e5940030 	ldr	r0, [r4, #48]	; fField48
         58da0:	e3700001 	cmn	r0, #1	; 0x1
         58da4:	13300000 	teqne	r0, #0	; 0x0
         58da8:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         58dac:	e3300004 	teq	r0, #4	; 0x4
         58db0:	1a000002 	bne	58dc0 <PCirrusBatteryDriver::Charge(long, unsigned long)+0x260>
         58db4:	e5d4005b 	ldrb	r0, [r4, #91]	; fField91
         58db8:	e3300000 	teq	r0, #0	; 0x0
         58dbc:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         58dc0:	e1a00004 	mov	r0, r4
         58dc4:	e3a0103c 	mov	r1, #60	; 0x3c
         58dc8:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         58dcc:	ea6a5669 	b	1aee778 <PCirrusBatteryDriver::$PrimeChargeCycleTime(unsigned long)>
    */
}

/**
 * Symbol: PCirrusBatteryDriver::StartBatteryCharge(void)
 * Address: 00058dd0
 */
PCirrusBatteryDriver::StartBatteryCharge(void) {
    /*
         58dd0:	e1a0c00d 	mov	ip, sp
         58dd4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         58dd8:	e24cb004 	sub	fp, ip, #4	; 0x4
         58ddc:	e1a04000 	mov	r4, r0
         58de0:	e5900098 	ldr	r0, [r0, #152]	; fField152
         58de4:	e3a0180f 	mov	r1, #983040	; 0xf0000
         58de8:	e3500000 	cmp	r0, #0	; 0x0
         58dec:	e5841038 	str	r1, [r4, #56]	; fField56
         58df0:	ba000006 	blt	58e10 <PCirrusBatteryDriver::StartBatteryCharge(void)+0x40>
         58df4:	e350070a 	cmp	r0, #2621440	; 0x280000
         58df8:	ca000004 	bgt	58e10 <PCirrusBatteryDriver::StartBatteryCharge(void)+0x40>
         58dfc:	e1a00004 	mov	r0, r4
         58e00:	eb6a564c 	bl	1aee738 <PCirrusBatteryDriver::$PreliminaryOrFast(void)>
         58e04:	e1a00004 	mov	r0, r4
         58e08:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         58e0c:	ea6a5642 	b	1aee71c <PCirrusBatteryDriver::$AdaptorStatusMessage(void)>
         58e10:	e1a00004 	mov	r0, r4
         58e14:	e3a0103c 	mov	r1, #60	; 0x3c
         58e18:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         58e1c:	ea6a5655 	b	1aee778 <PCirrusBatteryDriver::$PrimeChargeCycleTime(unsigned long)>
    */
}

/**
 * Symbol: PCirrusBatteryDriver::PreliminaryOrFast(void)
 * Address: 00058e20
 */
PCirrusBatteryDriver::PreliminaryOrFast(void) {
    /*
         58e20:	e1a0c00d 	mov	ip, sp
         58e24:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         58e28:	e24cb004 	sub	fp, ip, #4	; 0x4
         58e2c:	e1a04000 	mov	r4, r0
         58e30:	e5900090 	ldr	r0, [r0, #144]	; fField144
         58e34:	e3500701 	cmp	r0, #262144	; 0x40000
         58e38:	a1a00004 	movge	r0, r4
         58e3c:	a91b6810 	ldmgedb	fp, {r4, fp, sp, lr}
         58e40:	aa6a563f 	bge	1aee744 <PCirrusBatteryDriver::$FastOrTrickle(void)>
         58e44:	e3a00000 	mov	r0, #0	; 0x0
         58e48:	e584007c 	str	r0, [r4, #124]	; fField124
         58e4c:	e3a00004 	mov	r0, #4	; 0x4
         58e50:	e5840030 	str	r0, [r4, #48]	; fField48
         58e54:	e1a00004 	mov	r0, r4
         58e58:	eb6a5637 	bl	1aee73c <PCirrusBatteryDriver::$PreliminaryCharge(void)>
         58e5c:	eb6deeef 	bl	1bd4a20 <$GetRealTimeClock(void)>
         58e60:	e2800e4b 	add	r0, r0, #1200	; 0x4b0
         58e64:	e5a40034 	str	r0, [r4, #52]!	; fField52
         58e68:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusBatteryDriver::PreliminaryCharge(void)
 * Address: 00058e6c
 */
PCirrusBatteryDriver::PreliminaryCharge(void) {
    /*
         58e6c:	e1a0c00d 	mov	ip, sp
         58e70:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         58e74:	e24cb004 	sub	fp, ip, #4	; 0x4
         58e78:	e1a04000 	mov	r4, r0
         58e7c:	e5d0005b 	ldrb	r0, [r0, #91]	; fField91
         58e80:	e3a0509a 	mov	r5, #154	; 0x9a
         58e84:	e2855b02 	add	r5, r5, #2048	; 0x800
         58e88:	e3a06ffb 	mov	r6, #1004	; 0x3ec
         58e8c:	e2866bb3 	add	r6, r6, #183296	; 0x2cc00
         58e90:	e3300000 	teq	r0, #0	; 0x0
         58e94:	0a000011 	beq	58ee0 <PCirrusBatteryDriver::PreliminaryCharge(void)+0x74>
         58e98:	e3a07000 	mov	r7, #0	; 0x0
         58e9c:	eb0ce73b 	bl	392b90 <EnterFIQAtomic>
         58ea0:	e1a00004 	mov	r0, r4
         58ea4:	eb6a562f 	bl	1aee768 <PCirrusBatteryDriver::$ChargeOn(void)>
         58ea8:	e1a00005 	mov	r0, r5
         58eac:	eb6e9405 	bl	1bfdec8 <$ShortTimerDelay(unsigned long)>
         58eb0:	e1a00004 	mov	r0, r4
         58eb4:	eb6a562c 	bl	1aee76c <PCirrusBatteryDriver::$ChargeOff(void)>
         58eb8:	eb0ce73c 	bl	392bb0 <ExitFIQAtomic>
         58ebc:	e1a00006 	mov	r0, r6
         58ec0:	eb6e9400 	bl	1bfdec8 <$ShortTimerDelay(unsigned long)>
         58ec4:	e2877001 	add	r7, r7, #1	; 0x1
         58ec8:	e3570010 	cmp	r7, #16	; 0x10
         58ecc:	bafffff2 	blt	58e9c <PCirrusBatteryDriver::PreliminaryCharge(void)+0x30>
         58ed0:	e1a00004 	mov	r0, r4
         58ed4:	e3a01001 	mov	r1, #1	; 0x1
         58ed8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         58edc:	ea6a5625 	b	1aee778 <PCirrusBatteryDriver::$PrimeChargeCycleTime(unsigned long)>
         58ee0:	eb0ce72a 	bl	392b90 <EnterFIQAtomic>
         58ee4:	e1a00004 	mov	r0, r4
         58ee8:	eb6a561e 	bl	1aee768 <PCirrusBatteryDriver::$ChargeOn(void)>
         58eec:	e1a00005 	mov	r0, r5
         58ef0:	eb6e93f4 	bl	1bfdec8 <$ShortTimerDelay(unsigned long)>
         58ef4:	e1a00004 	mov	r0, r4
         58ef8:	eb6a561b 	bl	1aee76c <PCirrusBatteryDriver::$ChargeOff(void)>
         58efc:	eb0ce72b 	bl	392bb0 <ExitFIQAtomic>
         58f00:	e5940030 	ldr	r0, [r4, #48]	; fField48
         58f04:	e3300004 	teq	r0, #4	; 0x4
         58f08:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         58f0c:	e5b4104c 	ldr	r1, [r4, #76]!	; fField76
         58f10:	e59f0010 	ldr	r0, [pc, #10]	; 58f28 <PCirrusBatteryDriver::PreliminaryCharge(void)+0xbc>
         58f14:	e5900000 	ldr	r0, [r0]
         58f18:	e3a03000 	mov	r3, #0	; 0x0
         58f1c:	e1a02006 	mov	r2, r6
         58f20:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         58f24:	ea684585 	b	1a6a540 <TIRQTimer::$SetIRQTimer(IRQTimer *, unsigned long, unsigned long)>
         58f28:	0c100f74 	ldceq	15, cr0, [r0], -#464
    */
}

/**
 * Symbol: PCirrusBatteryDriver::Init(void)
 * Address: 00058f2c
 */
PCirrusBatteryDriver::Init(void) {
    /*
         58f2c:	e1a0c00d 	mov	ip, sp
         58f30:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         58f34:	e24cb004 	sub	fp, ip, #4	; 0x4
         58f38:	e1a04000 	mov	r4, r0
         58f3c:	e24dd004 	sub	sp, sp, #4	; 0x4
         58f40:	e280109c 	add	r1, r0, #156	; 0x9c
         58f44:	e3a02000 	mov	r2, #0	; 0x0
         58f48:	eb6df701 	bl	1bd6b54 <$LockHeapRange>
         58f4c:	e3a05000 	mov	r5, #0	; 0x0
         58f50:	e5845010 	str	r5, [r4, #16]	; fField16
         58f54:	e3a00001 	mov	r0, #1	; 0x1
         58f58:	e3e01000 	mvn	r1, #0	; 0x0
         58f5c:	e2844050 	add	r4, r4, #80	; 0x50
         58f60:	e8840003 	stmia	r4, {r0, r1}
         58f64:	e524503c 	str	r5, [r4, -#60]!	; fField60
         58f68:	e2444014 	sub	r4, r4, #20	; 0x14
         58f6c:	e5c40058 	strb	r0, [r4, #88]	; fField88
         58f70:	e24ddf43 	sub	sp, sp, #268	; 0x10c
         58f74:	e5c40060 	strb	r0, [r4, #96]	; fField96
         58f78:	e1a0000d 	mov	r0, sp
         58f7c:	eb683902 	bl	1a6738c <$CalibrationParameters__22TReservedBlockAccessorSFR23OSCalibrationParameters>
         58f80:	e3300000 	teq	r0, #0	; 0x0
         58f84:	1a000018 	bne	58fec <PCirrusBatteryDriver::Init(void)+0xc0>
         58f88:	e59d0048 	ldr	r0, [sp, #72]	; fField72
         58f8c:	e59d1044 	ldr	r1, [sp, #68]	; fField68
         58f90:	e0810000 	add	r0, r1, r0
         58f94:	e59d104c 	ldr	r1, [sp, #76]	; fField76
         58f98:	e0800001 	add	r0, r0, r1
         58f9c:	e3500000 	cmp	r0, #0	; 0x0
         58fa0:	9a000011 	bls	58fec <PCirrusBatteryDriver::Init(void)+0xc0>
         58fa4:	e59d0044 	ldr	r0, [sp, #68]	; fField68
         58fa8:	e1a01800 	mov	r1, r0, lsl #16
         58fac:	e59f002c 	ldr	r0, [pc, #2c]	; 58fe0 <PCirrusBatteryDriver::Init(void)+0xb4>
         58fb0:	eb6e2042 	bl	1be10c0 <$FixedDivide>
         58fb4:	e5840020 	str	r0, [r4, #32]	; fField32
         58fb8:	e59d0048 	ldr	r0, [sp, #72]	; fField72
         58fbc:	e1a01800 	mov	r1, r0, lsl #16
         58fc0:	e59f001c 	ldr	r0, [pc, #1c]	; 58fe4 <PCirrusBatteryDriver::Init(void)+0xb8>
         58fc4:	eb6e203d 	bl	1be10c0 <$FixedDivide>
         58fc8:	e5840028 	str	r0, [r4, #40]	; fField40
         58fcc:	e59d004c 	ldr	r0, [sp, #76]	; fField76
         58fd0:	e1a01800 	mov	r1, r0, lsl #16
         58fd4:	e59f000c 	ldr	r0, [pc, #c]	; 58fe8 <PCirrusBatteryDriver::Init(void)+0xbc>
         58fd8:	eb6e2038 	bl	1be10c0 <$FixedDivide>
         58fdc:	ea000009 	b	59008 <PCirrusBatteryDriver::Init(void)+0xdc>
         58fe0:	00061f18 	andeq	r1, r6, r8, lsl pc
         58fe4:	000a4a27 	andeq	r4, sl, r7, lsr #20
         58fe8:	06d600b0 	undefined
         58fec:	e5c45060 	strb	r5, [r4, #96]	; fField96
         58ff0:	ebff88f5 	bl	3b3cc <CirrusVoltageTable>
         58ff4:	e5901008 	ldr	r1, [r0, #8]	; fField8
         58ff8:	e5841020 	str	r1, [r4, #32]	; fField32
         58ffc:	e5901010 	ldr	r1, [r0, #16]	; fField16
         59000:	e5841028 	str	r1, [r4, #40]	; fField40
         59004:	e590000c 	ldr	r0, [r0, #12]	; fField12
         59008:	e5840024 	str	r0, [r4, #36]	; fField36
         5900c:	e28ddf43 	add	sp, sp, #268	; 0x10c
         59010:	ebff88f0 	bl	3b3d8 <CirrusBatteryTable>
         59014:	e5840018 	str	r0, [r4, #24]	; fField24
         59018:	ebff88f1 	bl	3b3e4 <CirrusTemperatureTable>
         5901c:	e584001c 	str	r0, [r4, #28]	; fField28
         59020:	e5845030 	str	r5, [r4, #48]	; fField48
         59024:	eb6ecd78 	bl	1c0c60c <$GetGPIOInterfaceObject(void)>
         59028:	e5840044 	str	r0, [r4, #68]	; fField68
         5902c:	eb684538 	bl	1a6a514 <$GetBIOInterfaceObject(void)>
         59030:	e1a0300d 	mov	r3, sp
         59034:	e5840048 	str	r0, [r4, #72]	; fField72
         59038:	e59f00f0 	ldr	r0, [pc, #f0]	; 59130 <PCirrusBatteryDriver::Init(void)+0x204>
         5903c:	e5900000 	ldr	r0, [r0]
         59040:	e3a02000 	mov	r2, #0	; 0x0
         59044:	e3a01025 	mov	r1, #37	; 0x25
         59048:	eb685199 	bl	1a6d6b4 <TBIOInterface::$WriteDIODir(unsigned char, unsigned char, unsigned char *)>
         5904c:	e1a0300d 	mov	r3, sp
         59050:	e3a02001 	mov	r2, #1	; 0x1
         59054:	e3a01007 	mov	r1, #7	; 0x7
         59058:	e5940044 	ldr	r0, [r4, #68]	; fField68
         5905c:	eb6855a9 	bl	1a6e708 <TGPIOInterface::$WriteGPIODir(unsigned char, unsigned char, unsigned char *)>
         59060:	e1a00004 	mov	r0, r4
         59064:	eb6a55c0 	bl	1aee76c <PCirrusBatteryDriver::$ChargeOff(void)>
         59068:	e59f00c4 	ldr	r0, [pc, #c4]	; 59134 <PCirrusBatteryDriver::Init(void)+0x208>
         5906c:	eb6dfef5 	bl	1bd8c48 <$Register__14TRealTimeClockSFUl>
         59070:	eb683cf8 	bl	1a68458 <$InitADC(void)>
         59074:	e1a02004 	mov	r2, r4
         59078:	e59f10b8 	ldr	r1, [pc, #b8]	; 59138 <PCirrusBatteryDriver::Init(void)+0x20c>
         5907c:	e59f00b8 	ldr	r0, [pc, #b8]	; 5913c <PCirrusBatteryDriver::Init(void)+0x210>
         59080:	e5900000 	ldr	r0, [r0]
         59084:	eb68452c 	bl	1a6a53c <TIRQTimer::$AcquireIRQTimer(void (*)(void *, unsigned long), void *)>
         59088:	e3a0300b 	mov	r3, #11	; 0xb
         5908c:	e584004c 	str	r0, [r4, #76]	; fField76
         59090:	e92d0008 	stmdb	sp!, {r3}
         59094:	e59f30a4 	ldr	r3, [pc, #a4]	; 59140 <PCirrusBatteryDriver::Init(void)+0x214>
         59098:	e1a02004 	mov	r2, r4
         5909c:	e59f00a0 	ldr	r0, [pc, #a0]	; 59144 <PCirrusBatteryDriver::Init(void)+0x218>
         590a0:	e3a01001 	mov	r1, #1	; 0x1
         590a4:	eb685191 	bl	1a6d6f0 <TGPIOInterface::$RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)>
         590a8:	e28dd004 	add	sp, sp, #4	; 0x4
         590ac:	e584003c 	str	r0, [r4, #60]	; fField60
         590b0:	e3700001 	cmn	r0, #1	; 0x1
         590b4:	0a00001c 	beq	5912c <PCirrusBatteryDriver::Init(void)+0x200>
         590b8:	e5c45059 	strb	r5, [r4, #89]	; fField89
         590bc:	e3a03003 	mov	r3, #3	; 0x3
         590c0:	e92d0008 	stmdb	sp!, {r3}
         590c4:	e59f307c 	ldr	r3, [pc, #7c]	; 59148 <PCirrusBatteryDriver::Init(void)+0x21c>
         590c8:	e1a02004 	mov	r2, r4
         590cc:	e59f0078 	ldr	r0, [pc, #78]	; 5914c <PCirrusBatteryDriver::Init(void)+0x220>
         590d0:	e3a01025 	mov	r1, #37	; 0x25
         590d4:	eb68516e 	bl	1a6d694 <TBIOInterface::$RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)>
         590d8:	e28dd004 	add	sp, sp, #4	; 0x4
         590dc:	e5840040 	str	r0, [r4, #64]	; fField64
         590e0:	e3700001 	cmn	r0, #1	; 0x1
         590e4:	0a000010 	beq	5912c <PCirrusBatteryDriver::Init(void)+0x200>
         590e8:	e5c4505a 	strb	r5, [r4, #90]	; fField90
         590ec:	e59f105c 	ldr	r1, [pc, #5c]	; 59150 <PCirrusBatteryDriver::Init(void)+0x224>
         590f0:	e5841064 	str	r1, [r4, #100]	; fField100
         590f4:	e59f0058 	ldr	r0, [pc, #58]	; 59154 <PCirrusBatteryDriver::Init(void)+0x228>
         590f8:	e5840068 	str	r0, [r4, #104]	; fField104
         590fc:	e59f2054 	ldr	r2, [pc, #54]	; 59158 <PCirrusBatteryDriver::Init(void)+0x22c>
         59100:	e5840074 	str	r0, [r4, #116]	; fField116
         59104:	e5841070 	str	r1, [r4, #112]	; fField112
         59108:	e584206c 	str	r2, [r4, #108]	; fField108
         5910c:	e59f0048 	ldr	r0, [pc, #48]	; 5915c <PCirrusBatteryDriver::Init(void)+0x230>	; fField48
         59110:	e3a01000 	mov	r1, #0	; 0x0
         59114:	eb6df25e 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         59118:	e1a00004 	mov	r0, r4
         5911c:	eb6a5171 	bl	1aed6e8 <PCirrusBatteryDriver::$WakeUp(void)>
         59120:	e1a00004 	mov	r0, r4
         59124:	eb6a557e 	bl	1aee724 <PCirrusBatteryDriver::$EnableBattAdaptInterrupts(void)>
         59128:	e1a00005 	mov	r0, r5
         5912c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         59130:	0c100f68 	ldceq	15, cr0, [r0], -#416
         59134:	42415454 	submi	r5, r1, #1409286144	; 0x54000000
         59138:	00058854 	andeq	r8, r5, r4, asr r8
         5913c:	0c100f74 	ldceq	15, cr0, [r0], -#464
         59140:	01aee710 	moveq	lr, r0, lsl r7
         59144:	0c1060cc 	ldceq	0, cr6, [r0], -#816
         59148:	01aee714 	moveq	lr, r4, lsl r7
         5914c:	0c100e98 	ldceq	14, cr0, [r0], -#608
         59150:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         59154:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
         59158:	70776368 	rsbvcs	r6, r7, r8, ror #6
         5915c:	0c100b18 	ldceq	11, cr0, [r0], -#96	; fField96
    */
}

/**
 * Symbol: PCirrusBatteryDriver::PreliminaryChargeTestIfDone(void)
 * Address: 00059160
 */
PCirrusBatteryDriver::PreliminaryChargeTestIfDone(void) {
    /*
         59160:	e1a0c00d 	mov	ip, sp
         59164:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         59168:	e24cb004 	sub	fp, ip, #4	; 0x4
         5916c:	e1a04000 	mov	r4, r0
         59170:	e5900090 	ldr	r0, [r0, #144]	; fField144
         59174:	e250ca46 	subs	ip, r0, #286720	; 0x46000
         59178:	a25cce66 	subges	ip, ip, #1632	; 0x660
         5917c:	a35c0006 	cmpge	ip, #6	; 0x6
         59180:	a1a00004 	movge	r0, r4
         59184:	a91b6810 	ldmgedb	fp, {r4, fp, sp, lr}
         59188:	aa6a556d 	bge	1aee744 <PCirrusBatteryDriver::$FastOrTrickle(void)>
         5918c:	eb6dee23 	bl	1bd4a20 <$GetRealTimeClock(void)>
         59190:	e5941034 	ldr	r1, [r4, #52]	; fField52
         59194:	e1500001 	cmp	r0, r1
         59198:	2a000004 	bcs	591b0 <PCirrusBatteryDriver::PreliminaryChargeTestIfDone(void)+0x50>
         5919c:	e3a00000 	mov	r0, #0	; 0x0
         591a0:	e584007c 	str	r0, [r4, #124]	; fField124
         591a4:	e1a00004 	mov	r0, r4
         591a8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         591ac:	ea6a5562 	b	1aee73c <PCirrusBatteryDriver::$PreliminaryCharge(void)>
         591b0:	e1a00004 	mov	r0, r4
         591b4:	e59f100c 	ldr	r1, [pc, #c]	; 591c8 <PCirrusBatteryDriver::PreliminaryChargeTestIfDone(void)+0x68>
         591b8:	eb6a5558 	bl	1aee720 <PCirrusBatteryDriver::$BatteryStatusMessage(unsigned long)>
         591bc:	e1a00004 	mov	r0, r4
         591c0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         591c4:	ea6a5563 	b	1aee758 <PCirrusBatteryDriver::$StopBatteryCharge(void)>
         591c8:	62617473 	rsbvs	r7, r1, #1929379840	; 0x73000000
    */
}

/**
 * Symbol: PCirrusBatteryDriver::FastOrTrickle(void)
 * Address: 000591cc
 */
PCirrusBatteryDriver::FastOrTrickle(void) {
    /*
         591cc:	e1a0c00d 	mov	ip, sp
         591d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         591d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         591d8:	e1a04000 	mov	r4, r0
         591dc:	e5901094 	ldr	r1, [r0, #148]	; fField148
         591e0:	e5902090 	ldr	r2, [r0, #144]	; fField144
         591e4:	e5900098 	ldr	r0, [r0, #152]	; fField152
         591e8:	e3510000 	cmp	r1, #0	; 0x0
         591ec:	ba000005 	blt	59208 <PCirrusBatteryDriver::FastOrTrickle(void)+0x3c>
         591f0:	e351070a 	cmp	r1, #2621440	; 0x280000
         591f4:	ca000003 	bgt	59208 <PCirrusBatteryDriver::FastOrTrickle(void)+0x3c>
         591f8:	e3500000 	cmp	r0, #0	; 0x0
         591fc:	ba000001 	blt	59208 <PCirrusBatteryDriver::FastOrTrickle(void)+0x3c>
         59200:	e350070a 	cmp	r0, #2621440	; 0x280000
         59204:	da000005 	ble	59220 <PCirrusBatteryDriver::FastOrTrickle(void)+0x54>
         59208:	e3a00000 	mov	r0, #0	; 0x0
         5920c:	e5840030 	str	r0, [r4, #48]	; fField48
         59210:	e1a00004 	mov	r0, r4
         59214:	e3a0103c 	mov	r1, #60	; 0x3c
         59218:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5921c:	ea6a5555 	b	1aee778 <PCirrusBatteryDriver::$PrimeChargeCycleTime(unsigned long)>
         59220:	e252ca63 	subs	ip, r2, #405504	; 0x63000
         59224:	a25cce33 	subges	ip, ip, #816	; 0x330
         59228:	a35c0003 	cmpge	ip, #3	; 0x3
         5922c:	ca00000a 	bgt	5925c <PCirrusBatteryDriver::FastOrTrickle(void)+0x90>
         59230:	eb6dedfa 	bl	1bd4a20 <$GetRealTimeClock(void)>
         59234:	e3a01e3b 	mov	r1, #944	; 0x3b0
         59238:	e2811a01 	add	r1, r1, #4096	; 0x1000
         5923c:	e5841084 	str	r1, [r4, #132]	; fField132
         59240:	e0800001 	add	r0, r0, r1
         59244:	e5840034 	str	r0, [r4, #52]	; fField52
         59248:	e3a00002 	mov	r0, #2	; 0x2
         5924c:	e5840030 	str	r0, [r4, #48]	; fField48
         59250:	e1a00004 	mov	r0, r4
         59254:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         59258:	ea6a553a 	b	1aee748 <PCirrusBatteryDriver::$FastCharge(void)>
         5925c:	e3a00001 	mov	r0, #1	; 0x1
         59260:	e5840030 	str	r0, [r4, #48]	; fField48
         59264:	e1a00004 	mov	r0, r4
         59268:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5926c:	ea6a5537 	b	1aee750 <PCirrusBatteryDriver::$BeginTrickleCharge(void)>
    */
}

/**
 * Symbol: PCirrusBatteryDriver::FastCharge(void)
 * Address: 00059270
 */
PCirrusBatteryDriver::FastCharge(void) {
    /*
         59270:	e1a0c00d 	mov	ip, sp
         59274:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         59278:	e24cb004 	sub	fp, ip, #4	; 0x4
         5927c:	e1a04000 	mov	r4, r0
         59280:	e5905098 	ldr	r5, [r0, #152]	; fField152
         59284:	e2807090 	add	r7, r0, #144	; 0x90
         59288:	e89700c0 	ldmia	r7, {r6, r7}
         5928c:	eb6dede3 	bl	1bd4a20 <$GetRealTimeClock(void)>
         59290:	e1550007 	cmp	r5, r7
         59294:	d0477005 	suble	r7, r7, r5
         59298:	c0457007 	subgt	r7, r5, r7
         5929c:	e3a01001 	mov	r1, #1	; 0x1
         592a0:	e355070f 	cmp	r5, #3932160	; 0x3c0000
         592a4:	ca00001a 	bgt	59314 <PCirrusBatteryDriver::FastCharge(void)+0xa4>
         592a8:	e357080f 	cmp	r7, #983040	; 0xf0000
         592ac:	aa000018 	bge	59314 <PCirrusBatteryDriver::FastCharge(void)+0xa4>
         592b0:	e5942034 	ldr	r2, [r4, #52]	; fField52
         592b4:	e1520000 	cmp	r2, r0
         592b8:	9a000015 	bls	59314 <PCirrusBatteryDriver::FastCharge(void)+0xa4>
         592bc:	e5940038 	ldr	r0, [r4, #56]	; fField56
         592c0:	e0470000 	sub	r0, r7, r0
         592c4:	e3500801 	cmp	r0, #65536	; 0x10000
         592c8:	aa000011 	bge	59314 <PCirrusBatteryDriver::FastCharge(void)+0xa4>
         592cc:	e3560701 	cmp	r6, #262144	; 0x40000
         592d0:	ba000006 	blt	592f0 <PCirrusBatteryDriver::FastCharge(void)+0x80>
         592d4:	e256ca63 	subs	ip, r6, #405504	; 0x63000
         592d8:	a25cce33 	subges	ip, ip, #816	; 0x330
         592dc:	a35c0003 	cmpge	ip, #3	; 0x3
         592e0:	ca000002 	bgt	592f0 <PCirrusBatteryDriver::FastCharge(void)+0x80>
         592e4:	e1a00004 	mov	r0, r4
         592e8:	eb6a551e 	bl	1aee768 <PCirrusBatteryDriver::$ChargeOn(void)>
         592ec:	ea00000b 	b	59320 <PCirrusBatteryDriver::FastCharge(void)+0xb0>
         592f0:	e3560701 	cmp	r6, #262144	; 0x40000
         592f4:	aa000006 	bge	59314 <PCirrusBatteryDriver::FastCharge(void)+0xa4>
         592f8:	e1a00004 	mov	r0, r4
         592fc:	e59f100c 	ldr	r1, [pc, #c]	; 59310 <PCirrusBatteryDriver::FastCharge(void)+0xa0>
         59300:	eb6a5506 	bl	1aee720 <PCirrusBatteryDriver::$BatteryStatusMessage(unsigned long)>
         59304:	e1a00004 	mov	r0, r4
         59308:	eb6a5512 	bl	1aee758 <PCirrusBatteryDriver::$StopBatteryCharge(void)>
         5930c:	ea000003 	b	59320 <PCirrusBatteryDriver::FastCharge(void)+0xb0>
         59310:	62617473 	rsbvs	r7, r1, #1929379840	; 0x73000000
         59314:	e5841030 	str	r1, [r4, #48]	; fField48
         59318:	e1a00004 	mov	r0, r4
         5931c:	eb6a550b 	bl	1aee750 <PCirrusBatteryDriver::$BeginTrickleCharge(void)>
         59320:	e5a47038 	str	r7, [r4, #56]!	; fField56
         59324:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusBatteryDriver::FastChargeCont(void)
 * Address: 00059328
 */
PCirrusBatteryDriver::FastChargeCont(void) {
    /*
         59328:	e1a0c00d 	mov	ip, sp
         5932c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         59330:	e24cb004 	sub	fp, ip, #4	; 0x4
         59334:	e1a04000 	mov	r4, r0
         59338:	e5900084 	ldr	r0, [r0, #132]	; fField132
         5933c:	e3300000 	teq	r0, #0	; 0x0
         59340:	0a000013 	beq	59394 <PCirrusBatteryDriver::FastChargeCont(void)+0x6c>
         59344:	e594008c 	ldr	r0, [r4, #140]	; fField140
         59348:	e3500732 	cmp	r0, #13107200	; 0xc80000
         5934c:	da000010 	ble	59394 <PCirrusBatteryDriver::FastChargeCont(void)+0x6c>
         59350:	e5940088 	ldr	r0, [r4, #136]	; fField136
         59354:	e250c917 	subs	ip, r0, #376832	; 0x5c000
         59358:	a25ccd33 	subges	ip, ip, #3264	; 0xcc0
         5935c:	a35c000c 	cmpge	ip, #12	; 0xc
         59360:	ca00000b 	bgt	59394 <PCirrusBatteryDriver::FastChargeCont(void)+0x6c>
         59364:	eb6dedad 	bl	1bd4a20 <$GetRealTimeClock(void)>
         59368:	e1a05000 	mov	r5, r0
         5936c:	e3a00713 	mov	r0, #4980736	; 0x4c0000
         59370:	e2800301 	add	r0, r0, #67108864	; 0x4000000
         59374:	e594108c 	ldr	r1, [r4, #140]	; fField140
         59378:	eb6e1f50 	bl	1be10c0 <$FixedDivide>
         5937c:	e5941084 	ldr	r1, [r4, #132]	; fField132
         59380:	e0000091 	mul	r0, r1, r0
         59384:	e0850820 	add	r0, r5, r0, lsr #16
         59388:	e5840034 	str	r0, [r4, #52]	; fField52
         5938c:	e3a00000 	mov	r0, #0	; 0x0
         59390:	e5840084 	str	r0, [r4, #132]	; fField132
         59394:	e1a00004 	mov	r0, r4
         59398:	eb6a54f3 	bl	1aee76c <PCirrusBatteryDriver::$ChargeOff(void)>
         5939c:	e594008c 	ldr	r0, [r4, #140]	; fField140
         593a0:	e250c65d 	subs	ip, r0, #97517568	; 0x5d00000
         593a4:	a35c0703 	cmpge	ip, #786432	; 0xc0000
         593a8:	da000005 	ble	593c4 <PCirrusBatteryDriver::FastChargeCont(void)+0x9c>
         593ac:	e1a00004 	mov	r0, r4
         593b0:	e59f1024 	ldr	r1, [pc, #24]	; 593dc <PCirrusBatteryDriver::FastChargeCont(void)+0xb4>	; fField24
         593b4:	eb6a54d9 	bl	1aee720 <PCirrusBatteryDriver::$BatteryStatusMessage(unsigned long)>
         593b8:	e1a00004 	mov	r0, r4
         593bc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         593c0:	ea6a54e4 	b	1aee758 <PCirrusBatteryDriver::$StopBatteryCharge(void)>
         593c4:	e3a00066 	mov	r0, #102	; 0x66
         593c8:	e2800c0e 	add	r0, r0, #3584	; 0xe00
         593cc:	eb6e92bd 	bl	1bfdec8 <$ShortTimerDelay(unsigned long)>
         593d0:	e1a00004 	mov	r0, r4
         593d4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         593d8:	ea6a54da 	b	1aee748 <PCirrusBatteryDriver::$FastCharge(void)>
         593dc:	64656164 	strvsbt	r6, [r5], -#356	; fField356
    */
}

/**
 * Symbol: PCirrusBatteryDriver::BeginTrickleCharge(void)
 * Address: 000593e0
 */
PCirrusBatteryDriver::BeginTrickleCharge(void) {
    /*
         593e0:	e5901098 	ldr	r1, [r0, #152]	; fField152
         593e4:	e351070f 	cmp	r1, #3932160	; 0x3c0000
         593e8:	d3a01005 	movle	r1, #5	; 0x5
         593ec:	d5801030 	strle	r1, [r0, #48]	; fField48
         593f0:	da6a54d7 	ble	1aee754 <PCirrusBatteryDriver::$TrickleCharge(void)>
         593f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusBatteryDriver::TrickleCharge(void)
 * Address: 000593f8
 */
PCirrusBatteryDriver::TrickleCharge(void) {
    /*
         593f8:	e1a0c00d 	mov	ip, sp
         593fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         59400:	e24cb004 	sub	fp, ip, #4	; 0x4
         59404:	e1a04000 	mov	r4, r0
         59408:	eb6a54d6 	bl	1aee768 <PCirrusBatteryDriver::$ChargeOn(void)>
         5940c:	e5d4105b 	ldrb	r1, [r4, #91]	; fField91
         59410:	e3a00efd 	mov	r0, #4048	; 0xfd0
         59414:	e2800a6b 	add	r0, r0, #438272	; 0x6b000
         59418:	e3310000 	teq	r1, #0	; 0x0
         5941c:	0a000003 	beq	59430 <PCirrusBatteryDriver::TrickleCharge(void)+0x38>
         59420:	eb6e92a8 	bl	1bfdec8 <$ShortTimerDelay(unsigned long)>
         59424:	e1a00004 	mov	r0, r4
         59428:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5942c:	ea6a54ce 	b	1aee76c <PCirrusBatteryDriver::$ChargeOff(void)>
         59430:	e5b4104c 	ldr	r1, [r4, #76]!	; fField76
         59434:	e59f2014 	ldr	r2, [pc, #14]	; 59450 <PCirrusBatteryDriver::TrickleCharge(void)+0x58>
         59438:	e3a03000 	mov	r3, #0	; 0x0
         5943c:	e592c000 	ldr	ip, [r2]
         59440:	e1a02000 	mov	r2, r0
         59444:	e1a0000c 	mov	r0, ip
         59448:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5944c:	ea68443b 	b	1a6a540 <TIRQTimer::$SetIRQTimer(IRQTimer *, unsigned long, unsigned long)>
         59450:	0c100f74 	ldceq	15, cr0, [r0], -#464
    */
}

/**
 * Symbol: PCirrusBatteryDriver::TrickleChargeCont(void)
 * Address: 00059454
 */
PCirrusBatteryDriver::TrickleChargeCont(void) {
    /*
         59454:	ea6a54be 	b	1aee754 <PCirrusBatteryDriver::$TrickleCharge(void)>
    */
}

/**
 * Symbol: PCirrusBatteryDriver::StopBatteryCharge(void)
 * Address: 00059458
 */
PCirrusBatteryDriver::StopBatteryCharge(void) {
    /*
         59458:	e1a0c00d 	mov	ip, sp
         5945c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         59460:	e24cb004 	sub	fp, ip, #4	; 0x4
         59464:	e1a04000 	mov	r4, r0
         59468:	eb6a54bf 	bl	1aee76c <PCirrusBatteryDriver::$ChargeOff(void)>
         5946c:	e1a00004 	mov	r0, r4
         59470:	e3a01000 	mov	r1, #0	; 0x0
         59474:	eb6a54bf 	bl	1aee778 <PCirrusBatteryDriver::$PrimeChargeCycleTime(unsigned long)>
         59478:	e5940030 	ldr	r0, [r4, #48]	; fField48
         5947c:	e3300006 	teq	r0, #6	; 0x6
         59480:	13a00000 	movne	r0, #0	; 0x0
         59484:	15a40030 	strne	r0, [r4, #48]!	; fField48
         59488:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusBatteryDriver::AdapterInstalled(void)
 * Address: 0005948c
 */
PCirrusBatteryDriver::AdapterInstalled(void) {
    /*
         5948c:	e3a01000 	mov	r1, #0	; 0x0
         59490:	e5900088 	ldr	r0, [r0, #136]	; fField136
         59494:	e3500701 	cmp	r0, #262144	; 0x40000
         59498:	da000001 	ble	594a4 <PCirrusBatteryDriver::AdapterInstalled(void)+0x18>
         5949c:	e3500809 	cmp	r0, #589824	; 0x90000
         594a0:	b3a01001 	movlt	r1, #1	; 0x1
         594a4:	e1a00001 	mov	r0, r1
         594a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusBatteryDriver::NiMHInstalled(void)
 * Address: 000594ac
 */
PCirrusBatteryDriver::NiMHInstalled(void) {
    /*
         594ac:	ea6a54ac 	b	1aee764 <PCirrusBatteryDriver::$BatteryTypeSense(void)>
    */
}

/**
 * Symbol: PCirrusBatteryDriver::WakeUp(void)
 * Address: 000594b0
 */
PCirrusBatteryDriver::WakeUp(void) {
    /*
         594b0:	e3a01000 	mov	r1, #0	; 0x0
         594b4:	e3a0280f 	mov	r2, #983040	; 0xf0000
         594b8:	e580102c 	str	r1, [r0, #44]	; fField44
         594bc:	e5802038 	str	r2, [r0, #56]	; fField56
         594c0:	e5c0105b 	strb	r1, [r0, #91]	; fField91
         594c4:	e3a01005 	mov	r1, #5	; 0x5
         594c8:	ea6a54aa 	b	1aee778 <PCirrusBatteryDriver::$PrimeChargeCycleTime(unsigned long)>
    */
}

/**
 * Symbol: PCirrusBatteryDriver::BatteryTypeSense(void)
 * Address: 000594cc
 */
PCirrusBatteryDriver::BatteryTypeSense(void) {
    /*
         594cc:	e1a0c00d 	mov	ip, sp
         594d0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         594d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         594d8:	e3a00000 	mov	r0, #0	; 0x0
         594dc:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         594e0:	e1a0200d 	mov	r2, sp
         594e4:	e59f0020 	ldr	r0, [pc, #20]	; 5950c <PCirrusBatteryDriver::BatteryTypeSense(void)+0x40>	; fField20
         594e8:	e5900000 	ldr	r0, [r0]
         594ec:	e3a01025 	mov	r1, #37	; 0x25
         594f0:	eb685071 	bl	1a6d6bc <TBIOInterface::$ReadDIOPins(unsigned char, unsigned long *)>
         594f4:	e59d0000 	ldr	r0, [sp]
         594f8:	e3300000 	teq	r0, #0	; 0x0
         594fc:	13a00000 	movne	r0, #0	; 0x0
         59500:	03a00001 	moveq	r0, #1	; 0x1
         59504:	e20000ff 	and	r0, r0, #255	; 0xff
         59508:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         5950c:	0c100f68 	ldceq	15, cr0, [r0], -#416
    */
}

/**
 * Symbol: PCirrusBatteryDriver::ChargeOn(void)
 * Address: 00059510
 */
PCirrusBatteryDriver::ChargeOn(void) {
    /*
         59510:	e1a0c00d 	mov	ip, sp
         59514:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         59518:	e24cb004 	sub	fp, ip, #4	; 0x4
         5951c:	e1a04000 	mov	r4, r0
         59520:	e24dd004 	sub	sp, sp, #4	; 0x4
         59524:	e5900044 	ldr	r0, [r0, #68]	; fField68
         59528:	e1a0300d 	mov	r3, sp
         5952c:	e3a02001 	mov	r2, #1	; 0x1
         59530:	e3a01007 	mov	r1, #7	; 0x7
         59534:	eb685474 	bl	1a6e70c <TGPIOInterface::$WriteGPIOPolarity(unsigned char, unsigned char, unsigned char *)>
         59538:	e1a0300d 	mov	r3, sp
         5953c:	e3a02001 	mov	r2, #1	; 0x1
         59540:	e3a01007 	mov	r1, #7	; 0x7
         59544:	e5b40044 	ldr	r0, [r4, #68]!	; fField68
         59548:	eb6ecc30 	bl	1c0c610 <TGPIOInterface::$WriteGPIOData(unsigned char, unsigned char, unsigned char *)>
         5954c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusBatteryDriver::ChargeOff(void)
 * Address: 00059550
 */
PCirrusBatteryDriver::ChargeOff(void) {
    /*
         59550:	e1a0c00d 	mov	ip, sp
         59554:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         59558:	e24cb004 	sub	fp, ip, #4	; 0x4
         5955c:	e1a04000 	mov	r4, r0
         59560:	e24dd004 	sub	sp, sp, #4	; 0x4
         59564:	e5900044 	ldr	r0, [r0, #68]	; fField68
         59568:	e1a0300d 	mov	r3, sp
         5956c:	e3a02000 	mov	r2, #0	; 0x0
         59570:	e3a01007 	mov	r1, #7	; 0x7
         59574:	eb685464 	bl	1a6e70c <TGPIOInterface::$WriteGPIOPolarity(unsigned char, unsigned char, unsigned char *)>
         59578:	e1a0300d 	mov	r3, sp
         5957c:	e3a02000 	mov	r2, #0	; 0x0
         59580:	e3a01007 	mov	r1, #7	; 0x7
         59584:	e5b40044 	ldr	r0, [r4, #68]!	; fField68
         59588:	eb6ecc20 	bl	1c0c610 <TGPIOInterface::$WriteGPIOData(unsigned char, unsigned char, unsigned char *)>
         5958c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusBatteryDriver::ReadADCVoltage(unsigned long)
 * Address: 00059590
 */
PCirrusBatteryDriver::ReadADCVoltage(unsigned long) {
    /*
         59590:	e1a0c00d 	mov	ip, sp
         59594:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         59598:	e24cb004 	sub	fp, ip, #4	; 0x4
         5959c:	e1a04000 	mov	r4, r0
         595a0:	e1a05001 	mov	r5, r1
         595a4:	e5801010 	str	r1, [r0, #16]	; fField16
         595a8:	eb6ecc1a 	bl	1c0c618 <$GetADCObject(void)>
         595ac:	e3550007 	cmp	r5, #7	; 0x7
         595b0:	908ff105 	addls	pc, pc, r5, lsl #2
         595b4:	ea00000f 	b	595f8 <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0x68>
         595b8:	ea00000e 	b	595f8 <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0x68>
         595bc:	ea000006 	b	595dc <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0x4c>
         595c0:	ea00000c 	b	595f8 <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0x68>
         595c4:	ea00000b 	b	595f8 <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0x68>
         595c8:	ea000009 	b	595f4 <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0x64>
         595cc:	ea000006 	b	595ec <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0x5c>
         595d0:	ea000003 	b	595e4 <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0x54>
         595d4:	e3a06008 	mov	r6, #8	; 0x8
         595d8:	ea000006 	b	595f8 <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0x68>
         595dc:	e3a06006 	mov	r6, #6	; 0x6
         595e0:	ea000004 	b	595f8 <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0x68>
         595e4:	e3a06007 	mov	r6, #7	; 0x7
         595e8:	ea000002 	b	595f8 <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0x68>
         595ec:	e3a06009 	mov	r6, #9	; 0x9
         595f0:	ea000000 	b	595f8 <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0x68>
         595f4:	e3a0600a 	mov	r6, #10	; 0xa
         595f8:	e1a03004 	mov	r3, r4
         595fc:	e92d0008 	stmdb	sp!, {r3}
         59600:	e59f3024 	ldr	r3, [pc, #24]	; 5962c <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0x9c>	; fField24
         59604:	e59f1024 	ldr	r1, [pc, #24]	; 59630 <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0xa0>	; fField24
         59608:	e5912000 	ldr	r2, [r1]
         5960c:	e1a01006 	mov	r1, r6
         59610:	eb6ecbff 	bl	1c0c614 <TADC::$GetSample(ADCMuxType, unsigned long, void (*)(void *, long, unsigned long), void *)>
         59614:	e28dd004 	add	sp, sp, #4	; 0x4
         59618:	e3a06000 	mov	r6, #0	; 0x0
         5961c:	e3a05a09 	mov	r5, #36864	; 0x9000
         59620:	e2455004 	sub	r5, r5, #4	; 0x4
         59624:	e2847010 	add	r7, r4, #16	; 0x10
         59628:	ea00000a 	b	59658 <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0xc8>
         5962c:	01aee774 	moveq	lr, r4, ror r7
         59630:	0c100b0c 	ldceq	11, cr0, [r0], -#48	; fField48
         59634:	e5970000 	ldr	r0, [r7]
         59638:	e3300000 	teq	r0, #0	; 0x0
         5963c:	11a00005 	movne	r0, r5
         59640:	1b6e0df9 	blne	1bdce2c <$Sleep(unsigned long)>
         59644:	e2860001 	add	r0, r6, #1	; 0x1
         59648:	e1a06800 	mov	r6, r0, lsl #16
         5964c:	e1a06846 	mov	r6, r6, asr #16
         59650:	e3560032 	cmp	r6, #50	; 0x32
         59654:	aa000002 	bge	59664 <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0xd4>
         59658:	e5970000 	ldr	r0, [r7]
         5965c:	e3300000 	teq	r0, #0	; 0x0
         59660:	1afffff3 	bne	59634 <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0xa4>
         59664:	e5940010 	ldr	r0, [r4, #16]	; fField16
         59668:	e3300000 	teq	r0, #0	; 0x0
         5966c:	0a000003 	beq	59680 <PCirrusBatteryDriver::ReadADCVoltage(unsigned long)+0xf0>
         59670:	e3a00000 	mov	r0, #0	; 0x0
         59674:	e5840010 	str	r0, [r4, #16]	; fField16
         59678:	e3e00000 	mvn	r0, #0	; 0x0
         5967c:	e5840014 	str	r0, [r4, #20]	; fField20
         59680:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         59684:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusBatteryDriver::SampleResult(long, unsigned long)
 * Address: 00059688
 */
PCirrusBatteryDriver::SampleResult(long, unsigned long) {
    /*
         59688:	e3310000 	teq	r1, #0	; 0x0
         5968c:	13a01102 	movne	r1, #-2147483648	; 0x80000000
         59690:	15801014 	strne	r1, [r0, #20]	; fField20
         59694:	05802014 	streq	r2, [r0, #20]	; fField20
         59698:	e3a01000 	mov	r1, #0	; 0x0
         5969c:	e5a01010 	str	r1, [r0, #16]!	; fField16
         596a0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusBatteryDriver::PrimeChargeCycleTime(unsigned long)
 * Address: 000596a4
 */
PCirrusBatteryDriver::PrimeChargeCycleTime(unsigned long) {
    /*
         596a4:	e1a0c00d 	mov	ip, sp
         596a8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         596ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         596b0:	e1a05000 	mov	r5, r0
         596b4:	e1a04001 	mov	r4, r1
         596b8:	e24dd010 	sub	sp, sp, #16	; 0x10
         596bc:	e28d300c 	add	r3, sp, #12	; 0xc
         596c0:	e1a0200d 	mov	r2, sp
         596c4:	e28d1008 	add	r1, sp, #8	; 0x8
         596c8:	e59f6030 	ldr	r6, [pc, #30]	; 59700 <PCirrusBatteryDriver::PrimeChargeCycleTime(unsigned long)+0x5c>
         596cc:	e1a00006 	mov	r0, r6
         596d0:	eb6dd82e 	bl	1bcf790 <$AlarmStatus__14TRealTimeClockSFUlPUlP5TTimePl>
         596d4:	e5d5005b 	ldrb	r0, [r5, #91]	; fField91
         596d8:	e3300000 	teq	r0, #0	; 0x0
         596dc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         596e0:	1a000007 	bne	59704 <PCirrusBatteryDriver::PrimeChargeCycleTime(unsigned long)+0x60>
         596e4:	e3300000 	teq	r0, #0	; 0x0
         596e8:	0a000007 	beq	5970c <PCirrusBatteryDriver::PrimeChargeCycleTime(unsigned long)+0x68>
         596ec:	e1a00006 	mov	r0, r6
         596f0:	eb6ddc48 	bl	1bd0818 <$ClearAlarm__14TRealTimeClockSFUl>
         596f4:	e3a00000 	mov	r0, #0	; 0x0
         596f8:	e58d0008 	str	r0, [sp, #8]	; fField8
         596fc:	ea000002 	b	5970c <PCirrusBatteryDriver::PrimeChargeCycleTime(unsigned long)+0x68>
         59700:	42415454 	submi	r5, r1, #1409286144	; 0x54000000
         59704:	e3300000 	teq	r0, #0	; 0x0
         59708:	1a00000c 	bne	59740 <PCirrusBatteryDriver::PrimeChargeCycleTime(unsigned long)+0x9c>
         5970c:	e3340000 	teq	r4, #0	; 0x0
         59710:	0a00000a 	beq	59740 <PCirrusBatteryDriver::PrimeChargeCycleTime(unsigned long)+0x9c>
         59714:	eb6decc1 	bl	1bd4a20 <$GetRealTimeClock(void)>
         59718:	e0801004 	add	r1, r0, r4
         5971c:	e3a03000 	mov	r3, #0	; 0x0
         59720:	e3a02000 	mov	r2, #0	; 0x0
         59724:	e92d000c 	stmdb	sp!, {r2, r3}
         59728:	e1a03005 	mov	r3, r5
         5972c:	e59f2010 	ldr	r2, [pc, #10]	; 59744 <PCirrusBatteryDriver::PrimeChargeCycleTime(unsigned long)+0xa0>
         59730:	e1a00006 	mov	r0, r6
         59734:	eb6e89a8 	bl	1bfbddc <$SetAlarm__14TRealTimeClockSFUlT1PFPv_lPvN21>
         59738:	e28dd008 	add	sp, sp, #8	; 0x8
         5973c:	e58d000c 	str	r0, [sp, #12]	; fField12
         59740:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         59744:	01aee728 	moveq	lr, r8, lsr #14
    */
}

/**
 * Symbol: PCirrusBatteryDriver::ShutDown(void)
 * Address: 00059748
 */
PCirrusBatteryDriver::ShutDown(void) {
    /*
         59748:	e1a0c00d 	mov	ip, sp
         5974c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         59750:	e24cb004 	sub	fp, ip, #4	; 0x4
         59754:	e1a04000 	mov	r4, r0
         59758:	e3a0080f 	mov	r0, #983040	; 0xf0000
         5975c:	e5840038 	str	r0, [r4, #56]	; fField56
         59760:	e5940030 	ldr	r0, [r4, #48]	; fField48
         59764:	e3300004 	teq	r0, #4	; 0x4
         59768:	01a00004 	moveq	r0, r4
         5976c:	03a01005 	moveq	r1, #5	; 0x5
         59770:	0b6a5400 	bleq	1aee778 <PCirrusBatteryDriver::$PrimeChargeCycleTime(unsigned long)>
         59774:	e3a00001 	mov	r0, #1	; 0x1
         59778:	e5c4005b 	strb	r0, [r4, #91]	; fField91
         5977c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusBatteryDriver::Count(void)
 * Address: 00059780
 */
PCirrusBatteryDriver::Count(void) {
    /*
         59780:	e3a00001 	mov	r0, #1	; 0x1
         59784:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusBatteryDriver::Status(unsigned long, PowerPlantStatus *)
 * Address: 00059788
 */
PCirrusBatteryDriver::Status(unsigned long, PowerPlantStatus *) {
    /*
         59788:	e3a03000 	mov	r3, #0	; 0x0
         5978c:	ea6a4fd8 	b	1aed6f4 <PCirrusBatteryDriver::$ReturnStatus(unsigned long, PowerPlantStatus *, unsigned char)>
    */
}

/**
 * Symbol: PCirrusBatteryDriver::RawStatus(unsigned long, PowerPlantStatus *)
 * Address: 00059790
 */
PCirrusBatteryDriver::RawStatus(unsigned long, PowerPlantStatus *) {
    /*
         59790:	e3a03001 	mov	r3, #1	; 0x1
         59794:	ea6a4fd6 	b	1aed6f4 <PCirrusBatteryDriver::$ReturnStatus(unsigned long, PowerPlantStatus *, unsigned char)>
    */
}

/**
 * Symbol: PCirrusBatteryDriver::ReturnStatus(unsigned long, PowerPlantStatus *, unsigned char)
 * Address: 00059798
 */
PCirrusBatteryDriver::ReturnStatus(unsigned long, PowerPlantStatus *, unsigned char) {
    /*
         59798:	e1a0c00d 	mov	ip, sp
         5979c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         597a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         597a4:	e1a05000 	mov	r5, r0
         597a8:	e1b04002 	movs	r4, r2
         597ac:	e20360ff 	and	r6, r3, #255	; 0xff
         597b0:	0a00006c 	beq	59968 <PCirrusBatteryDriver::ReturnStatus(unsigned long, PowerPlantStatus *, unsigned char)+0x1d0>
         597b4:	e3310000 	teq	r1, #0	; 0x0
         597b8:	13a06075 	movne	r6, #117	; 0x75
         597bc:	12466b37 	subne	r6, r6, #56320	; 0xdc00
         597c0:	1a00006a 	bne	59970 <PCirrusBatteryDriver::ReturnStatus(unsigned long, PowerPlantStatus *, unsigned char)+0x1d8>
         597c4:	e1a00005 	mov	r0, r5
         597c8:	e3a01000 	mov	r1, #0	; 0x0
         597cc:	eb6a53cb 	bl	1aee700 <PCirrusBatteryDriver::$BatteryType(unsigned long)>
         597d0:	e3360000 	teq	r6, #0	; 0x0
         597d4:	e5840000 	str	r0, [r4]
         597d8:	e1a00005 	mov	r0, r5
         597dc:	e3a01001 	mov	r1, #1	; 0x1
         597e0:	0a000009 	beq	5980c <PCirrusBatteryDriver::ReturnStatus(unsigned long, PowerPlantStatus *, unsigned char)+0x74>
         597e4:	eb6a53e1 	bl	1aee770 <PCirrusBatteryDriver::$ReadADCVoltage(unsigned long)>
         597e8:	e1a00600 	mov	r0, r0, lsl #12
         597ec:	e5840004 	str	r0, [r4, #4]	; fField4
         597f0:	e5951020 	ldr	r1, [r5, #32]	; fField32
         597f4:	e0070190 	mul	r7, r0, r1
         597f8:	e1a00005 	mov	r0, r5
         597fc:	e3a01006 	mov	r1, #6	; 0x6
         59800:	eb6a53da 	bl	1aee770 <PCirrusBatteryDriver::$ReadADCVoltage(unsigned long)>
         59804:	e1a00600 	mov	r0, r0, lsl #12
         59808:	ea000005 	b	59824 <PCirrusBatteryDriver::ReturnStatus(unsigned long, PowerPlantStatus *, unsigned char)+0x8c>
         5980c:	eb6a53bc 	bl	1aee704 <PCirrusBatteryDriver::$ReadVoltage(unsigned long)>
         59810:	e5840004 	str	r0, [r4, #4]	; fField4
         59814:	e1a07000 	mov	r7, r0
         59818:	e1a00005 	mov	r0, r5
         5981c:	e3a01006 	mov	r1, #6	; 0x6
         59820:	eb6a53b7 	bl	1aee704 <PCirrusBatteryDriver::$ReadVoltage(unsigned long)>
         59824:	e1a02007 	mov	r2, r7
         59828:	e5840014 	str	r0, [r4, #20]	; fField20
         5982c:	e1a00005 	mov	r0, r5
         59830:	e3a01001 	mov	r1, #1	; 0x1
         59834:	eb6a4fb0 	bl	1aed6fc <PCirrusBatteryDriver::$BatteryLevel(unsigned long, long)>
         59838:	e5840008 	str	r0, [r4, #8]	; fField8
         5983c:	e3a00014 	mov	r0, #20	; 0x14
         59840:	e3a07000 	mov	r7, #0	; 0x0
         59844:	e3360000 	teq	r6, #0	; 0x0
         59848:	e284400c 	add	r4, r4, #12	; 0xc
         5984c:	e8840081 	stmia	r4, {r0, r7}
         59850:	e244400c 	sub	r4, r4, #12	; 0xc
         59854:	e1a00005 	mov	r0, r5
         59858:	e3a01007 	mov	r1, #7	; 0x7
         5985c:	0a00000c 	beq	59894 <PCirrusBatteryDriver::ReturnStatus(unsigned long, PowerPlantStatus *, unsigned char)+0xfc>
         59860:	eb6a53c2 	bl	1aee770 <PCirrusBatteryDriver::$ReadADCVoltage(unsigned long)>
         59864:	e1a00600 	mov	r0, r0, lsl #12
         59868:	e584001c 	str	r0, [r4, #28]	; fField28
         5986c:	e1a00005 	mov	r0, r5
         59870:	e3a01004 	mov	r1, #4	; 0x4
         59874:	eb6a53bd 	bl	1aee770 <PCirrusBatteryDriver::$ReadADCVoltage(unsigned long)>
         59878:	e1a00600 	mov	r0, r0, lsl #12
         5987c:	e584002c 	str	r0, [r4, #44]	; fField44
         59880:	e1a00005 	mov	r0, r5
         59884:	e3a01005 	mov	r1, #5	; 0x5
         59888:	eb6a53b8 	bl	1aee770 <PCirrusBatteryDriver::$ReadADCVoltage(unsigned long)>
         5988c:	e1a00600 	mov	r0, r0, lsl #12
         59890:	ea00000c 	b	598c8 <PCirrusBatteryDriver::ReturnStatus(unsigned long, PowerPlantStatus *, unsigned char)+0x130>
         59894:	eb6a539a 	bl	1aee704 <PCirrusBatteryDriver::$ReadVoltage(unsigned long)>
         59898:	e5850088 	str	r0, [r5, #136]	; fField136
         5989c:	e584001c 	str	r0, [r4, #28]	; fField28
         598a0:	e1a00005 	mov	r0, r5
         598a4:	e3a01004 	mov	r1, #4	; 0x4
         598a8:	eb6a5395 	bl	1aee704 <PCirrusBatteryDriver::$ReadVoltage(unsigned long)>
         598ac:	e584002c 	str	r0, [r4, #44]	; fField44
         598b0:	e5951050 	ldr	r1, [r5, #80]	; fField80
         598b4:	e3310003 	teq	r1, #3	; 0x3
         598b8:	1a000004 	bne	598d0 <PCirrusBatteryDriver::ReturnStatus(unsigned long, PowerPlantStatus *, unsigned char)+0x138>
         598bc:	e1a00005 	mov	r0, r5
         598c0:	e3a01005 	mov	r1, #5	; 0x5
         598c4:	eb6a538e 	bl	1aee704 <PCirrusBatteryDriver::$ReadVoltage(unsigned long)>
         598c8:	e5840030 	str	r0, [r4, #48]	; fField48
         598cc:	ea000004 	b	598e4 <PCirrusBatteryDriver::ReturnStatus(unsigned long, PowerPlantStatus *, unsigned char)+0x14c>
         598d0:	e5840030 	str	r0, [r4, #48]	; fField48
         598d4:	e5950030 	ldr	r0, [r5, #48]	; fField48
         598d8:	e3300000 	teq	r0, #0	; 0x0
         598dc:	11a00005 	movne	r0, r5
         598e0:	1b6a539c 	blne	1aee758 <PCirrusBatteryDriver::$StopBatteryCharge(void)>
         598e4:	e1a00005 	mov	r0, r5
         598e8:	eb6a539b 	bl	1aee75c <PCirrusBatteryDriver::$AdapterInstalled(void)>
         598ec:	e3300000 	teq	r0, #0	; 0x0
         598f0:	13a00001 	movne	r0, #1	; 0x1
         598f4:	15840018 	strne	r0, [r4, #24]	; fField24
         598f8:	1a000004 	bne	59910 <PCirrusBatteryDriver::ReturnStatus(unsigned long, PowerPlantStatus *, unsigned char)+0x178>
         598fc:	e5847018 	str	r7, [r4, #24]	; fField24
         59900:	e5950030 	ldr	r0, [r5, #48]	; fField48
         59904:	e3300000 	teq	r0, #0	; 0x0
         59908:	11a00005 	movne	r0, r5
         5990c:	1b6a5391 	blne	1aee758 <PCirrusBatteryDriver::$StopBatteryCharge(void)>
         59910:	e5950030 	ldr	r0, [r5, #48]	; fField48
         59914:	e3e07000 	mvn	r7, #0	; 0x0
         59918:	e2844020 	add	r4, r4, #32	; 0x20
         5991c:	e8840081 	stmia	r4, {r0, r7}
         59920:	e2444020 	sub	r4, r4, #32	; 0x20
         59924:	e3a00000 	mov	r0, #0	; 0x0
         59928:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         5992c:	e1a0200d 	mov	r2, sp
         59930:	e59f002c 	ldr	r0, [pc, #2c]	; 59964 <PCirrusBatteryDriver::ReturnStatus(unsigned long, PowerPlantStatus *, unsigned char)+0x1cc>
         59934:	e5900000 	ldr	r0, [r0]
         59938:	e3a01021 	mov	r1, #33	; 0x21
         5993c:	eb684f5e 	bl	1a6d6bc <TBIOInterface::$ReadDIOPins(unsigned char, unsigned long *)>
         59940:	e1a06000 	mov	r6, r0
         59944:	e59d0000 	ldr	r0, [sp]
         59948:	e3300000 	teq	r0, #0	; 0x0
         5994c:	15a47028 	strne	r7, [r4, #40]!	; fField40
         59950:	05940014 	ldreq	r0, [r4, #20]	; fField20
         59954:	05a47014 	streq	r7, [r4, #20]!	; fField20
         59958:	05840014 	streq	r0, [r4, #20]	; fField20
         5995c:	e28dd004 	add	sp, sp, #4	; 0x4
         59960:	ea000002 	b	59970 <PCirrusBatteryDriver::ReturnStatus(unsigned long, PowerPlantStatus *, unsigned char)+0x1d8>
         59964:	0c100f68 	ldceq	15, cr0, [r0], -#416
         59968:	e3a06076 	mov	r6, #118	; 0x76
         5996c:	e2466b37 	sub	r6, r6, #56320	; 0xdc00
         59970:	e1a00005 	mov	r0, r5
         59974:	eb6a536a 	bl	1aee724 <PCirrusBatteryDriver::$EnableBattAdaptInterrupts(void)>
         59978:	e1a00006 	mov	r0, r6
         5997c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__20PCirrusBatteryDriverSFv
 * Address: 00385e94
 */
void PCirrusBatteryDriver::ClassInfo() {
    /*
        385e94:	e24f0044 	sub	r0, pc, #68	; 0x44
        385e98:	e1a0f00e 	mov	pc, lr
        385e9c:	e3a00000 	mov	r0, #0	; 0x0
        385ea0:	e1a0f00e 	mov	pc, lr
        385ea4:	50436972 	subpl	r6, r3, r2, ror r9
        385ea8:	72757342 	rsbvcs	r7, r5, #134217729	; 0x8000001
        385eac:	61747465 	cmnvs	r4, r5, ror #8
        385eb0:	72794472 	rsbvcs	r4, r9, #1912602624	; 0x72000000
        385eb4:	69766572 	ldmvsdb	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        385eb8:	00504261 	subeqs	r4, r0, r1, ror #4
        385ebc:	74746572 	ldrvcbt	r6, [r4], -#1394
        385ec0:	79447269 	stmvcdb	r4, {r0, r3, r5, r6, r9, ip, sp, lr}^
        385ec4:	76657200 	strvcbt	r7, [r5], -r0, lsl #4	; fField4
        385ed0:	eaffffef 	b	385e94 <ClassInfo__20PCirrusBatteryDriverSFv>
        385ed4:	ea5d9e00 	b	1aed6dc <PCirrusBatteryDriver::$New(void)>
        385ed8:	ea5d9e00 	b	1aed6e0 <PCirrusBatteryDriver::$Delete(void)>
        385edc:	ea5d9e00 	b	1aed6e4 <PCirrusBatteryDriver::$Init(void)>
        385ee0:	ea5d9e00 	b	1aed6e8 <PCirrusBatteryDriver::$WakeUp(void)>
        385ee4:	ea5d9e00 	b	1aed6ec <PCirrusBatteryDriver::$ShutDown(void)>
        385ee8:	ea5d9e00 	b	1aed6f0 <PCirrusBatteryDriver::$Count(void)>
        385eec:	eaf34e25 	b	59788 <PCirrusBatteryDriver::Status(unsigned long, PowerPlantStatus *)>
        385ef0:	eaf34e26 	b	59790 <PCirrusBatteryDriver::RawStatus(unsigned long, PowerPlantStatus *)>
        385ef4:	ea5da207 	b	1aee718 <PCirrusBatteryDriver::$StartSleepCharge(void)>
        385ef8:	ea5d9dfe 	b	1aed6f8 <PCirrusBatteryDriver::$SetType(unsigned long, unsigned long)>
        385efc:	ea5da21b 	b	1aee770 <PCirrusBatteryDriver::$ReadADCVoltage(unsigned long)>
        385f00:	ea5da200 	b	1aee708 <PCirrusBatteryDriver::$ConvertVoltage(unsigned long, unsigned long)>
        385f04:	e590000c 	ldr	r0, [r0, #12]	; fField12
        385f08:	e1a0100c 	mov	r1, ip
        385f0c:	e24dd004 	sub	sp, sp, #4	; 0x4
        385f10:	e1a0200d 	mov	r2, sp
        385f14:	ef00001b 	swi	0x0000001b
        385f18:	e1100000 	tst	r0, r0
        385f1c:	1a000002 	bne	385f2c <ClassInfo__20PCirrusBatteryDriverSFv+0x98>
        385f20:	e59d0000 	ldr	r0, [sp]
        385f24:	e28dd010 	add	sp, sp, #16	; 0x10
        385f28:	e1a0f00e 	mov	pc, lr
        385f2c:	e3a01000 	mov	r1, #0	; 0x0
        385f30:	e3a02000 	mov	r2, #0	; 0x0
        385f34:	e1a0000f 	mov	r0, pc
        385f38:	ea617497 	b	1be319c <$Throw>
        385f3c:	6576742e 	ldrvsb	r7, [r6, -#1070]!
        385f40:	65782e6d 	ldrvsb	r2, [r8, -#3693]!
        385f44:	6f6e6361 	swivs	0x006e6361
        385f48:	6c6c0000 	stcvsl	0, cr0, [ip]
        385f4c:	e1a0000f 	mov	r0, pc
        385f50:	e1a0f00e 	mov	pc, lr
        385f54:	54436c61 	strplb	r6, [r3], -#3169
        385f58:	7373496e 	cmnvc	r3, #1802240	; 0x1b8000
        385f5c:	666f5265 	strvsbt	r5, [pc], -r5, ror #4	; fField4
        385f60:	67697374 	undefined
        385f64:	72790000 	rsbvcs	r0, r9, #0	; 0x0
    */
}

