// FolderFiles++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Folder.h"
#include <iostream>
#include <string> 
#include <windows.h>  
#include <conio.h> 
#include "File.h" 
#include "Iterator.h"
using namespace std;

int main() 
{ 
	int number = 0;
	int choose; 
	string mask = ".*";
	string choice = "y";
	int size = 1;
	cout << " Input count of files :" << endl;
	cin >> size;
	Folder folder(size);
	while (choice == "y")
	{
		cout << " 1 - Input files" << endl;
		cout << " 2 - Show files by one " << endl;
		cout << " 3 - Find files by mask" << endl;
		cout << " 4 - Show all files" << endl;
		cout << "Your choice: "; cin >> choose;
		cout << endl;
		switch (choose)
		{
		case 1:
			folder.InputFiles();
			break;
		case 2:
			cout << " Input index of file:" << endl;
			cin >> number;
			folder.operator[](number).Show();
			break;
		case 3:
			cout << " Input mask for finding:" << endl;
			cin >> mask;
			folder.ShowFilesByMask(mask);
			break;
		case 4:
			folder.ShowAllFiles();
			break;
		default:
			break;
		}
		cout << "Press 'y' if you want to continue  "; cin >> choice;
	}
	_getch();
	return 0;
}

