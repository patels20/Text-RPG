#include <iostream>
#include "player.h"
#include "monster.h"
#include <string>
#include <random>

class level{
    private:
        int levelNum;
        string endDestination;
        int numMonsters;
    public:
        level()
        {
            //Default Constructor
        }
        level(int l, int eD, int nM)
        {
            setLevel(l);
            setendDest(eD);
            setnumMon(nM);
        }
        ~level()
        {
            //Destructor
        }
        int setLevel(int lvl)
        {
            levelNum = lvl;
        }
        string setendDest(string dest)
        {
            endDestination = dest;
        }
        int setnumMon(int most)
        {
            numMonsters = most;
        }
        void getLevel()
        {
            cout << level << endl;
        }
        void getendDest()
        {
            cout << endDestination << endl;
        }

};
