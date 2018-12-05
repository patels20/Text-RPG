#include "level.h"
#include "player.h"
#include "monster.h"
#include <stdlib.h>
#include <random>

int randomFight = (rand() %50) +20;

void level1(string userInt, monster& mon,)
{
    cout << "------------------------------ " << endl;
    cout << "\t\t\tWelcome To Level 1" << endl:
    cout << "------------------------------" << endl;
    cout << "Which direction would you want to take?" << endl;
    cin >> userInt;
    system("cls");
    switch(userInt)
    {
        case "Right":
        case "right":
            cout << "You've initiated to fight" << monster.getName() << endl;
            
        case "Left":
        case "left":
            cout << "You've Encountered " << monster.getName() << endl;
            cout << ""


    }


}
