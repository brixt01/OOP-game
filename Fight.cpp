#include "Fight.h"

using namespace std;

Fight::Fight(Player& character_player, Character& character_enemy){
    player = character_player;
    enemy = character_enemy;
    running = true;
}

void Fight::start(){
    cout << player.getName() << " has been attacked by a " << enemy.getName() << ". A fight ensues..." << endl;
    cout << endl;
}

void Fight::progress(){

    if(player.getHealth() <= 0){
        cout << player.getName() << " collapsed - they lost the fight" << endl;
        cout << endl;
        running = false;
        return;
    }
    else if(enemy.getHealth() <= 0){
        cout << enemy.getName() << " collapsed - they lost the fight" << endl;
        cout << endl;
        running = false;
        return;
    }

    int choice_val;
    choice_val = choice();

    if(choice_val == 1){
        player.attack(enemy);
        enemy.attack(player);
        enemy.displayHealth();
        player.displayHealth();
        cout << endl;
    }

    else if(choice_val == 2){
        player.inventory.displayItems();
    }

    else if(choice_val == 3){
        cout << "You got away" << endl;
        cout << endl;
        running = false;
        return;
    }
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