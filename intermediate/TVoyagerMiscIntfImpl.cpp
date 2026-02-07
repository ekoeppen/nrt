#include "include/TVoyagerMiscIntfImpl.h"

/**
 * Symbol: Sizeof__20TVoyagerMiscIntfImplSFv
 * Address: 0026c53c
 */
void TVoyagerMiscIntfImpl::Sizeof() {
    /*
        26c53c:	e3a00024 	mov	r0, #36	; 0x24
        26c540:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::DeregisterInterrupt(GPIOIntObject *)
 * Address: 0026c544
 */
TVoyagerMiscIntfImpl::DeregisterInterrupt(GPIOIntObject *) {
    /*
        26c544:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26c548:	ea5fefbd 	b	1a68444 <TGPIOInterface::$DeregisterInterrupt(GPIOIntObject *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::EnableInterrupt(GPIOIntObject *)
 * Address: 0026c54c
 */
TVoyagerMiscIntfImpl::EnableInterrupt(GPIOIntObject *) {
    /*
        26c54c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26c550:	ea600468 	b	1a6d6f8 <TGPIOInterface::$EnableInterrupt(GPIOIntObject *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::DisableInterrupt(GPIOIntObject *)
 * Address: 0026c554
 */
TVoyagerMiscIntfImpl::DisableInterrupt(GPIOIntObject *) {
    /*
        26c554:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26c558:	ea600467 	b	1a6d6fc <TGPIOInterface::$DisableInterrupt(GPIOIntObject *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::ClearInterrupt(GPIOIntObject *)
 * Address: 0026c55c
 */
TVoyagerMiscIntfImpl::ClearInterrupt(GPIOIntObject *) {
    /*
        26c55c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26c560:	ea600463 	b	1a6d6f4 <TGPIOInterface::$ClearInterrupt(GPIOIntObject *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::SetAndClearInterruptFlags(GPIOIntObject *, unsigned long, unsigned long)
 * Address: 0026c564
 */
TVoyagerMiscIntfImpl::SetAndClearInterruptFlags(GPIOIntObject *, unsigned long, unsigned long) {
    /*
        26c564:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26c568:	ea5fefb6 	b	1a68448 <TGPIOInterface::$SetAndClearInterruptFlags(GPIOIntObject *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::GetInterruptFlags(GPIOIntObject *)
 * Address: 0026c56c
 */
TVoyagerMiscIntfImpl::GetInterruptFlags(GPIOIntObject *) {
    /*
        26c56c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26c570:	ea5fefb5 	b	1a6844c <TGPIOInterface::$GetInterruptFlags(GPIOIntObject *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::MapGPIOFunctionToBit(unsigned char, unsigned char *)
 * Address: 0026c574
 */
TVoyagerMiscIntfImpl::MapGPIOFunctionToBit(unsigned char, unsigned char *) {
    /*
        26c574:	e20110ff 	and	r1, r1, #255	; 0xff
        26c578:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26c57c:	ea600458 	b	1a6d6e4 <TGPIOInterface::$MapFunctionToBit(unsigned char, unsigned char *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::MapGPIOFunctionToBitMask(unsigned char, unsigned long *)
 * Address: 0026c580
 */
TVoyagerMiscIntfImpl::MapGPIOFunctionToBitMask(unsigned char, unsigned long *) {
    /*
        26c580:	e20110ff 	and	r1, r1, #255	; 0xff
        26c584:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26c588:	ea600456 	b	1a6d6e8 <TGPIOInterface::$MapFunctionToBitMask(unsigned char, unsigned long *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::WriteDIOPins(unsigned char, unsigned char, unsigned char *)
 * Address: 0026c58c
 */
TVoyagerMiscIntfImpl::WriteDIOPins(unsigned char, unsigned char, unsigned char *) {
    /*
        26c58c:	e20110ff 	and	r1, r1, #255	; 0xff
        26c590:	e20220ff 	and	r2, r2, #255	; 0xff
        26c594:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26c598:	ea600444 	b	1a6d6b0 <TBIOInterface::$WriteDIOPins(unsigned char, unsigned char, unsigned char *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::ReadDIOPins(unsigned char, unsigned long *)
 * Address: 0026c59c
 */
TVoyagerMiscIntfImpl::ReadDIOPins(unsigned char, unsigned long *) {
    /*
        26c59c:	e20110ff 	and	r1, r1, #255	; 0xff
        26c5a0:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26c5a4:	ea600444 	b	1a6d6bc <TBIOInterface::$ReadDIOPins(unsigned char, unsigned long *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::New(void)
 * Address: 0026c5a8
 */
TVoyagerMiscIntfImpl::New(void) {
    /*
        26c5a8:	e1a0c00d 	mov	ip, sp
        26c5ac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26c5b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26c5b4:	e1a04000 	mov	r4, r0
        26c5b8:	eb668013 	bl	1c0c60c <$GetGPIOInterfaceObject(void)>
        26c5bc:	e5840010 	str	r0, [r4, #16]	; fField16
        26c5c0:	eb5ff7d3 	bl	1a6a514 <$GetBIOInterfaceObject(void)>
        26c5c4:	e5840014 	str	r0, [r4, #20]	; fField20
        26c5c8:	eb5ff7d7 	bl	1a6a52c <$InitIRQTimerObject(void)>
        26c5cc:	eb5fefa1 	bl	1a68458 <$InitADC(void)>
        26c5d0:	eb5ff7d6 	bl	1a6a530 <$GetIRQTimerObject(void)>
        26c5d4:	e5840018 	str	r0, [r4, #24]	; fField24
        26c5d8:	eb66800e 	bl	1c0c618 <$GetADCObject(void)>
        26c5dc:	e584001c 	str	r0, [r4, #28]	; fField28
        26c5e0:	eb5ff7cd 	bl	1a6a51c <$GetDMAManagerObject(void)>
        26c5e4:	e5840020 	str	r0, [r4, #32]	; fField32
        26c5e8:	e2841024 	add	r1, r4, #36	; 0x24
        26c5ec:	e1a00004 	mov	r0, r4
        26c5f0:	e3a02000 	mov	r2, #0	; 0x0
        26c5f4:	eb65a956 	bl	1bd6b54 <$LockHeapRange>
        26c5f8:	e1a00004 	mov	r0, r4
        26c5fc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::WriteDIODir(unsigned char, unsigned char, unsigned char *)
 * Address: 0026c600
 */
TVoyagerMiscIntfImpl::WriteDIODir(unsigned char, unsigned char, unsigned char *) {
    /*
        26c600:	e20110ff 	and	r1, r1, #255	; 0xff
        26c604:	e20220ff 	and	r2, r2, #255	; 0xff
        26c608:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26c60c:	ea600428 	b	1a6d6b4 <TBIOInterface::$WriteDIODir(unsigned char, unsigned char, unsigned char *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::WriteDIOPullup(unsigned char, unsigned char, unsigned char *)
 * Address: 0026c610
 */
TVoyagerMiscIntfImpl::WriteDIOPullup(unsigned char, unsigned char, unsigned char *) {
    /*
        26c610:	e20110ff 	and	r1, r1, #255	; 0xff
        26c614:	e20220ff 	and	r2, r2, #255	; 0xff
        26c618:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26c61c:	ea600425 	b	1a6d6b8 <TBIOInterface::$WriteDIOPullup(unsigned char, unsigned char, unsigned char *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::RegisterBIOInterrupt(unsigned char, void *, void (*)(void *), unsigned long)
 * Address: 0026c620
 */
TVoyagerMiscIntfImpl::RegisterBIOInterrupt(unsigned char, void *, void (*)(void *), unsigned long) {
    /*
        26c620:	e1a0c00d 	mov	ip, sp
        26c624:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        26c628:	e24cb004 	sub	fp, ip, #4	; 0x4
        26c62c:	e1a0c003 	mov	ip, r3
        26c630:	e20110ff 	and	r1, r1, #255	; 0xff
        26c634:	e59b3004 	ldr	r3, [fp, #4]
        26c638:	e92d0008 	stmdb	sp!, {r3}
        26c63c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26c640:	e1a0300c 	mov	r3, ip
        26c644:	eb600412 	bl	1a6d694 <TBIOInterface::$RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)>
        26c648:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::DeregisterInterrupt(KeynesIntObject *)
 * Address: 0026c64c
 */
TVoyagerMiscIntfImpl::DeregisterInterrupt(KeynesIntObject *) {
    /*
        26c64c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26c650:	ea5fef78 	b	1a68438 <TBIOInterface::$DeregisterInterrupt(KeynesIntObject *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::EnableInterrupt(KeynesIntObject *)
 * Address: 0026c654
 */
TVoyagerMiscIntfImpl::EnableInterrupt(KeynesIntObject *) {
    /*
        26c654:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26c658:	ea60040f 	b	1a6d69c <TBIOInterface::$EnableInterrupt(KeynesIntObject *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::DisableInterrupt(KeynesIntObject *)
 * Address: 0026c65c
 */
TVoyagerMiscIntfImpl::DisableInterrupt(KeynesIntObject *) {
    /*
        26c65c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26c660:	ea60040e 	b	1a6d6a0 <TBIOInterface::$DisableInterrupt(KeynesIntObject *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::ClearInterrupt(KeynesIntObject *)
 * Address: 0026c664
 */
TVoyagerMiscIntfImpl::ClearInterrupt(KeynesIntObject *) {
    /*
        26c664:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26c668:	ea60040a 	b	1a6d698 <TBIOInterface::$ClearInterrupt(KeynesIntObject *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::SetInterruptFlags(KeynesIntObject *, unsigned long)
 * Address: 0026c66c
 */
TVoyagerMiscIntfImpl::SetInterruptFlags(KeynesIntObject *, unsigned long) {
    /*
        26c66c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26c670:	ea5fef71 	b	1a6843c <TBIOInterface::$SetInterruptFlags(KeynesIntObject *, unsigned long)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::GetInterruptFlags(KeynesIntObject *)
 * Address: 0026c674
 */
TVoyagerMiscIntfImpl::GetInterruptFlags(KeynesIntObject *) {
    /*
        26c674:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26c678:	ea5fef70 	b	1a68440 <TBIOInterface::$GetInterruptFlags(KeynesIntObject *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::BIOReadRegister(int)
 * Address: 0026c67c
 */
TVoyagerMiscIntfImpl::BIOReadRegister(int) {
    /*
        26c67c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26c680:	ea60040e 	b	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::Delete(void)
 * Address: 0026c684
 */
TVoyagerMiscIntfImpl::Delete(void) {
    /*
        26c684:	e2801024 	add	r1, r0, #36	; 0x24
        26c688:	ea65c604 	b	1bddea0 <$UnlockHeapRange>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::BIOWriteCommand(int, unsigned long)
 * Address: 0026c68c
 */
TVoyagerMiscIntfImpl::BIOWriteCommand(int, unsigned long) {
    /*
        26c68c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26c690:	ea60040e 	b	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::BIOFIFOWriteCommand(int, unsigned long)
 * Address: 0026c694
 */
TVoyagerMiscIntfImpl::BIOFIFOWriteCommand(int, unsigned long) {
    /*
        26c694:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26c698:	ea60040e 	b	1a6d6d8 <TBIOInterface::$BIOFIFOWriteCommand(int, unsigned long)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::ReadBIOStatus(unsigned long)
 * Address: 0026c69c
 */
TVoyagerMiscIntfImpl::ReadBIOStatus(unsigned long) {
    /*
        26c69c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26c6a0:	ea60040d 	b	1a6d6dc <TBIOInterface::$ReadBIOStatus(unsigned long)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::MapDIOFunctionToBit(unsigned char, unsigned char *)
 * Address: 0026c6a4
 */
TVoyagerMiscIntfImpl::MapDIOFunctionToBit(unsigned char, unsigned char *) {
    /*
        26c6a4:	e20110ff 	and	r1, r1, #255	; 0xff
        26c6a8:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26c6ac:	ea6003f4 	b	1a6d684 <TBIOInterface::$MapFunctionToBit(unsigned char, unsigned char *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::MapDIOFunctionToBitMask(unsigned char, unsigned long *)
 * Address: 0026c6b0
 */
TVoyagerMiscIntfImpl::MapDIOFunctionToBitMask(unsigned char, unsigned long *) {
    /*
        26c6b0:	e20110ff 	and	r1, r1, #255	; 0xff
        26c6b4:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26c6b8:	ea6003f2 	b	1a6d688 <TBIOInterface::$MapFunctionToBitMask(unsigned char, unsigned long *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::GetSample(int, unsigned long, void (*)(void *, long, unsigned long), void *)
 * Address: 0026c6bc
 */
TVoyagerMiscIntfImpl::GetSample(int, unsigned long, void (*)(void *, long, unsigned long), void *) {
    /*
        26c6bc:	e1a0c00d 	mov	ip, sp
        26c6c0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        26c6c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        26c6c8:	e1a0c003 	mov	ip, r3
        26c6cc:	e59b3004 	ldr	r3, [fp, #4]
        26c6d0:	e92d0008 	stmdb	sp!, {r3}
        26c6d4:	e590001c 	ldr	r0, [r0, #28]	; fField28
        26c6d8:	e1a0300c 	mov	r3, ip
        26c6dc:	eb667fcc 	bl	1c0c614 <TADC::$GetSample(ADCMuxType, unsigned long, void (*)(void *, long, unsigned long), void *)>
        26c6e0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::UsePolling(unsigned char)
 * Address: 0026c6e4
 */
TVoyagerMiscIntfImpl::UsePolling(unsigned char) {
    /*
        26c6e4:	e20110ff 	and	r1, r1, #255	; 0xff
        26c6e8:	e590001c 	ldr	r0, [r0, #28]	; fField28
        26c6ec:	ea5fef5d 	b	1a68468 <TADC::$UsePolling(unsigned char)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::SetSampleSize(int)
 * Address: 0026c6f0
 */
TVoyagerMiscIntfImpl::SetSampleSize(int) {
    /*
        26c6f0:	e590001c 	ldr	r0, [r0, #28]	; fField28
        26c6f4:	ea5fef4c 	b	1a6842c <TADC::$SetSampleSize(int)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::PrimeADCPenWait(void)
 * Address: 0026c6f8
 */
TVoyagerMiscIntfImpl::PrimeADCPenWait(void) {
    /*
        26c6f8:	e590001c 	ldr	r0, [r0, #28]	; fField28
        26c6fc:	ea5ff363 	b	1a69490 <TADC::$PrimeADCPenWait(void)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::ClearADCPenWait(void)
 * Address: 0026c700
 */
TVoyagerMiscIntfImpl::ClearADCPenWait(void) {
    /*
        26c700:	e590001c 	ldr	r0, [r0, #28]	; fField28
        26c704:	ea5ff362 	b	1a69494 <TADC::$ClearADCPenWait(void)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::WriteGPIODir(unsigned char, unsigned char, unsigned char *)
 * Address: 0026c708
 */
TVoyagerMiscIntfImpl::WriteGPIODir(unsigned char, unsigned char, unsigned char *) {
    /*
        26c708:	e20110ff 	and	r1, r1, #255	; 0xff
        26c70c:	e20220ff 	and	r2, r2, #255	; 0xff
        26c710:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26c714:	ea6007fb 	b	1a6e708 <TGPIOInterface::$WriteGPIODir(unsigned char, unsigned char, unsigned char *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::Discharge(void)
 * Address: 0026c718
 */
TVoyagerMiscIntfImpl::Discharge(void) {
    /*
        26c718:	e590001c 	ldr	r0, [r0, #28]	; fField28
        26c71c:	ea5ff35d 	b	1a69498 <TADC::$Discharge(void)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::WakeUp(void)
 * Address: 0026c720
 */
TVoyagerMiscIntfImpl::WakeUp(void) {
    /*
        26c720:	e590001c 	ldr	r0, [r0, #28]	; fField28
        26c724:	ea5ff358 	b	1a6948c <TADC::$WakeUp(void)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::ShutDown(void)
 * Address: 0026c728
 */
TVoyagerMiscIntfImpl::ShutDown(void) {
    /*
        26c728:	e590001c 	ldr	r0, [r0, #28]	; fField28
        26c72c:	ea5ff355 	b	1a69488 <TADC::$ShutDown(void)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::AcquireIRQTimer(void (*)(void *, unsigned long), void *)
 * Address: 0026c730
 */
TVoyagerMiscIntfImpl::AcquireIRQTimer(void (*)(void *, unsigned long), void *) {
    /*
        26c730:	e5900018 	ldr	r0, [r0, #24]	; fField24
        26c734:	ea5ff780 	b	1a6a53c <TIRQTimer::$AcquireIRQTimer(void (*)(void *, unsigned long), void *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::ReleaseIRQTimer(IRQTimer *)
 * Address: 0026c738
 */
TVoyagerMiscIntfImpl::ReleaseIRQTimer(IRQTimer *) {
    /*
        26c738:	e5900018 	ldr	r0, [r0, #24]	; fField24
        26c73c:	ea5fef3b 	b	1a68430 <TIRQTimer::$ReleaseIRQTimer(IRQTimer *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::ReleaseIRQTimers(void *)
 * Address: 0026c740
 */
TVoyagerMiscIntfImpl::ReleaseIRQTimers(void *) {
    /*
        26c740:	e5900018 	ldr	r0, [r0, #24]	; fField24
        26c744:	ea5fef3a 	b	1a68434 <TIRQTimer::$ReleaseIRQTimers(void *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::SetIRQTimer(IRQTimer *, unsigned long, unsigned long)
 * Address: 0026c748
 */
TVoyagerMiscIntfImpl::SetIRQTimer(IRQTimer *, unsigned long, unsigned long) {
    /*
        26c748:	e5900018 	ldr	r0, [r0, #24]	; fField24
        26c74c:	ea5ff77b 	b	1a6a540 <TIRQTimer::$SetIRQTimer(IRQTimer *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::ResetIRQTimer(IRQTimer *)
 * Address: 0026c750
 */
TVoyagerMiscIntfImpl::ResetIRQTimer(IRQTimer *) {
    /*
        26c750:	e5900018 	ldr	r0, [r0, #24]	; fField24
        26c754:	ea5ff77a 	b	1a6a544 <TIRQTimer::$ResetIRQTimer(IRQTimer *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::InitIRQTimer(IRQTimer *)
 * Address: 0026c758
 */
TVoyagerMiscIntfImpl::InitIRQTimer(IRQTimer *) {
    /*
        26c758:	e5900018 	ldr	r0, [r0, #24]	; fField24
        26c75c:	ea5ff779 	b	1a6a548 <TIRQTimer::$InitIRQTimer(IRQTimer *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::SendPowerSwitchEvent(unsigned long)
 * Address: 0026c760
 */
TVoyagerMiscIntfImpl::SendPowerSwitchEvent(unsigned long) {
    /*
        26c760:	eafffffe 	b	26c760 <TVoyagerMiscIntfImpl::SendPowerSwitchEvent(unsigned long)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::WriteGPIOPolarity(unsigned char, unsigned char, unsigned char *)
 * Address: 0026c764
 */
TVoyagerMiscIntfImpl::WriteGPIOPolarity(unsigned char, unsigned char, unsigned char *) {
    /*
        26c764:	e20110ff 	and	r1, r1, #255	; 0xff
        26c768:	e20220ff 	and	r2, r2, #255	; 0xff
        26c76c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26c770:	ea6007e5 	b	1a6e70c <TGPIOInterface::$WriteGPIOPolarity(unsigned char, unsigned char, unsigned char *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::SaveCPUStateAndStopSystem(void)
 * Address: 0026c774
 */
TVoyagerMiscIntfImpl::SaveCPUStateAndStopSystem(void) {
    /*
        26c774:	eafffffe 	b	26c774 <TVoyagerMiscIntfImpl::SaveCPUStateAndStopSystem(void)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::DebuggerPowerCycleProc(unsigned char)
 * Address: 0026c778
 */
TVoyagerMiscIntfImpl::DebuggerPowerCycleProc(unsigned char) {
    /*
        26c778:	e20110ff 	and	r1, r1, #255	; 0xff
        26c77c:	eafffffd 	b	26c778 <TVoyagerMiscIntfImpl::DebuggerPowerCycleProc(unsigned char)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::GetGNewtConfig(void)
 * Address: 0026c780
 */
TVoyagerMiscIntfImpl::GetGNewtConfig(void) {
    /*
        26c780:	e59f0004 	ldr	r0, [pc, #4]	; 26c78c <TVoyagerMiscIntfImpl::GetGNewtConfig(void)+0xc>
        26c784:	e5900000 	ldr	r0, [r0]
        26c788:	e1a0f00e 	mov	pc, lr
        26c78c:	000013fc 	streqd	r1, [r0], -ip
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::GetGDebuggerBits(void)
 * Address: 0026c790
 */
TVoyagerMiscIntfImpl::GetGDebuggerBits(void) {
    /*
        26c790:	e59f0004 	ldr	r0, [pc, #4]	; 26c79c <TVoyagerMiscIntfImpl::GetGDebuggerBits(void)+0xc>
        26c794:	e5900000 	ldr	r0, [r0]
        26c798:	e1a0f00e 	mov	pc, lr
        26c79c:	000013f4 	streqd	r1, [r0], -r4
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::RequestAssignment(unsigned long, TDMAChannelDiscriptor *)
 * Address: 0026c7a0
 */
TVoyagerMiscIntfImpl::RequestAssignment(unsigned long, TDMAChannelDiscriptor *) {
    /*
        26c7a0:	e5900020 	ldr	r0, [r0, #32]	; fField32
        26c7a4:	ea5ff33e 	b	1a694a4 <TDMAManager::$RequestAssignment(unsigned long, TDMAChannelDiscriptor *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::PowerOnAssignment(unsigned long)
 * Address: 0026c7a8
 */
TVoyagerMiscIntfImpl::PowerOnAssignment(unsigned long) {
    /*
        26c7a8:	e5900020 	ldr	r0, [r0, #32]	; fField32
        26c7ac:	ea5ff33d 	b	1a694a8 <TDMAManager::$PowerOnAssignment(unsigned long)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::PowerOffAssignment(unsigned long)
 * Address: 0026c7b0
 */
TVoyagerMiscIntfImpl::PowerOffAssignment(unsigned long) {
    /*
        26c7b0:	e5900020 	ldr	r0, [r0, #32]	; fField32
        26c7b4:	ea5ff33c 	b	1a694ac <TDMAManager::$PowerOffAssignment(unsigned long)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::WriteGPIOPullup(unsigned char, unsigned char, unsigned char *)
 * Address: 0026c7b8
 */
TVoyagerMiscIntfImpl::WriteGPIOPullup(unsigned char, unsigned char, unsigned char *) {
    /*
        26c7b8:	e20110ff 	and	r1, r1, #255	; 0xff
        26c7bc:	e20220ff 	and	r2, r2, #255	; 0xff
        26c7c0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26c7c4:	ea5fef21 	b	1a68450 <TGPIOInterface::$WriteGPIOPullup(unsigned char, unsigned char, unsigned char *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::WriteGPIOData(unsigned char, unsigned char, unsigned char *)
 * Address: 0026c7c8
 */
TVoyagerMiscIntfImpl::WriteGPIOData(unsigned char, unsigned char, unsigned char *) {
    /*
        26c7c8:	e20110ff 	and	r1, r1, #255	; 0xff
        26c7cc:	e20220ff 	and	r2, r2, #255	; 0xff
        26c7d0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26c7d4:	ea667f8d 	b	1c0c610 <TGPIOInterface::$WriteGPIOData(unsigned char, unsigned char, unsigned char *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::ReadGPIOData(unsigned char, unsigned long *)
 * Address: 0026c7d8
 */
TVoyagerMiscIntfImpl::ReadGPIOData(unsigned char, unsigned long *) {
    /*
        26c7d8:	e20110ff 	and	r1, r1, #255	; 0xff
        26c7dc:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26c7e0:	ea6007ca 	b	1a6e710 <TGPIOInterface::$ReadGPIOData(unsigned char, unsigned long *)>
    */
}

/**
 * Symbol: TVoyagerMiscIntfImpl::RegisterGPIOInterrupt(unsigned char, void *, void (*)(void *), unsigned long)
 * Address: 0026c7e4
 */
TVoyagerMiscIntfImpl::RegisterGPIOInterrupt(unsigned char, void *, void (*)(void *), unsigned long) {
    /*
        26c7e4:	e1a0c00d 	mov	ip, sp
        26c7e8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        26c7ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        26c7f0:	e1a0c003 	mov	ip, r3
        26c7f4:	e20110ff 	and	r1, r1, #255	; 0xff
        26c7f8:	e59b3004 	ldr	r3, [fp, #4]
        26c7fc:	e92d0008 	stmdb	sp!, {r3}
        26c800:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26c804:	e1a0300c 	mov	r3, ip
        26c808:	eb6003b8 	bl	1a6d6f0 <TGPIOInterface::$RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)>
        26c80c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__20TVoyagerMiscIntfImplSFv
 * Address: 00385154
 */
void TVoyagerMiscIntfImpl::ClassInfo() {
    /*
        385154:	e24f0044 	sub	r0, pc, #68	; 0x44
        385158:	e1a0f00e 	mov	pc, lr
        38515c:	e3a00000 	mov	r0, #0	; 0x0
        385160:	e1a0f00e 	mov	pc, lr
        385164:	54566f79 	ldrplb	r6, [r6], -#3961
        385168:	61676572 	cmnvs	r7, r2, ror r5
        38516c:	4d697363 	stcmil	3, cr7, [r9, -#396]!
        385170:	496e7466 	stmmidb	lr!, {r1, r2, r5, r6, sl, ip, sp, lr}^
        385174:	496d706c 	stmmidb	sp!, {r2, r3, r5, r6, ip, sp, lr}^
        385178:	0054566f 	subeqs	r5, r4, pc, ror #12
        38517c:	79616765 	stmvcdb	r1!, {r0, r2, r5, r6, r8, r9, sl, sp, lr}^
        385180:	724d6973 	subvc	r6, sp, #1884160	; 0x1cc000
        385184:	63496e74 	cmpvs	r9, #1856	; 0x740
        385188:	66000000 	strvs	r0, [r0], -r0
        38518c:	00000000 	andeq	r0, r0, r0
        385190:	eaffffef 	b	385154 <ClassInfo__20TVoyagerMiscIntfImplSFv>
        385194:	eafb9d03 	b	26c5a8 <TVoyagerMiscIntfImpl::New(void)>
        385198:	eafb9d39 	b	26c684 <TVoyagerMiscIntfImpl::Delete(void)>
        38519c:	eafb9d59 	b	26c708 <TVoyagerMiscIntfImpl::WriteGPIODir(unsigned char, unsigned char, unsigned char *)>
        3851a0:	eafb9d6f 	b	26c764 <TVoyagerMiscIntfImpl::WriteGPIOPolarity(unsigned char, unsigned char, unsigned char *)>
        3851a4:	eafb9d83 	b	26c7b8 <TVoyagerMiscIntfImpl::WriteGPIOPullup(unsigned char, unsigned char, unsigned char *)>
        3851a8:	eafb9d86 	b	26c7c8 <TVoyagerMiscIntfImpl::WriteGPIOData(unsigned char, unsigned char, unsigned char *)>
        3851ac:	eafb9d89 	b	26c7d8 <TVoyagerMiscIntfImpl::ReadGPIOData(unsigned char, unsigned long *)>
        3851b0:	eafb9d8b 	b	26c7e4 <TVoyagerMiscIntfImpl::RegisterGPIOInterrupt(unsigned char, void *, void (*)(void *), unsigned long)>
        3851b4:	eafb9ce2 	b	26c544 <TVoyagerMiscIntfImpl::DeregisterInterrupt(GPIOIntObject *)>
        3851b8:	eafb9ce3 	b	26c54c <TVoyagerMiscIntfImpl::EnableInterrupt(GPIOIntObject *)>
        3851bc:	eafb9ce4 	b	26c554 <TVoyagerMiscIntfImpl::DisableInterrupt(GPIOIntObject *)>
        3851c0:	eafb9ce5 	b	26c55c <TVoyagerMiscIntfImpl::ClearInterrupt(GPIOIntObject *)>
        3851c4:	eafb9ce6 	b	26c564 <TVoyagerMiscIntfImpl::SetAndClearInterruptFlags(GPIOIntObject *, unsigned long, unsigned long)>
        3851c8:	eafb9ce7 	b	26c56c <TVoyagerMiscIntfImpl::GetInterruptFlags(GPIOIntObject *)>
        3851cc:	eafb9ce8 	b	26c574 <TVoyagerMiscIntfImpl::MapGPIOFunctionToBit(unsigned char, unsigned char *)>
        3851d0:	eafb9cea 	b	26c580 <TVoyagerMiscIntfImpl::MapGPIOFunctionToBitMask(unsigned char, unsigned long *)>
        3851d4:	eafb9cec 	b	26c58c <TVoyagerMiscIntfImpl::WriteDIOPins(unsigned char, unsigned char, unsigned char *)>
        3851d8:	eafb9cef 	b	26c59c <TVoyagerMiscIntfImpl::ReadDIOPins(unsigned char, unsigned long *)>
        3851dc:	eafb9d07 	b	26c600 <TVoyagerMiscIntfImpl::WriteDIODir(unsigned char, unsigned char, unsigned char *)>
        3851e0:	eafb9d0a 	b	26c610 <TVoyagerMiscIntfImpl::WriteDIOPullup(unsigned char, unsigned char, unsigned char *)>
        3851e4:	eafb9d0d 	b	26c620 <TVoyagerMiscIntfImpl::RegisterBIOInterrupt(unsigned char, void *, void (*)(void *), unsigned long)>
        3851e8:	eafb9d17 	b	26c64c <TVoyagerMiscIntfImpl::DeregisterInterrupt(KeynesIntObject *)>
        3851ec:	eafb9d18 	b	26c654 <TVoyagerMiscIntfImpl::EnableInterrupt(KeynesIntObject *)>
        3851f0:	eafb9d19 	b	26c65c <TVoyagerMiscIntfImpl::DisableInterrupt(KeynesIntObject *)>
        3851f4:	eafb9d1a 	b	26c664 <TVoyagerMiscIntfImpl::ClearInterrupt(KeynesIntObject *)>
        3851f8:	eafb9d1b 	b	26c66c <TVoyagerMiscIntfImpl::SetInterruptFlags(KeynesIntObject *, unsigned long)>
        3851fc:	eafb9d1c 	b	26c674 <TVoyagerMiscIntfImpl::GetInterruptFlags(KeynesIntObject *)>
        385200:	eafb9d1d 	b	26c67c <TVoyagerMiscIntfImpl::BIOReadRegister(int)>
        385204:	eafb9d20 	b	26c68c <TVoyagerMiscIntfImpl::BIOWriteCommand(int, unsigned long)>
        385208:	eafb9d21 	b	26c694 <TVoyagerMiscIntfImpl::BIOFIFOWriteCommand(int, unsigned long)>
        38520c:	eafb9d22 	b	26c69c <TVoyagerMiscIntfImpl::ReadBIOStatus(unsigned long)>
        385210:	eafb9d23 	b	26c6a4 <TVoyagerMiscIntfImpl::MapDIOFunctionToBit(unsigned char, unsigned char *)>
        385214:	eafb9d25 	b	26c6b0 <TVoyagerMiscIntfImpl::MapDIOFunctionToBitMask(unsigned char, unsigned long *)>
        385218:	eafb9d27 	b	26c6bc <TVoyagerMiscIntfImpl::GetSample(int, unsigned long, void (*)(void *, long, unsigned long), void *)>
        38521c:	eafb9d30 	b	26c6e4 <TVoyagerMiscIntfImpl::UsePolling(unsigned char)>
        385220:	eafb9d32 	b	26c6f0 <TVoyagerMiscIntfImpl::SetSampleSize(int)>
        385224:	eafb9d33 	b	26c6f8 <TVoyagerMiscIntfImpl::PrimeADCPenWait(void)>
        385228:	eafb9d34 	b	26c700 <TVoyagerMiscIntfImpl::ClearADCPenWait(void)>
        38522c:	eafb9d39 	b	26c718 <TVoyagerMiscIntfImpl::Discharge(void)>
        385230:	eafb9d3a 	b	26c720 <TVoyagerMiscIntfImpl::WakeUp(void)>
        385234:	eafb9d3b 	b	26c728 <TVoyagerMiscIntfImpl::ShutDown(void)>
        385238:	eafb9d3c 	b	26c730 <TVoyagerMiscIntfImpl::AcquireIRQTimer(void (*)(void *, unsigned long), void *)>
        38523c:	eafb9d3d 	b	26c738 <TVoyagerMiscIntfImpl::ReleaseIRQTimer(IRQTimer *)>
        385240:	eafb9d3e 	b	26c740 <TVoyagerMiscIntfImpl::ReleaseIRQTimers(void *)>
        385244:	eafb9d3f 	b	26c748 <TVoyagerMiscIntfImpl::SetIRQTimer(IRQTimer *, unsigned long, unsigned long)>
        385248:	eafb9d40 	b	26c750 <TVoyagerMiscIntfImpl::ResetIRQTimer(IRQTimer *)>
        38524c:	eafb9d41 	b	26c758 <TVoyagerMiscIntfImpl::InitIRQTimer(IRQTimer *)>
        385250:	eafb9d42 	b	26c760 <TVoyagerMiscIntfImpl::SendPowerSwitchEvent(unsigned long)>
        385254:	eafb9d46 	b	26c774 <TVoyagerMiscIntfImpl::SaveCPUStateAndStopSystem(void)>
        385258:	eafb9d46 	b	26c778 <TVoyagerMiscIntfImpl::DebuggerPowerCycleProc(unsigned char)>
        38525c:	eafb9d47 	b	26c780 <TVoyagerMiscIntfImpl::GetGNewtConfig(void)>
        385260:	eafb9d4a 	b	26c790 <TVoyagerMiscIntfImpl::GetGDebuggerBits(void)>
        385264:	eafb9d4d 	b	26c7a0 <TVoyagerMiscIntfImpl::RequestAssignment(unsigned long, TDMAChannelDiscriptor *)>
        385268:	eafb9d4e 	b	26c7a8 <TVoyagerMiscIntfImpl::PowerOnAssignment(unsigned long)>
        38526c:	eafb9d4f 	b	26c7b0 <TVoyagerMiscIntfImpl::PowerOffAssignment(unsigned long)>
        385270:	00000000 	andeq	r0, r0, r0
        385274:	00000048 	andeq	r0, r0, r8, asr #32
        385278:	00000056 	andeq	r0, r0, r6, asr r0
        38527c:	0000005d 	andeq	r0, r0, sp, asr r0
        385280:	00000070 	andeq	r0, r0, r0, ror r0
        385284:	00000084 	andeq	r0, r0, r4, lsl #1
        385288:	ea5beb57 	b	1a7ffec <$Sizeof__17TAppleTalkServiceSFv>
        385294:	ea5bdef3 	b	1a7ce68 <TAppleTalkService::$New(void)>
        385298:	ea5bce62 	b	1a78c28 <TAppleTalkService::$Delete(void)>
        3852a8:	ea000001 	b	3852b4 <ClassInfo__17TAppleTalkServiceSFv+0x8>
    */
}

