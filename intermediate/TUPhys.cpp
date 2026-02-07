#include "DDKIncludes/OS600/UserPhys.h"

/**
 * Symbol: TUPhys::Init(unsigned long, unsigned long, unsigned char, unsigned char)
 * Address: 0025970c
 */
long		TUPhys::Init(PAddr base, ULong size, Boolean readOnly=false, Boolean cache=true) {
    /*
        25970c:	e1a0c00d 	mov	ip, sp
        259710:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        259714:	e24cb004 	sub	fp, ip, #4	; 0x4
        259718:	e59bc004 	ldr	ip, [fp, #4]
        25971c:	e24dd028 	sub	sp, sp, #40	; 0x28
        259720:	e3a0e000 	mov	lr, #0	; 0x0
        259724:	e58d1010 	str	r1, [sp, #16]
        259728:	e58d201c 	str	r2, [sp, #28]
        25972c:	e58de00c 	str	lr, [sp, #12]
        259730:	e5cd3020 	strb	r3, [sp, #32]
        259734:	e5cdc021 	strb	ip, [sp, #33]
        259738:	e1a0200d 	mov	r2, sp
        25973c:	e3a03024 	mov	r3, #36	; 0x24
        259740:	e3a01009 	mov	r1, #9	; 0x9
        259744:	eb65f506 	bl	1bd6b64 <TUObject::$MakeObject(ObjectTypes, ObjectMessage *, unsigned long)>
        259748:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TUPhys::ReadOnly(unsigned char &)
 * Address: 0025974c
 */
long		TUPhys::ReadOnly(Boolean& ro) {
    /*
        25974c:	e1a0c00d 	mov	ip, sp
        259750:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        259754:	e24cb004 	sub	fp, ip, #4	; 0x4
        259758:	e1a04001 	mov	r4, r1
        25975c:	e5901000 	ldr	r1, [r0]
        259760:	e3a00017 	mov	r0, #23	; 0x17
        259764:	eb055282 	bl	3ae174 <GenericSWI>
        259768:	e3700001 	cmn	r0, #1	; 0x1
        25976c:	03a000e1 	moveq	r0, #225	; 0xe1
        259770:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        259774:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        259778:	e3300001 	teq	r0, #1	; 0x1
        25977c:	13a00000 	movne	r0, #0	; 0x0
        259780:	03a00001 	moveq	r0, #1	; 0x1
        259784:	e5c40000 	strb	r0, [r4]
        259788:	e3a00000 	mov	r0, #0	; 0x0
        25978c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUPhys::Size(unsigned long &)
 * Address: 00259790
 */
long		TUPhys::Size(ULong& sz);			// the size of this phys {
    /*
        259790:	e1a0c00d 	mov	ip, sp
        259794:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        259798:	e24cb004 	sub	fp, ip, #4	; 0x4
        25979c:	e1a04001 	mov	r4, r1
        2597a0:	e5901000 	ldr	r1, [r0]
        2597a4:	e3a00014 	mov	r0, #20	; 0x14
        2597a8:	eb055271 	bl	3ae174 <GenericSWI>
        2597ac:	e3300000 	teq	r0, #0	; 0x0
        2597b0:	15840000 	strne	r0, [r4]
        2597b4:	13a00000 	movne	r0, #0	; 0x0
        2597b8:	03a000e1 	moveq	r0, #225	; 0xe1
        2597bc:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        2597c0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUPhys::Base(unsigned long &)
 * Address: 002597c4
 */
long		TUPhys::Base(PAddr& paddr);			// the physical address of the base of this phys {
    /*
        2597c4:	e1a0c00d 	mov	ip, sp
        2597c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2597cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2597d0:	e1a04001 	mov	r4, r1
        2597d4:	e5901000 	ldr	r1, [r0]
        2597d8:	e3a00015 	mov	r0, #21	; 0x15
        2597dc:	eb055264 	bl	3ae174 <GenericSWI>
        2597e0:	e3700001 	cmn	r0, #1	; 0x1
        2597e4:	15840000 	strne	r0, [r4]
        2597e8:	13a00000 	movne	r0, #0	; 0x0
        2597ec:	03a000e1 	moveq	r0, #225	; 0xe1
        2597f0:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        2597f4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUPhys::Align(unsigned long &)
 * Address: 002597f8
 */
long		TUPhys::Align(ULong& al);			// the alignment of this phys {
    /*
        2597f8:	e1a0c00d 	mov	ip, sp
        2597fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        259800:	e24cb004 	sub	fp, ip, #4	; 0x4
        259804:	e1a04001 	mov	r4, r1
        259808:	e5901000 	ldr	r1, [r0]
        25980c:	e3a00016 	mov	r0, #22	; 0x16
        259810:	eb055257 	bl	3ae174 <GenericSWI>
        259814:	e3300000 	teq	r0, #0	; 0x0
        259818:	15840000 	strne	r0, [r4]
        25981c:	13a00000 	movne	r0, #0	; 0x0
        259820:	03a000e1 	moveq	r0, #225	; 0xe1
        259824:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        259828:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUPhys::Invalidate(void)
 * Address: 0025982c
 */
long		TUPhys::Invalidate();			// to invalid {
    /*
        25982c:	e1a0c00d 	mov	ip, sp
        259830:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        259834:	e24cb004 	sub	fp, ip, #4	; 0x4
        259838:	e1a04000 	mov	r4, r0
        25983c:	eb04eaf3 	bl	394410 <IsSuperMode>
        259840:	e3300000 	teq	r0, #0	; 0x0
        259844:	03a00013 	moveq	r0, #19	; 0x13
        259848:	05941000 	ldreq	r1, [r4]
        25984c:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        259850:	0a055247 	beq	3ae174 <GenericSWI>
        259854:	15940000 	ldrne	r0, [r4]
        259858:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        25985c:	1a65f0a6 	bne	1bd5afc <$InvalidatePhys(unsigned long)>
    */
}

/**
 * Symbol: TUPhys::MakeInaccessible(void)
 * Address: 00259860
 */
long		TUPhys::MakeInaccessible();		// to inaccessible {
    /*
        259860:	e1a0c00d 	mov	ip, sp
        259864:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        259868:	e24cb004 	sub	fp, ip, #4	; 0x4
        25986c:	e1a04000 	mov	r4, r0
        259870:	eb04eae6 	bl	394410 <IsSuperMode>
        259874:	e3300000 	teq	r0, #0	; 0x0
        259878:	03a00039 	moveq	r0, #57	; 0x39
        25987c:	05941000 	ldreq	r1, [r4]
        259880:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        259884:	0a05523a 	beq	3ae174 <GenericSWI>
        259888:	15940000 	ldrne	r0, [r4]
        25988c:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        259890:	1a66894f 	bne	1bfbdd4 <$MakePhysInaccessible(unsigned long)>
    */
}

/**
 * Symbol: TUPhys::MakeAccessible(void)
 * Address: 00259894
 */
long		TUPhys::MakeAccessible();		// to accessible {
    /*
        259894:	e1a0c00d 	mov	ip, sp
        259898:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        25989c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2598a0:	e1a04000 	mov	r4, r0
        2598a4:	eb04ead9 	bl	394410 <IsSuperMode>
        2598a8:	e3300000 	teq	r0, #0	; 0x0
        2598ac:	03a0003a 	moveq	r0, #58	; 0x3a
        2598b0:	05941000 	ldreq	r1, [r4]
        2598b4:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        2598b8:	0a05522d 	beq	3ae174 <GenericSWI>
        2598bc:	15940000 	ldrne	r0, [r4]
        2598c0:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        2598c4:	1a62dfed 	bne	1b11880 <$MakePhysAccessible(unsigned long)>
    */
}

/**
 * Symbol: TUPhys::ChangeVirtualMapping(unsigned long, unsigned long, EPhysChangeType)
 * Address: 002598c8
 */
long		TUPhys::ChangeVirtualMapping(VAddr va, ULong vsize, EPhysChangeType access) {
    /*
        2598c8:	e1a0c00d 	mov	ip, sp
        2598cc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2598d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2598d4:	e1a06000 	mov	r6, r0
        2598d8:	e1a05001 	mov	r5, r1
        2598dc:	e1a04002 	mov	r4, r2
        2598e0:	e1a07003 	mov	r7, r3
        2598e4:	eb04eac9 	bl	394410 <IsSuperMode>
        2598e8:	e3300000 	teq	r0, #0	; 0x0
        2598ec:	0a000005 	beq	259908 <TUPhys::ChangeVirtualMapping(unsigned long, unsigned long, EPhysChangeType)+0x40>
        2598f0:	e1a03007 	mov	r3, r7
        2598f4:	e1a02004 	mov	r2, r4
        2598f8:	e1a01005 	mov	r1, r5
        2598fc:	e5960000 	ldr	r0, [r6]
        259900:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        259904:	ea62cf7c 	b	1b0d6fc <$ChangeVirtualMapping__FUlN2115EPhysChangeType>
        259908:	e59f001c 	ldr	r0, [pc, #1c]	; 25992c <TUPhys::ChangeVirtualMapping(unsigned long, unsigned long, EPhysChangeType)+0x64>
        25990c:	e5900000 	ldr	r0, [r0]
        259910:	e5961000 	ldr	r1, [r6]
        259914:	e2400048 	sub	r0, r0, #72	; 0x48
        259918:	e8200090 	stmda	r0!, {r4, r7}
        25991c:	e8000022 	stmda	r0, {r1, r5}
        259920:	e3a0003e 	mov	r0, #62	; 0x3e
        259924:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        259928:	ea055211 	b	3ae174 <GenericSWI>
        25992c:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

