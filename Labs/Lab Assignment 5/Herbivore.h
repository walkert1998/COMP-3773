// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#ifndef HERBIVORE_H
#define HERBIVORE_H

#include <string>
using std::string;

// "AbstractProductA" 

class Herbivore
{
  private:
    string name;
  public:
    Herbivore(const string& s);

    string Name() const;
};

#endif
