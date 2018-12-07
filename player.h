#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <stdlib.h>
#include <random>
#include <windows.h>

#pragma once

using namespace std;

class player
{
    public:
        string name;
        int health;
        int attack;
        int defense;
        int progression;
		int redbull;
        player()
        {
            //Default Constructor;
        }
       player(string n, int h,int a, int d)
       {
           //Primary constructor
           setName(n);
           setHealth(h);
           setAttack(a);
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

};
