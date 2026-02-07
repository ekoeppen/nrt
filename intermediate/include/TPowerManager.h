#ifndef __INFERRED_TPOWERMANAGER_H
#define __INFERRED_TPOWERMANAGER_H

class TPowerManager {
public:
	void BacklightMessage();
	void DoCommand();
	void DoReply();
	void GetSizeOf();
	void MainConstructor();
	void MainDestructor();
	void PowerOffMessage();
	void PowerOffTimeout();
	TPowerManager();
	~TPowerManager();

protected:
	long fField132; // Offset: 132
	long fField136; // Offset: 136
	long fField140; // Offset: 140
	long fField144; // Offset: 144
	long fField164; // Offset: 164
	long fField168; // Offset: 168
};

#endif
