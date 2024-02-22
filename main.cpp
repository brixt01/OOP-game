// Required modules
#include <iostream>

// Header files
#include "Character.h"
#include "HealthBar.h"
#include "Weapon.h"
#include "Inventory.h"
#include "Fight.h"

using namespace std;        // Namespace

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

// Fights
Fight fight1(player, goblin);
Fight fight2(player, armed_goblin);
Fight fight3(player, knight);

int main(){

    // Welcome message
    cout << "Welcome to the game!" << endl;
    cout << endl;
    
    // Vector of fights
    vector<Fight> fights{fight1, fight2, fight3};

    // Go through every fight
    for(int i=0; i<fights.size(); i++){
        fights[i].start();
        while(fights[i].running){
            fights[i].progress();
        }
    }
}