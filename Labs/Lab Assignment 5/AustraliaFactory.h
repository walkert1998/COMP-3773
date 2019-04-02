#ifndef AUSTRALIA_FACTORY_H
#define AUSTRALIA_FACTORY_H

#include "ContinentFactory.h"

// "ConcreteFactory3" 

class AustraliaFactory : public ContinentFactory
{
public:
	virtual Herbivore* CreateHerbivore();
	virtual Carnivore* CreateCarnivore();
};

#endif