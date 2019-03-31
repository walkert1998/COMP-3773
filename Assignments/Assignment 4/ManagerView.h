///////////////////////////////////////////////////////////////////////////////
//
//	File: ManagerView.h
//	Author: Thomas Walker 100139103
//	Assignment #4
//	March 15, 2019
//
///////////////////////////////////////////////////////////////////////////////
#ifndef MANAGERVIEW_H
#define MANAGERVIEW_H

#include "View.h"
#include "Layout.h"

class ManagerView : public View
{
	public:
		ManagerView(Layout * layout);
		void render();
		void add(Product * products, int quantity);
};

#endif
