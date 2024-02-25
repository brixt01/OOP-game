#ifndef FIGHT_H
#define FIGHT_H

#include "Character.h"

using namespace std;

class Fight{

private:
    Player& player;
    Character& enemy;

    bool running = true;
    vector<Item> drops;

    int choice();
    void progress();
    
    void win();
    void lose();
    void run();

public:

    Fight(Player& player, Character& enemy, vector<Item>& item_drops);

    void start();

};

#endif