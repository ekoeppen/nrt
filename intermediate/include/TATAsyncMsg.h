#ifndef __INFERRED_TATASYNCMSG_H
#define __INFERRED_TATASYNCMSG_H

class TATAsyncMsg {
public:
	void Init();
	void Send();
	TATAsyncMsg();
	~TATAsyncMsg();

protected:
	char fField256; // Offset: 256
};

#endif
