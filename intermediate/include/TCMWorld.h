#ifndef __INFERRED_TCMWORLD_H
#define __INFERRED_TCMWORLD_H

class TCMWorld {
public:
	void GetSizeOf();
	void MainConstructor();
	void MainDestructor();
	void MatchPendingServiceMessage();
	void MatchPendingStartInfo();
	void SCPCheck();
	void SCPLoad();
	void SetDevice();
	void SetLastPackage();
	TCMWorld();

protected:
	long fField4; // Offset: 4
	long fField24; // Offset: 24
	long fField216; // Offset: 216
	long fField220; // Offset: 220
};

#endif
