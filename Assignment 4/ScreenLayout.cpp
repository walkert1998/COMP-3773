///////////////////////////////////////////////////////////////////////////////
//
//	File: ScreenLayout.cpp
//	Author: Thomas Walker 100139103
//	Assignment #4
//	March 15, 2019
//
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <iomanip>
#include "ScreenLayout.h"
using namespace std;

// Empty Constructor
ScreenLayout::ScreenLayout()
{
	
}

// Defines the width of the layout
void ScreenLayout::setWidth(int w)
{
	width = w;
}

// Defines number of columns in layout
void ScreenLayout::setColumns(int n)
{
	columns = n;
}

// Adds header to layout, the header adjusts to fit the width of the layout
void ScreenLayout::putHeader() const
{
	cout << "+";
	
	for (int i = 0; i < (width * 60 / 100 - 2); i++)
		cout << "-";
		
	cout << "+" << endl;
}

// Adds string item to be displayed on screen, the width adjusts to the width
// defined as "w"
void ScreenLayout::putElement(const string &e, int w) const
{
	int count = 0;
	if (columns == 3)
	{
		cout << left << setw(w *(width * 60) / 100 / 100 - 4) << e;
		
		if (count < (columns - 1))
		{
			cout << " | ";
			count++;
		}
		
		else
			count = 0;
	}
	
	else
		cout << left << setw(w *(width * 60) / 100 / 100 - 4) << e << " |";
}

// Adds integer to be displayed on screen, the width adjusts to the width
// defined as "w"
void ScreenLayout::putElement(int n, int w) const
{
	cout << right << setw(w * 60 / 100 - 2) << n << " |";
}

// Adds vertical line to begin line
void ScreenLayout::putLineStart() const
{
	cout << "| ";
}

// Adds new line to end line
void ScreenLayout::putLineEnd() const
{
	cout << endl;
}

// Adds footer to finish display
void ScreenLayout::putFooter() const
{
	cout << "+";
	for (int i = 0; i < (width * 60 / 100 - 2); i++)
		cout << "-";
	cout << "+" << endl;
}
