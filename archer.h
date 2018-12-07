#include "player.h"

class archer:public player
{
    public:
        string weaponType;
        archer()
        {
            //Default Constructor
        }
        archer(string n, int h,int a, int d)
       {
           //Primary constructor
           setName(n);
           setHealth(h);
           setAttack(a);
           setDefense(d);
           setProg(1);
           setWeaponType("Bow and Arrow");

        }
        void setWeaponType(string wep)
        {
            weaponType = wep;
        }
        void getWeaponType(string type)
        {

        }



};
