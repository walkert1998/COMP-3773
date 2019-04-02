// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#include "Herbivore.h"

// "AbstractProductA" 

Herbivore::Herbivore(const string& s) : name(s) {}

string Herbivore::Name() const
{
  return name;
}

