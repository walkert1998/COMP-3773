// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#include "Wolf.h"

#include <iostream>
using namespace std;

// "ProductB2" 

void Wolf::Eat(Herbivore* h)
{
  // Eat Bison 
  cout << "Wolf eats " << h->Name() << endl;
}

