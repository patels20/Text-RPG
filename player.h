#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#pragma once

#define INVENT_SIZE 10

using namespace std;

class player
{

    public:
        string name;
        int health;
        int energy;
        int attack;
        int defense;
        int experience;
        int cash;
        int curLevel;

        player()
        {
            //Default Constructor;
        }
       player(string n, int h,int en, int a, int d, int e,int c)
       {
           //Primary constructor
           setName(n);
           setHealth(h);
           setAttack(a);
           setExperience(e);
           setCash(c);
           setEnergy(en);
           setDefense(d);
        }
      // ~player(); // destructor
      int setDefense(int def)
      {
          defense = def;
      }
      int getDefense()
      {
          return defense;
      }
      int setLevel(int curLvl)
      {
          curLevel = curLvl;
      }
      int getLevel( )
      {
          return curLevel;
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
    string getName()
    {
        return name;
    }
    int getHealth()
    {
        return health;
    }
    int getAttack()
    {
        return attack;
    }
    int getExp()
    {
        return experience;
    }
    int getCash()
    {
        return cash;
    }
    int getEnergy()
    {
        return energy;
    }
};
