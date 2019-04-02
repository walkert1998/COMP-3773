// Abstract Factory pattern -- Real World example  
// Based on C# code at http://dofactory.com/Patterns/PatternAbstract.aspx
// Translated to C++ by Mark Young, Fall 2007

#include <iostream>
#include <string>
#include "Herbivore.h"
#include "Carnivore.h"
#include "ContinentFactory.h"
#include <fstream>
#define CONFIG_FILE "AnimalWorld-Config.txt"
using namespace std;

// "Client" 

class AnimalWorld
{
  private:
    Herbivore* herbivore;
    Carnivore* carnivore;

    // Constructor 
  public:
    AnimalWorld(ContinentFactory* factory)
    {
      carnivore = factory->CreateCarnivore();
      herbivore = factory->CreateHerbivore();
    }

    void RunFoodChain()
    {
      carnivore->Eat(herbivore);
    }
};


// MainApp test application 

int main()
{
    // Create and run the Africa animal world 
    cout << "\n\nCreating and running an African World\n\n";
    ContinentFactory* africa = ContinentFactory::getContinent("Africa");
    AnimalWorld* world = new AnimalWorld(africa);
    world->RunFoodChain();

    // Create and run the America animal world 
    cout << "\n\nCreating and running an American World\n\n";
    ContinentFactory* america = ContinentFactory::getContinent("America");
    world = new AnimalWorld(america);
    world->RunFoodChain();

    cout << "\n\nCreating and running World based on a CONFIG file"
         << ": client knows (some) subtypes\n\n";
    string worldType;

    ifstream in(CONFIG_FILE);
    if (!in)
    {
        cerr << "\n\nCould not open config file '"
             << CONFIG_FILE
             << "' for input.  Quitting....";
        cin.ignore(100, '\n');
        return 1;
    }
    in >> worldType;
    
    ContinentFactory* continent;

    // The code below will correctly uses an AsiaFactory, even
    // tho' the client doesn't know about AsiaFactories -- the
    // ContinentFactory does, and that's enuf to get it working.

    cout << "\n\nAnd one more time based on the CONFIG file"
         << ": client doesn't know the subtypes\n\n";
    continent = ContinentFactory::getContinent(worldType);
    world = new AnimalWorld(continent);
    world->RunFoodChain();

    // Wait for user input 
    cout << "\n\nPress ENTER key to finish...";
    cin.ignore(100, '\n');

    return 0;
}
