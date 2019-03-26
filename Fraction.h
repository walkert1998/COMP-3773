///////////////////////////////////////////////////////////////////////////////
//
//	File: a1-2-9.cpp
//	Author: Thomas Walker 100139103
//	Assignment #1
//	Jan 16, 2019
//
///////////////////////////////////////////////////////////////////////////////

#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <iterator>
using namespace std;

class Fraction
{
	public:
		Fraction();
		Fraction(long n, long d);
		Fraction add(Fraction a, Fraction b);
		Fraction multiply(Fraction a, Fraction b);
		Fraction subtract(Fraction a, Fraction b);
		Fraction divide(Fraction a, Fraction b);
		long denominator_;
		long numerator_;

		
};
#endif