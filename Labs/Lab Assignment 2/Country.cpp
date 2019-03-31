///////////////////////////////////////////////////////////////////////////////
//
//	File: Country.cpp
//	Author: Thomas Walker 100139103
//	Lab Assignment #2
//	Feb 1, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iterator>
#include <string>
#include "Country.h"
using namespace std;

// Creates a new country with a given name and population, incremetns total
// number of countries by one
Country::Country(string name, long population)
{
	name_ = name;
	population_ = population;
	countries_++;
}

// Erases info for name and population, decrements total number of countries
Country::~Country()
{
	name_ = "";
	population_ = 0;
	countries_--;
}

// Returns name of specified country
string Country::getName()
{
	return name_;
}

// Returns population of specified country
long Country::getPopulation()
{
	return population_;
}

// Changes name of country to specified string
void Country::setName(const string& newName)
{
	name_ = newName;
}

// Changes population of country to specified long
void Country::setPopulation(long newPopulation)
{
	population_ = newPopulation;
}

// This line was added in to avoid unresolved external error caused
// by accessing static variable
int Country::countries_;
int Country::numberOfCountries()
{
	return countries_;
}

