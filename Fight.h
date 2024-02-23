#ifndef Fight_cpp
#define Fight_cpp

#include "Character.h"

using namespace std;

class Fight{

private:
    Player player;
    Character enemy;

    bool running;
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