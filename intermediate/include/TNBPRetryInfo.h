#ifndef __INFERRED_TNBPRETRYINFO_H
#define __INFERRED_TNBPRETRYINFO_H

class TNBPRetryInfo {
public:
	void CalculateDuration();
	void CalculateExpGrading();
	void CalculateLinearGrading();
	TNBPRetryInfo();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
};

#endif
