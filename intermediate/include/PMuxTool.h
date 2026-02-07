#ifndef __INFERRED_PMUXTOOL_H
#define __INFERRED_PMUXTOOL_H

class PMuxTool {
public:
	void CloseMuxStart();
	void Delete();
	void DisposeConnectionEnd();
	void HandleInternalEvent();
	void HandleInternalRequest();
	void HandleReply();
	void HandleRequest();
	void HandleTimerTick();
	void New();
	void NewConnectionEnd();
	void OpenMuxStart();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
