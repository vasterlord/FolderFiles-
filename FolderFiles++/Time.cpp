#include "stdafx.h"
#include "Time.h"
#include <iostream>
#include <string> 
#include <windows.h>
using namespace std;

Time::Time()
{ 
	_hour = 1; 
	_minute = 1; 
	_second = 1;
}
Time::Time(int  hour, int  minute, int second)
{
	SetHour(hour); 
	SetMinute(minute); 
	SetSecond(second);
}


Time::Time(const Time &s)
{
	this->_hour = s._hour;
	this->_minute = s._minute;
	this->_second = s._second;
}

void Time::SetHour()
{
	cout << " Enter hour : \n";
	try
	{
		cin >> _hour;
		if (_hour < 0 || _hour > 24)
		{
			_hour = 1;
			throw " Invalid value! Value setted by default to 1.";
		}
	}
	catch (char *str)
	{
		cout << str << endl;
	}
}
void Time::SetMinute()
{
	cout << " Enter minute : \n";
	try
	{
		cin >> _minute;
		if (_minute < 0 || _minute > 59)
		{
			_minute = 1;
			throw " Invalid value! Value setted by default to 1.";
		}
	}
	catch (char *str)
	{
		cout << str << endl;
	}
}

void Time::SetSecond()
{
	cout << " Enter second : \n";
	try
	{
		cin >> _second;
		if (_second < 0 || _second > 59)
		{
			_second = 2017;
			throw " Invalid value!";
		}
	}
	catch (char *str)
	{
		cout << str << endl;
	}
}

void Time::SetHour(int hour)
{
	try
	{
		cin >> hour;
		if (hour < 0 || hour > 24)
		{
			_hour = 1;
			throw " Invalid value! Value setted by default to 1.";
		}
		else
		{
			_hour = hour;
		}
	}
	catch (char *str)
	{
		cout << str << endl;
	}
}
void Time::SetMinute(int minute)
{
	try
	{
		cin >> minute;
		if (minute < 0 || minute > 59)
		{
			_minute = 1;
			throw " Invalid value! Value setted by default to 1.";
		}
		else
		{
			_minute = minute;
		}
	}
	catch (char *str)
	{
		cout << str << endl;
	}
}

void Time::SetSecond(int second)
{
	try
	{
		cin >> second;
		if (second < 0 || second > 50)
		{
			_second = 1;
			throw " Invalid value!";
		}
		else
		{
			_second = second;
		}
	}
	catch (char *str)
	{
		cout << str << endl;
	}
}

int Time::GetHour()
{
	return _hour;
}

int Time::GetMinute()
{
	return _minute;
}

int Time::GetSecond()
{
	return _second;
}

void Time::EnterTime()
{
	SetHour();
	SetMinute();
	SetSecond();
}

istream& operator >> (istream& is, Time& time)
{
	cout << " Input hour: " << endl;
	cin >> time._hour;
	cout << " Input minute: " << endl;
	cin >> time._minute;
	cout << " Input second: " << endl;
	cin >> time._second;
	return is;
}

ostream& operator<<(ostream& os, Time& time)
{
	cout << " Hour = " << time._hour << ", minute =  " << time._minute << ", second = " << time._second << endl;
	return os;
}

void Time::ShowTime()
{
	cout << " Hour = " << _hour << ", minute =  " << _minute << ", second = " << _second << endl;
}


Time& Time::operator=(const Time& time)
{
	this->_hour = time._hour;
	this->_minute = time._minute;
	this->_second = time._second;
	return *this;
}

Time& Time::operator+=(int value)
{
	_hour += value;
	SetHour(_hour);
	_minute += value; 
	SetMinute(_minute); 
	_second += value; 
	SetSecond(_second);
	return *this;
}

Time& Time::operator-=(int value)
{
	_hour -= value;
	SetHour(_hour);
	_minute -= value;
	SetMinute(_minute);
	_second -= value;
	SetSecond(_second);
	return *this;
}

Time::~Time()
{ 
	OutputDebugString(L"Time destructor worked");
}
