#pragma once 
#include <iostream>
#include <string> 
#include <windows.h> 
#include "File.h"
using namespace std;

class Iterator
{
public:
	Iterator(void);
	Iterator(File* ctr);
	~Iterator(void);
	Iterator(const Iterator& ctr);
	Iterator& operator = (const File* ctr);


	Iterator& operator += (const int& ctr);
	Iterator& operator -= (const int& ctr);
	File& operator * (void);
	File* operator -> (void);
	File& operator [] (const int& ctr);

	Iterator& operator ++ (void);
	Iterator operator ++ (int);
	Iterator& operator -- (void);
	Iterator operator -- (int);


	bool operator == (const Iterator& rhs);
	bool operator != (const Iterator& rhs);
	bool operator > (const Iterator& rhs);
	bool operator < (const Iterator& rhs);
	bool operator >= (const Iterator& rhs);
	bool operator <= (const Iterator& rhs);

protected:
	File* _ctr;
};

