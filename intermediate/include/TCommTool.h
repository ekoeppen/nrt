#ifndef __INFERRED_TCOMMTOOL_H
#define __INFERRED_TCOMMTOOL_H

// ─────────────────────────────────────────────────────────────────────────────
//  MsgContainer  —  per-channel IPC request slot (7 channels × 24 bytes)
//
//  Confirmed from CompleteRequest assembly:
//    r6 = this + ch * 24          (base pointer into array)
//    ldrb [r6, #BASE]             (pending flag; BASE = 0x94 for TCommTool,
//                                                    BASE = 0x44 for TConnectionEnd)
//    i.e. container[ch].fPending = *(arrayBase + ch * 24 + 0)
//
//  Sub-offsets within each 24-byte slot:
//    +0x00  fPending    (UChar) — set to 1 when a request arrives in TaskMain,
//                                 cleared to 0 in CompleteRequest
//    +0x04  fReqType    (long)  — copy of the request type / fField48 tag
//    +0x08  fMsgToken[4](long[4]) — 16-byte TUMsgToken copy from receive buffer
//
//  Total stride = 24 (0x18).
// ─────────────────────────────────────────────────────────────────────────────
struct MsgContainer {
    UChar   fPending;           // +0x00  request outstanding flag
    UChar   _pad[3];            // +0x01
    long    fReqType;           // +0x04  request type tag
    long    fMsgToken[4];       // +0x08  TUMsgToken (16 bytes)
};                              // total: 24 bytes (0x18)

static_assert(sizeof(MsgContainer) == 24, "MsgContainer must be 24 bytes");

// Number of IPC channels
static const int kNumCommToolChannels = 7;

// Channel index for GetCommEvent requests
static const CommToolChannelNumber kGetEventChannel = (CommToolChannelNumber)3;

// Sentinel stored in fGetEventReply.fResult when no event is buffered
static const NewtonErr kGetCommEventPending       = -16016; // 0xFFFFC170
static const NewtonErr kCommErrNoGetCommEvent     = -16015; // 0xFFFFC171
static const NewtonErr kCommErrKilledGetCommEvent = -16005; // 0xFFFFC17B


// ─────────────────────────────────────────────────────────────────────────────
//  TCommTool  —  inferred class definition
//
//  Object size: ~632 bytes (0x278)
//  Confirmed fields:
//    +0x00  vtable pointer           (from TAskUser / TUTaskWorld base)
//    +0x08  fField8                  (long)
//    +0x10  fField16                 (long)
//    +0x44  fMsgSize                 (long)   — size of last received IPC msg
//    +0x48  fMsgData[0x40]           (byte[64]) — inline IPC receive buffer
//    +0x94  fMsgContainers[7]        (MsgContainer[7], 7×24=168 bytes, ends at +0x13B)
//    +0xDC  = fMsgContainers[3].fPending  (GetEvent channel pending flag)
//    +0x178 fOpenOptInfo             (was fControlOptInfo — corrected from Blunt-2 analysis)
//    +0x1D8 fGetEventReply           (TCommToolGetEventReply, 36 bytes, inline)
//    +0x1E0 fGetEventReply.fResult   (NewtonErr state sentinel, sub-offset +8)
//    +0x1C8 fGetBufferList           (pointer)
//    +0x1CC fTCommToolInputBufferSize (long)
// ─────────────────────────────────────────────────────────────────────────────
class TCommTool {
public:
    void Accept();
    void AcceptComplete();
    void AcceptOptionsComplete();
    void AcceptStart();
    void AddCurrentOptions();
    void AddDefaultOptions();
    void AllowAbort();
    void Bind();
    void BindComplete();
    void BindOptionsComplete();
    void BindStart();
    void Close();
    void CloseComplete();
    void CompleteRequest(CommToolChannelNumber channel, NewtonErr result);
    void CompleteRequest(CommToolChannelNumber channel, NewtonErr result, TCommToolReply& reply);
    void Connect();
    void ConnectCheck();
    void ConnectComplete();
    void ConnectOptionsComplete();
    void ConnectStart();
    void CopyBackConnectPB();
    void CreatePort();
    void Disconnect();
    void DisconnectComplete();
    void DoControl();
    void DoKillControl();
    void DoKillGetCommEvent();
    void DoStatus();
    void FlushChannel();
    void ForwardOptions();
    void GetBytesImmediate();
    void GetCommEvent();
    void GetComplete();
    void GetConnectState();
    void GetNextTermProc();
    void GetOptionsComplete();
    void GetProtAddr();
    void GetToolPort();
    void HandleInternalEvent();
    void HandleReply();
    void HandleRequest();
    void HandleTimerTick();
    void HoldAbort();
    void ImportConnectPB();
    void InitAsyncRPCMsg();
    void KillGetComplete();
    void KillPutComplete();
    void KillRequestComplete(CommToolRequestType type, NewtonErr result);
    void Listen();
    void ListenComplete();
    void ListenOptionsComplete();
    void ListenStart();
    void Open();
    void OpenComplete();
    void OpenContinue();
    void OpenOptionsComplete();
    void OpenStart();
    void OptionMgmt();
    void OptionMgmtComplete();
    NewtonErr PostCommEvent(TCommToolGetEventReply& theEvent, NewtonErr result);
    void PrepControlRequest();
    void PrepGetRequest();
    void PrepKillRequest();
    void PrepPutRequest();
    void PrepResArbRequest();
    void ProcessCommOptionComplete();
    void ProcessControlOptions();
    void ProcessGetBytesOptionComplete();
    void ProcessGetBytesOptionStart();
    void ProcessOption();
    void ProcessOptionComplete();
    void ProcessOptionStart();
    void ProcessOptions();
    void ProcessOptionsCleanUp();
    void ProcessOptionsComplete();
    void ProcessOptionsContinue();
    void ProcessPutBytesOptionComplete();
    void ProcessPutBytesOptionStart();
    void PutComplete();
    void PutOptionsComplete();
    void Release();
    void ReleaseComplete();
    void ReleaseStart();
    CommToolChannelNumber RequestTypeToChannelNumber(CommToolRequestType type);
    void ResArbClaimNotification();
    void ResArbRelease();
    void ResArbReleaseComplete();
    void ResArbReleaseStart();
    void SetChannelFilter(CommToolRequestType type, UChar filter);
    void ShouldAbort();
    void StartAbort();
    TCommTool();
    void TaskConstructor();
    void TaskDestructor();
    void TaskMain();
    void TerminateComplete();
    void TerminateConnection();
    void UnRegisterPort();
    void Unbind();
    void UnbindComplete();
    void UnbindStart();
    ~TCommTool();

protected:
    // ── Base class fields (TUTaskWorld / TAskUser) ────────────────────────
    // +0x00  vtable
    long    fField8;                    // +0x08
    long    fField16;                   // +0x10
    long    fField24;                   // +0x18
    long    fField28;                   // +0x1C
    long    fField32;                   // +0x20
    long    fField36;                   // +0x24
    long    fField40;                   // +0x28
    long    fField44;                   // +0x2C  (was fField44, not yet named)

    // ── IPC receive buffer ────────────────────────────────────────────────
    long    fMsgSize;                   // +0x44  size of last received IPC message
    UChar   fMsgData[0x40];            // +0x48  inline 64-byte message data buffer

    // ── Per-channel request containers ───────────────────────────────────
    // 7 channels × 24 bytes = 168 bytes, spans +0x94..+0x13B
    // fMsgContainers[3].fPending = *(this + 0xDC)
    MsgContainer fMsgContainers[kNumCommToolChannels]; // +0x94

    // ── Additional fields (partially named) ──────────────────────────────
    long    fField140;                  // +0x8C  — NOTE: in TConnectionEnd this is
                                        //          fMsgContainers[3].fPending directly;
                                        //          in TCommTool the pending flag is at +0xDC
    char    fField148;                  // +0x94  (overlaps container array start in scaffold;
                                        //          needs reconciliation)
    long    fField152;                  // +0x98
    char    fField172;                  // +0xAC
    long    fField176;                  // +0xB0
    char    fField196;                  // +0xC4
    long    fField200;                  // +0xC8
    char    fField220;                  // +0xDC  = fMsgContainers[3].fPending

    // ── Option / connect state ────────────────────────────────────────────
    long    fField316;                  // +0x13C
    long    fField320;                  // +0x140
    char    fField324;                  // +0x144

    // ── Buffer and address management ─────────────────────────────────────
    long    fField372;                  // +0x174
    long    fOpenOptInfo;               // +0x178  (formerly fControlOptInfo — corrected)
    long    fField380;                  // +0x17C
    long    fField388;                  // +0x184

    // ── GetEvent reply buffer ─────────────────────────────────────────────
    // Inline TCommToolGetEventReply (36 bytes).
    // fGetEventReply.fResult (+0x1E0) is the state sentinel:
    //   kGetCommEventPending (-16016) = no event queued
    //   anything else                = event waiting for GetCommEvent to drain
    TCommToolGetEventReply fGetEventReply; // +0x1D8  (36 bytes, ends at +0x1FB)

    // ── Buffer list / input size ──────────────────────────────────────────
    void*   fGetBufferList;             // +0x1C8  (confirmed from TRFCOMMTool analysis)
    long    fTCommToolInputBufferSize;  // +0x1CC

    // ── Remaining scaffold-discovered fields ─────────────────────────────
    long    fField396;                  // +0x18C
    long    fField400;                  // +0x190  (= fGetEventReply.fResult alias above)
    long    fField404;                  // +0x194
    long    fField408;                  // +0x198
    long    fField412;                  // +0x19C
    long    fField424;                  // +0x1A8
    long    fField428;                  // +0x1AC
    long    fField432;                  // +0x1B0
    long    fField436;                  // +0x1B4
    long    fField448;                  // +0x1C0
    char    fField452;                  // +0x1C4
    char    fField453;                  // +0x1C5
    char    fField454;                  // +0x1C6
    char    fField455;                  // +0x1C7
    long    fField456;                  // +0x1C8  (alias for fGetBufferList above)
    long    fField460;                  // +0x1CC  (alias for fTCommToolInputBufferSize)
    char    fField464;                  // +0x1D0
    char    fField465;                  // +0x1D1
    char    fField466;                  // +0x1D2
    long    fField468;                  // +0x1D4
    long    fField480;                  // +0x1E0  (= fGetEventReply.fResult)
    long    fField488;                  // +0x1E8
    long    fField500;                  // +0x1F4
    long    fField504;                  // +0x1F8
    long    fField508;                  // +0x1FC
    char    fField512;                  // +0x200
    char    fField513;                  // +0x201
    long    fField516;                  // +0x204
    long    fField520;                  // +0x208
    long    fField524;                  // +0x20C
    long    fField528;                  // +0x210
    long    fField532;                  // +0x214
    long    fField536;                  // +0x218
    long    fField540;                  // +0x21C
    long    fField600;                  // +0x258
    long    fField604;                  // +0x25C
    long    fField608;                  // +0x260
    long    fField612;                  // +0x264
    long    fField616;                  // +0x268
};

#endif // __INFERRED_TCOMMTOOL_H
