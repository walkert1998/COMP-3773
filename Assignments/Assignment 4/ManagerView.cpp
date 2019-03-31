///////////////////////////////////////////////////////////////////////////////
//
//	File: ManagerView.cpp
//	Author: Thomas Walker 100139103
//	Assignment #4
//	March 15, 2019
//
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "ManagerView.h"

// Sets layout pointer equal to the layout entered
ManagerView::ManagerView(Layout * layout)
{
	view_layout_ = layout;
}

// Renders the managers view to match that of the example output.txt
void ManagerView::render(void)
{
	view_layout_->setColumns(3);
	view_layout_->setWidth(100);
	view_layout_->putHeader();
	
	for (int i = 0; i < n; i++)
	{
		view_layout_->putLineStart();
		view_layout_->putElement(items[i].getCode(), 30);
		view_layout_->putElement(items[i].getName(), 50);
		view_layout_->putElement(items[i].getQuantity(), 20);
		view_layout_->putLineEnd();
	}
	
	view_layout_->putFooter();
}

// Adds products to be rendered in the ManagerView
void ManagerView::add(Product * products, int quantity)
{
	n = quantity;
	items = products;
}
