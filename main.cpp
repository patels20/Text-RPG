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

	switch(userInput){
        case 1:
            //health,energy,attack,defense -Player
            //health,attack,defense - Monster
            level1(player("God",100,100,30,20,0,0,0),monster("Shia",100,20,30,0);
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
    return 0;

}
