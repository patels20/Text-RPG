#include <iostream>
#include <string>
#include <random>
#include "player.h"
#pragma once

using namespace std;

class level{
    private:
        int level;
        string endDestination;
        int numMonsters;
    public:
        int getLevel(int lvl)
        {
            level = lvl;
        }
        string endDest(string dest)
        {
            endDestination = dest;
        }
        int monsters(int most)
        {
            numMonsters = most;
        }





};
