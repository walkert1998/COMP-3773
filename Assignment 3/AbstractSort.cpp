///////////////////////////////////////////////////////////////////////////////
//
//	File: AbstractSort.cpp
//	Author: Thomas Walker 100139103
//	Assignment #3
//	Feb 23, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "AbstractSort.h"
#include "Customer.h"

// Sorts all cusomer objects in the entered array, if two values should be
// swapped, then they are swapped.
void AbstractSort::sort(Customer v[], int n)
{
	for (int g = n / 2; g > 0; g /= 2)
		for (int i = g; i < n; i++)
			for (int j = i - g; j >= 0; j -= g)
				if (needSwap(v[j], v[j + g]))
					doSwap(v[j], v[j + g]);
}

// Swaps two specified Customer objects
void AbstractSort::doSwap(Customer & a, Customer & b)
{
	Customer c;
	c = a;
	a = b;
	b = c;
}
