#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player {
    private:
    std::string name;
    int health;
    int damage;
    public:
    Player();
    Player(std::string sub_name, int sub_health, int sub_damage);
    void setName(std::string sub_name);
    void setHealth(int sub_health);
    void setDamage(int sub_damage);
    std::string getName();
    int getHealth();
    int getDamage();
    void attack(Player *opponent, int damage);
    void takeDamage(int damage);
};


#endif