#ifndef __INFERRED_TNSCONFIGSERVER_H
#define __INFERRED_TNSCONFIGSERVER_H

class TNSConfigServer {
public:
	void GetConfig();
	void InitConfigServer();
	void SetConfig();
	~TNSConfigServer();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
};

#endif
