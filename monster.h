#include <iostream>
#include <string>
#include <random>
#include "player.h"
#include "level.h"
#pragma once

using namespace std;

class monster
{
    public:
        string name;
        int health;
        int attack;
        int defense;
        int level;


        monster()
        {
            //Default Constructor
        }
        monster(string n, int h, int a, int d)
        {
            //Primary Constructor
            setName(n);
            setHealth(h);
            setAttack(a);
            setDefense(d);
        }
        ~monster()
        {
            //Default Destructor
        }
        int setDefense(int def)
        {
            defense = def;
        }
        string setName(string na)
        {
            name = na;
        }
        int setHealth(int hea)
        {
            health = hea;
        }
        int setAttack(int att)
        {
            attack = att;
        }
        int setLevel(int levl)
        {
            level =levl;
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
        int getDefense()
        {
            return defense;
        }
        int getLevel()
        {
            return level;
        }

};
