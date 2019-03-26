///////////////////////////////////////////////////////////////////////////////
//
//	File: a1-2-7.cpp
//	Author: Thomas Walker 100139103
//	Assignment #1
//	Jan 16, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iterator>
#include <string>
using namespace std;

double power(double x, int n)
{
	if (n == 0)
		return 1;

	else if (n % 2 == 0)
		return power(x, n / 2) * power(x, n / 2);

	else
		return x * power(x, n / 2) * power(x, n / 2);
}

int main3()
{
	double num1 = 0.0;
	int num2 = 0;

	cout << "Hard coded test values: " << endl;
	cout << "2^2: " << power(2, 2) << endl;
	cout << "4.7^6: " << power(4.7, 6) << endl;
	system("pause");
	return EXIT_SUCCESS;
}