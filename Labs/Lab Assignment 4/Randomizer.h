///////////////////////////////////////////////////////////////////////////////
//
//	File: Randomizer.h
//	Author: Thomas Walker 100139103
//	Lab Assignment #4
//	March 8, 2019
//
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
using namespace std;

#ifndef SET_OPER
#define SET_OPER

// All the required methods and variables are declared as described in the
// assignment description.
class Randomizer
{
	public:
		static Randomizer * instance();
		int nextInt(int high);
		int nextInt(int low, int high);
		int die(int sides);
		double nextDouble();
		char randomChar(string & s);
	protected:
		Randomizer();
		Randomizer(const Randomizer&);
		Randomizer& operator=(const Randomizer&);
	private:
		static Randomizer * rando_;
		
};

#endif