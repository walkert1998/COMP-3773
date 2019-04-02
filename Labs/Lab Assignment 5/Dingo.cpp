#include "Dingo.h"
#include <iostream>
using namespace std;

void Dingo::Eat(Herbivore * h)
{
	// Eat Rabbit 
	cout << "Dingo eats " << h->Name() << endl;
}
