#ifndef __TSERIALCHIP16450_H
#define __TSERIALCHIP16450_H

#include "Protocols.h"
#include "HAL/SerialChipV2.h"

// Forward declarations
class TCardHandler;
class TCardSocket;
class TOption;
class TCMOSerialIOParms;
class InterruptObject;

/*
    TSerialChip16450
    
    Implementation of the TSerialChip protocol for 16450-compatible UART chips
    found on PCMCIA serial cards. This is a simple async-only serial chip
    without DMA support, designed for hot-pluggable modem cards.
    
    The 16450 is the industry-standard UART used in many PC-compatible serial
    cards. It has 8 registers accessed at consecutive I/O addresses:
    
    Offset  Name    Read                Write
    0       RBR     Receive Buffer      THR (Transmit Holding)
    1       IER     Interrupt Enable    IER (Interrupt Enable)
    2       IIR     Interrupt Ident     FCR (FIFO Control - 16550 only)
    3       LCR     Line Control        LCR (Line Control)
    4       MCR     Modem Control       MCR (Modem Control)
    5       LSR     Line Status         (Read only)
    6       MSR     Modem Status        (Read only)
    7       SCR     Scratch             SCR (Scratch)
    
    When LCR bit 7 is set (DLAB=1), offsets 0-1 access the baud rate divisor.
*/

class TSerialChip16450 : public TProtocol {
public:
    static TSerialChip16450* New(void);
    void Delete(void);
    
    // TSerialChip Protocol Methods
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
    void SerialInterrupt(TCardSocket * cardSocket);
    void CheckLineStatusReg();
    void CheckModemStatusReg();
    void ResetState();
    unsigned char ReadSerReg(unsigned long offset);
    void WriteSerReg(unsigned long offset, unsigned char value);

private:
    // TProtocol: 0: fRuntime, 4: fRealThis, 8: fBTable, 12: fMonitorId
    
    void *      fSerialTool;        // 16 - Tool that installed the handler
    SCCChannelInts fIntHandlers;    // 20 (16 bytes) - 4 interrupt callback pointers
                                    //   +20: TxBEmptyIntHandler
                                    //   +24: ExtStsIntHandler  
                                    //   +28: RxCAvailIntHandler
                                    //   +32: RxCSpecialIntHandler
    
    TCardSocket * fCardSocket;      // 36 - PCMCIA card socket
    TCardHandler * fCardHandler;    // 40 - PCMCIA card handler
    void *      fTimerObject;       // 44 - Timer for register access delays
    unsigned char * fBaseRegAddr;   // 48 - Base I/O address for UART registers
    
    long        fChipType;          // 52 - Chip detection (0xFF=unknown, 1=16450, 2=16550)
    long        fPortID;            // 56 - Serial port ID for registry
    long        fCurrentSpeed;      // 60 - Current baud rate
    long        fSpeedMultiplier;   // 64 - Speed calculation helper
    long        fClockDivisor;      // 68 - Clock divisor (4 * baud rate)
    
    // Hardware register shadow copies (72-79)
    unsigned char fRxErrorStatus;   // 72 - Cached receive error status (LSR bits 1-3)
    unsigned char fSerialStatus;    // 73 - Cached serial status (MSR bits)
    unsigned char fBaudRateLow;     // 74 - Baud rate divisor low byte (DLL)
    unsigned char fBaudRateHigh;    // 75 - Baud rate divisor high byte (DLM)
    unsigned char fLineControlReg;  // 76 - Line Control Register shadow (LCR)
    unsigned char fModemControlReg; // 77 - Modem Control Register shadow (MCR)
    unsigned char fInterruptEnableReg; // 78 - Interrupt Enable Register shadow (IER)
    unsigned char fTxBEmptyFlag;    // 79 - Transmit buffer empty count/flag
    
    // State flags (80-87)
    unsigned char fPowerOn;         // 80 - Power state (0=off, 1=on)
    unsigned char fIsRegistered;    // 81 - Registry state
    unsigned char fIsInstalled;     // 82 - Handler installation state
    unsigned char fIsCardPresent;   // 83 - Card presence flag
    unsigned char fInterruptsEnabled; // 84 - Global interrupt enable state
    unsigned char fPadding85;       // 85 - Padding
    unsigned char fPadding86;       // 86 - Padding
    unsigned char fPadding87;       // 87 - Padding
    
    InterruptObject * fInterruptObj;// 88 - Card interrupt handler object
};

/*
    16450 UART Register Offsets (from fBaseRegAddr):
    
    Offset 0 (RBR/THR/DLL):
        - Read:  RBR - Receive Buffer Register (data in)
        - Write: THR - Transmit Holding Register (data out)
        - DLAB=1: DLL - Divisor Latch Low byte
    
    Offset 1 (IER/DLM):
        - R/W: IER - Interrupt Enable Register
            Bit 0: Enable Received Data Available Interrupt
            Bit 1: Enable Transmitter Holding Register Empty Interrupt
            Bit 2: Enable Receiver Line Status Interrupt
            Bit 3: Enable Modem Status Interrupt
        - DLAB=1: DLM - Divisor Latch High byte
    
    Offset 2 (IIR/FCR):
        - Read: IIR - Interrupt Identification Register
            Bits 0-2: Interrupt ID
                0x00 = Modem Status
                0x02 = Transmitter Holding Register Empty
                0x04 = Received Data Available
                0x06 = Line Status Error
            Bit 0 = 0: Interrupt pending
            Bit 0 = 1: No interrupt
        - Write: FCR - FIFO Control (16550+ only, no effect on 16450)
    
    Offset 3 (LCR):
        - R/W: LCR - Line Control Register
            Bits 0-1: Word length (00=5, 01=6, 10=7, 11=8 bits)
            Bit 2: Stop bits (0=1, 1=1.5/2)
            Bit 3: Parity enable
            Bits 4-5: Parity type (00=odd, 01=even, 10=mark, 11=space)
            Bit 6: Set break
            Bit 7: DLAB - Divisor Latch Access Bit
    
    Offset 4 (MCR):
        - R/W: MCR - Modem Control Register
            Bit 0: DTR (Data Terminal Ready)
            Bit 1: RTS (Request To Send)
            Bit 2: Out1 (auxiliary output)
            Bit 3: Out2 (auxiliary output, often enables interrupts)
            Bit 4: Loopback mode
    
    Offset 5 (LSR):
        - Read: LSR - Line Status Register
            Bit 0: Data Ready
            Bit 1: Overrun Error
            Bit 2: Parity Error
            Bit 3: Framing Error
            Bit 4: Break Interrupt
            Bit 5: Transmitter Holding Register Empty (THRE)
            Bit 6: Transmitter Empty
            Bit 7: Error in receiver FIFO
    
    Offset 6 (MSR):
        - Read: MSR - Modem Status Register
            Bit 0: Delta CTS
            Bit 1: Delta DSR
            Bit 2: Trailing edge RI
            Bit 3: Delta DCD
            Bit 4: CTS
            Bit 5: DSR
            Bit 6: RI (Ring Indicator)
            Bit 7: DCD (Data Carrier Detect)
    
    Offset 7 (SCR):
        - R/W: SCR - Scratch Register (for testing)
*/

#endif
