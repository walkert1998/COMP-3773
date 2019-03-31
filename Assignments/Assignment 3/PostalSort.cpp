///////////////////////////////////////////////////////////////////////////////
//
//	File: PostalSort.cpp
//	Author: Thomas Walker 100139103
//	Assignment #3
//	Feb 23, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "AbstractSort.h"
#include "Customer.h"

class PostalSort : public AbstractSort
{
	int needSwap(Customer a, Customer b)
	{
		return (a.get_postal_code() < b.get_postal_code());
	}
};