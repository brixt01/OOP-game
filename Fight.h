#ifndef Fight_cpp
#define Fight_cpp

#include "Character.h"

using namespace std;

class Fight{

private:
    Player player;
    Character enemy;

    bool running;

    int choice();
    void start();
    void progress();

public:

    Fight(Player& player, Character& enemy);

    void run();

};

#endif