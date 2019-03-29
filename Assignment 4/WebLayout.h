///////////////////////////////////////////////////////////////////////////////
//
//	File: WebLayout.h
//	Author: Thomas Walker 100139103
//	Assignment #4
//	March 15, 2019
//
///////////////////////////////////////////////////////////////////////////////
#ifndef WEBLAYOUT_H
#define WEBLAYOUT_H

#include "Layout.h"
#include <string>
using namespace std;

class WebLayout : public Layout
{
	public:
		WebLayout();
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