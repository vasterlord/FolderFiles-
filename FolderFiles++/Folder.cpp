#include "stdafx.h"
#include "Folder.h"
#include <iostream>
#include <string> 
#include <windows.h> 
#include "File.h" 
#include "Iterator.h"
using namespace std;

Folder::Folder()
{ 

} 
Folder::Folder(int size)
{ 
	try
	{
		if (size <= 0)
		{
			_size = 5;
			files = new File[size];
			throw(" Size  can't less or equal 0! Size of calculate book setted by default to 5.");
		}
		else
		{
			_size = size;
			files = new File[size];
		}
	}
	catch (char *str)
	{
		cout << str << endl;
	}
} 
 
void Folder::ShowAllFiles()
{
	Iterator iter = files;

	for (int i = 0; i < _size; i++)
	{
		iter->Show();
		++iter;
	}
}

void Folder::ShowFilesByMask(string mask)
{
	for (int i = 0; i < _size; i++)
	{ 
		string currentFileName = files[i].GetName();   
		if (mask == ".*")
		{
			files[i].Show();
		}
		else if (strstr(currentFileName.c_str(), mask.c_str()))
		{
			files[i].Show();
		}
	}
}

File& Folder::operator[](int x)
{
	try
	{
		if (x < 0 || x > _size)
		{
			throw(" Incorrect index! ");
		}
		else
		{
			return files[x];
		}
	}
	catch (char *str)
	{
		cout << str << endl;
	}
	catch (std::exception ex) {
		cout << " Incorrect index! " << endl;
	}
}

void Folder::InputFiles()
{
	for (int i = 0; i < _size; i++)
	{
		cout << " Input data about file number " << i << endl;
		File file;
		file.EnterFile();
		files[i] = file;
	}
	cout << " Input data about file number ";
}

Folder::~Folder()
{ 
	OutputDebugString(L"File destructor worked");
	delete[] files;
}
