// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#include "Lion.h"

#include <iostream>
using namespace std;

// "ProductB1" 

void Lion::Eat(Herbivore* h)
{
  // Eat Wildebeest 
  cout << "Lion eats " << h->Name() << endl;
}

