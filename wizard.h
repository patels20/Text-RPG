#ifndef WIZARD_H
#define WIZARD_H

#include "player.h"


class wizard : public player
{
    private:
        string spellBook[2]
    public:
        wizard()
        {
            //Default Constructor
        }
        wizard(string n, int h,int a, int e, int c, int en)
       {
           //Primary constructor
           setName(n);
           setHealth(h);
           setAttack(a);
           setExperience(e);
           setCash(c);
           setEnergy(en);
        }
        ~wizard()
        {
            //Default Destructor
        }

};

#endif // WIZARD_H
