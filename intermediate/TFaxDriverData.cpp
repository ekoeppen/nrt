#include "include/TFaxDriverData.h"

/**
 * Symbol: TFaxDriverData::OpenSessionComplete(long, unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 0020f6d4
 */
TFaxDriverData::OpenSessionComplete(long, unsigned long, unsigned long, unsigned long, unsigned long) {
    /*
        20f6d4:	e92d4010 	stmdb	sp!, {r4, lr}
        20f6d8:	e3a04000 	mov	r4, #0	; 0x0
        20f6dc:	e59dc00c 	ldr	ip, [sp, #12]
        20f6e0:	e59de008 	ldr	lr, [sp, #8]
        20f6e4:	e5c04240 	strb	r4, [r0, #576]	; fField576
        20f6e8:	e3a04001 	mov	r4, #1	; 0x1
        20f6ec:	e5c04241 	strb	r4, [r0, #577]	; fField577
        20f6f0:	e2800f91 	add	r0, r0, #580	; 0x244
        20f6f4:	e880400e 	stmia	r0, {r1, r2, r3, lr}
        20f6f8:	e580c010 	str	ip, [r0, #16]	; fField16
        20f6fc:	e2400f91 	sub	r0, r0, #580	; 0x244
        20f700:	e590023c 	ldr	r0, [r0, #572]	; fField572
        20f704:	e8bd4010 	ldmia	sp!, {r4, lr}
        20f708:	ea673e0f 	b	1bdef4c <$PrRegainControl(TPrinter *)>
    */
}

/**
 * Symbol: TFaxDriverData::CloseSessionComplete(long)
 * Address: 0020f70c
 */
TFaxDriverData::CloseSessionComplete(long) {
    /*
        20f70c:	e5a01258 	str	r1, [r0, #600]!	; fField600
        20f710:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxDriverData::BeginPageComplete(long)
 * Address: 0020f714
 */
TFaxDriverData::BeginPageComplete(long) {
    /*
        20f714:	e5a0125c 	str	r1, [r0, #604]!	; fField604
        20f718:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxDriverData::EndPageComplete(long)
 * Address: 0020f71c
 */
TFaxDriverData::EndPageComplete(long) {
    /*
        20f71c:	e5a01260 	str	r1, [r0, #608]!	; fField608
        20f720:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxDriverData::PrintBandComplete(long)
 * Address: 0020f724
 */
TFaxDriverData::PrintBandComplete(long) {
    /*
        20f724:	e3a02000 	mov	r2, #0	; 0x0
        20f728:	e5c02268 	strb	r2, [r0, #616]	; fField616
        20f72c:	e5801264 	str	r1, [r0, #612]	; fField612
        20f730:	e590023c 	ldr	r0, [r0, #572]	; fField572
        20f734:	ea673e04 	b	1bdef4c <$PrRegainControl(TPrinter *)>
    */
}

