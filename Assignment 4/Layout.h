/**
@file   Layout.h
@date   2013-03-01
@author Mark Young
@brief  interface for a tool to print tables
*/

#ifndef LAYOUT_H
#define LAYOUT_H

#include <string>
using std::string;

class Layout
{
    public:
        virtual void setWidth(int w) = 0;
		virtual void setColumns(int n) = 0;
		virtual void putHeader() const = 0;
		virtual void putLineStart() const = 0;
        virtual void putElement(const string& e, int w) const = 0;
        virtual void putElement(int n, int w) const = 0;
        virtual void putLineEnd() const = 0;
        virtual void putFooter() const = 0;

};

#endif

