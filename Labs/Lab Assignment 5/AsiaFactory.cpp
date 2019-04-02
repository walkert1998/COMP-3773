// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#include "AsiaFactory.h"
#include "Cebu.h"
#include "Tiger.h"

// "ConcreteFactory3" 

Herbivore* AsiaFactory::CreateHerbivore()
{
  return new Cebu;
}

Carnivore* AsiaFactory::CreateCarnivore()
{
  return new Tiger;
}

