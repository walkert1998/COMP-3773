///////////////////////////////////////////////////////////////////////////////
//
//	File: COMP-3773-lab-2.cpp
//	Author: Thomas Walker 100139103
//	Lab Assignment #2
//	Feb 1, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "Country.h"
#include "Country.cpp"
using namespace std;



int
main()
{
	cout << "Creating Canada" << endl;
	Country a("Canada", 35000000);
	cout << a.getName() << endl;
	cout << a.getPopulation() << endl;
	cout << "Changing 'Canada' to 'United States'" << endl;
	a.setName("United States");
	cout << a.getName() << endl;
	cout << "Changing 'United States' population to 343000000" << endl;
	a.setPopulation(343000000);
	cout << a.getPopulation() << endl;
	cout << "Total Countries: " << a.numberOfCountries() << endl;

	cout << "Creating United Kingdom" << endl;
	Country b("United Kingdom", 66040229);
	cout << "Total Countries: " << a.numberOfCountries() << endl;

	cout << "Creating China" << endl;
	Country c("China", 1403500365);
	cout << c.getName() << endl;
	cout << "Total Countries: " << a.numberOfCountries() << endl;

	// This line causes compile-time error
	//Country d = c;

	cout << "Deleting " << a.getName() << endl;
	a.~Country();
	cout << "Total Countries: " << b.numberOfCountries() << endl;
	cout << "Deleting " << b.getName() << endl;
	b.~Country();
	cout << "Total Countries: " << c.numberOfCountries() << endl;
	return EXIT_SUCCESS;
}