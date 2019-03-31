///////////////////////////////////////////////////////////////////////////////
//
//	File: Country.h
//	Author: Thomas Walker 100139103
//	Lab Assignment #2
//	Feb 1, 2019
//
///////////////////////////////////////////////////////////////////////////////

#ifndef COUNTRY_H
#define COUNTRY_H

#include <iostream>
#include <string>
using namespace std;

class Country
{
	public:
		Country(string name, long population);
		~Country();
		string getName();
		long getPopulation();
		void setName(const string&);
		void setPopulation(long population);
		static int numberOfCountries();
	private:
		static int countries_;
		long population_;
		string name_;
		// Assignment operators made private so that Countries
		// cannot be copied and assigned
		Country(const Country&);
		Country& operator=(const Country&);
};
#endif