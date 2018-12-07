#include "player.h"

class warrior:public player
{
    public:
        string weaponType;

        warrior()
        {
            //Default Constructor
        }
        warrior(string n, int h,int a, int d)
       {
           //Primary constructor
           setName(n);
           setHealth(h);
           setAttack(a);
           setDefense(d);
           setProg(1);
           setWeaponType("Sword and Shield");

        }
        void setWeaponType(string wep)
        {
            weaponType = wep;
        }
        void getWeaponType(string type)
        {

        }


};
