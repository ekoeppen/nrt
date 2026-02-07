#include "DDKIncludes/OS600/NewtonGestalt.h"

/**
 * Symbol: TUGestalt::__ct(void)
 * Address: 00131780
 */
TUGestalt::TUGestalt() {
    /*
        131780:	e1a0c00d 	mov	ip, sp
        131784:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        131788:	e24cb004 	sub	fp, ip, #4	; 0x4
        13178c:	e1b04000 	movs	r4, r0
        131790:	1a000003 	bne	1317a4 <TUGestalt::__ct(void)+0x24>
        131794:	e3a00008 	mov	r0, #8	; 0x8
        131798:	eb6a73e6 	bl	1bce738 <$__nw(unsigned int)>
        13179c:	e1b04000 	movs	r4, r0
        1317a0:	0a000007 	beq	1317c4 <TUGestalt::__ct(void)+0x44>
        1317a4:	e3a00000 	mov	r0, #0	; 0x0
        1317a8:	e5c40004 	strb	r0, [r4, #4]	; fGestaltPort
        1317ac:	e5840000 	str	r0, [r4]
        1317b0:	e3a00002 	mov	r0, #2	; 0x2
        1317b4:	eb09f26c 	bl	3ae16c <GetPortSWI>
        1317b8:	e1a01000 	mov	r1, r0
        1317bc:	e1a00004 	mov	r0, r4
        1317c0:	eb6a7c20 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        1317c4:	e1a00004 	mov	r0, r4
        1317c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUGestalt::Gestalt(unsigned long, void *, unsigned long)
 * Address: 001317cc
 */
NewtonErr			TUGestalt::Gestalt(GestaltSelector selector, void* paramBlock, ULong* paramSize) {
    /*
        1317cc:	e1a0c00d 	mov	ip, sp
        1317d0:	e92dd80f 	stmdb	sp!, {r0, r1, r2, r3, fp, ip, lr, pc}
        1317d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1317d8:	e24b3010 	sub	r3, fp, #16	; 0x10
        1317dc:	e24b201c 	sub	r2, fp, #28	; 0x1c
        1317e0:	e8920007 	ldmia	r2, {r0, r1, r2}
        1317e4:	eb6b2da3 	bl	1bfce78 <TUGestalt::$Gestalt(unsigned long, void *, unsigned long *)>
        1317e8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TUGestalt::Gestalt(unsigned long, void *, unsigned long *)
 * Address: 001317ec
 */
NewtonErr			TUGestalt::Gestalt(GestaltSelector selector, void* paramBlock, ULong* paramSize) {
    /*
        1317ec:	e1a0c00d 	mov	ip, sp
        1317f0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1317f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1317f8:	e1a07000 	mov	r7, r0
        1317fc:	e1a06001 	mov	r6, r1
        131800:	e1a05002 	mov	r5, r2
        131804:	e1a04003 	mov	r4, r3
        131808:	e24dd024 	sub	sp, sp, #36	; 0x24
        13180c:	e28d0014 	add	r0, sp, #20	; 0x14
        131810:	eb6a6f9c 	bl	1bcd688 <TUNameServer::$__ct(void)>
        131814:	e28f9f23 	add	r9, pc, #140	; 0x8c
        131818:	e3a00000 	mov	r0, #0	; 0x0
        13181c:	e58d0004 	str	r0, [sp, #4]	; fGestaltPort
        131820:	e3a08000 	mov	r8, #0	; 0x0
        131824:	e1a02006 	mov	r2, r6
        131828:	e58d0000 	str	r0, [sp]
        13182c:	e28d0008 	add	r0, sp, #8	; 0x8
        131830:	e28f1f1e 	add	r1, pc, #120	; 0x78
        131834:	eb6a1096 	bl	1bb5a94 <$sprintf>
        131838:	e1a0300d 	mov	r3, sp
        13183c:	e92d0008 	stmdb	sp!, {r3}
        131840:	e28d3008 	add	r3, sp, #8	; 0x8
        131844:	e1a02009 	mov	r2, r9
        131848:	e28d100c 	add	r1, sp, #12	; 0xc
        13184c:	e28d0018 	add	r0, sp, #24	; 0x18
        131850:	eb6a94c1 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
        131854:	e28dd004 	add	sp, sp, #4	; 0x4
        131858:	e3a09000 	mov	r9, #0	; 0x0
        13185c:	e59d0004 	ldr	r0, [sp, #4]	; fGestaltPort
        131860:	e3300000 	teq	r0, #0	; 0x0
        131864:	0a00002d 	beq	131920 <TUGestalt::Gestalt(unsigned long, void *, unsigned long *)+0x134>
        131868:	e5941000 	ldr	r1, [r4]
        13186c:	e59d0000 	ldr	r0, [sp]
        131870:	e1510000 	cmp	r1, r0
        131874:	85840000 	strhi	r0, [r4]
        131878:	e52d906c 	str	r9, [sp, -#108]!
        13187c:	e28d0008 	add	r0, sp, #8	; 0x8
        131880:	eb6a043b 	bl	1bb2974 <$setjmp>
        131884:	e3300000 	teq	r0, #0	; 0x0
        131888:	1a000009 	bne	1318b4 <TUGestalt::Gestalt(unsigned long, void *, unsigned long *)+0xc8>
        13188c:	e1a0000d 	mov	r0, sp
        131890:	eb6ab9f9 	bl	1be007c <$AddExceptionHandler>
        131894:	e1a01005 	mov	r1, r5
        131898:	e5942000 	ldr	r2, [r4]
        13189c:	e59d0070 	ldr	r0, [sp, #112]
        1318a0:	eb6ab5ab 	bl	1bdef54 <$BlockMove>
        1318a4:	ea000014 	b	1318fc <TUGestalt::Gestalt(unsigned long, void *, unsigned long *)+0x110>
        1318a8:	47534c54 	undefined
        1318ac:	00000000 	andeq	r0, r0, r0
        1318b0:	256c7800 	strcsb	r7, [ip, -#2048]!
        1318b4:	e59d0060 	ldr	r0, [sp, #96]
        1318b8:	e59f102c 	ldr	r1, [pc, #2c]	; 1318ec <TUGestalt::Gestalt(unsigned long, void *, unsigned long *)+0x100>
        1318bc:	e5911000 	ldr	r1, [r1]
        1318c0:	eb6ac633 	bl	1be3194 <$Subexception>
        1318c4:	e3300000 	teq	r0, #0	; 0x0
        1318c8:	1a000005 	bne	1318e4 <TUGestalt::Gestalt(unsigned long, void *, unsigned long *)+0xf8>
        1318cc:	e59d0060 	ldr	r0, [sp, #96]
        1318d0:	e59f1018 	ldr	r1, [pc, #18]	; 1318f0 <TUGestalt::Gestalt(unsigned long, void *, unsigned long *)+0x104>
        1318d4:	e5911000 	ldr	r1, [r1]
        1318d8:	eb6ac62d 	bl	1be3194 <$Subexception>
        1318dc:	e3300000 	teq	r0, #0	; 0x0
        1318e0:	0a000003 	beq	1318f4 <TUGestalt::Gestalt(unsigned long, void *, unsigned long *)+0x108>
        1318e4:	e59d8064 	ldr	r8, [sp, #100]
        1318e8:	ea000003 	b	1318fc <TUGestalt::Gestalt(unsigned long, void *, unsigned long *)+0x110>
        1318ec:	003712b4 	ldreqh	r1, [r7], -r4
        1318f0:	003712b8 	ldreqh	r1, [r7], -r8
        1318f4:	e1a0000d 	mov	r0, sp
        1318f8:	eb6ac215 	bl	1be2154 <$NextHandler>
        1318fc:	e1a0000d 	mov	r0, sp
        131900:	eb6abdec 	bl	1be10b8 <$ExitHandler>
        131904:	e5bd006c 	ldr	r0, [sp, #108]!
        131908:	e5840000 	str	r0, [r4]
        13190c:	e28d0014 	add	r0, sp, #20	; 0x14
        131910:	e3a01000 	mov	r1, #0	; 0x0
        131914:	eb6a737a 	bl	1bce704 <TUNameServer::$__dt(void)>
        131918:	e1a00008 	mov	r0, r8
        13191c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        131920:	e24dd008 	sub	sp, sp, #8	; 0x8
        131924:	e1a0000d 	mov	r0, sp
        131928:	eb678408 	bl	1b12950 <TGestaltRequest::$__ct(void)>
        13192c:	e1a00005 	mov	r0, r5
        131930:	e58d6004 	str	r6, [sp, #4]	; fGestaltPort
        131934:	e24dd004 	sub	sp, sp, #4	; 0x4
        131938:	e3a02000 	mov	r2, #0	; 0x0
        13193c:	e3a0c000 	mov	ip, #0	; 0x0
        131940:	e3a03000 	mov	r3, #0	; 0x0
        131944:	e5941000 	ldr	r1, [r4]
        131948:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        13194c:	e1a03009 	mov	r3, r9
        131950:	e1a0100c 	mov	r1, ip
        131954:	e3a00008 	mov	r0, #8	; 0x8
        131958:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        13195c:	e28d3024 	add	r3, sp, #36	; 0x24
        131960:	e92d0008 	stmdb	sp!, {r3}
        131964:	e28d3024 	add	r3, sp, #36	; 0x24
        131968:	e1a00007 	mov	r0, r7
        13196c:	e3a02002 	mov	r2, #2	; 0x2
        131970:	e3a01001 	mov	r1, #1	; 0x1
        131974:	eb6aa4f4 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        131978:	e28dd024 	add	sp, sp, #36	; 0x24
        13197c:	e1a04000 	mov	r4, r0
        131980:	e28d0020 	add	r0, sp, #32	; 0x20
        131984:	e3a01000 	mov	r1, #0	; 0x0
        131988:	eb6a735d 	bl	1bce704 <TUNameServer::$__dt(void)>
        13198c:	e1a00004 	mov	r0, r4
        131990:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TUGestalt::RegisterGestalt(unsigned long, void *, unsigned long)
 * Address: 00131994
 */
NewtonErr			TUGestalt::RegisterGestalt(GestaltSelector selector, void* paramBlock, ULong paramSize) {
    /*
        131994:	e1a0c00d 	mov	ip, sp
        131998:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        13199c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1319a0:	e1a04001 	mov	r4, r1
        1319a4:	e1a06002 	mov	r6, r2
        1319a8:	e1a05003 	mov	r5, r3
        1319ac:	e24dd024 	sub	sp, sp, #36	; 0x24
        1319b0:	e28d0014 	add	r0, sp, #20	; 0x14
        1319b4:	eb6a6f33 	bl	1bcd688 <TUNameServer::$__ct(void)>
        1319b8:	e28f7f1a 	add	r7, pc, #104	; 0x68
        1319bc:	e3a00000 	mov	r0, #0	; 0x0
        1319c0:	e58d0004 	str	r0, [sp, #4]	; fGestaltPort
        1319c4:	e1a02004 	mov	r2, r4
        1319c8:	e58d0000 	str	r0, [sp]
        1319cc:	e28d0008 	add	r0, sp, #8	; 0x8
        1319d0:	e28f1f16 	add	r1, pc, #88	; 0x58
        1319d4:	eb6a102e 	bl	1bb5a94 <$sprintf>
        1319d8:	e1a0300d 	mov	r3, sp
        1319dc:	e92d0008 	stmdb	sp!, {r3}
        1319e0:	e28d3008 	add	r3, sp, #8	; 0x8
        1319e4:	e1a02007 	mov	r2, r7
        1319e8:	e28d100c 	add	r1, sp, #12	; 0xc
        1319ec:	e28d0018 	add	r0, sp, #24	; 0x18
        1319f0:	eb6a9459 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
        1319f4:	e28dd004 	add	sp, sp, #4	; 0x4
        1319f8:	e59d0004 	ldr	r0, [sp, #4]	; fGestaltPort
        1319fc:	e3300000 	teq	r0, #0	; 0x0
        131a00:	1a000005 	bne	131a1c <TUGestalt::RegisterGestalt(unsigned long, void *, unsigned long)+0x88>
        131a04:	e294c4ff 	adds	ip, r4, #-16777216	; 0xff000000
        131a08:	235c0001 	cmpcs	ip, #1	; 0x1
        131a0c:	9a000008 	bls	131a34 <TUGestalt::RegisterGestalt(unsigned long, void *, unsigned long)+0xa0>
        131a10:	e294c4fe 	adds	ip, r4, #-33554432	; 0xfe000000
        131a14:	235c0001 	cmpcs	ip, #1	; 0x1
        131a18:	2a000005 	bcs	131a34 <TUGestalt::RegisterGestalt(unsigned long, void *, unsigned long)+0xa0>
        131a1c:	e3a040ac 	mov	r4, #172	; 0xac
        131a20:	e2444b0a 	sub	r4, r4, #10240	; 0x2800
        131a24:	ea00000b 	b	131a58 <TUGestalt::RegisterGestalt(unsigned long, void *, unsigned long)+0xc4>
        131a28:	47534c54 	undefined
        131a2c:	00000000 	andeq	r0, r0, r0
        131a30:	256c7800 	strcsb	r7, [ip, -#2048]!
        131a34:	e1a03005 	mov	r3, r5
        131a38:	e92d0008 	stmdb	sp!, {r3}
        131a3c:	e1a03006 	mov	r3, r6
        131a40:	e1a02007 	mov	r2, r7
        131a44:	e28d100c 	add	r1, sp, #12	; 0xc
        131a48:	e28d0018 	add	r0, sp, #24	; 0x18
        131a4c:	eb6a9c87 	bl	1bd8c70 <TUNameServer::$RegisterName(char *, char *, unsigned long, unsigned long)>
        131a50:	e28dd004 	add	sp, sp, #4	; 0x4
        131a54:	e1a04000 	mov	r4, r0
        131a58:	e28d0014 	add	r0, sp, #20	; 0x14
        131a5c:	e3a01000 	mov	r1, #0	; 0x0
        131a60:	eb6a7327 	bl	1bce704 <TUNameServer::$__dt(void)>
        131a64:	e1a00004 	mov	r0, r4
        131a68:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TUGestalt::ReplaceGestalt(unsigned long, void *, unsigned long)
 * Address: 00131a6c
 */
NewtonErr			TUGestalt::ReplaceGestalt(GestaltSelector selector, void* paramBlock, ULong paramSize) {
    /*
        131a6c:	e1a0c00d 	mov	ip, sp
        131a70:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        131a74:	e24cb004 	sub	fp, ip, #4	; 0x4
        131a78:	e1a04001 	mov	r4, r1
        131a7c:	e1a06002 	mov	r6, r2
        131a80:	e1a05003 	mov	r5, r3
        131a84:	e24dd024 	sub	sp, sp, #36	; 0x24
        131a88:	e28d0014 	add	r0, sp, #20	; 0x14
        131a8c:	eb6a6efd 	bl	1bcd688 <TUNameServer::$__ct(void)>
        131a90:	e28f7f16 	add	r7, pc, #88	; 0x58
        131a94:	e3a00000 	mov	r0, #0	; 0x0
        131a98:	e58d0004 	str	r0, [sp, #4]	; fGestaltPort
        131a9c:	e1a02004 	mov	r2, r4
        131aa0:	e58d0000 	str	r0, [sp]
        131aa4:	e28d0008 	add	r0, sp, #8	; 0x8
        131aa8:	e28f1f12 	add	r1, pc, #72	; 0x48
        131aac:	eb6a0ff8 	bl	1bb5a94 <$sprintf>
        131ab0:	e1a0300d 	mov	r3, sp
        131ab4:	e92d0008 	stmdb	sp!, {r3}
        131ab8:	e28d3008 	add	r3, sp, #8	; 0x8
        131abc:	e1a02007 	mov	r2, r7
        131ac0:	e28d100c 	add	r1, sp, #12	; 0xc
        131ac4:	e28d0018 	add	r0, sp, #24	; 0x18
        131ac8:	eb6a9423 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
        131acc:	e28dd004 	add	sp, sp, #4	; 0x4
        131ad0:	e59d0004 	ldr	r0, [sp, #4]	; fGestaltPort
        131ad4:	e3300000 	teq	r0, #0	; 0x0
        131ad8:	0a000007 	beq	131afc <TUGestalt::ReplaceGestalt(unsigned long, void *, unsigned long)+0x90>
        131adc:	e1a02007 	mov	r2, r7
        131ae0:	e28d1008 	add	r1, sp, #8	; 0x8
        131ae4:	e28d0014 	add	r0, sp, #20	; 0x14
        131ae8:	eb6ab0f0 	bl	1bddeb0 <TUNameServer::$UnRegisterName(char *, char *)>
        131aec:	ea00000a 	b	131b1c <TUGestalt::ReplaceGestalt(unsigned long, void *, unsigned long)+0xb0>
        131af0:	47534c54 	undefined
        131af4:	00000000 	andeq	r0, r0, r0
        131af8:	256c7800 	strcsb	r7, [ip, -#2048]!
        131afc:	e294c4ff 	adds	ip, r4, #-16777216	; 0xff000000
        131b00:	235c0001 	cmpcs	ip, #1	; 0x1
        131b04:	9a000004 	bls	131b1c <TUGestalt::ReplaceGestalt(unsigned long, void *, unsigned long)+0xb0>
        131b08:	e294c4fe 	adds	ip, r4, #-33554432	; 0xfe000000
        131b0c:	235c0001 	cmpcs	ip, #1	; 0x1
        131b10:	33a040ea 	movcc	r4, #234	; 0xea
        131b14:	32444b0a 	subcc	r4, r4, #10240	; 0x2800
        131b18:	3a000008 	bcc	131b40 <TUGestalt::ReplaceGestalt(unsigned long, void *, unsigned long)+0xd4>
        131b1c:	e1a03005 	mov	r3, r5
        131b20:	e92d0008 	stmdb	sp!, {r3}
        131b24:	e1a03006 	mov	r3, r6
        131b28:	e1a02007 	mov	r2, r7
        131b2c:	e28d100c 	add	r1, sp, #12	; 0xc
        131b30:	e28d0018 	add	r0, sp, #24	; 0x18
        131b34:	eb6a9c4d 	bl	1bd8c70 <TUNameServer::$RegisterName(char *, char *, unsigned long, unsigned long)>
        131b38:	e28dd004 	add	sp, sp, #4	; 0x4
        131b3c:	e1a04000 	mov	r4, r0
        131b40:	e28d0014 	add	r0, sp, #20	; 0x14
        131b44:	e3a01000 	mov	r1, #0	; 0x0
        131b48:	eb6a72ed 	bl	1bce704 <TUNameServer::$__dt(void)>
        131b4c:	e1a00004 	mov	r0, r4
        131b50:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

