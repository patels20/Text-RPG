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
            player1.setLevel(2);
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
    }
}
void level2(player player1, monster mon1, monster mon2)
{



}
