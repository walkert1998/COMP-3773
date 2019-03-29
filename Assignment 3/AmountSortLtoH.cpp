///////////////////////////////////////////////////////////////////////////////
//
//	File: AmountSortLtoH.cpp
//	Author: Thomas Walker 100139103
//	Assignment #3
//	Feb 23, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "AbstractSort.h"
#include "Customer.h"

class AmountSortLtoH : public AbstractSort
{
	int needSwap(Customer a, Customer b)
	{
		return a.get_amount_owed() > b.get_amount_owed();
	}
};
