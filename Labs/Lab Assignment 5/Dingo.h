

#ifndef DINGO_H
#define DINGO_H

#include "Carnivore.h"

class Dingo : public Carnivore
{
	virtual void Eat(Herbivore* h);
};

#endif
