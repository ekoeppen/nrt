#ifndef __INFERRED_TRTMPTABLEENTRY_H
#define __INFERRED_TRTMPTABLEENTRY_H

class TRTMPTableEntry {
public:
	void DoExtended();
	void DoNonExtended();
	void GleanHeader();
	void Init();
	TRTMPTableEntry();
	~TRTMPTableEntry();

protected:
	long fField4; // Offset: 4
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
};

#endif
