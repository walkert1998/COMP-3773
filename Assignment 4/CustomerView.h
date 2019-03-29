///////////////////////////////////////////////////////////////////////////////
//
//	File: CustomerView.h
//	Author: Thomas Walker 100139103
//	Assignment #4
//	March 15, 2019
//
///////////////////////////////////////////////////////////////////////////////
#ifndef CUSTOMERVIEW_H
#define CUSTOMERVIEW_H

#include "View.h"
#include "Layout.h"

class CustomerView : public View
{
	public:
		CustomerView(Layout * layout);
		void render(void);
		void add(Product * products, int quantity);
};
#endif
