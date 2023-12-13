#ifndef SQUIRTLE
#define SQUIRTLE

#include <string>
#include <vector>
#include "Pokemon.h"
using namespace std;

class Squirtle : public Pokemon {
    public:
        // Contructors
        Squirtle();
        Squirtle(string name, int hp, int att, int def, vector<string> t);
        // Mutator Functions
        void speak();
        void printStats();
    private:
        vector<string> skills;
};
#endif