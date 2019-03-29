///////////////////////////////////////////////////////////////////////////////
//
//	File: ScreenLayout.h
//	Author: Thomas Walker 100139103
//	Assignment #4
//	March 15, 2019
//
///////////////////////////////////////////////////////////////////////////////
#ifndef SCREENLAYOUT_H
#define SCREENLAYOUT_H

#include "Layout.h"
#include <string>
using namespace std;

class ScreenLayout : public Layout
{
	public:
		ScreenLayout();
		void setWidth(int w);
		void setColumns(int n);
		void putHeader() const;
		void putLineStart() const;
		void putElement(const string& e, int w) const;
		void putElement(int n, int w) const;
		void putLineEnd() const;
		void putFooter() const;
	protected:
		int width;
		int columns;
};
#endif
