#pragma once 
#include <iostream>
#include <string> 
#include <windows.h>
using namespace std; 

class Date
{ 
private:
	int _day;
	int _month;
	int _year;
public:
	Date(); 
	Date(int  day, int  month, int  year);
	Date(const Date &s);

	void SetDay(int day);

	void SetMonth(int month);

	void SetYear(int year); 
	 
	void SetDay();

	void SetMonth();

	void SetYear();

	int GetDay();

	int GetMonth(); 
	 
	int GetYear();

	virtual void ShowDate();
	void EnterDate();

	friend istream& operator >> (istream&, Date&);
	friend ostream& operator << (ostream&, Date&);

	Date& operator=(const Date&);

	Date& operator+=(int value);
	Date& operator-=(int value);

	virtual ~Date();
};

