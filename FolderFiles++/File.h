#pragma once 
#include <iostream>
#include <string> 
#include <windows.h> 
#include "Time.h" 
#include "Date.h"
using namespace std; 

class File : public Date, public Time
{ 
private:
	string _name; 
	string _attribute; 
	double _dimension; 
	string _dateTime;
public: 
	File();  
	File(int  day, int  month, int  year, int  hour, int  minute, int second, string name, string attribute, double dimension);

	void SetName(string name);

	void SetAttribute(string attribute);

	void SetDimension(double dimension);

	void SetName();

	void SetAttribute();

	void SetDimension();

	void SetDateTime();

	string GetName();

	double GetDimension();

	string GetAttribute();

	string GetDateTime(); 
	 
	string GetCurrentDateTime();

	void ShowTime()override; 

	void ShowDate()override; 
	 
	void Show();
	void EnterFile(); 

	virtual ~File();
};

