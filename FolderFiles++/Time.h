#pragma once 
#include <iostream>
#include <string> 
#include <windows.h>
using namespace std; 

class Time
{ 
private:
	int _hour;
	int _minute;
	int _second;
public:
	Time(); 
	 
	Time(int  hour, int  minute, int second);
	Time(const Time &s);

	void SetHour(int hour);

	void SetMinute(int minute);

	void SetSecond(int year);

	void SetHour();

	void SetMinute();

	void SetSecond();

	int GetHour();

	int GetMinute();

	int GetSecond();

	virtual void ShowTime();
	void EnterTime();

	friend istream& operator >> (istream&, Time&);
	friend ostream& operator << (ostream&, Time&);

	Time& operator=(const Time&);

	Time& operator+=(int value);
	Time& operator-=(int value);

	virtual ~Time();
};

