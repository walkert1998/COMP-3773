///////////////////////////////////////////////////////////////////////////////
//
//	File: WebLayout.cpp
//	Author: Thomas Walker 100139103
//	Assignment #4
//	March 15, 2019
//
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <iomanip>
#include "WebLayout.h"
using namespace std;

// Empty Constructor
WebLayout::WebLayout()
{
	
}

// Defines the width of the layout
void WebLayout::setWidth(int w)
{
	width = w;
}

// Defines number of columns in layout
void WebLayout::setColumns(int n)
{
	columns = n;
}

// Opens table element to fit the width of the layout
void WebLayout::putHeader() const
{
	cout << "<table border width=" << width << "%%>" << endl;
}

// Adds string item to be displayed on screen, the width adjusts to the width
// defined as "w"
void WebLayout::putElement(const string &e, int w) const
{
	cout << "<td width=" << w << "%%>" << e << "</td>" << endl;
}

// Adds integer to be displayed on screen, the width adjusts to the width
// defined as "w"
void WebLayout::putElement(int n, int w) const
{
	cout << "<td width=" << w << "%%>" << n << "</td>" << endl;
}

// Opens table row element
void WebLayout::putLineStart() const
{
	cout << "<tr>" << endl;
}

// Closes table row element
void WebLayout::putLineEnd() const
{
	cout << "</tr>" << endl;
}

// Closes table element
void WebLayout::putFooter() const
{
	cout << "</table>" << endl;
}
