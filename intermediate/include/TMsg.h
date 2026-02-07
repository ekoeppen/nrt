#ifndef __INFERRED_TMSG_H
#define __INFERRED_TMSG_H

class TMsg {
public:
	void Dispose();
	void IMsg();
	void Make();
	void Msg();
	void MsgChar();
	void MsgFile();
	void MsgHex();
	void MsgLF();
	void MsgNum();
	void MsgPrintf();
	void MsgStr();
	void MsgType();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
};

#endif
