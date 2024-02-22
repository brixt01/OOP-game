// Required modules
#include <iostream>

// Header files
#include "Character.h"
#include "HealthBar.h"
#include "Weapon.h"
#include "Inventory.h"
#include "Fight.h"

using namespace std;        // Namespace

void fight(Character&, Character&);     // Each character attacks the other, and both health bars are displayed

int main(){

    // Welcome message
    cout << "Welcome to the game!" << endl;
    cout << endl;

    // Healthbars
    HealthBar player_healthbar('_', '#');
    HealthBar enemy_healthbar('_', '@');

    // Weapons
    Weapon fists("fists", 1);
    Weapon sword("sword", 5);
    Weapon club("club", 3);
    Weapon axe("axe", 6);

    // Characters
    Player player("Player", 100, player_healthbar, fists);
    Character goblin("Goblin", 50, enemy_healthbar, fists);
    Character armed_goblin("Armed Goblin", 70, enemy_healthbar, club);
    Character knight("Knight", 100, enemy_healthbar, sword);

    // FIGHT 1
    Fight fight1(player, goblin);
    fight1.start();
    while(fight1.running){
        fight1.progress();
    }

    // FIGHT 2
    Fight fight2(player, armed_goblin);
    fight2.start();
    while(fight2.running){
        fight2.progress();
    }

    // FIGHT 3
    Fight fight3(player, knight);
    fight3.start();
    while(fight3.running){
        fight3.progress();
    }
}