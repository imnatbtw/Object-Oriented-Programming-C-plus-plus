#include <iostream>
#include <stdio.h>
#include "Squirtle.h"

/**
 * @brief Construct a new Squirtle:: Squirtle object
 * 
 */
Squirtle::Squirtle() : Pokemon() {
    type.push_back("Water");
    skills.push_back("Torrent");
    skills.push_back("Raindish");

    cout << "Default Constructor (Squirtle)\n";
}

/**
 * @brief Construct a new Squirtle:: Squirtle object
 * 
 * @param name 
 * @param hp 
 * @param att 
 * @param def 
 * @param t 
 */
Squirtle::Squirtle(string name, int hp, int att, int def, vector<string> t) : Pokemon(name, hp, att, def , t) {
    type.push_back("Water");
    skills.push_back("Torrent");
    skills.push_back("Raindish");

    cout << "Overloaded Default Constructor (Squirtle)\n";
}

/**
 * @brief says what a squirtle says
 * 
 */
void Squirtle:: speak(){
    cout << "Squirtle-Squirt\n";
}

/**
 * @brief calls printStats from the parent class (Pokemon) and appends the skills used for Squirtle
 * 
 */
void Squirtle::printStats(){
    Pokemon::printStats();
    cout << "Skills: ";
    for(int i = 0; i < skills.size(); i++){
        cout << skills[i] << "\t";
    }
    cout << endl;
}