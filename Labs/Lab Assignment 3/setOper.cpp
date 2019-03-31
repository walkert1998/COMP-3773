///////////////////////////////////////////////////////////////////////////////
//
//	File: setOper.cpp
//	Author: Thomas Walker 100139103
//	Lab Assignment #3
//	Feb 17, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <algorithm>
#include "setOper.h"
using namespace std;


// Empty constructor for interval
interval::interval()
{
	start = 0;
	end = 0;
}

// Constructor for interval
interval::interval(double s, double e)
{
	start = s;
	end = e;
}

// Checks if double x is in the interval 'interval'
bool setOper::in_interval(double x, interval * interval)
{
	if (x >= interval->start && x <= interval->end)
		return true;

	return false;
}

// Checks if double x is within th intersection of a and b
bool setOper::in_interval_intersection(double x, interval * a, interval * b)
{
	interval * temp = new interval();

	temp->start = max(a->start, b->start);
	temp->end = min(a->end, b->end);
	cout << "[" << temp->start << ", " << temp->end << "]" << endl;


	if (x >= temp->start && x <= temp->end)
		return true;

	return false;
}

// Checks if double x is within the union of a and b
bool setOper::in_interval_union(double x, interval * a, interval * b)
{
	interval * temp = new interval();

	temp->start = min(a->start, b->start);
	temp->end = max(a->end, b->end);

	cout << "[" << temp->start << ", " << temp->end << "]" << endl;
	if (x >= temp->start && x <= temp->end)
		return true;

	return false;
}

int main()
{
	
	double x = 3;
	setOper operations;
	interval * a = new interval(2.5, 4.5);
	interval * b = new interval(3.5, 5);

	cout << operations.in_interval_intersection(x, a, b) << endl;
	cout << operations.in_interval_union(x, a, b) << endl;
}
