// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#ifndef TIGER_H
#define TIGER_H

#include "Carnivore.h"

// "ProductB3" 

class Tiger : public Carnivore
{
  virtual void Eat(Herbivore* h);
};

#endif
