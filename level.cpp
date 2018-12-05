#include "level.h"
#include "player.h"
#include "monster.h"
#include <stdlib.h>
#include <random>

int randomFight = (rand() %50) +20;
int userfightInt = 0;
void level1(string userInt, monster& mon,)
{
    cout << "You're walking in the woods.  There's no one around and your phone is dead.  Out of the corner of your eye, you spot him:" << endl;
    cout << "SHIA LEBEOUF" << endl:
    cout << "He looks into your eyes, you can see theres blood on your face.  My God, theres blood everywhere!" << endl;
    cout << "Do you run or fight? << endl;
    cin >> userInt;
    system("cls");
    switch(userInt)
    {
        case "run":
        case "r":
        case "Run":
        case "RUN":
            cout << "You've initiated to fight" << monster.getName() << endl;
            do
            {
                cout << "\t\tYou're Turn" << endl;
                cout << "------------------------------ " << endl;
                cout << "\t\t1. Attack \t2.Dodge" << endl;
                cout << "\t\t\t3.Heal" << endl;
                cout << "------------------------------ " << endl;
                cin >> userfightInt;
                switch(userfightInt)
                {
                    case 1:
                        
                }
                
            }
            while(monster.health != 0; || player.health != 0)            
        case "Left":
        case "left":
            cout << "You've Encountered " << monster.getName() << endl;
            cout << ""

    }


}
