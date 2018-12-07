#include "player.h"

class wizard :public player
{
    public:
        string weaponType;

        wizard()
        {
            //Default Constructor
        }
        wizard(string n, int h,int a, int d)
       {
           //Primary constructor
           setName(n);
           setHealth(h);
           setAttack(a);
           setDefense(d);
           setProg(1);
           setWeaponType("Staff");

        }
        void setWeaponType(string wep)
        {
            weaponType = wep;
        }
        void getWeaponType(string type)
        {

        }


};
