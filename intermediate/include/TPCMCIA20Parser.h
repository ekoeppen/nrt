#ifndef __INFERRED_TPCMCIA20PARSER_H
#define __INFERRED_TPCMCIA20PARSER_H

class TPCMCIA20Parser {
public:
	void ChecksumOK();
	void CisTpl_CE();
	void CisTpl_Checksum();
	void CisTpl_Conf();
	void CisTpl_Device();
	void CisTpl_Device_A();
	void CisTpl_Device_GEO();
	void CisTpl_End();
	void CisTpl_Func_Ext();
	void CisTpl_Func_Id();
	void CisTpl_Jedec_A();
	void CisTpl_Jedec_C();
	void CisTpl_LinkTarget();
	void CisTpl_LongLink_A();
	void CisTpl_LongLink_C();
	void CisTpl_Manuf_Id();
	void CisTpl_No_Link();
	void CisTpl_Null();
	void CisTpl_Vendor_Unique();
	void CisTpl_Vers_1();
	void CisTpl_Vers_2();
	void DeviceParser();
	void GetBits();
	void GetExtendedDeviceSpeed();
	void GetPowerValue();
	void GetShort();
	void GetTuple();
	void GetWord();
	void IncrAddr();
	void JedecInfoParser();
	void ParsePCCardCIS();
	void ProcessCIS();
	void ProcessTuple();
	void Reset();
	void SetLongLink();
	void StartTuple();
	TPCMCIA20Parser();
	void ValidateCIS();
	void Version();
	void pow();
	~TPCMCIA20Parser();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	char fField23; // Offset: 23
	long fField24; // Offset: 24
	char fField25; // Offset: 25
	char fField26; // Offset: 26
	char fField27; // Offset: 27
	long fField28; // Offset: 28
	char fField29; // Offset: 29
	char fField30; // Offset: 30
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	char fField39; // Offset: 39
	char fField40; // Offset: 40
	char fField41; // Offset: 41
	char fField42; // Offset: 42
	char fField43; // Offset: 43
	long fField56; // Offset: 56
};

#endif
