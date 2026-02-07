#include "include/TFlash.h"

/**
 * Symbol: New__6TFlashSFPc
 * Address: 00386474
 */
void TFlash::New() {
    /*
        386474:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        386478:	e1a01000 	mov	r1, r0
        38647c:	ebfffff8 	bl	386464 <TCardHandler::CardSpecific(unsigned long, void *, unsigned long)+0xc>
        386480:	eb6124c7 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        386484:	e1100000 	tst	r0, r0
        386488:	e28dd004 	add	sp, sp, #4	; 0x4
        38648c:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        386490:	01a0f00e 	moveq	pc, lr
        386494:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386498:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38649c:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TFlash::Delete(void)
 * Address: 003864a0
 */
TFlash::Delete(void) {
    /*
        3864a0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3864a4:	e92d4001 	stmdb	sp!, {r0, lr}
        3864a8:	e28fe004 	add	lr, pc, #4	; 0x4
        3864ac:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3864b0:	e28cf00c 	add	pc, ip, #12	; 0xc
        3864b4:	e8bd4001 	ldmia	sp!, {r0, lr}
        3864b8:	ea613127 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TFlash::Read(unsigned long, unsigned long, char *)
 * Address: 003864bc
 */
TFlash::Read(unsigned long, unsigned long, char *) {
    /*
        3864bc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3864c0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3864c4:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TFlash::Write(unsigned long, unsigned long, char *)
 * Address: 003864c8
 */
TFlash::Write(unsigned long, unsigned long, char *) {
    /*
        3864c8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3864cc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3864d0:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TFlash::Erase(unsigned long)
 * Address: 003864d4
 */
TFlash::Erase(unsigned long) {
    /*
        3864d4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3864d8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3864dc:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TFlash::SuspendErase(unsigned long, unsigned long, unsigned long)
 * Address: 003864e0
 */
TFlash::SuspendErase(unsigned long, unsigned long, unsigned long) {
    /*
        3864e0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3864e4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3864e8:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TFlash::ResumeErase(unsigned long)
 * Address: 003864ec
 */
TFlash::ResumeErase(unsigned long) {
    /*
        3864ec:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3864f0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3864f4:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TFlash::DeepSleep(unsigned long)
 * Address: 003864f8
 */
TFlash::DeepSleep(unsigned long) {
    /*
        3864f8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3864fc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386500:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TFlash::Wakeup(unsigned long)
 * Address: 00386504
 */
TFlash::Wakeup(unsigned long) {
    /*
        386504:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386508:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38650c:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: TFlash::Status(unsigned long)
 * Address: 00386510
 */
TFlash::Status(unsigned long) {
    /*
        386510:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386514:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386518:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: TFlash::ResetCard(void)
 * Address: 0038651c
 */
TFlash::ResetCard(void) {
    /*
        38651c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386520:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386524:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: TFlash::AcknowledgeReset(void)
 * Address: 00386528
 */
TFlash::AcknowledgeReset(void) {
    /*
        386528:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38652c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386530:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: TFlash::GetPhysResource(void)
 * Address: 00386534
 */
TFlash::GetPhysResource(void) {
    /*
        386534:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386538:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38653c:	e28cf038 	add	pc, ip, #56	; 0x38
    */
}

/**
 * Symbol: TFlash::RegisterClientInfo(unsigned long)
 * Address: 00386540
 */
TFlash::RegisterClientInfo(unsigned long) {
    /*
        386540:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386544:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386548:	e28cf03c 	add	pc, ip, #60	; 0x3c
    */
}

/**
 * Symbol: TFlash::GetWriteProtected(unsigned char *)
 * Address: 0038654c
 */
TFlash::GetWriteProtected(unsigned char *) {
    /*
        38654c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386550:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386554:	e28cf040 	add	pc, ip, #64	; 0x40
    */
}

/**
 * Symbol: TFlash::GetWriteErrorAddress(void)
 * Address: 00386558
 */
TFlash::GetWriteErrorAddress(void) {
    /*
        386558:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38655c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386560:	e28cf044 	add	pc, ip, #68	; 0x44
    */
}

/**
 * Symbol: TFlash::GetAttributes(void)
 * Address: 00386564
 */
TFlash::GetAttributes(void) {
    /*
        386564:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386568:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38656c:	e28cf048 	add	pc, ip, #72	; 0x48
    */
}

/**
 * Symbol: TFlash::GetDataOffset(void)
 * Address: 00386570
 */
TFlash::GetDataOffset(void) {
    /*
        386570:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386574:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386578:	e28cf04c 	add	pc, ip, #76	; 0x4c
    */
}

/**
 * Symbol: TFlash::GetTotalSize(void)
 * Address: 0038657c
 */
TFlash::GetTotalSize(void) {
    /*
        38657c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386580:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386584:	e28cf050 	add	pc, ip, #80	; 0x50
    */
}

/**
 * Symbol: TFlash::GetGroupSize(void)
 * Address: 00386588
 */
TFlash::GetGroupSize(void) {
    /*
        386588:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38658c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386590:	e28cf054 	add	pc, ip, #84	; 0x54
    */
}

/**
 * Symbol: TFlash::GetEraseRegionSize(void)
 * Address: 00386594
 */
TFlash::GetEraseRegionSize(void) {
    /*
        386594:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386598:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38659c:	e28cf058 	add	pc, ip, #88	; 0x58
    */
}

/**
 * Symbol: TFlash::GetChipsPerGroup(void)
 * Address: 003865a0
 */
TFlash::GetChipsPerGroup(void) {
    /*
        3865a0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3865a4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3865a8:	e28cf05c 	add	pc, ip, #92	; 0x5c
    */
}

/**
 * Symbol: TFlash::GetBlocksPerPartition(void)
 * Address: 003865ac
 */
TFlash::GetBlocksPerPartition(void) {
    /*
        3865ac:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3865b0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3865b4:	e28cf060 	add	pc, ip, #96	; 0x60
    */
}

/**
 * Symbol: TFlash::GetMaxConcurrentVppOps(void)
 * Address: 003865b8
 */
TFlash::GetMaxConcurrentVppOps(void) {
    /*
        3865b8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3865bc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3865c0:	e28cf064 	add	pc, ip, #100	; 0x64
    */
}

/**
 * Symbol: TFlash::GetEraseRegionCurrent(void)
 * Address: 003865c4
 */
TFlash::GetEraseRegionCurrent(void) {
    /*
        3865c4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3865c8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3865cc:	e28cf068 	add	pc, ip, #104	; 0x68
    */
}

/**
 * Symbol: TFlash::GetWriteRegionCurrent(void)
 * Address: 003865d0
 */
TFlash::GetWriteRegionCurrent(void) {
    /*
        3865d0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3865d4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3865d8:	e28cf06c 	add	pc, ip, #108	; 0x6c
    */
}

/**
 * Symbol: TFlash::GetEraseRegionTime(void)
 * Address: 003865dc
 */
TFlash::GetEraseRegionTime(void) {
    /*
        3865dc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3865e0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3865e4:	e28cf070 	add	pc, ip, #112	; 0x70
    */
}

/**
 * Symbol: TFlash::GetWriteAccessTime(void)
 * Address: 003865e8
 */
TFlash::GetWriteAccessTime(void) {
    /*
        3865e8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3865ec:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3865f0:	e28cf074 	add	pc, ip, #116	; 0x74
    */
}

/**
 * Symbol: TFlash::GetReadAccessTime(void)
 * Address: 003865f4
 */
TFlash::GetReadAccessTime(void) {
    /*
        3865f4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3865f8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3865fc:	e28cf078 	add	pc, ip, #120	; 0x78
    */
}

/**
 * Symbol: TFlash::GetVendorInfo(void)
 * Address: 00386600
 */
TFlash::GetVendorInfo(void) {
    /*
        386600:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386604:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386608:	e28cf07c 	add	pc, ip, #124	; 0x7c
    */
}

/**
 * Symbol: TFlash::GetSocketNumber(void)
 * Address: 0038660c
 */
TFlash::GetSocketNumber(void) {
    /*
        38660c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386610:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386614:	e28cf080 	add	pc, ip, #128	; 0x80
    */
}

/**
 * Symbol: TFlash::VppStatus(void)
 * Address: 00386618
 */
TFlash::VppStatus(void) {
    /*
        386618:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38661c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386620:	e28cf084 	add	pc, ip, #132	; 0x84
    */
}

/**
 * Symbol: TFlash::VppRisingTime(void)
 * Address: 00386624
 */
TFlash::VppRisingTime(void) {
    /*
        386624:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386628:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38662c:	e28cf088 	add	pc, ip, #136	; 0x88
    */
}

/**
 * Symbol: TFlash::FlashSpecific(unsigned long, void *, unsigned long)
 * Address: 00386630
 */
TFlash::FlashSpecific(unsigned long, void *, unsigned long) {
    /*
        386630:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386634:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386638:	e28cf08c 	add	pc, ip, #140	; 0x8c
    */
}

/**
 * Symbol: TFlash::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long)
 * Address: 0038663c
 */
TFlash::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long) {
    /*
        38663c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386640:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386644:	e28cf090 	add	pc, ip, #144	; 0x90
    */
}

/**
 * Symbol: TFlash::SuspendService(void)
 * Address: 00386648
 */
TFlash::SuspendService(void) {
    /*
        386648:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38664c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386650:	e28cf094 	add	pc, ip, #148	; 0x94
    */
}

/**
 * Symbol: TFlash::ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long)
 * Address: 00386654
 */
TFlash::ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long) {
    /*
        386654:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386658:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38665c:	e28cf098 	add	pc, ip, #152	; 0x98
    */
}

/**
 * Symbol: TFlash::Copy(unsigned long, unsigned long, unsigned long)
 * Address: 00386660
 */
TFlash::Copy(unsigned long, unsigned long, unsigned long) {
    /*
        386660:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386664:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386668:	e28cf09c 	add	pc, ip, #156	; 0x9c
    */
}

/**
 * Symbol: TFlash::IsVirgin(unsigned long, unsigned long)
 * Address: 0038666c
 */
TFlash::IsVirgin(unsigned long, unsigned long) {
    /*
        38666c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386670:	e590c008 	ldr	ip, [r0, #8]	; fField8
        386674:	e28cf0a0 	add	pc, ip, #160	; 0xa0
        386678:	00000000 	andeq	r0, r0, r0
        38667c:	00000048 	andeq	r0, r0, r8, asr #32
        386680:	0000004f 	andeq	r0, r0, pc, asr #32
        386684:	00000050 	andeq	r0, r0, r0, asr r0
        386688:	00000050 	andeq	r0, r0, r0, asr r0
        38668c:	000000a8 	andeq	r0, r0, r8, lsr #1
        386690:	ea5ed1a1 	b	1b3ad1c <$Sizeof__10TATASimpleSFv>
        38669c:	ea5ecd8e 	b	1b39cdc <TATASimple::$New(void)>
        3866a0:	ea5ecd77 	b	1b39c84 <TATASimple::$Delete(void)>
        3866b0:	ea000001 	b	3866bc <ClassInfo__10TATASimpleSFv+0x8>
    */
}

