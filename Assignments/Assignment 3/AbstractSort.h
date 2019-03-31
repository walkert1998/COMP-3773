///////////////////////////////////////////////////////////////////////////////
//
//	File: AbstrctSort.h
//	Author: Thomas Walker 100139103
//	Assignment #3
//	Feb 23, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include "Customer.h"

#ifndef ABSTRACT_SORT_H
#define ABSTRACT_SORT_H

class AbstractSort
{
public:
	void sort(Customer v[], int n);
private:
	virtual int needSwap(Customer, Customer) = 0;
	void doSwap(Customer& a, Customer& b);
};

#endif