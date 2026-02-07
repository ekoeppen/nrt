#include "DDKIncludes/OS600/NameServer.h"

/**
 * Symbol: TUNameServer::__ct(void)
 * Address: 001304c0
 */
TUNameServer::TUNameServer() {
    /*
        1304c0:	e1a0c00d 	mov	ip, sp
        1304c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1304c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1304cc:	e1b04000 	movs	r4, r0
        1304d0:	1a000003 	bne	1304e4 <TUNameServer::__ct(void)+0x24>
        1304d4:	e3a00010 	mov	r0, #16	; 0x10
        1304d8:	eb6a7896 	bl	1bce738 <$__nw(unsigned int)>
        1304dc:	e1b04000 	movs	r4, r0
        1304e0:	0a000015 	beq	13053c <TUNameServer::__ct(void)+0x7c>
        1304e4:	e3a05000 	mov	r5, #0	; 0x0
        1304e8:	e5c45004 	strb	r5, [r4, #4]	; fNameServerPort
        1304ec:	e3a00002 	mov	r0, #2	; 0x2
        1304f0:	e5845000 	str	r5, [r4]
        1304f4:	eb09f71c 	bl	3ae16c <GetPortSWI>
        1304f8:	e1a01000 	mov	r1, r0
        1304fc:	e1a00004 	mov	r0, r4
        130500:	eb6a80d0 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        130504:	e3a00008 	mov	r0, #8	; 0x8
        130508:	eb6a788a 	bl	1bce738 <$__nw(unsigned int)>
        13050c:	e3500000 	cmp	r0, #0	; 0x0
        130510:	15c05004 	strneb	r5, [r0, #4]	; fNameServerPort
        130514:	15805000 	strne	r5, [r0]
        130518:	e5840008 	str	r0, [r4, #8]	; fField8
        13051c:	1b6a9156 	blne	1bd4a7c <TUSharedMem::$Init(void)>
        130520:	e3a00008 	mov	r0, #8	; 0x8
        130524:	eb6a7883 	bl	1bce738 <$__nw(unsigned int)>
        130528:	e3500000 	cmp	r0, #0	; 0x0
        13052c:	15c05004 	strneb	r5, [r0, #4]	; fNameServerPort
        130530:	15805000 	strne	r5, [r0]
        130534:	e584000c 	str	r0, [r4, #12]	; fMsgName
        130538:	1b6a914f 	blne	1bd4a7c <TUSharedMem::$Init(void)>
        13053c:	e1a00004 	mov	r0, r4
        130540:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUNameServer::__dt(void)
 * Address: 00130544
 */
TUNameServer::~TUNameServer() {
    /*
        130544:	e1a0c00d 	mov	ip, sp
        130548:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        13054c:	e24cb004 	sub	fp, ip, #4	; 0x4
        130550:	e1a04000 	mov	r4, r0
        130554:	e1a05001 	mov	r5, r1
        130558:	e5906008 	ldr	r6, [r0, #8]	; fField8
        13055c:	e3360000 	teq	r6, #0	; 0x0
        130560:	0a000004 	beq	130578 <TUNameServer::__dt(void)+0x34>
        130564:	e1a00006 	mov	r0, r6
        130568:	e3a01000 	mov	r1, #0	; 0x0
        13056c:	eb6a786c 	bl	1bce724 <TUObject::$__dt(void)>
        130570:	e1a00006 	mov	r0, r6
        130574:	eb6a7459 	bl	1bcd6e0 <$__dl(void *)>
        130578:	e594600c 	ldr	r6, [r4, #12]	; fMsgName
        13057c:	e3360000 	teq	r6, #0	; 0x0
        130580:	0a000004 	beq	130598 <TUNameServer::__dt(void)+0x54>
        130584:	e1a00006 	mov	r0, r6
        130588:	e3a01000 	mov	r1, #0	; 0x0
        13058c:	eb6a7864 	bl	1bce724 <TUObject::$__dt(void)>
        130590:	e1a00006 	mov	r0, r6
        130594:	eb6a7451 	bl	1bcd6e0 <$__dl(void *)>
        130598:	e1a00004 	mov	r0, r4
        13059c:	e3a01000 	mov	r1, #0	; 0x0
        1305a0:	eb6a785f 	bl	1bce724 <TUObject::$__dt(void)>
        1305a4:	e3150001 	tst	r5, #1	; 0x1
        1305a8:	11a00004 	movne	r0, r4
        1305ac:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        1305b0:	1a6a744a 	bne	1bcd6e0 <$__dl(void *)>
        1305b4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TUNameServer::RegisterName(char *, char *, unsigned long, unsigned long)
 * Address: 001305b8
 */
NewtonErr		TUNameServer::RegisterName(char* name, char* type, ULong thing, ULong spec) {
    /*
        1305b8:	e1a0c00d 	mov	ip, sp
        1305bc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1305c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1305c4:	e1a04000 	mov	r4, r0
        1305c8:	e1a06001 	mov	r6, r1
        1305cc:	e1a05002 	mov	r5, r2
        1305d0:	e1a07003 	mov	r7, r3
        1305d4:	e59b8004 	ldr	r8, [fp, #4]	; fNameServerPort
        1305d8:	e24dd028 	sub	sp, sp, #40	; 0x28
        1305dc:	e28d000c 	add	r0, sp, #12	; 0xc
        1305e0:	eb00027e 	bl	130fe0 <TNameRequest::__ct(void)>
        1305e4:	e1a0000d 	mov	r0, sp
        1305e8:	eb6788d9 	bl	1b12954 <TNameServerReply::$__ct(void)>
        1305ec:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1305f0:	e3300000 	teq	r0, #0	; 0x0
        1305f4:	1594000c 	ldrne	r0, [r4, #12]	; fMsgName
        1305f8:	13300000 	teqne	r0, #0	; 0x0
        1305fc:	03a000e9 	moveq	r0, #233	; 0xe9
        130600:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        130604:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        130608:	e1a00006 	mov	r0, r6
        13060c:	eb6a1527 	bl	1bb5ab0 <$strlen>
        130610:	e2802001 	add	r2, r0, #1	; 0x1
        130614:	e1a01006 	mov	r1, r6
        130618:	e3a03001 	mov	r3, #1	; 0x1
        13061c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130620:	eb6aa9d1 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        130624:	e1a00005 	mov	r0, r5
        130628:	eb6a1520 	bl	1bb5ab0 <$strlen>
        13062c:	e2802001 	add	r2, r0, #1	; 0x1
        130630:	e1a01005 	mov	r1, r5
        130634:	e3a03001 	mov	r3, #1	; 0x1
        130638:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        13063c:	eb6aa9ca 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        130640:	e3a00001 	mov	r0, #1	; 0x1
        130644:	e58d000c 	str	r0, [sp, #12]	; fMsgName
        130648:	e58d7010 	str	r7, [sp, #16]	; fMsgType
        13064c:	e58d8014 	str	r8, [sp, #20]
        130650:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130654:	e5900000 	ldr	r0, [r0]
        130658:	e58d0020 	str	r0, [sp, #32]
        13065c:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        130660:	e5900000 	ldr	r0, [r0]
        130664:	e58d0024 	str	r0, [sp, #36]
        130668:	e24dd004 	sub	sp, sp, #4	; 0x4
        13066c:	e28d0004 	add	r0, sp, #4	; 0x4
        130670:	e3a0100c 	mov	r1, #12	; 0xc
        130674:	e3a02000 	mov	r2, #0	; 0x0
        130678:	e3a0c000 	mov	ip, #0	; 0x0
        13067c:	e3a0e000 	mov	lr, #0	; 0x0
        130680:	e3a03000 	mov	r3, #0	; 0x0
        130684:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        130688:	e1a0300e 	mov	r3, lr
        13068c:	e1a0100c 	mov	r1, ip
        130690:	e3a0001c 	mov	r0, #28	; 0x1c
        130694:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        130698:	e28d3030 	add	r3, sp, #48	; 0x30
        13069c:	e92d0008 	stmdb	sp!, {r3}
        1306a0:	e28d3024 	add	r3, sp, #36	; 0x24
        1306a4:	e1a00004 	mov	r0, r4
        1306a8:	e3a02002 	mov	r2, #2	; 0x2
        1306ac:	e3a01001 	mov	r1, #1	; 0x1
        1306b0:	eb6aa9a5 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        1306b4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TUNameServer::UnRegisterName(char *, char *)
 * Address: 001306b8
 */
NewtonErr		TUNameServer::UnRegisterName(char* name, char* type) {
    /*
        1306b8:	e1a0c00d 	mov	ip, sp
        1306bc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1306c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1306c4:	e1a04000 	mov	r4, r0
        1306c8:	e1a05001 	mov	r5, r1
        1306cc:	e1a06002 	mov	r6, r2
        1306d0:	e24dd028 	sub	sp, sp, #40	; 0x28
        1306d4:	e28d000c 	add	r0, sp, #12	; 0xc
        1306d8:	eb000240 	bl	130fe0 <TNameRequest::__ct(void)>
        1306dc:	e1a0000d 	mov	r0, sp
        1306e0:	eb67889b 	bl	1b12954 <TNameServerReply::$__ct(void)>
        1306e4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1306e8:	e3300000 	teq	r0, #0	; 0x0
        1306ec:	1594000c 	ldrne	r0, [r4, #12]	; fMsgName
        1306f0:	13300000 	teqne	r0, #0	; 0x0
        1306f4:	03a000e9 	moveq	r0, #233	; 0xe9
        1306f8:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        1306fc:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        130700:	e1a00005 	mov	r0, r5
        130704:	eb6a14e9 	bl	1bb5ab0 <$strlen>
        130708:	e2802001 	add	r2, r0, #1	; 0x1
        13070c:	e1a01005 	mov	r1, r5
        130710:	e3a03001 	mov	r3, #1	; 0x1
        130714:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130718:	eb6aa993 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        13071c:	e1a00006 	mov	r0, r6
        130720:	eb6a14e2 	bl	1bb5ab0 <$strlen>
        130724:	e2802001 	add	r2, r0, #1	; 0x1
        130728:	e1a01006 	mov	r1, r6
        13072c:	e3a03001 	mov	r3, #1	; 0x1
        130730:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        130734:	eb6aa98c 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        130738:	e3a00002 	mov	r0, #2	; 0x2
        13073c:	e58d000c 	str	r0, [sp, #12]	; fMsgName
        130740:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130744:	e5900000 	ldr	r0, [r0]
        130748:	e58d0020 	str	r0, [sp, #32]
        13074c:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        130750:	e5900000 	ldr	r0, [r0]
        130754:	e58d0024 	str	r0, [sp, #36]
        130758:	e24dd004 	sub	sp, sp, #4	; 0x4
        13075c:	e28d0004 	add	r0, sp, #4	; 0x4
        130760:	e3a0100c 	mov	r1, #12	; 0xc
        130764:	e3a02000 	mov	r2, #0	; 0x0
        130768:	e3a0c000 	mov	ip, #0	; 0x0
        13076c:	e3a0e000 	mov	lr, #0	; 0x0
        130770:	e3a03000 	mov	r3, #0	; 0x0
        130774:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        130778:	e1a0300e 	mov	r3, lr
        13077c:	e1a0100c 	mov	r1, ip
        130780:	e3a0001c 	mov	r0, #28	; 0x1c
        130784:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        130788:	e28d3030 	add	r3, sp, #48	; 0x30
        13078c:	e92d0008 	stmdb	sp!, {r3}
        130790:	e28d3024 	add	r3, sp, #36	; 0x24
        130794:	e1a00004 	mov	r0, r4
        130798:	e3a02002 	mov	r2, #2	; 0x2
        13079c:	e3a01001 	mov	r1, #1	; 0x1
        1307a0:	eb6aa969 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        1307a4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TUNameServer::WaitForRegister(char *, char *, unsigned long *, unsigned long *)
 * Address: 001307a8
 */
NewtonErr		TUNameServer::WaitForRegister(char* name, char* type, ULong* thing, ULong* spec) {
    /*
        1307a8:	e1a0c00d 	mov	ip, sp
        1307ac:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1307b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1307b4:	e1a04000 	mov	r4, r0
        1307b8:	e1a06001 	mov	r6, r1
        1307bc:	e1a05002 	mov	r5, r2
        1307c0:	e1a07003 	mov	r7, r3
        1307c4:	e59b8004 	ldr	r8, [fp, #4]	; fNameServerPort
        1307c8:	e24dd028 	sub	sp, sp, #40	; 0x28
        1307cc:	e28d000c 	add	r0, sp, #12	; 0xc
        1307d0:	eb000202 	bl	130fe0 <TNameRequest::__ct(void)>
        1307d4:	e1a0000d 	mov	r0, sp
        1307d8:	eb67885d 	bl	1b12954 <TNameServerReply::$__ct(void)>
        1307dc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1307e0:	e3300000 	teq	r0, #0	; 0x0
        1307e4:	1594000c 	ldrne	r0, [r4, #12]	; fMsgName
        1307e8:	13300000 	teqne	r0, #0	; 0x0
        1307ec:	03a000e9 	moveq	r0, #233	; 0xe9
        1307f0:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        1307f4:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1307f8:	e1a00006 	mov	r0, r6
        1307fc:	eb6a14ab 	bl	1bb5ab0 <$strlen>
        130800:	e2802001 	add	r2, r0, #1	; 0x1
        130804:	e1a01006 	mov	r1, r6
        130808:	e3a03001 	mov	r3, #1	; 0x1
        13080c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130810:	eb6aa955 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        130814:	e1a00005 	mov	r0, r5
        130818:	eb6a14a4 	bl	1bb5ab0 <$strlen>
        13081c:	e2802001 	add	r2, r0, #1	; 0x1
        130820:	e1a01005 	mov	r1, r5
        130824:	e3a03001 	mov	r3, #1	; 0x1
        130828:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        13082c:	eb6aa94e 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        130830:	e3a00003 	mov	r0, #3	; 0x3
        130834:	e58d000c 	str	r0, [sp, #12]	; fMsgName
        130838:	e5940008 	ldr	r0, [r4, #8]	; fField8
        13083c:	e5900000 	ldr	r0, [r0]
        130840:	e58d0020 	str	r0, [sp, #32]
        130844:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        130848:	e5900000 	ldr	r0, [r0]
        13084c:	e58d0024 	str	r0, [sp, #36]
        130850:	e24dd004 	sub	sp, sp, #4	; 0x4
        130854:	e28d0004 	add	r0, sp, #4	; 0x4
        130858:	e3a0100c 	mov	r1, #12	; 0xc
        13085c:	e3a02000 	mov	r2, #0	; 0x0
        130860:	e3a0c000 	mov	ip, #0	; 0x0
        130864:	e3a0e000 	mov	lr, #0	; 0x0
        130868:	e3a03000 	mov	r3, #0	; 0x0
        13086c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        130870:	e1a0300e 	mov	r3, lr
        130874:	e1a0100c 	mov	r1, ip
        130878:	e3a0001c 	mov	r0, #28	; 0x1c
        13087c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        130880:	e28d3030 	add	r3, sp, #48	; 0x30
        130884:	e92d0008 	stmdb	sp!, {r3}
        130888:	e28d3024 	add	r3, sp, #36	; 0x24
        13088c:	e1a00004 	mov	r0, r4
        130890:	e3a02002 	mov	r2, #2	; 0x2
        130894:	e3a01001 	mov	r1, #1	; 0x1
        130898:	eb6aa92b 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        13089c:	e28dd024 	add	sp, sp, #36	; 0x24
        1308a0:	e3300000 	teq	r0, #0	; 0x0
        1308a4:	1a000003 	bne	1308b8 <TUNameServer::WaitForRegister(char *, char *, unsigned long *, unsigned long *)+0x110>
        1308a8:	e59d1004 	ldr	r1, [sp, #4]	; fNameServerPort
        1308ac:	e5871000 	str	r1, [r7]
        1308b0:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1308b4:	e5881000 	str	r1, [r8]
        1308b8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TUNameServer::WaitForUnregister(char *, char *)
 * Address: 001308bc
 */
NewtonErr		TUNameServer::WaitForUnregister(char* name, char* type) {
    /*
        1308bc:	e1a0c00d 	mov	ip, sp
        1308c0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1308c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1308c8:	e1a04000 	mov	r4, r0
        1308cc:	e1a05001 	mov	r5, r1
        1308d0:	e1a06002 	mov	r6, r2
        1308d4:	e24dd028 	sub	sp, sp, #40	; 0x28
        1308d8:	e28d000c 	add	r0, sp, #12	; 0xc
        1308dc:	eb0001bf 	bl	130fe0 <TNameRequest::__ct(void)>
        1308e0:	e1a0000d 	mov	r0, sp
        1308e4:	eb67881a 	bl	1b12954 <TNameServerReply::$__ct(void)>
        1308e8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1308ec:	e3300000 	teq	r0, #0	; 0x0
        1308f0:	1594000c 	ldrne	r0, [r4, #12]	; fMsgName
        1308f4:	13300000 	teqne	r0, #0	; 0x0
        1308f8:	03a000e9 	moveq	r0, #233	; 0xe9
        1308fc:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        130900:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        130904:	e1a00005 	mov	r0, r5
        130908:	eb6a1468 	bl	1bb5ab0 <$strlen>
        13090c:	e2802001 	add	r2, r0, #1	; 0x1
        130910:	e1a01005 	mov	r1, r5
        130914:	e3a03001 	mov	r3, #1	; 0x1
        130918:	e5940008 	ldr	r0, [r4, #8]	; fField8
        13091c:	eb6aa912 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        130920:	e1a00006 	mov	r0, r6
        130924:	eb6a1461 	bl	1bb5ab0 <$strlen>
        130928:	e2802001 	add	r2, r0, #1	; 0x1
        13092c:	e1a01006 	mov	r1, r6
        130930:	e3a03001 	mov	r3, #1	; 0x1
        130934:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        130938:	eb6aa90b 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        13093c:	e3a00004 	mov	r0, #4	; 0x4
        130940:	e58d000c 	str	r0, [sp, #12]	; fMsgName
        130944:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130948:	e5900000 	ldr	r0, [r0]
        13094c:	e58d0020 	str	r0, [sp, #32]
        130950:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        130954:	e5900000 	ldr	r0, [r0]
        130958:	e58d0024 	str	r0, [sp, #36]
        13095c:	e24dd004 	sub	sp, sp, #4	; 0x4
        130960:	e28d0004 	add	r0, sp, #4	; 0x4
        130964:	e3a0100c 	mov	r1, #12	; 0xc
        130968:	e3a02000 	mov	r2, #0	; 0x0
        13096c:	e3a0c000 	mov	ip, #0	; 0x0
        130970:	e3a0e000 	mov	lr, #0	; 0x0
        130974:	e3a03000 	mov	r3, #0	; 0x0
        130978:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        13097c:	e1a0300e 	mov	r3, lr
        130980:	e1a0100c 	mov	r1, ip
        130984:	e3a0001c 	mov	r0, #28	; 0x1c
        130988:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        13098c:	e28d3030 	add	r3, sp, #48	; 0x30
        130990:	e92d0008 	stmdb	sp!, {r3}
        130994:	e28d3024 	add	r3, sp, #36	; 0x24
        130998:	e1a00004 	mov	r0, r4
        13099c:	e3a02002 	mov	r2, #2	; 0x2
        1309a0:	e3a01001 	mov	r1, #1	; 0x1
        1309a4:	eb6aa8e8 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        1309a8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TUNameServer::Lookup(char *, char *, unsigned long *, unsigned long *)
 * Address: 001309dc
 */
NewtonErr		TUNameServer::Lookup(char* name, char* type, ULong* thing, ULong* spec) {
    /*
        1309dc:	e1a0c00d 	mov	ip, sp
        1309e0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1309e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1309e8:	e1a04000 	mov	r4, r0
        1309ec:	e1a06001 	mov	r6, r1
        1309f0:	e1a05002 	mov	r5, r2
        1309f4:	e1a07003 	mov	r7, r3
        1309f8:	e59b8004 	ldr	r8, [fp, #4]	; fNameServerPort
        1309fc:	e24dd028 	sub	sp, sp, #40	; 0x28
        130a00:	e28d000c 	add	r0, sp, #12	; 0xc
        130a04:	eb000175 	bl	130fe0 <TNameRequest::__ct(void)>
        130a08:	e1a0000d 	mov	r0, sp
        130a0c:	eb6787d0 	bl	1b12954 <TNameServerReply::$__ct(void)>
        130a10:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130a14:	e3300000 	teq	r0, #0	; 0x0
        130a18:	1594000c 	ldrne	r0, [r4, #12]	; fMsgName
        130a1c:	13300000 	teqne	r0, #0	; 0x0
        130a20:	03a000e9 	moveq	r0, #233	; 0xe9
        130a24:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        130a28:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        130a2c:	e1a00006 	mov	r0, r6
        130a30:	eb6a141e 	bl	1bb5ab0 <$strlen>
        130a34:	e2802001 	add	r2, r0, #1	; 0x1
        130a38:	e1a01006 	mov	r1, r6
        130a3c:	e3a03001 	mov	r3, #1	; 0x1
        130a40:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130a44:	eb6aa8c8 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        130a48:	e1a00005 	mov	r0, r5
        130a4c:	eb6a1417 	bl	1bb5ab0 <$strlen>
        130a50:	e2802001 	add	r2, r0, #1	; 0x1
        130a54:	e1a01005 	mov	r1, r5
        130a58:	e3a03001 	mov	r3, #1	; 0x1
        130a5c:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        130a60:	eb6aa8c1 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        130a64:	e3a00005 	mov	r0, #5	; 0x5
        130a68:	e58d000c 	str	r0, [sp, #12]	; fMsgName
        130a6c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130a70:	e5900000 	ldr	r0, [r0]
        130a74:	e58d0020 	str	r0, [sp, #32]
        130a78:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        130a7c:	e5900000 	ldr	r0, [r0]
        130a80:	e58d0024 	str	r0, [sp, #36]
        130a84:	e24dd004 	sub	sp, sp, #4	; 0x4
        130a88:	e28d0004 	add	r0, sp, #4	; 0x4
        130a8c:	e3a0100c 	mov	r1, #12	; 0xc
        130a90:	e3a02000 	mov	r2, #0	; 0x0
        130a94:	e3a0c000 	mov	ip, #0	; 0x0
        130a98:	e3a0e000 	mov	lr, #0	; 0x0
        130a9c:	e3a03000 	mov	r3, #0	; 0x0
        130aa0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        130aa4:	e1a0300e 	mov	r3, lr
        130aa8:	e1a0100c 	mov	r1, ip
        130aac:	e3a0001c 	mov	r0, #28	; 0x1c
        130ab0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        130ab4:	e28d3030 	add	r3, sp, #48	; 0x30
        130ab8:	e92d0008 	stmdb	sp!, {r3}
        130abc:	e28d3024 	add	r3, sp, #36	; 0x24
        130ac0:	e1a00004 	mov	r0, r4
        130ac4:	e3a02002 	mov	r2, #2	; 0x2
        130ac8:	e3a01001 	mov	r1, #1	; 0x1
        130acc:	eb6aa89e 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        130ad0:	e28dd024 	add	sp, sp, #36	; 0x24
        130ad4:	e3300000 	teq	r0, #0	; 0x0
        130ad8:	1a000003 	bne	130aec <TUNameServer::Lookup(char *, char *, unsigned long *, unsigned long *)+0x110>
        130adc:	e59d1004 	ldr	r1, [sp, #4]	; fNameServerPort
        130ae0:	e5871000 	str	r1, [r7]
        130ae4:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        130ae8:	e5881000 	str	r1, [r8]
        130aec:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TUNameServer::ResourceClaim(char *, char *, unsigned long, unsigned long)
 * Address: 00130af0
 */
NewtonErr		TUNameServer::ResourceClaim(char* name, char* type, TObjectId ownerPortId, TObjectId applicationNameId) {
    /*
        130af0:	e1a0c00d 	mov	ip, sp
        130af4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        130af8:	e24cb004 	sub	fp, ip, #4	; 0x4
        130afc:	e1a04000 	mov	r4, r0
        130b00:	e1a06001 	mov	r6, r1
        130b04:	e1a05002 	mov	r5, r2
        130b08:	e1a07003 	mov	r7, r3
        130b0c:	e59b8004 	ldr	r8, [fp, #4]	; fNameServerPort
        130b10:	e24dd034 	sub	sp, sp, #52	; 0x34
        130b14:	e28d000c 	add	r0, sp, #12	; 0xc
        130b18:	eb6793e6 	bl	1b15ab8 <TResArbitrationRequest::$__ct(void)>
        130b1c:	e1a0000d 	mov	r0, sp
        130b20:	eb67878b 	bl	1b12954 <TNameServerReply::$__ct(void)>
        130b24:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130b28:	e3300000 	teq	r0, #0	; 0x0
        130b2c:	1594000c 	ldrne	r0, [r4, #12]	; fMsgName
        130b30:	13300000 	teqne	r0, #0	; 0x0
        130b34:	03a000e9 	moveq	r0, #233	; 0xe9
        130b38:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        130b3c:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        130b40:	e1a00006 	mov	r0, r6
        130b44:	eb6a13d9 	bl	1bb5ab0 <$strlen>
        130b48:	e2802001 	add	r2, r0, #1	; 0x1
        130b4c:	e1a01006 	mov	r1, r6
        130b50:	e3a03001 	mov	r3, #1	; 0x1
        130b54:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130b58:	eb6aa883 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        130b5c:	e1a00005 	mov	r0, r5
        130b60:	eb6a13d2 	bl	1bb5ab0 <$strlen>
        130b64:	e2802001 	add	r2, r0, #1	; 0x1
        130b68:	e1a01005 	mov	r1, r5
        130b6c:	e3a03001 	mov	r3, #1	; 0x1
        130b70:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        130b74:	eb6aa87c 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        130b78:	e3a00001 	mov	r0, #1	; 0x1
        130b7c:	e58d0028 	str	r0, [sp, #40]
        130b80:	e58d702c 	str	r7, [sp, #44]
        130b84:	e58d8030 	str	r8, [sp, #48]
        130b88:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130b8c:	e5900000 	ldr	r0, [r0]
        130b90:	e58d0020 	str	r0, [sp, #32]
        130b94:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        130b98:	e5900000 	ldr	r0, [r0]
        130b9c:	e58d0024 	str	r0, [sp, #36]
        130ba0:	e24dd004 	sub	sp, sp, #4	; 0x4
        130ba4:	e28d0004 	add	r0, sp, #4	; 0x4
        130ba8:	e3a0100c 	mov	r1, #12	; 0xc
        130bac:	e3a02000 	mov	r2, #0	; 0x0
        130bb0:	e3a0c000 	mov	ip, #0	; 0x0
        130bb4:	e3a0e000 	mov	lr, #0	; 0x0
        130bb8:	e3a03000 	mov	r3, #0	; 0x0
        130bbc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        130bc0:	e1a0300e 	mov	r3, lr
        130bc4:	e1a0100c 	mov	r1, ip
        130bc8:	e3a00028 	mov	r0, #40	; 0x28
        130bcc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        130bd0:	e28d3030 	add	r3, sp, #48	; 0x30
        130bd4:	e92d0008 	stmdb	sp!, {r3}
        130bd8:	e28d3024 	add	r3, sp, #36	; 0x24
        130bdc:	e1a00004 	mov	r0, r4
        130be0:	e3a02002 	mov	r2, #2	; 0x2
        130be4:	e3a01001 	mov	r1, #1	; 0x1
        130be8:	eb6aa857 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        130bec:	e28dd024 	add	sp, sp, #36	; 0x24
        130bf0:	e3300000 	teq	r0, #0	; 0x0
        130bf4:	059d000c 	ldreq	r0, [sp, #12]	; fMsgName
        130bf8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TUNameServer::ResourcePassiveClaim(char *, char *, unsigned long, unsigned long)
 * Address: 00130bfc
 */
NewtonErr		TUNameServer::ResourcePassiveClaim(char* name, char* type, TObjectId ownerPortId, TObjectId applicationNameId) {
    /*
        130bfc:	e1a0c00d 	mov	ip, sp
        130c00:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        130c04:	e24cb004 	sub	fp, ip, #4	; 0x4
        130c08:	e1a04000 	mov	r4, r0
        130c0c:	e1a06001 	mov	r6, r1
        130c10:	e1a05002 	mov	r5, r2
        130c14:	e1a07003 	mov	r7, r3
        130c18:	e59b8004 	ldr	r8, [fp, #4]	; fNameServerPort
        130c1c:	e24dd034 	sub	sp, sp, #52	; 0x34
        130c20:	e28d000c 	add	r0, sp, #12	; 0xc
        130c24:	eb6793a3 	bl	1b15ab8 <TResArbitrationRequest::$__ct(void)>
        130c28:	e1a0000d 	mov	r0, sp
        130c2c:	eb678748 	bl	1b12954 <TNameServerReply::$__ct(void)>
        130c30:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130c34:	e3300000 	teq	r0, #0	; 0x0
        130c38:	1594000c 	ldrne	r0, [r4, #12]	; fMsgName
        130c3c:	13300000 	teqne	r0, #0	; 0x0
        130c40:	03a000e9 	moveq	r0, #233	; 0xe9
        130c44:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        130c48:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        130c4c:	e1a00006 	mov	r0, r6
        130c50:	eb6a1396 	bl	1bb5ab0 <$strlen>
        130c54:	e2802001 	add	r2, r0, #1	; 0x1
        130c58:	e1a01006 	mov	r1, r6
        130c5c:	e3a03001 	mov	r3, #1	; 0x1
        130c60:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130c64:	eb6aa840 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        130c68:	e1a00005 	mov	r0, r5
        130c6c:	eb6a138f 	bl	1bb5ab0 <$strlen>
        130c70:	e2802001 	add	r2, r0, #1	; 0x1
        130c74:	e1a01005 	mov	r1, r5
        130c78:	e3a03001 	mov	r3, #1	; 0x1
        130c7c:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        130c80:	eb6aa839 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        130c84:	e3a00003 	mov	r0, #3	; 0x3
        130c88:	e58d0028 	str	r0, [sp, #40]
        130c8c:	e58d702c 	str	r7, [sp, #44]
        130c90:	e58d8030 	str	r8, [sp, #48]
        130c94:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130c98:	e5900000 	ldr	r0, [r0]
        130c9c:	e58d0020 	str	r0, [sp, #32]
        130ca0:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        130ca4:	e5900000 	ldr	r0, [r0]
        130ca8:	e58d0024 	str	r0, [sp, #36]
        130cac:	e24dd004 	sub	sp, sp, #4	; 0x4
        130cb0:	e28d0004 	add	r0, sp, #4	; 0x4
        130cb4:	e3a0100c 	mov	r1, #12	; 0xc
        130cb8:	e3a02000 	mov	r2, #0	; 0x0
        130cbc:	e3a0c000 	mov	ip, #0	; 0x0
        130cc0:	e3a0e000 	mov	lr, #0	; 0x0
        130cc4:	e3a03000 	mov	r3, #0	; 0x0
        130cc8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        130ccc:	e1a0300e 	mov	r3, lr
        130cd0:	e1a0100c 	mov	r1, ip
        130cd4:	e3a00028 	mov	r0, #40	; 0x28
        130cd8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        130cdc:	e28d3030 	add	r3, sp, #48	; 0x30
        130ce0:	e92d0008 	stmdb	sp!, {r3}
        130ce4:	e28d3024 	add	r3, sp, #36	; 0x24
        130ce8:	e1a00004 	mov	r0, r4
        130cec:	e3a02002 	mov	r2, #2	; 0x2
        130cf0:	e3a01001 	mov	r1, #1	; 0x1
        130cf4:	eb6aa814 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        130cf8:	e28dd024 	add	sp, sp, #36	; 0x24
        130cfc:	e3300000 	teq	r0, #0	; 0x0
        130d00:	059d000c 	ldreq	r0, [sp, #12]	; fMsgName
        130d04:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TUNameServer::ResourceUnclaim(char *, char *)
 * Address: 00130d08
 */
NewtonErr		TUNameServer::ResourceUnclaim(char* name, char* type) {
    /*
        130d08:	e1a0c00d 	mov	ip, sp
        130d0c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        130d10:	e24cb004 	sub	fp, ip, #4	; 0x4
        130d14:	e1a04000 	mov	r4, r0
        130d18:	e1a06001 	mov	r6, r1
        130d1c:	e1a05002 	mov	r5, r2
        130d20:	e24dd034 	sub	sp, sp, #52	; 0x34
        130d24:	e28d000c 	add	r0, sp, #12	; 0xc
        130d28:	eb679362 	bl	1b15ab8 <TResArbitrationRequest::$__ct(void)>
        130d2c:	e1a0000d 	mov	r0, sp
        130d30:	eb678707 	bl	1b12954 <TNameServerReply::$__ct(void)>
        130d34:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130d38:	e3300000 	teq	r0, #0	; 0x0
        130d3c:	1594000c 	ldrne	r0, [r4, #12]	; fMsgName
        130d40:	13300000 	teqne	r0, #0	; 0x0
        130d44:	03a000e9 	moveq	r0, #233	; 0xe9
        130d48:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        130d4c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        130d50:	e1a00006 	mov	r0, r6
        130d54:	eb6a1355 	bl	1bb5ab0 <$strlen>
        130d58:	e2802001 	add	r2, r0, #1	; 0x1
        130d5c:	e1a01006 	mov	r1, r6
        130d60:	e3a03001 	mov	r3, #1	; 0x1
        130d64:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130d68:	eb6aa7ff 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        130d6c:	e1a00005 	mov	r0, r5
        130d70:	eb6a134e 	bl	1bb5ab0 <$strlen>
        130d74:	e2802001 	add	r2, r0, #1	; 0x1
        130d78:	e1a01005 	mov	r1, r5
        130d7c:	e3a03001 	mov	r3, #1	; 0x1
        130d80:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        130d84:	eb6aa7f8 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        130d88:	e3a00002 	mov	r0, #2	; 0x2
        130d8c:	e58d0028 	str	r0, [sp, #40]
        130d90:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130d94:	e5900000 	ldr	r0, [r0]
        130d98:	e58d0020 	str	r0, [sp, #32]
        130d9c:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        130da0:	e5900000 	ldr	r0, [r0]
        130da4:	e58d0024 	str	r0, [sp, #36]
        130da8:	e24dd004 	sub	sp, sp, #4	; 0x4
        130dac:	e28d0004 	add	r0, sp, #4	; 0x4
        130db0:	e3a0100c 	mov	r1, #12	; 0xc
        130db4:	e3a02000 	mov	r2, #0	; 0x0
        130db8:	e3a0c000 	mov	ip, #0	; 0x0
        130dbc:	e3a0e000 	mov	lr, #0	; 0x0
        130dc0:	e3a03000 	mov	r3, #0	; 0x0
        130dc4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        130dc8:	e1a0300e 	mov	r3, lr
        130dcc:	e1a0100c 	mov	r1, ip
        130dd0:	e3a00028 	mov	r0, #40	; 0x28
        130dd4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        130dd8:	e28d3030 	add	r3, sp, #48	; 0x30
        130ddc:	e92d0008 	stmdb	sp!, {r3}
        130de0:	e28d3024 	add	r3, sp, #36	; 0x24
        130de4:	e1a00004 	mov	r0, r4
        130de8:	e3a02002 	mov	r2, #2	; 0x2
        130dec:	e3a01001 	mov	r1, #1	; 0x1
        130df0:	eb6aa7d5 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        130df4:	e28dd024 	add	sp, sp, #36	; 0x24
        130df8:	e3300000 	teq	r0, #0	; 0x0
        130dfc:	059d000c 	ldreq	r0, [sp, #12]	; fMsgName
        130e00:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TUNameServer::ResourcePassiveUnclaim(char *, char *)
 * Address: 00130e04
 */
NewtonErr		TUNameServer::ResourcePassiveUnclaim(char* name, char* type) {
    /*
        130e04:	e1a0c00d 	mov	ip, sp
        130e08:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        130e0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        130e10:	e1a04000 	mov	r4, r0
        130e14:	e1a06001 	mov	r6, r1
        130e18:	e1a05002 	mov	r5, r2
        130e1c:	e24dd034 	sub	sp, sp, #52	; 0x34
        130e20:	e28d000c 	add	r0, sp, #12	; 0xc
        130e24:	eb679323 	bl	1b15ab8 <TResArbitrationRequest::$__ct(void)>
        130e28:	e1a0000d 	mov	r0, sp
        130e2c:	eb6786c8 	bl	1b12954 <TNameServerReply::$__ct(void)>
        130e30:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130e34:	e3300000 	teq	r0, #0	; 0x0
        130e38:	1594000c 	ldrne	r0, [r4, #12]	; fMsgName
        130e3c:	13300000 	teqne	r0, #0	; 0x0
        130e40:	03a000e9 	moveq	r0, #233	; 0xe9
        130e44:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        130e48:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        130e4c:	e1a00006 	mov	r0, r6
        130e50:	eb6a1316 	bl	1bb5ab0 <$strlen>
        130e54:	e2802001 	add	r2, r0, #1	; 0x1
        130e58:	e1a01006 	mov	r1, r6
        130e5c:	e3a03001 	mov	r3, #1	; 0x1
        130e60:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130e64:	eb6aa7c0 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        130e68:	e1a00005 	mov	r0, r5
        130e6c:	eb6a130f 	bl	1bb5ab0 <$strlen>
        130e70:	e2802001 	add	r2, r0, #1	; 0x1
        130e74:	e1a01005 	mov	r1, r5
        130e78:	e3a03001 	mov	r3, #1	; 0x1
        130e7c:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        130e80:	eb6aa7b9 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        130e84:	e3a00004 	mov	r0, #4	; 0x4
        130e88:	e58d0028 	str	r0, [sp, #40]
        130e8c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        130e90:	e5900000 	ldr	r0, [r0]
        130e94:	e58d0020 	str	r0, [sp, #32]
        130e98:	e594000c 	ldr	r0, [r4, #12]	; fMsgName
        130e9c:	e5900000 	ldr	r0, [r0]
        130ea0:	e58d0024 	str	r0, [sp, #36]
        130ea4:	e24dd004 	sub	sp, sp, #4	; 0x4
        130ea8:	e28d0004 	add	r0, sp, #4	; 0x4
        130eac:	e3a0100c 	mov	r1, #12	; 0xc
        130eb0:	e3a02000 	mov	r2, #0	; 0x0
        130eb4:	e3a0c000 	mov	ip, #0	; 0x0
        130eb8:	e3a0e000 	mov	lr, #0	; 0x0
        130ebc:	e3a03000 	mov	r3, #0	; 0x0
        130ec0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        130ec4:	e1a0300e 	mov	r3, lr
        130ec8:	e1a0100c 	mov	r1, ip
        130ecc:	e3a00028 	mov	r0, #40	; 0x28
        130ed0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        130ed4:	e28d3030 	add	r3, sp, #48	; 0x30
        130ed8:	e92d0008 	stmdb	sp!, {r3}
        130edc:	e28d3024 	add	r3, sp, #36	; 0x24
        130ee0:	e1a00004 	mov	r0, r4
        130ee4:	e3a02002 	mov	r2, #2	; 0x2
        130ee8:	e3a01001 	mov	r1, #1	; 0x1
        130eec:	eb6aa796 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        130ef0:	e28dd024 	add	sp, sp, #36	; 0x24
        130ef4:	e3300000 	teq	r0, #0	; 0x0
        130ef8:	059d000c 	ldreq	r0, [sp, #12]	; fMsgName
        130efc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

