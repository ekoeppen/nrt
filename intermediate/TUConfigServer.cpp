#include "DDKIncludes/HAL/HALOptions.h"

/**
 * Symbol: TUConfigServer::ULongStrToCStr(unsigned long, char *)
 * Address: 000e5fdc
 */
void 		TUConfigServer::ULongStrToCStr(ULong name, char* nameStr) {
    /*
         e5fdc:	e3a00000 	mov	r0, #0	; 0x0
         e5fe0:	e5821000 	str	r1, [r2]
         e5fe4:	e5c20004 	strb	r0, [r2, #4]
         e5fe8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUConfigServer::GetDefaultHWLoc(unsigned long, unsigned long *, unsigned long *)
 * Address: 000e5fec
 */
NewtonErr 	TUConfigServer::GetDefaultHWLoc(ULong serviceID, ULong* hwLocIDPtr, ULong* flagsPtr = nil) {
    /*
         e5fec:	e1a0c00d 	mov	ip, sp
         e5ff0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         e5ff4:	e24cb004 	sub	fp, ip, #4	; 0x4
         e5ff8:	e92d0008 	stmdb	sp!, {r3}
         e5ffc:	e1a03002 	mov	r3, r2
         e6000:	e28f2f01 	add	r2, pc, #4	; 0x4
         e6004:	eb000077 	bl	e61e8 <TUConfigServer::GetDefaultConfig(unsigned long, char *, unsigned long *, unsigned long *)>
         e6008:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         e600c:	44656648 	strmibt	r6, [r5], -#1608
         e6010:	574c6f63 	strplb	r6, [ip, -r3, ror #30]
         e6014:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TUConfigServer::GetDefaultConfig(unsigned long, char *, unsigned long *, unsigned long *)
 * Address: 000e61e8
 */
NewtonErr 	TUConfigServer::GetDefaultConfig(ULong serviceID, char* configType, ULong* configIDPtr, ULong* flagsPtr = nil) {
    /*
         e61e8:	e1a0c00d 	mov	ip, sp
         e61ec:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         e61f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         e61f4:	e1a04000 	mov	r4, r0
         e61f8:	e1a06002 	mov	r6, r2
         e61fc:	e1a05003 	mov	r5, r3
         e6200:	e59b7004 	ldr	r7, [fp, #4]
         e6204:	e24dd00c 	sub	sp, sp, #12	; 0xc
         e6208:	e3370000 	teq	r7, #0	; 0x0
         e620c:	028d7008 	addeq	r7, sp, #8	; 0x8
         e6210:	e1a0200d 	mov	r2, sp
         e6214:	e1a00004 	mov	r0, r4
         e6218:	eb65f3eb 	bl	1a631cc <TUConfigServer::$ULongStrToCStr(unsigned long, char *)>
         e621c:	e1a03007 	mov	r3, r7
         e6220:	e92d0008 	stmdb	sp!, {r3}
         e6224:	e1a03005 	mov	r3, r5
         e6228:	e1a02006 	mov	r2, r6
         e622c:	e28d1004 	add	r1, sp, #4	; 0x4
         e6230:	e1a00004 	mov	r0, r4
         e6234:	eb6bc248 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
         e6238:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TUConfigServer::SetDefaultHWLoc(unsigned long, unsigned long, unsigned long)
 * Address: 000e623c
 */
NewtonErr 	TUConfigServer::SetDefaultHWLoc(ULong serviceID, ULong hwLocID, ULong flags = 0) {
    /*
         e623c:	e1a0c00d 	mov	ip, sp
         e6240:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         e6244:	e24cb004 	sub	fp, ip, #4	; 0x4
         e6248:	e92d0008 	stmdb	sp!, {r3}
         e624c:	e1a03002 	mov	r3, r2
         e6250:	e28f2f01 	add	r2, pc, #4	; 0x4
         e6254:	eb000003 	bl	e6268 <TUConfigServer::SetDefaultConfig(unsigned long, char *, unsigned long, unsigned long)>
         e6258:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         e625c:	44656648 	strmibt	r6, [r5], -#1608
         e6260:	574c6f63 	strplb	r6, [ip, -r3, ror #30]
         e6264:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TUConfigServer::SetDefaultConfig(unsigned long, char *, unsigned long, unsigned long)
 * Address: 000e6268
 */
NewtonErr 	TUConfigServer::SetDefaultConfig(ULong serviceID, char* configType, ULong configID, ULong flags = 0) {
    /*
         e6268:	e1a0c00d 	mov	ip, sp
         e626c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         e6270:	e24cb004 	sub	fp, ip, #4	; 0x4
         e6274:	e1a04000 	mov	r4, r0
         e6278:	e1a06002 	mov	r6, r2
         e627c:	e1a05003 	mov	r5, r3
         e6280:	e59b7004 	ldr	r7, [fp, #4]
         e6284:	e24dd008 	sub	sp, sp, #8	; 0x8
         e6288:	e1a0200d 	mov	r2, sp
         e628c:	eb65f3ce 	bl	1a631cc <TUConfigServer::$ULongStrToCStr(unsigned long, char *)>
         e6290:	e1a02006 	mov	r2, r6
         e6294:	e1a0100d 	mov	r1, sp
         e6298:	e1a00004 	mov	r0, r4
         e629c:	eb6bdf03 	bl	1bddeb0 <TUNameServer::$UnRegisterName(char *, char *)>
         e62a0:	e3350000 	teq	r5, #0	; 0x0
         e62a4:	0a000007 	beq	e62c8 <TUConfigServer::SetDefaultConfig(unsigned long, char *, unsigned long, unsigned long)+0x60>
         e62a8:	e1a03007 	mov	r3, r7
         e62ac:	e92d0008 	stmdb	sp!, {r3}
         e62b0:	e1a03005 	mov	r3, r5
         e62b4:	e1a02006 	mov	r2, r6
         e62b8:	e28d1004 	add	r1, sp, #4	; 0x4
         e62bc:	e1a00004 	mov	r0, r4
         e62c0:	eb6bca6a 	bl	1bd8c70 <TUNameServer::$RegisterName(char *, char *, unsigned long, unsigned long)>
         e62c4:	e28dd004 	add	sp, sp, #4	; 0x4
         e62c8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TUConfigServer::RegisterULongName(unsigned long, char *, unsigned long, unsigned long)
 * Address: 000e62cc
 */
NewtonErr 	TUConfigServer::RegisterULongName(ULong name, char* type, ULong thing, ULong spec) {
    /*
         e62cc:	e1a0c00d 	mov	ip, sp
         e62d0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         e62d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         e62d8:	e1a04000 	mov	r4, r0
         e62dc:	e1a06002 	mov	r6, r2
         e62e0:	e1a05003 	mov	r5, r3
         e62e4:	e59b7004 	ldr	r7, [fp, #4]
         e62e8:	e24dd008 	sub	sp, sp, #8	; 0x8
         e62ec:	e1a0200d 	mov	r2, sp
         e62f0:	eb65f3b5 	bl	1a631cc <TUConfigServer::$ULongStrToCStr(unsigned long, char *)>
         e62f4:	e1a03007 	mov	r3, r7
         e62f8:	e92d0008 	stmdb	sp!, {r3}
         e62fc:	e1a03005 	mov	r3, r5
         e6300:	e1a02006 	mov	r2, r6
         e6304:	e28d1004 	add	r1, sp, #4	; 0x4
         e6308:	e1a00004 	mov	r0, r4
         e630c:	eb6bca57 	bl	1bd8c70 <TUNameServer::$RegisterName(char *, char *, unsigned long, unsigned long)>
         e6310:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TUConfigServer::UnRegisterULongName(unsigned long, char *)
 * Address: 000e6314
 */
NewtonErr 	TUConfigServer::UnRegisterULongName(ULong name, char* type) {
    /*
         e6314:	e1a0c00d 	mov	ip, sp
         e6318:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         e631c:	e24cb004 	sub	fp, ip, #4	; 0x4
         e6320:	e1a04000 	mov	r4, r0
         e6324:	e1a05002 	mov	r5, r2
         e6328:	e24dd008 	sub	sp, sp, #8	; 0x8
         e632c:	e1a0200d 	mov	r2, sp
         e6330:	eb65f3a5 	bl	1a631cc <TUConfigServer::$ULongStrToCStr(unsigned long, char *)>
         e6334:	e1a02005 	mov	r2, r5
         e6338:	e1a0100d 	mov	r1, sp
         e633c:	e1a00004 	mov	r0, r4
         e6340:	eb6bdeda 	bl	1bddeb0 <TUNameServer::$UnRegisterName(char *, char *)>
         e6344:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

