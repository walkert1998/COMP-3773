// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#include "Tiger.h"

#include <iostream>
using namespace std;

// "ProductB3" 

void Tiger::Eat(Herbivore* h)
{
  // Eat Cebu 
  cout << "Tiger eats " << h->Name() << endl;
}

