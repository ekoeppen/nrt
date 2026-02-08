#include "NewtTypes.h"
#include "Protocols.h"
#include "SerialChipV2.h"

/*
	File:		TSerialChip.cpp

	Contains:	TSerialChip protocol glue implementation.
				This class acts as a proxy for various serial chip implementations
				(e.g., 16450, Voyager).

	Copyright:	 1993-1996 by Apple Computer, Inc., all rights reserved.
*/

extern "C" void * AllocInstanceByName(const char * protocol, const char * implementation);
extern "C" void FreeInstance(void * instance);

/**
 * Symbol: New__11TSerialChipSFPc
 * Address: 00384b0c
 */
TSerialChip * TSerialChip::New(char * implementation) {
    TSerialChip * proto = (TSerialChip *)AllocInstanceByName("TSerialChip", implementation);
    if (proto) {
        // fBTable[2] (offset 8) is the implementation's initialization method.
        typedef void (*InitProc)(const TProtocol *);
        ((InitProc)proto->fBTable[2])(proto->fRealThis);
    }
    return proto;
}

/**
 * Symbol: TSerialChip::Delete(void)
 * Address: 00384b38
 */
void TSerialChip::Delete() {
    // fBTable[3] (offset 12) is the implementation's delete method.
    typedef void (*DeleteProc)(const TProtocol *);
    ((DeleteProc)fBTable[3])(fRealThis);
    FreeInstance(this);
}

// --- Protocol Forwarding Helpers ---

#define FWD_0(slot) \
    ((void (*)(const TProtocol *))fBTable[slot])(fRealThis)

#define FWD_1(slot, t1, a1) \
    ((void (*)(const TProtocol *, t1))fBTable[slot])(fRealThis, a1)

#define FWD_2(slot, t1, a1, t2, a2) \
    ((void (*)(const TProtocol *, t1, t2))fBTable[slot])(fRealThis, a1, a2)

#define FWD_3(slot, t1, a1, t2, a2, t3, a3) \
    ((void (*)(const TProtocol *, t1, t2, t3))fBTable[slot])(fRealThis, a1, a2, a3)

#define FWD_RET(ret, slot) \
    return ((ret (*)(const TProtocol *))fBTable[slot])(fRealThis)

#define FWD_RET_1(ret, slot, t1, a1) \
    return ((ret (*)(const TProtocol *, t1))fBTable[slot])(fRealThis, a1)

#define FWD_RET_2(ret, slot, t1, a1, t2, a2) \
    return ((ret (*)(const TProtocol *, t1, t2))fBTable[slot])(fRealThis, a1, a2)

#define FWD_RET_3(ret, slot, t1, a1, t2, a2, t3, a3) \
    return ((ret (*)(const TProtocol *, t1, t2, t3))fBTable[slot])(fRealThis, a1, a2, a3)

// --- Protocol Methods ---

NewtonErr TSerialChip::InstallChipHandler(void * serialTool, SCCChannelInts * intHandlers) {
    FWD_RET_1(NewtonErr, 4, void *, serialTool, SCCChannelInts *, intHandlers);
}

NewtonErr TSerialChip::RemoveChipHandler(void * serialTool) {
    FWD_RET_1(NewtonErr, 5, void *, serialTool);
}

void TSerialChip::PutByte(unsigned char nextChar) {
    FWD_1(6, unsigned char, nextChar);
}

void TSerialChip::ResetTxBEmpty() {
    FWD_0(7);
}

unsigned char TSerialChip::GetByte() {
    FWD_RET(unsigned char, 8);
}

Boolean TSerialChip::TxBufEmpty() {
    FWD_RET(Boolean, 9);
}

Boolean TSerialChip::RxBufFull() {
    FWD_RET(Boolean, 10);
}

RxErrorStatus TSerialChip::GetRxErrorStatus() {
    FWD_RET(RxErrorStatus, 11);
}

SerialStatus TSerialChip::GetSerialStatus() {
    FWD_RET(SerialStatus, 12);
}

void TSerialChip::ResetSerialStatus() {
    FWD_0(13);
}

void TSerialChip::SetSerialOutputs(SerialOutputControl control) {
    FWD_1(14, SerialOutputControl, control);
}

void TSerialChip::ClearSerialOutputs(SerialOutputControl control) {
    FWD_1(15, SerialOutputControl, control);
}

SerialOutputControl TSerialChip::GetSerialOutputs() {
    FWD_RET(SerialOutputControl, 16);
}

void TSerialChip::PowerOff() {
    FWD_0(17);
}

void TSerialChip::PowerOn() {
    FWD_0(18);
}

Boolean TSerialChip::PowerIsOn() {
    FWD_RET(Boolean, 19);
}

void TSerialChip::SetInterruptEnable(Boolean enable) {
    FWD_1(20, Boolean, enable);
}

void TSerialChip::Reset() {
    FWD_0(21);
}

void TSerialChip::SetBreak(Boolean assert) {
    FWD_1(22, Boolean, assert);
}

InterfaceSpeed TSerialChip::SetSpeed(BitRate bitsPerSec) {
    FWD_RET_1(InterfaceSpeed, 23, BitRate, bitsPerSec);
}

void TSerialChip::SetIOParms(TCMOSerialIOParms * opt) {
    FWD_1(24, TCMOSerialIOParms *, opt);
}

void TSerialChip::Reconfigure() {
    FWD_0(25);
}

NewtonErr TSerialChip::Init(TCardSocket * theCardSocket, TCardHandler * theCardHandler, unsigned char * baseRegAddr) {
    FWD_RET_2(NewtonErr, 26, TCardSocket *, theCardSocket, TCardHandler *, theCardHandler, unsigned char *, baseRegAddr);
}

void TSerialChip::CardRemoved() {
    FWD_0(27);
}

unsigned long TSerialChip::GetFeatures() {
    FWD_RET(unsigned long, 28);
}

NewtonErr TSerialChip::InitByOption(TOption * option) {
    FWD_RET_1(NewtonErr, 29, TOption *, option);
}

NewtonErr TSerialChip::ProcessOption(TOption * option) {
    FWD_RET_1(NewtonErr, 30, TOption *, option);
}

void TSerialChip::SetSerialMode(unsigned long mode) {
    FWD_1(31, unsigned long, mode);
}

void TSerialChip::SysEventNotify(unsigned long event) {
    FWD_1(32, unsigned long, event);
}

void TSerialChip::SetTxDTransceiverEnable(Boolean enable) {
    FWD_1(33, Boolean, enable);
}

unsigned char TSerialChip::GetByteAndStatus(unsigned char * status) {
    FWD_RET_1(unsigned char, 34, unsigned char *, status);
}

void TSerialChip::SetIntSourceEnable(unsigned long source, Boolean enable) {
    FWD_2(35, unsigned long, source, Boolean, enable);
}

Boolean TSerialChip::AllSent() {
    FWD_RET(Boolean, 36);
}

void TSerialChip::ConfigureForOutput(Boolean enable) {
    FWD_1(37, Boolean, enable);
}

NewtonErr TSerialChip::InitTxDMA(TCircleBuf * buffer, void (*callback)(void *)) {
    FWD_RET_2(NewtonErr, 38, TCircleBuf *, buffer, void (*)(void *), callback);
}

NewtonErr TSerialChip::InitRxDMA(TCircleBuf * buffer, unsigned long threshold, void (*callback)(void *, unsigned long)) {
    FWD_RET_3(NewtonErr, 39, TCircleBuf *, buffer, unsigned long, threshold, void (*)(void *, unsigned long), callback);
}

void TSerialChip::TxDMAControl(unsigned char command) {
    FWD_1(40, unsigned char, command);
}

void TSerialChip::RxDMAControl(unsigned char command) {
    FWD_1(41, unsigned char, command);
}

void TSerialChip::SetSDLCAddress(unsigned char address) {
    FWD_1(42, unsigned char, address);
}

void TSerialChip::ReEnableReceiver(unsigned char reason) {
    FWD_1(43, unsigned char, reason);
}

Boolean TSerialChip::LinkIsFree(unsigned char checkTime) {
    FWD_RET_1(Boolean, 44, unsigned char, checkTime);
}

void TSerialChip::SendControlPacket(unsigned char p1, unsigned char p2, unsigned char p3) {
    FWD_3(45, unsigned char, p1, unsigned char, p2, unsigned char, p3);
}

NewtonErr TSerialChip::WaitForPacket(unsigned long timeout) {
    FWD_RET_1(NewtonErr, 46, unsigned long, timeout);
}

void TSerialChip::WaitForAllSent() {
    FWD_0(47);
}
