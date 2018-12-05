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
        int attack;
        int experience;
        int cash;
        int energy;
    public:
        player()
        {
            //Default Constructor;
        }
       player(string n, int h,int a, int e, int c, int en)
       {
           //Primary constructor
           setName(n);
           setHealth(h);
           setAttack(a);
           setExperience(e);
           setCash(c);
           setEnergy(en);
        }
       ~player(); // destructor
        string setName(string nameVar)
        {
            name = nameVar;
        }
        int setHealth(int healthVar)
        {
            health = healthVar;
        }
        int setAttack(int attVar)
        {
            attack = attVar;
        }
        int setExperience(int exp)
        {
            experience = exp;
        }
        int setEnergy(int egy)
        {
            energy = egy;
        }
        int setCash(int wallet)
        {
            cash = wallet;
        }
        void getName()
        {
            cout << name;
        }

};

#endif // PLAYER_H
