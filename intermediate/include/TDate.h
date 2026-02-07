#ifndef __INFERRED_TDATE_H
#define __INFERRED_TDATE_H

class TDate {
public:
	void CleanUpFields();
	void DateElementString();
	void DaysInMonth();
	void DaysInYear();
	void IncrementMonth();
	void InitWithDateFrame();
	void InitWithMinutes();
	void InitWithSeconds();
	void IsValidDate();
	void LongDateString();
	void SetCurrentTime();
	void SetFormatResource();
	void ShortDateString();
	void StringToDate();
	void StringToDateFields();
	void StringToDateFrame();
	void StringToTime();
	TDate();
	void TimeString();
	void TotalDays();
	void TotalHours();
	void TotalMinutes();
	void TotalSeconds();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
};

#endif
