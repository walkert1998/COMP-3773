// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#ifndef CONTINENT_FACTORY_H
#define CONTINENT_FACTORY_H

#include "Herbivore.h"
#include "Carnivore.h"
#include <string>
using std::string;

// "AbstractFactory" 

class ContinentFactory
{
  public:
    static ContinentFactory* getContinent(const string& name);
    virtual Herbivore* CreateHerbivore() = 0;
    virtual Carnivore* CreateCarnivore() = 0;
};

#endif
