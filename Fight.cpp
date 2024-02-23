#include "Fight.h"

using namespace std;

Fight::Fight(Player& character_player, Character& character_enemy, vector<Item>& item_drops){
    player = &character_player;
    enemy = &character_enemy;
    running = true;
    drops = item_drops;
}

void Fight::start(){
    cout << player->getName() << " has been attacked by a " << enemy->getName() << ". A fight ensues..." << endl;
    cout << endl;

    while(running){
        progress();
    }
}

void Fight::progress(){

    if(player->getHealth() <= 0){
        lose();
        return;
    }
    else if(enemy->getHealth() <= 0){
        cout << enemy->getName() << " collapsed - they lost the fight" << endl;
        cout << endl;
        win();
        return;
    }

    int choice_val;
    choice_val = choice();

    if(choice_val == 1){
        player->attack(*enemy);
        enemy->attack(*player);
        enemy->displayHealth();
        player->displayHealth();
        cout << endl;
    }

    else if(choice_val == 2){
        player->inventory.displayItems();
    }

    else if(choice_val == 3){
        run();
        return;
    }
}

void Fight::win(){
    running = false;
    cout << player->getName() << " defeated " << enemy->getName() << endl;
    cout << endl;

    cout << enemy->getName() << " dropped:" << endl;
    for(int i=0; i<drops.size(); i++){
        cout << "- " << drops[i].getName() << endl;
        player->inventory.addItem(drops[i]);
    }
    cout << endl;
}

void Fight::lose(){
    running = false;
    cout << player->getName() << " collapsed - they lost the fight" << endl;
    cout << endl;
}

void Fight::run(){
    running = false;
    cout << "You got away" << endl;
    cout << endl;
}

int Fight::choice(){
    cout << "Would you like to:" << endl;
    cout << "1. Attack" << endl;
    cout << "2. Check inventory" << endl;
    cout << "3. Run" << endl;
    int choice;
    cin >> choice;
    cout << endl;
    return choice;
}