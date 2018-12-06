#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <stdlib.h>
#include <random>
#include <windows.h>

#pragma once

#define INVENT_SIZE 5

using namespace std;

class player
{
    public:
        string name;
        int health;
        int energy;
        int attack;
        int defense;
        int cash;
        int progression;

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
           setCash(c);
           setDefense(d);
           setProg(1);

        }
      // ~player(); // destructor
      void setProg(int pro)
      {
          progression = pro;
      }
      int getProg()
      {
          return progression;
      }
      void setDefense(int def)
      {
          defense = def;
      }
      int getDefense()
      {
          return defense;
      }
      void setName(string nameVar)
      {
          name = nameVar;
      }
      void setHealth(int healthVar)
      {
          health = healthVar;
      }
      void setAttack(int attVar)
      {
        attack = attVar;
      }
    void setCash(int wallet)
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

};
