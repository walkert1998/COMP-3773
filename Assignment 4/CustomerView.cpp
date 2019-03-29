///////////////////////////////////////////////////////////////////////////////
//
//	File: CustomerView.cpp
//	Author: Thomas Walker 100139103
//	Assignment #4
//	March 15, 2019
//
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "CustomerView.h"

// Sets layout pointer equal to the layout entered
CustomerView::CustomerView(Layout * layout)
{
	view_layout_ = layout;
}

// Renders the customers view to match that of the example output.txt
void CustomerView::render(void)
{
	view_layout_->setColumns(1);
	view_layout_->setWidth(40);
	view_layout_->putHeader();
	for (int i = 0; i < n; i++)
	{
		view_layout_->putLineStart();
		view_layout_->putElement(items[i].getName(), 100);
		view_layout_->putLineEnd();
	}
	view_layout_->putFooter();
	
}

// Adds products to be rendered in the CustomerView
void CustomerView::add(Product * products, int quantity)
{
	n = quantity;
	items = products;
}