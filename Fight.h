#ifndef Fight_cpp
#define Fight_cpp

#include "Character.h"

using namespace std;

class Fight{

private:
    Player player;
    Character enemy;

    int choice();
    void start();
    void progress();

public:
    bool running;

    Fight(Player& player, Character& enemy);
    
    void run();

};

#endif