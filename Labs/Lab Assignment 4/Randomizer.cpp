///////////////////////////////////////////////////////////////////////////////
//
//	File: Randomizer.cpp
//	Author: Thomas Walker 100139103
//	Lab Assignment #4
//	March 8, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include "Randomizer.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

// Instantiation ensures that only one Randomizer can be created. Instance also
// generates the initial seed for all rand() calls, thus making the result
// different each time the program is run.
Randomizer * Randomizer::rando_ = 0;
Randomizer * Randomizer::instance()
{
	srand((unsigned)time(0));
	if (!rando_)
		rando_ = new Randomizer;
	return rando_;
}

// Generates a random integer between 0 and int high
int Randomizer::nextInt(int high)
{
	return rand() % high;
}

// Generates a random integer between int low and int high
int Randomizer::nextInt(int low, int high)
{
	return rand() % high + low;
}

// Generates a random int between 1 and int sides
int Randomizer::die(int sides)
{
	return rand() % sides + 1;
}

// Generates a random double between 0 and 1
double Randomizer::nextDouble()
{
	return (double) rand() / (double) RAND_MAX;
}

// Generates a random character that exists in the string s
char Randomizer::randomChar(string & s)
{
	return s[(rand() % s.length())];
}

// Empty constructor for Randomizer
Randomizer::Randomizer()
{
}

int main()
{
    cout << Randomizer::instance()->nextInt(9) << endl;
    return EXIT_SUCCESS;
}