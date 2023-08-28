#include <iostream>
#include "player.h"
#include <string>



Player::Player(std::string sub_name, int sub_health, int sub_damage) {
    name = sub_name;
    health = sub_health;
    damage = sub_damage;
}

void Player::setName(std::string sub_name) {
    name = sub_name;
}

void Player::setHealth(int sub_health) {
    health  = sub_health;
}

void Player::setDamage(int sub_damage) {
    damage = sub_damage;
}

std::string Player::getName() {
    return name;
}

int Player::getHealth() {
    return health;
}

int Player::getDamage() {
    return damage;
}

Player::Player():Player("", 0, 0) {

}

void Player::attack(Player *opponent, int damage) {
    opponent->health = opponent->health - damage;
}

void Player::takeDamage(int damage) {
    health -= damage;
}




