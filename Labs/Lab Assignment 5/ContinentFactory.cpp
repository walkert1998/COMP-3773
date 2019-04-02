// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#include "ContinentFactory.h"
#include "AfricaFactory.h"
#include "AmericaFactory.h"
#include "AsiaFactory.h"
#include "AustraliaFactory.h"

ContinentFactory* ContinentFactory::getContinent(const string& name)
{
  if (name == "Africa")
    return new AfricaFactory();
  else if (name == "Asia")
    return new AsiaFactory();
  else if (name == "Australia")
	  return new AustraliaFactory();
  return new AmericaFactory();
}

