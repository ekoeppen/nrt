#ifndef __INFERRED_TATPREQUESTOR_H
#define __INFERRED_TATPREQUESTOR_H

class TATPRequestor {
public:
	void Complete();
	void CopyRequest();
	TATPRequestor();
	~TATPRequestor();

protected:
	long fField52; // Offset: 52
};

#endif
