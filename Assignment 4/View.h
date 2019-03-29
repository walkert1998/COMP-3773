///////////////////////////////////////////////////////////////////////////////
//
//	File: View.h
//	Author: Thomas Walker 100139103
//	Assignment #4
//	March 15, 2019
//
///////////////////////////////////////////////////////////////////////////////
#ifndef VIEW_H
#define VIEW_H

#include "Product.h"
#include "Layout.h"

class View
{
	public:
		virtual void render() = 0;
		virtual void add(Product * products, int quantity) = 0;

	protected:
		Product * items;
		Layout * view_layout_;
		int n;
};
#endif
