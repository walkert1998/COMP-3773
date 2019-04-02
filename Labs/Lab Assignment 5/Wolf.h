// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#ifndef WOLF_H
#define WOLF_H

#include "Carnivore.h"

// "ProductB2" 

class Wolf : public Carnivore
{
  virtual void Eat(Herbivore* h);
};

#endif
