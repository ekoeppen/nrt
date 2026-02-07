#include "DDKIncludes/HAL/HALOptions.h"

/**
 * Symbol: New__12TCardHandlerSFPc
 * Address: 0038635c
 */
static	TCardHandler*	TCardHandler::New(char*);									// PROTOCOL constructor {
    /*
        38635c:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        386360:	e1a01000 	mov	r1, r0
        386364:	ebfffff6 	bl	386344 <TATA::ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long)+0xc>
        386368:	eb61250d 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        38636c:	e1100000 	tst	r0, r0
        386370:	e28dd004 	add	sp, sp, #4	; 0x4
        386374:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        386378:	01a0f00e 	moveq	pc, lr
        38637c:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        386380:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        386384:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TCardHandler::Delete(void)
 * Address: 00386388
 */
void					TCardHandler::Delete();									// PROTOCOL destructor {
    /*
        386388:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        38638c:	e92d4001 	stmdb	sp!, {r0, lr}
        386390:	e28fe004 	add	lr, pc, #4	; 0x4
        386394:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        386398:	e28cf00c 	add	pc, ip, #12	; 0xc
        38639c:	e8bd4001 	ldmia	sp!, {r0, lr}
        3863a0:	ea61316d 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TCardHandler::RecognizeCard(TCardSocket *, TCardPCMCIA *)
 * Address: 003863a4
 */
NewtonErr		TCardHandler::RecognizeCard(TCardSocket* socket, TCardPCMCIA* card);			// Recognize card {
    /*
        3863a4:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        3863a8:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        3863ac:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TCardHandler::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)
 * Address: 003863b0
 */
NewtonErr		TCardHandler::ParseUnrecognizedCard(TCardSocket* socket, TCardPCMCIA* card);	// Recognized unparsed card (do your own parsing) {
    /*
        3863b0:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        3863b4:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        3863b8:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TCardHandler::InstallServices(TCardSocket *, TCardPCMCIA *, unsigned long)
 * Address: 003863bc
 */
NewtonErr		TCardHandler::InstallServices(TCardSocket* socket, TCardPCMCIA* card, ULong configNumber=0) {
    /*
        3863bc:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        3863c0:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        3863c4:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TCardHandler::RemoveServices(void)
 * Address: 003863c8
 */
NewtonErr		TCardHandler::RemoveServices(void);								// Install/Remove services {
    /*
        3863c8:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        3863cc:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        3863d0:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TCardHandler::SuspendServices(void)
 * Address: 003863d4
 */
NewtonErr		TCardHandler::SuspendServices(void);								// Suspend/Resume services {
    /*
        3863d4:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        3863d8:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        3863dc:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TCardHandler::ResumeServices(TCardSocket *, TCardPCMCIA *, unsigned long)
 * Address: 003863e0
 */
NewtonErr		TCardHandler::ResumeServices(TCardSocket* socket, TCardPCMCIA* card, ULong configNumber=0) {
    /*
        3863e0:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        3863e4:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        3863e8:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TCardHandler::EmergencyShutdown(void)
 * Address: 003863ec
 */
NewtonErr		TCardHandler::EmergencyShutdown(void);							// EmergencyShutdown when card is away (from interrupt handler) {
    /*
        3863ec:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        3863f0:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        3863f4:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: TCardHandler::FormatCIS(TCardSocket *, TCardPCMCIA *)
 * Address: 003863f8
 */
NewtonErr		TCardHandler::FormatCIS(TCardSocket* socket, TCardPCMCIA* card);	// Format CIS {
    /*
        3863f8:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        3863fc:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        386400:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: TCardHandler::CardIdString(TCardPCMCIA *)
 * Address: 00386404
 */
char*			TCardHandler::CardIdString(TCardPCMCIA* card);					// Card identification string {
    /*
        386404:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        386408:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        38640c:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: TCardHandler::CardStatus(void)
 * Address: 00386410
 */
ULong			TCardHandler::CardStatus(void);									// In CardDefines.h TCardStatus {
    /*
        386410:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        386414:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        386418:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: TCardHandler::GetNumberOfDevice(void)
 * Address: 0038641c
 */
ULong			TCardHandler::GetNumberOfDevice(void) {
    /*
        38641c:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        386420:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        386424:	e28cf038 	add	pc, ip, #56	; 0x38
    */
}

/**
 * Symbol: TCardHandler::GetDeviceInfo(unsigned long, unsigned long *, unsigned long *, void **, unsigned long *, unsigned long *)
 * Address: 00386428
 */
void			TCardHandler::GetDeviceInfo(ULong deviceNumber, ULong* cardType, TObjectId* cardPhys, void** cardDriverInfo, ULong* deviceOffset, ULong* deviceSize) {
    /*
        386428:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        38642c:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        386430:	e28cf03c 	add	pc, ip, #60	; 0x3c
    */
}

/**
 * Symbol: TCardHandler::SetCardServerPort(unsigned long)
 * Address: 00386434
 */
void			TCardHandler::SetCardServerPort(TObjectId port);					// Set card server port {
    /*
        386434:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        386438:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        38643c:	e28cf040 	add	pc, ip, #64	; 0x40
    */
}

/**
 * Symbol: TCardHandler::SetRemovableHandler(unsigned char)
 * Address: 00386440
 */
void			TCardHandler::SetRemovableHandler(Boolean removable);				// Removable means the card handler {
    /*
        386440:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        386444:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        386448:	e28cf044 	add	pc, ip, #68	; 0x44
    */
}

/**
 * Symbol: TCardHandler::GetRemovableHandler(void)
 * Address: 0038644c
 */
Boolean			TCardHandler::GetRemovableHandler(void);							//	will be removed when card removed {
    /*
        38644c:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        386450:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        386454:	e28cf048 	add	pc, ip, #72	; 0x48
    */
}

/**
 * Symbol: TCardHandler::CardSpecific(unsigned long, void *, unsigned long)
 * Address: 00386458
 */
long			TCardHandler::CardSpecific(ULong selector, void* ptr=0, ULong something=0);	// selectors 0-0xffff are reserved by Apple {
    /*
        386458:	e5900004 	ldr	r0, [r0, #4]	; TCardHandler
        38645c:	e590c008 	ldr	ip, [r0, #8]	; TCardHandler
        386460:	e28cf04c 	add	pc, ip, #76	; 0x4c
        386464:	e1a0000f 	mov	r0, pc
        386468:	e1a0f00e 	mov	pc, lr
        38646c:	54466c61 	strplb	r6, [r6], -#3169
        386470:	73680000 	cmnvc	r8, #0	; 0x0
    */
}

