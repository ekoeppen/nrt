#ifndef __TSERIALCHIPVOYAGER_H
#define __TSERIALCHIPVOYAGER_H

#include "Protocols.h"
#include "HAL/SerialChipV2.h"
#include "HAL/DelayTimer.h"

// Forward declarations
class TCircleBuf;
class TOption;
class TCMOSerialIOParms;
class TSerialDMAEngine;
class TCardSocket;
class TCardHandler;
class THermesIRControl;
class InterruptObject;

class TSerialChipVoyager : public TProtocol {
public:
    static TSerialChipVoyager* New(void);
    void Delete(void);
    
    // Protocol Methods
    NewtonErr InstallChipHandler(void * serialTool, SCCChannelInts * intHandlers);
    NewtonErr RemoveChipHandler(void * serialTool);
    void PutByte(unsigned char nextChar);
    void ResetTxBEmpty();
    unsigned char GetByte();
    Boolean TxBufEmpty();
    Boolean RxBufFull();
    RxErrorStatus GetRxErrorStatus();
    SerialStatus GetSerialStatus();
    void ResetSerialStatus();
    void SetSerialOutputs(unsigned long control);
    void ClearSerialOutputs(unsigned long control);
    unsigned long GetSerialOutputs();
    void PowerOff();
    void PowerOn();
    Boolean PowerIsOn();
    void SetInterruptEnable(unsigned char enable);
    void Reset();
    void SetBreak(unsigned char assert);
    unsigned long SetSpeed(unsigned long bitsPerSec);
    void SetIOParms(TCMOSerialIOParms * opt);
    void Reconfigure();
    NewtonErr Init(TCardSocket * theCardSocket, TCardHandler * theCardHandler, unsigned char * baseRegAddr);
    void CardRemoved();
    unsigned long GetFeatures();
    NewtonErr InitByOption(TOption * option);
    NewtonErr ProcessOption(TOption * option);
    void SetSerialMode(unsigned long mode);
    void SysEventNotify(unsigned long event);
    void SetTxDTransceiverEnable(unsigned char enable);
    unsigned char GetByteAndStatus(unsigned char * status);
    void SetIntSourceEnable(unsigned long source, unsigned char enable);
    Boolean AllSent();
    void ConfigureForOutput(unsigned char enable);
    NewtonErr InitTxDMA(TCircleBuf * buffer, void (*callback)(void *));
    NewtonErr InitRxDMA(TCircleBuf * buffer, unsigned long threshold, void (*callback)(void *, unsigned long));
    void TxDMAControl(unsigned char command);
    void RxDMAControl(unsigned char command);
    void SetSDLCAddress(unsigned char address);
    void ReEnableReceiver(unsigned char reason);
    Boolean LinkIsFree(unsigned char checkTime);
    void SendControlPacket(unsigned char p1, unsigned char p2, unsigned char p3);
    NewtonErr WaitForPacket(unsigned long timeout);
    void WaitForAllSent();

    // Internal methods
    void InitializeForNextHandler(void);
    void SerialInterrupt(void);

private:
    // TProtocol: 0: fRuntime, 4: fRealThis, 8: fBTable, 12: fMonitorId
    void *      fSerialTool;        // 16 - Tool that installed the handler
    SCCChannelInts fIntHandlers;    // 20 (16 bytes) - Interrupt handlers
    void *      fBaseAddress;       // 36 - Hardware base address
    long        fChipType;          // 40 - Chip type/mode (0=async, 1=IR, 2=sync, 3=LocalTalk)
    long        fClockRate;         // 44 - Clock rate for baud calculations
    long        fSerialMode;        // 48 - Serial mode flags (async/sync/halfduplex/polled)
    
    // Offsets 52-68 appear unused or temporary
    long        fField52;           // 52
    long        fPortID;            // 56 - Serial port ID for registry
    long        fSerialModeFlags;   // 60 - Current mode flags
    long        fField64;           // 64
    long        fField68;           // 68
    
    TDelayTimer fDelayTimer;        // 72 (12 bytes) - Timer for delays
    unsigned char fField84;         // 84 - Status flags
    unsigned char fPowerOn;         // 85 - Power state
    unsigned char fIsRegistered;    // 86 - Registration state
    unsigned char fReconfigure;     // 87 - Reconfigure flag
    unsigned char fSerialStatusReg; // 88 - Hardware status register cache
    unsigned char fField89;         // 89
    unsigned char fField90;         // 90
    unsigned char fField91;         // 91
    
    // Hardware register shadow values (92-107) - 16 bytes for chip configuration
    unsigned char fLineControl;     // 92 - Line control bits (parity, stop bits)
    unsigned char fDataBitsReg;     // 93 - Data bits configuration
    unsigned char fParityReg;       // 94 - Parity configuration
    unsigned char fStopBitsReg;     // 95 - Stop bits configuration
    unsigned char fSDLCAddress;     // 96 - SDLC node address
    unsigned char fRxControlReg;    // 97 - Receive control register
    unsigned char fTxControlReg;    // 98 - Transmit control register
    unsigned char fTxDEnable;       // 99 - TxD transceiver enable
    unsigned char fInterruptEnableReg; // 100 - Interrupt enable bits
    unsigned char fField101;        // 101
    unsigned char fField102;        // 102
    unsigned char fBaudRateLow;     // 103 - Baud rate divisor low byte
    unsigned char fBaudRateHigh;    // 104 - Baud rate divisor high byte
    unsigned char fField105;        // 105
    unsigned char fField106;        // 106
    unsigned char fSDLCControlReg;  // 107 - SDLC control register
    
    long        fInterruptObject;   // 108 - Interrupt object pointer
    InterruptObject* fPrimaryIntObj;// 112 - Primary interrupt handler
    TSerialDMAEngine * fTxDMAEngine;// 116 - Transmit DMA engine
    TSerialDMAEngine * fRxDMAEngine;// 120 - Receive DMA engine
    
    // DMA callback functions and buffers
    void (*fTxDMACallback)(void *); // 124 - Transmit DMA completion callback
    TCircleBuf * fTxDMABuffer;      // 128 - Transmit DMA buffer
    void (*fRxDMACallback)(void *, unsigned long); // 132 - Receive DMA callback
    TCircleBuf * fRxDMABuffer;      // 136 - Receive DMA buffer
    
    unsigned char fDMASupported;    // 140 - DMA support flags
    unsigned char fTxDMAState;      // 141 - Transmit DMA state (0=none, 1=async, 2=sync)
    unsigned char fTxDMAPaused;     // 142 - Transmit DMA pause flag
    unsigned char fRxDMAState;      // 143 - Receive DMA state (0=none, 1=async, 2=sync)
    unsigned long fRxDMAThreshold;  // 144 - Receive DMA notification level
    
    void *      fLocalTalkTimer;    // 148 - LocalTalk polling timer
    void *      fFIQTimer;          // 152 - Fast interrupt timer object
    THermesIRControl * fIRControl;  // 156 - IR control object (for chip type 1)
    
    unsigned char fField160;        // 160 - Reserved/unused
    unsigned char fField161;        // 161 - Reserved/unused
    unsigned char fField162;        // 162 - Reserved/unused
    unsigned char fField163;        // 163 - Reserved/unused
    long        fField164;          // 164 - Reserved/unused
    long        fField168;          // 168 - Reserved/unused
    long        fField172;          // 172 - Reserved/unused
};

#endif
