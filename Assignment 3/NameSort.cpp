///////////////////////////////////////////////////////////////////////////////
//
//	File: NameSort.cpp
//	Author: Thomas Walker 100139103
//	Assignment #3
//	Feb 23, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "AbstractSort.h"
#include "Customer.h"

class NameSort : public AbstractSort
{
	int needSwap(Customer a, Customer b)
	{
		if (a.get_family_name() > b.get_family_name())
			return 1;

		else if (a.get_family_name() < b.get_family_name())
			return 0;

		// If two Customer objects have the same family name then they are sorted
		// based on their given names.
		else if (a.get_family_name() == b.get_family_name())
		{
			if (a.get_given_name() > b.get_given_name())
				return 1;

			else if (a.get_given_name() < b.get_given_name())
				return 0;
		}
		return -1;
	}
};
