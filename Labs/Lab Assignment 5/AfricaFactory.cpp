// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#include "AfricaFactory.h"
#include "Wildebeest.h"
#include "Lion.h"

// "ConcreteFactory1" 

Herbivore* AfricaFactory::CreateHerbivore()
{
  return new Wildebeest;
}

Carnivore* AfricaFactory::CreateCarnivore()
{
  return new Lion;
}

