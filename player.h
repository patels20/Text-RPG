#include <string>
#include <iostream>
#include <random>
#ifndef PLAYER_H
#define PLAYER_H
#define INVENT_SIZE 10

using namespace std;

class player
{
    private:
        string name;
        int health;
        int magicLevel;
        int speed;
        int attack;
        int experience;
        int cash;
        int energy;
        string inventory[INVENT_SIZE];
    public:
       player(){}  //constructor
       ~player(); // destructor
        string setName(nameVar)
        {
            name = nameVar;
        }
        int setHealth(healthVar)
        {
            health = healthVar;
        }
        int setmageLevel(magic)
        {
            magicLevel = magic;
        }
        int setmovement(moveSpeed)
        {
            speed = moveSpeed;
        }
        int setAttack(attVar)
        {
            attack = attVar;
        }
        int setExperience(exp)
        {
            experience = exp;
        }
        int setEnergy(egy)
        {
            energy = egy;
        }
        int setCash(wallet)
        {
            cash = wallet;
        }

};


#endif // PLAYER_H
