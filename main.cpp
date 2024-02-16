#include <iostream>

#include "Character.h"
#include "HealthBar.h"
#include "Weapon.h"

using namespace std;

void fight(Character&, Character&);

int main(){
    cout << "Welcome to the game!" << endl;
    cout << endl;

    HealthBar healthbar('_', '#');

    Weapon fists("fists", 1);
    Weapon sword("Sword", 5);

    Character player("Player", 100, healthbar, fists);
    Character enemy("Enemy", 100, healthbar, fists);

    player.displayHealth();
    enemy.displayHealth();
    cout << endl;

    fight(player, enemy);
    fight(player, enemy);
    fight(player, enemy);

    player.equip_weapon(sword);
    cout << endl;

    fight(player, enemy);
    fight(player, enemy);
    fight(player, enemy);
}

void fight(Character& player, Character& enemy){
    player.attack(enemy);
    enemy.attack(player);
    enemy.displayHealth();
    player.displayHealth();
    cout << endl;
}