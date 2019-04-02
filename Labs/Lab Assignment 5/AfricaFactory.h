// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#ifndef AFRICA_FACTORY_H
#define AFRICA_FACTORY_H

#include "ContinentFactory.h"

// "ConcreteFactory1" 

class AfricaFactory : public ContinentFactory
{
  public:
    virtual Herbivore* CreateHerbivore();
    virtual Carnivore* CreateCarnivore();
};

#endif
