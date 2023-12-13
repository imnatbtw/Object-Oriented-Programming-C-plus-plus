/***
 * CSE 2010 Fall 2023
 * Lab 6
 * Nathalie Duran 007664638
 * 26 November 2023
 *
 * This lab will show how to derive a class from a base class, where functions and variables are able to be passed
 * down into them. It will also show how virtual and overloaded functions are applied.
 * Finally, this lab will have UML diagrams that connect classes to visualize the functions and variables.
 *
 * The most challenging part was section 7 number 2 and getting it re-compile. I overcame this problem by putting back
 * virtual to virtual void (speak) on Pokemon.h and running it again. After this, I removed it and recomplied by linking 
 * all object files.
 *
***/

#include <iostream>
#include "Charmander.h"
#include "Squirtle.h"
using namespace std;

int main()
{  
    // Charmander first = Charmander();
    vector<string> pokemonType;
    pokemonType.push_back("Fire");

    cout << "-------Constructor Created---------\n";
    Charmander charlie = Charmander("Charlie", 100, 4, 4, pokemonType);

    // Charmander
    cout << "\n-------Direct Speak---------\n";
    charlie.speak();
    
    // Pokemon pointer to Charmander
    Pokemon * p1 = &charlie ;
    cout << "\n------- Speak called from Pokemon Pointer---------\n";
    (*p1).speak();

    // Charmander pointer to Charmander
    Charmander * c1 = &charlie ;
    cout << "\n------- Speak called from Charmander Pointer---------\n";
    (*c1).speak();

    // Charmander
    cout << "\n------- Print Stats---------\n";
    charlie.printStats();


    // Squirtle first = Squirtle();
    pokemonType.push_back("Water");

    cout << "------- Squirtle Constructor Created---------\n";
    Squirtle squirty = Squirtle("Squirty", 44, 48, 64, pokemonType);

    // Squirtle
    cout << "\n-------Direct Speak---------\n";
    squirty.speak();
    
    // Pokemon pointer to Squirtle
    Pokemon * p2 = &squirty ;
    cout << "\n------- Speak called from Pokemon Pointer---------\n";
    (*p2).speak();

    // Squirtle pointer to Squirtle
    Squirtle * c2 = &squirty ;
    cout << "\n------- Speak called from Squirtle Pointer---------\n";
    (*c2).speak();

    //  Squirtle
    cout << "\n------- Print Stats---------\n";
    squirty.printStats();

}

