// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#include "AmericaFactory.h"
#include "Bison.h"
#include "Wolf.h"

// "ConcreteFactory2" 


Herbivore* AmericaFactory::CreateHerbivore()
{
  return new Bison;
}

Carnivore* AmericaFactory::CreateCarnivore()
{
  return new Wolf;
}

