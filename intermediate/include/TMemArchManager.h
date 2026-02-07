#ifndef __INFERRED_TMEMARCHMANAGER_H
#define __INFERRED_TMEMARCHMANAGER_H

class TMemArchManager {
public:
	void AddDomain();
	void AddDomainWithDomainNumber();
	void AddEnvironment();
	void DomainRangeIsFree();
	void RemoveDomain();
	void RemoveEnvironment();
	TMemArchManager();

protected:
	long fField4; // Offset: 4
};

#endif
