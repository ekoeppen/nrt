#include "TCommTool.h"
#include "CommToolPB.h"

/**
 * ─────────────────────────────────────────────────────────────────────────────
 *  TCommTool - Implementation Class for Communication Tools
 * ─────────────────────────────────────────────────────────────────────────────
 *  
 *  This class implements the background task logic for Newton OS serial tools.
 *  It handles asynchronous IPC via 7 distinct channels (Get, Put, Control, etc.)
 *  and manages a state machine that is partially shared with the protocol layer.
 * 
 *  CRITICAL ARCHITECTURAL NOTE:
 *  The Newton OS "CommToolProtocol" layer makes a specific assumption about
 *  the memory layout of TCommTool subclasses. Specifically, it expects a 
 *  "State" field (enum TCommToolState) to exist at offset 624 (0x270). 
 *  This offset is technically outside of the TCommTool base class (Size 620), 
 *  meaning every subclass MUST define a state variable at its very beginning 
 *  to satisfy the protocol layer's connectivity checks.
 */

/**
 * @brief Completes an IPC request by replying to a specific message token.
 */
void TCommTool::CompleteRequest(TUMsgToken& msgToken, NewtonErr result)
{
    if (msgToken.IsValid())
    {
        TCommToolReply reply;
        reply.fResult = result;
        msgToken.ReplyRPC(&reply, sizeof(reply), 0);
    }
}

/**
 * @brief Completes an IPC request with a custom reply object.
 */
void TCommTool::CompleteRequest(TUMsgToken& msgToken, NewtonErr result, TCommToolReply& reply)
{
    if (msgToken.IsValid())
    {
        reply.fResult = result;
        msgToken.ReplyRPC(&reply, sizeof(reply), 0);
    }
}

/**
 * @brief Completes a pending request on a specific logical channel.
 * 
 * Standard path for Get/Put/Control completion. Re-enables the channel filter.
 */
void TCommTool::CompleteRequest(CommToolChannelNumber channel, NewtonErr result)
{
    MsgContainer& container = fMsgContainers[channel];

    if (container.fPending)
    {
        container.fPending = false;

        // Re-enable the channel in the CommManager filter
        CommToolRequestType reqType = ChannelNumberToRequestType(channel);
        this->SetChannelFilter(reqType, true);

        // Send the IPC reply if a token is registered
        TUMsgToken& msgToken = *(TUMsgToken*)&container.fMsgToken;
        if (msgToken.IsValid())
        {
            TCommToolReply reply;
            reply.fResult = result;
            msgToken.ReplyRPC(&reply, sizeof(reply), 0);
        }
    }
}

/**
 * @brief Completes a pending channel request with a custom reply object.
 */
void TCommTool::CompleteRequest(CommToolChannelNumber channel, NewtonErr result, TCommToolReply& reply)
{
    MsgContainer& container = fMsgContainers[channel];

    if (container.fPending)
    {
        container.fPending = false;

        // Re-enable the channel in the CommManager filter
        CommToolRequestType reqType = ChannelNumberToRequestType(channel);
        this->SetChannelFilter(reqType, true);

        // Send the IPC reply if a token is registered
        TUMsgToken& msgToken = *(TUMsgToken*)&container.fMsgToken;
        if (msgToken.IsValid())
        {
            reply.fResult = result;
            msgToken.ReplyRPC(&reply, sizeof(reply), 0);
        }
    }
}

/**
 * @brief Posts a communication event to a pending GetCommEvent request.
 * 
 * IMPLEMENTATION NOTE: 
 * If no client is waiting for an event (channel 3 is not pending), this 
 * returns kCommErrNoGetCommEvent (-16015). THE CALLER MUST CHECK THIS RESULT.
 * If the error is returned, the caller should buffer the event in 
 * fGetEventReply (+0x1D8) to be picked up later during GetCommEvent() polling.
 */
NewtonErr TCommTool::PostCommEvent(TCommToolGetEventReply& theEvent, NewtonErr result)
{
    // Check if channel 3 (GetEvent) has a pending IPC request from an app task
    if (fMsgContainers[kGetEventChannel].fPending)
    {
        this->CompleteRequest(kGetEventChannel, result, theEvent);
        return noErr;
    }

    return kCommErrNoGetCommEvent;
}

/**
 * @brief Virtual poller for pending communication events.
 * 
 * Called by TConnectionEnd/CommManager to see if an event was missed and buffered.
 */
UByte* TCommTool::GetCommEvent()
{
    // Check if fGetEventReply (+0x1D8) has been populated with a buffered event.
    // The sentinel kGetCommEventPending (-16016) indicates the buffer is empty.
    if (fGetEventReply.fResult != kGetCommEventPending)
    {
        // Deliver the buffered event via PostCommEvent.
        this->PostCommEvent(fGetEventReply, noErr);

        // Reset the sentinel to mark the buffer as empty.
        fGetEventReply.fResult = kGetCommEventPending;

        // Return the address of the reply buffer to the caller.
        return (UByte*)&fGetEventReply;
    }

    return NULL;
}

/**
 * @brief Handles a Kill request targeting the GetCommEvent channel.
 */
void TCommTool::DoKillGetCommEvent()
{
    if (fMsgContainers[kGetEventChannel].fPending)
    {
        TCommToolGetEventReply killReply;
        this->CompleteRequest(kGetEventChannel, kCommErrKilledGetCommEvent, killReply);
    }

    // Acknowledge the kill operation (Bit 3 = GetCommEvent)
    this->KillRequestComplete((CommToolRequestType)(1 << kGetEventChannel), noErr);
}
