#include "stdafx.h"
#include "Date.h"
#include <iostream>
#include <string> 
#include <windows.h>

Date::Date()
{ 
	_day = 1; 
	_month = 1; 
	_year = 1;
}

Date::Date(int day, int month, int year)
{
	SetDay(day); 
	SetMonth(month); 
	SetYear(year);
} 
 

Date::Date(const Date &s)
{
	this->_day = s._day;
	this->_year= s._year;
	this->_month = s._month;
}

void Date::SetDay()
{
	cout << " Enter day : \n";
	try
	{
		cin >> _day;
		if (_day <= 0 || _day > 365)
		{
			_day= 1;
			throw " Invalid value! Value setted by default to 1.";
		}
	}
	catch (char *str)
	{
		cout << str << endl;
	}
}
void Date::SetMonth()
{
	cout << " Enter month : \n";
	try
	{
		cin >> _month;
		if (_month <= 0 || _month > 31)
		{
			_month = 1;
			throw " Minimum value can't be less then 0! Value setted by default to 1.";
		}
	}
	catch (char *str)
	{
		cout << str << endl;
	}
} 
 
void Date::SetYear()
{
	cout << " Enter year : \n";
	try
	{
		cin >> _year;
		if (_year <= 1990 || _year > 2100)
		{
			_year = 2017;
			throw " Invalid value!";
		}
	}
	catch (char *str)
	{
		cout << str << endl;
	}
}
 
void Date::SetDay(int day)
{
	try
	{
		cin >> day;
		if (day <= 0 || day > 30)
		{
			_day = 1;
			throw " Invalid value! Value setted by default to 1.";
		} 
		else
		{
			_day = day;
		}
	}
	catch (char *str)
	{
		cout << str << endl;
	}
}
void Date::SetMonth(int month)
{
	try
	{
		cin >> month;
		if (month <= 0 || month > 31)
		{
			_month = 1;
			throw " Invalid value! Value setted by default to 1.";
		} 
		else
		{
			_month = month;
		}
	}
	catch (char *str)
	{
		cout << str << endl;
	}
}

void Date::SetYear(int year)
{
	try
	{
		cin >> year;
		if (year <= 1990 || year > 2100)
		{
			_year = 2017;
			throw " Invalid value!";
		} 
		else
		{
			_year = year;
		}
	}
	catch (char *str)
	{
		cout << str << endl;
	}
} 

int Date::GetDay()
{
	return _day;
}

int Date::GetMonth()
{
	return _month;
} 
 
int Date::GetYear()
{
	return _year;
} 
 
void Date::EnterDate()  
{ 
	SetDay(); 
	SetMonth(); 
	SetYear();
}

istream& operator >> (istream& is, Date& date)
{
	cout << " Input day: " << endl;
	cin >> date._day;
	cout << " Input month: " << endl;
	cin >> date._month;
	cout << " Input year: " << endl;
	cin >> date._year;
	return is;
}

ostream& operator<<(ostream& os, Date& date)
{
	cout << " Day = " << date._day << ", month =  " << date._month << ", year = " << date._year << endl;
	return os;
}

void Date::ShowDate()
{
	cout << " Day = " << _day << ", month =  " << _month << ", year = " << _year << endl;
}
 
 
Date& Date::operator=(const Date& date)
{
	this->_day = date._day;
	this->_month = date._month;
	this->_year = date._year;
	return *this;
}  

Date& Date::operator+=(int value)
{
	_day += value;
	SetDay(_day); 
	_month += value;
	SetMonth(_month); 
	_year += value;
	SetYear(_year);
	return *this;
} 
 
Date& Date::operator-=(int value)
{
	_day -= value;
	SetDay(_day);
	_month -= value;
	SetMonth(_month);
	_year -= value;
	SetYear(_year);
	return *this;
} 

Date::~Date()
{ 
	OutputDebugString(L"Date destructor worked");
}
