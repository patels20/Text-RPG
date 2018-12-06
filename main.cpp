#include "level.cpp"
#include "player.h"
#include "monster.h"
#include "level.h"
#include <iostream>
#include <string>
#include <random>


using namespace std;

int main()
{
    int userInput = 0;
    cout << "Please pick one of the characters below:";
    cout << "\n\n(1)\nWIZARD\nWeapon: Staff \nHealth: 100 \nAttack: 85 \nExp: 0 \nCash: 0 \nEnergy: 100 \nDefense: 90\n";
    cout << "\n\n(2)\nARCHER\nWeapon: Bow and Arrow\nHealth: 100 \nAttack: 80 \nExp: 0 \nCash: 0 \nEnergy: 100 \nDefense: 75\n";
    cout << "\n\n(3)\nWARRIOR\nWeapon: Shield and Sword\nHealth: 100 \nAttack: 100 \nExp: 0 \nCash: 0 \nEnergy: 100 \nDefense: 90\n";
    //Create Wizard = myWizard wizard("God",100,20,0,0,100);
    cin >> userInput;
    for(int i = 1; i <= 5; i++){
    switch(userInput){
        case 1:
            player player1("God",100,100,30,10,0,0);
            //health,energy,attack,defense -Player
            //health,attack,defense - Monster
            if(player1.progression = 1)
            {
                level1(player1,monster("Shia",100,20,12));
            }
            if(player1.progression = 2)
            {
                level2(player1,monster("Shia",100,20,12));
            }
             if(player1.progression = 3)
            {
                level3(player1,monster("Shia",100,20,12));
            }
             if(player1.progression = 4)
            {
                level4(player1,monster("Shia",100,20,12));
            }
            break;
      /*  case 2:
            cout << "Nothing" << endl;
            break;
        case 3:
            cout << "Warrior" << endl;
            break;

        default:
            cout << " ok" << endl;
            */
    }
    }
    return 0;

}
