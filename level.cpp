#include "level.h"
#include "player.h"
#include "monster.h"
#include "fight.h"
#include <stdlib.h>
#include <random>

using namespace std;

void level1(player player1, monster mon)
{
    char userInt;
    system("cls");
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    cout << "\t\t\t\t\t\tWelcome To Level 1" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    cout << "You're walking in the woods.  There's no one around and your phone is dead.  Out of the corner of your eye, you spot him";
    cout << "It's SHIA LEBEOUF!";
    cout << "He looks into your eyes, you can see theres blood on your face.  My God, theres blood everywhere!" << endl;
    cout << "The choice is yours. Do you run or fight? "<< endl;
    cout << "Which direction would you want to take? (Enter either R,r,L,l)" << endl;
    cin >> userInt;
    system("cls");

    switch(userInt)
    {
        case 'R':
        case 'r':
            fight(player1,mon);


        break;
        case 'L':
        case 'l':
            cout << "You've Advanced to Level 2" << endl;
            player1.progression+=1;
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
    }
}
void level2(player player1, monster mon)

{

char userInt;
    system("cls");
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    cout << "\t\t\t\t\t\tWelcome To Level 2" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    cout << "You have beaten Shia Lebeouf and are trying to find your way out of the woods. Shia dropped $30 and it is now yours";
    cout << "You start to find your way out of the woods when to your surprise you see a car. As you slowly approach the car the homeless man who owns it sees you." << endl;
	cout << "He point his knife at you and asks you for all your hard earned cash";
    cout << "The choice is yours. Do you give him your money or fight for your life? "<< endl;
    cout << "Type 1 to hand over your money or 2 to fight the homeless man. " << endl;
    cin >> userInt;
    system("cls");
    switch(userInt)
    {
        case '2':
            fight(player1,mon);

        break;
        case '1':
            cout << "You've Advanced to Level 3" << endl;
            player1.progression+=1;
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
    }
}
