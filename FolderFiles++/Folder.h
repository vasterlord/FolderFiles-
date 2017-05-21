#pragma once 
#include <iostream>
#include <string> 
#include <windows.h> 
#include "File.h" 
#include "Iterator.h"
using namespace std;
class Folder
{
private:
	int _size;
	File *files;
public:
	Folder();
	Folder(int size);

	void ShowFilesByMask(string mask);

	void ShowAllFiles();

	void InputFiles();

	File& operator[](int x);
	virtual ~Folder();
};

