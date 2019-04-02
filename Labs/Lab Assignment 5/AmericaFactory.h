// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#ifndef AMERICA_FACTORY_H
#define AMERICA_FACTORY_H

#include "ContinentFactory.h"

// "ConcreteFactory2" 

class AmericaFactory : public ContinentFactory
{
  public:
    virtual Herbivore* CreateHerbivore();
    virtual Carnivore* CreateCarnivore();
};

#endif
