#ifndef __INFERRED_TKEYBOARDTOOL_H
#define __INFERRED_TKEYBOARDTOOL_H

class TKeyboardTool {
public:
	void CancelAutoKey();
	void DataInObserver();
	void GetSizeOf();
	void GetToolName();
	void HandleReply();
	void IsRepeatable();
	void PowerOffEvent();
	void PowerOnEvent();
	void ProcessOptionStart();
	void RxDataAvailable();
	void SendAvailableKeys();
	void SendKeyEvent();
	void SerialEvents();
	void ShutDownKeyboard();
	TKeyboardTool();
	void TaskConstructor();
	void TaskDestructor();
	void TurnOnSerChip();
	void TxDataSent();

protected:
	long fField8; // Offset: 8
	long fField620; // Offset: 620
	long fField772; // Offset: 772
	char fField892; // Offset: 892
	long fField992; // Offset: 992
	long fField996; // Offset: 996
	long fField1124; // Offset: 1124
	char fField1152; // Offset: 1152
	char fField1153; // Offset: 1153
	long fField1176; // Offset: 1176
	long fField1200; // Offset: 1200
	long fField1204; // Offset: 1204
	long fField1212; // Offset: 1212
	long fField1216; // Offset: 1216
	long fField1220; // Offset: 1220
	long fField1224; // Offset: 1224
	char fField1260; // Offset: 1260
	char fField1261; // Offset: 1261
	char fField1262; // Offset: 1262
	char fField1263; // Offset: 1263
	char fField1264; // Offset: 1264
	char fField1265; // Offset: 1265
	long fField1276; // Offset: 1276
	long fField1280; // Offset: 1280
	long fField1284; // Offset: 1284
	long fField1288; // Offset: 1288
	long fField1292; // Offset: 1292
	long fField1304; // Offset: 1304
	long fField1308; // Offset: 1308
	char fField1324; // Offset: 1324
	char fField1326; // Offset: 1326
	char fField1327; // Offset: 1327
	long fField1332; // Offset: 1332
	long fField1336; // Offset: 1336
};

#endif
