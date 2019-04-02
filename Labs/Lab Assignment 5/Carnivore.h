// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#ifndef CARNIVORE_H
#define CARNIVORE_H

#include "Carnivore.h"
#include "Herbivore.h"

// "AbstractProductB" 

class Carnivore
{
  public:
    virtual void Eat(Herbivore* h) = 0;
};

#endif
