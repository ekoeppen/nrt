#ifndef __INFERRED_TIASSERVICE_H
#define __INFERRED_TIASSERVICE_H

class TIASService {
public:
	void AddAttribute();
	void AddAttributeEntry();
	void AddClass();
	void AddIntegerEntry();
	void AddNBytesEntry();
	void AddStringEntry();
	void FindClass();
	void RemoveAttribute();
	void RemoveClass();
	TIASService();
	~TIASService();

protected:
};

#endif
