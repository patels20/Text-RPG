#include <iostream>
#include <string>
#include <random>
#include "player.h"
#include "level.h"
#pragma once

using namespace std;

class monster
{
    private:
        string name;
        int health;
        int attack;
        int level;
    public:
        monster()
        {
            //Default Constructor
        }
        monster(string n, int h, int a, int l)
        {
            //Primary Constructor
            setName(n);
            setHealth(h);
            setAttack(a);
            setLevel(l);
        }
        ~monster()
        {
            //Default Destructor
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
        void getLevel()
        {
            cout << level << endl;
        }


};
