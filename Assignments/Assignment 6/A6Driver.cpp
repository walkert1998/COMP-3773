///////////////////////////////////////////////////////////////////////////////
//
//	File: A6Driver.cpp
//	Author: Thomas Walker 100139103
//	Assignment #6
//	April 4, 2019
//
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "Integer7.h"
using namespace std;

int main()
{
	Integer7 m(3), n(5);

	m *= n;

	n *= 3;

	cout << m * n << endl;

	cout << m * 17 << endl;

	cout << 13 * n << endl;
}
