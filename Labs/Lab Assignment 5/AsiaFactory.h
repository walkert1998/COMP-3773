// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#ifndef ASIA_FACTORY_H
#define ASIA_FACTORY_H

#include "ContinentFactory.h"

// "ConcreteFactory3" 

class AsiaFactory : public ContinentFactory
{
  public:
    virtual Herbivore* CreateHerbivore();
    virtual Carnivore* CreateCarnivore();
};
 
#endif
