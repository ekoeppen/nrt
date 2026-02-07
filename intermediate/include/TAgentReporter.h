#ifndef __INFERRED_TAGENTREPORTER_H
#define __INFERRED_TAGENTREPORTER_H

class TAgentReporter {
public:
	void AgentReportError();
	void AgentReportStatus();
	void ReportMemoryInfo();
	TAgentReporter();
	~TAgentReporter();

protected:
	long fField408; // Offset: 408
	long fField412; // Offset: 412
	long fField875; // Offset: 875
};

#endif
