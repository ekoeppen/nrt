#ifndef __INFERRED_TSCPLOADER_H
#define __INFERRED_TSCPLOADER_H

class TSCPLoader {
public:
	void DeviceNotify();
	void DeviceNotifyCompletion();
	void GetLastDevice();
	void GetPackage();
	void GetSizeOf();
	void Look();
	void MainConstructor();
	void MainDestructor();
	void SCPInit();
	void SCPLoad();
	TSCPLoader();

protected:
	long fField4; // Offset: 4
	long fField112; // Offset: 112
	long fField116; // Offset: 116
	long fField120; // Offset: 120
	long fField136; // Offset: 136
	long fField140; // Offset: 140
	long fField144; // Offset: 144
	long fField148; // Offset: 148
	long fField152; // Offset: 152
};

#endif
