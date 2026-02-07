#ifndef __INFERRED_TCLIPPER_H
#define __INFERRED_TCLIPPER_H

class TClipper {
public:
	void Offset();
	void RecalcVisible();
	TClipper();
	void UpdateRegions();

protected:
	char fField8; // Offset: 8
};

#endif
