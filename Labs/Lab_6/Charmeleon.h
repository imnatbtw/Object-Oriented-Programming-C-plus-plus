#ifndef CHARMELEON
#define CHARMELEON

#include <string>
#include <vector>
#include "Pokemon.h"
using namespace std;

class Charmeleon : public Charmander {
    public:
        // Contructors
        Charmeleon();
        Charmeleon(string name, int hp, int att, int def, vector<string> t);
        // Mutator Functions
        void speak();
        void printStats();
    private:
        vector<string> skills;
};
#endif