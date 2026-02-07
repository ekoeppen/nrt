#ifndef __INFERRED_TTSPSPART_H
#define __INFERRED_TTSPSPART_H

class TtspsPart {
public:
	void InstallFrame();
	void RemoveFrame();
	TtspsPart();
	~TtspsPart();

protected:
	long fField60; // Offset: 60
};

#endif
