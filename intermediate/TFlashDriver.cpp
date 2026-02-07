#include "include/TFlashDriver.h"

/**
 * Symbol: TFlashDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &)
 * Address: 0038473c
 */
TFlashDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &) {
    /*
        38473c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384740:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384744:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TFlashDriver::CleanUp(TMemoryAllocator &)
 * Address: 00384748
 */
TFlashDriver::CleanUp(TMemoryAllocator &) {
    /*
        384748:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38474c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384750:	e28cf00c 	add	pc, ip, #12	; 0xc
    */
}

/**
 * Symbol: TFlashDriver::Init(TMemoryAllocator &)
 * Address: 00384754
 */
TFlashDriver::Init(TMemoryAllocator &) {
    /*
        384754:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384758:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38475c:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TFlashDriver::InitializeDriverData(TFlashRange &, TMemoryAllocator &)
 * Address: 00384760
 */
TFlashDriver::InitializeDriverData(TFlashRange &, TMemoryAllocator &) {
    /*
        384760:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384764:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384768:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TFlashDriver::CleanUpDriverData(TFlashRange &, TMemoryAllocator &)
 * Address: 0038476c
 */
TFlashDriver::CleanUpDriverData(TFlashRange &, TMemoryAllocator &) {
    /*
        38476c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384770:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384774:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TFlashDriver::StartReadingArray(TFlashRange &)
 * Address: 00384778
 */
TFlashDriver::StartReadingArray(TFlashRange &) {
    /*
        384778:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38477c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384780:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TFlashDriver::DoneReadingArray(TFlashRange &)
 * Address: 00384784
 */
TFlashDriver::DoneReadingArray(TFlashRange &) {
    /*
        384784:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384788:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38478c:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TFlashDriver::Write(unsigned long, unsigned long, unsigned long, TFlashRange &)
 * Address: 00384790
 */
TFlashDriver::Write(unsigned long, unsigned long, unsigned long, TFlashRange &) {
    /*
        384790:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384794:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384798:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TFlashDriver::StartErase(TFlashRange &, unsigned long)
 * Address: 0038479c
 */
TFlashDriver::StartErase(TFlashRange &, unsigned long) {
    /*
        38479c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3847a0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3847a4:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: TFlashDriver::ResetBlockStatus(TFlashRange &, unsigned long)
 * Address: 003847a8
 */
TFlashDriver::ResetBlockStatus(TFlashRange &, unsigned long) {
    /*
        3847a8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3847ac:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3847b0:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: TFlashDriver::IsEraseComplete(TFlashRange &, unsigned long, long &)
 * Address: 003847b4
 */
TFlashDriver::IsEraseComplete(TFlashRange &, unsigned long, long &) {
    /*
        3847b4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3847b8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3847bc:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: TFlashDriver::LockBlock(TFlashRange &, unsigned long)
 * Address: 003847c0
 */
TFlashDriver::LockBlock(TFlashRange &, unsigned long) {
    /*
        3847c0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3847c4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3847c8:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: TFlashDriver::BeginWrite(TFlashRange &, unsigned long, unsigned long)
 * Address: 003847cc
 */
TFlashDriver::BeginWrite(TFlashRange &, unsigned long, unsigned long) {
    /*
        3847cc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3847d0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3847d4:	e28cf038 	add	pc, ip, #56	; 0x38
    */
}

/**
 * Symbol: TFlashDriver::ReportWriteResult(TFlashRange &, unsigned long)
 * Address: 003847d8
 */
TFlashDriver::ReportWriteResult(TFlashRange &, unsigned long) {
    /*
        3847d8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3847dc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3847e0:	e28cf03c 	add	pc, ip, #60	; 0x3c
        3847e4:	00000000 	andeq	r0, r0, r0
        3847e8:	00000048 	andeq	r0, r0, r8, asr #32
        3847ec:	00000058 	andeq	r0, r0, r8, asr r0
        3847f0:	00000061 	andeq	r0, r0, r1, rrx
        3847f4:	00000060 	andeq	r0, r0, r0, rrx
        3847f8:	0000009c 	muleq	r0, ip, r0
        3847fc:	eaf9fd79 	b	203de8 <Sizeof__19T28F016_SA_SVDriverSFv>
        384808:	e1a0f00e 	mov	pc, lr
        38480c:	e1a0f00e 	mov	pc, lr
        38481c:	ea000001 	b	384828 <ClassInfo__19T28F016_SA_SVDriverSFv+0x8>
    */
}

