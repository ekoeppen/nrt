#ifndef __INFERRED_TQDSCALER_H
#define __INFERRED_TQDSCALER_H

class TQDScaler {
public:
	void Cleanup();
	void ForceScaling();
	void GetActualClip();
	void GetActualVis();
	void GetTransformLevel();
	void LowLevelReplaceClip();
	void ReplaceClip();
	void ReplaceScaling();
	void RestoreScalingPen();
	void RestoreScalingRegions();
	void Setup();
	void SetupScalingPen();
	void SetupScalingRegions();
	void StartScaling();
	void StopScaling();
	TQDScaler();
	void TestFeature();
	void UseTransform();
	~TQDScaler();

protected:
	long fField4; // Offset: 4
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	char fField56; // Offset: 56
	char fField57; // Offset: 57
	long fField84; // Offset: 84
	long fField88; // Offset: 88
	long fField92; // Offset: 92
	long fField100; // Offset: 100
	long fField104; // Offset: 104
	long fField108; // Offset: 108
	long fField116; // Offset: 116
	long fField124; // Offset: 124
	long fField128; // Offset: 128
	long fField132; // Offset: 132
	long fField136; // Offset: 136
	long fField140; // Offset: 140
	long fField144; // Offset: 144
	long fField148; // Offset: 148
	long fField150; // Offset: 150
	long fField152; // Offset: 152
	long fField156; // Offset: 156
	long fField160; // Offset: 160
	long fField164; // Offset: 164
	long fField168; // Offset: 168
	long fField172; // Offset: 172
	long fField176; // Offset: 176
	long fField180; // Offset: 180
	long fField192; // Offset: 192
	long fField196; // Offset: 196
};

#endif
