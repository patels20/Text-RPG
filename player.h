#include <string>
#include <iostream>
#include <random>
#pragma once

#define INVENT_SIZE 10

using namespace std;

class player
{

    public:
        string name;
        int health;
        int attack;
        int experience;
        int cash;
        int energy;
        int curLevel;

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
      // ~player(); // destructor
      int setLevel(int curLvl)
      {
          curLevel = curLvl;
      }
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
            cout << name << endl;
        }
        void getHealth()
        {
            cout << health << endl;
        }
        void getAttack()
        {
            cout << attack << endl;
        }
        void getExp()
        {
            cout << experience << endl;
        }
        void getCash()
        {
            cout << cash << endl;
        }
        void getEnergy()
        {
            cout << energy << endl;
        }
};
