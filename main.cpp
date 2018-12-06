#include "level.cpp"
#include "wizard.h"
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
    cout << "\n\n(1)\nWizard\nWeapon: Staff\n";
    cout << "\n\n(2)\nArcher\nWeapon: Bow and Arrow\n";
    cout << "\n\n(3)\nWarrior\nWeapon: Shield and Sword\n";
	//Create Wizard = myWizard wizard("God",100,20,0,0,100);
	cin >> userInput;
	for(int i = 1; i <= 5; i++){
	switch(userInput){
        case 1:
            player player1("God",100,100,30,20,0,0,1);
            //health,energy,attack,defense -Player
            //health,attack,defense - Monster
            if(player1.progression == 1)
            {
                level1(player1,monster("Shia",100,20,12));
            }
            if(player1.progression = 2)
            {
                level2(player1,monster("Shia",100,20,12));
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
