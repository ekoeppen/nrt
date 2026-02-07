#include "DDKIncludes/CommAPI/OptionArray.h"

/**
 * Symbol: TOption::__ct(unsigned long)
 * Address: 0014aa38
 */
TOption::TOption(ULong type = kOptionType) {
    /*
        14aa38:	e1a0c00d 	mov	ip, sp
        14aa3c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14aa40:	e24cb004 	sub	fp, ip, #4	; 0x4
        14aa44:	e1a04001 	mov	r4, r1
        14aa48:	e3300000 	teq	r0, #0	; 0x0
        14aa4c:	1a000003 	bne	14aa60 <TOption::__ct(unsigned long)+0x28>
        14aa50:	e3a0000c 	mov	r0, #12	; 0xc
        14aa54:	eb6a0f37 	bl	1bce738 <$__nw(unsigned int)>
        14aa58:	e3300000 	teq	r0, #0	; 0x0
        14aa5c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        14aa60:	e3a01000 	mov	r1, #0	; 0x0
        14aa64:	e5801000 	str	r1, [r0]
        14aa68:	e5801004 	str	r1, [r0, #4]	; TOption
        14aa6c:	e3841c01 	orr	r1, r4, #256	; 0x100
        14aa70:	e5801008 	str	r1, [r0, #8]	; TOption
        14aa74:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TOption::Reset(void)
 * Address: 0014aa78
 */
void				TOption::Reset();					// ** {
    /*
        14aa78:	e5901008 	ldr	r1, [r0, #8]	; TOption
        14aa7c:	e3c11102 	bic	r1, r1, #-2147483648	; 0x80000000
        14aa80:	e3c110ff 	bic	r1, r1, #255	; 0xff
        14aa84:	e5a01008 	str	r1, [r0, #8]!	; TOption
        14aa88:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOption::SetAsService(unsigned long)
 * Address: 0014ad04
 */
void		TOption::SetAsService();						// Set the service flag {
    /*
        14ad04:	e5801000 	str	r1, [r0]
        14ad08:	ea6af5cd 	b	1c08444 <TOption::$SetAsService(void)>
    */
}

/**
 * Symbol: TOption::SetAsService(void)
 * Address: 0014afc8
 */
void		TOption::SetAsService();						// Set the service flag {
    /*
        14afc8:	e5901008 	ldr	r1, [r0, #8]	; TOption
        14afcc:	e3c1143f 	bic	r1, r1, #1056964608	; 0x3f000000
        14afd0:	e3811301 	orr	r1, r1, #67108864	; 0x4000000
        14afd4:	e5a01008 	str	r1, [r0, #8]!	; TOption
        14afd8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOption::SetAsOption(unsigned long)
 * Address: 0014b250
 */
void		TOption::SetAsOption(ULong optionId) {
    /*
        14b250:	e5801000 	str	r1, [r0]
        14b254:	e5901008 	ldr	r1, [r0, #8]	; TOption
        14b258:	e3c1143f 	bic	r1, r1, #1056964608	; 0x3f000000
        14b25c:	e3811303 	orr	r1, r1, #201326592	; 0xc000000
        14b260:	e5a01008 	str	r1, [r0, #8]!	; TOption
        14b264:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOption::SetAsConfig(unsigned long)
 * Address: 0014b844
 */
void		TOption::SetAsConfig(ULong configId) {
    /*
        14b844:	e5801000 	str	r1, [r0]
        14b848:	e5901008 	ldr	r1, [r0, #8]	; TOption
        14b84c:	e3c1143f 	bic	r1, r1, #1056964608	; 0x3f000000
        14b850:	e3811201 	orr	r1, r1, #268435456	; 0x10000000
        14b854:	e5a01008 	str	r1, [r0, #8]!	; TOption
        14b858:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOption::SetAsAddress(unsigned long)
 * Address: 0014b944
 */
void		TOption::SetAsAddress(ULong addrId) {
    /*
        14b944:	e5801000 	str	r1, [r0]
        14b948:	e5901008 	ldr	r1, [r0, #8]	; TOption
        14b94c:	e3c1143f 	bic	r1, r1, #1056964608	; 0x3f000000
        14b950:	e3811302 	orr	r1, r1, #134217728	; 0x8000000
        14b954:	e5a01008 	str	r1, [r0, #8]!	; TOption
        14b958:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOption::CopyDataFrom(TOption *)
 * Address: 0014b95c
 */
NewtonErr	TOption::CopyDataFrom(TOption* source) {
    /*
        14b95c:	e1a0c00d 	mov	ip, sp
        14b960:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14b964:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b968:	e280c00c 	add	ip, r0, #12	; 0xc
        14b96c:	e281300c 	add	r3, r1, #12	; 0xc
        14b970:	e5911004 	ldr	r1, [r1, #4]	; TOption
        14b974:	e1a02001 	mov	r2, r1
        14b978:	e3a04000 	mov	r4, #0	; 0x0
        14b97c:	e5900004 	ldr	r0, [r0, #4]	; TOption
        14b980:	e1510000 	cmp	r1, r0
        14b984:	c1a02000 	movgt	r2, r0
        14b988:	c3e04006 	mvngt	r4, #6	; 0x6
        14b98c:	ca000001 	bgt	14b998 <TOption::CopyDataFrom(TOption *)+0x3c>
        14b990:	e1500001 	cmp	r0, r1
        14b994:	c3e04007 	mvngt	r4, #7	; 0x7
        14b998:	e1a0100c 	mov	r1, ip
        14b99c:	e1a00003 	mov	r0, r3
        14b9a0:	eb6a4d6b 	bl	1bdef54 <$BlockMove>
        14b9a4:	e1a00004 	mov	r0, r4
        14b9a8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

