#include "Fight.h"

using namespace std;

Fight::Fight(Character& character_player, Character& character_enemy){
    player = character_player;
    enemy = character_enemy;
    running = true;
}

void Fight::start(){
    cout << player.getName() << " has been attacked by a " << enemy.getName() << ". A fight ensues..." << endl;
    cout << endl;
}

void Fight::progress(){
    player.attack(enemy);
    enemy.attack(player);
    enemy.displayHealth();
    player.displayHealth();
    cout << endl;

    if(player.getHealth() <= 0 || enemy.getHealth() <= 0){
        end();
        running = false;
    }
}

void Fight::end(){
    if(player.getHealth() <= 0){
        cout << player.getName() << " collapsed - they lost the fight" << endl;
    }
    else{
        cout << enemy.getName() << " collapsed - they lost the fight" << endl;
    }
    cout << endl;
}