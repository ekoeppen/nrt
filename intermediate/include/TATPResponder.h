#ifndef __INFERRED_TATPRESPONDER_H
#define __INFERRED_TATPRESPONDER_H

class TATPResponder {
public:
	void Match();
	void SetResponseBuffer();
	TATPResponder();
	~TATPResponder();

protected:
	long fField124; // Offset: 124
};

#endif
