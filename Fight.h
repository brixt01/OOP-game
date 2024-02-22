#ifndef Fight_cpp
#define Fight_cpp

#include "Character.h"

using namespace std;

class Fight{

private:
    Player player;
    Character enemy;

public:
    bool running;

    Fight(Player& player, Character& enemy);
    
    void start();
    void progress();

    int choice();

};

#endif