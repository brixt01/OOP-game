#ifndef Fight_cpp
#define Fight_cpp

#include "Character.h"

using namespace std;

class Fight{

private:
    Character player;
    Character enemy;

public:
    bool running;

    Fight(Character& player, Character& enemy);
    
    void start();
    void progress();

    int choice();

};

#endif