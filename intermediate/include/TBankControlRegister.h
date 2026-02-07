#ifndef __INFERRED_TBANKCONTROLREGISTER_H
#define __INFERRED_TBANKCONTROLREGISTER_H

class TBankControlRegister {
public:
	void ConfigureFlashBankDataSize();
	void GetBankControlRegister();
	void SetBankControlRegister();

protected:
	long fField4; // Offset: 4
};

#endif
