#include "stdafx.h"
#include "File.h"
#include <iostream>
#include <string> 
#include <windows.h>  
#include <stdio.h>
#include <time.h> 
#include "Time.h" 
#include "Date.h" 
#pragma warning(disable:4996)
using namespace std;

File::File()
{ 
	_name = "Unknown"; 
	_attribute = "Unknown"; 
	_dimension = 1024; 
	_dateTime = GetCurrentDateTime();
}
File::File(int  day, int  month, int  year, int  hour, int  minute, int second, string name, string attribute, double dimension):Date(day, month, year), Time(hour, minute, second)
{
	SetName(name);  
	SetAttribute(attribute); 
	SetDimension(dimension); 
	SetDateTime();
} 

void File::SetName()
{ 
	cout << " Enter file name : \n";
	cin >> _name;
} 
void File::SetDimension()
{
	cout << " Enter file dimension : \n";
	cin >> _dimension;
} 
 
void File::SetAttribute()
{ 
	cout << " Enter file attributes : \n";
	cin >> _attribute;
} 
 
void File::SetName(string name)
{
	_name = name;
} 
 
void File::SetDimension(double dimension)
{
	 _dimension = dimension;
} 

void File::SetAttribute(string attribute)
{ 
	_attribute = attribute;
} 
void File::SetDateTime()
{  
	string split = "/";
	_dateTime = to_string(GetDay()) + split + to_string(GetMonth()) + split + to_string(GetYear()) + split + to_string(GetHour()) + split + to_string(GetMinute()) + split + to_string(GetSecond());
}
   
string File::GetName()  
{ 
	return _name;
} 
 
string File::GetDateTime()  
{ 
	return _dateTime;
} 
 
double File::GetDimension()  
{ 
	return _dimension;
}

string File::GetAttribute()  
{ 
	return _attribute;
} 
 
void File::ShowTime()  
{ 
	cout << " Time created: " << GetHour() << "/" << GetMinute() << "/" << GetSecond() << endl;
}

void File::ShowDate()  
{ 
	cout << " Date created: " << GetDay() << "/" << GetMonth() << "/" << GetSecond() << endl;
} 
 
void File::Show()  
{ 
	cout << "File name :" << _name << endl; 
	cout << "File attributes :" << _attribute << endl; 
	ShowDate();  
	ShowTime();
	cout << "File dimension :" << _dimension << endl; 
	cout << "||===============================|| " << endl;
}
 
void File::EnterFile()  
{  
	SetDay();
	SetMonth();
	SetYear();
	SetHour();
	SetMinute();
	SetSecond(); 
	SetName();
	SetAttribute();
	SetDimension();
	SetDateTime();
}
string File::GetCurrentDateTime() {
	time_t     now = time(0);
	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
	return buf;
} 

File::~File()
{ 
	OutputDebugString(L"File destructor worked");
}
